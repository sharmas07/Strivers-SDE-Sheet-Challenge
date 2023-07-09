#include <bits/stdc++.h>
using namespace std;

int uniqueSubstrings(string input) {
    if (input.length() == 0) return 0;

    int cnt = 0;
    int ind = 0;
    unordered_map<char, int> mp;
    int size = input.length();
    int start = 0;

    while (ind < size) {
        if (mp[input[ind]] > 0) {
            while (start < ind && mp[input[ind]] > 0) {
                mp[input[start]]--;
                start++;
            }
        }

        mp[input[ind]]++;
        cnt = max(cnt, ind - start + 1);
        ind++;
    }

    return cnt;
}