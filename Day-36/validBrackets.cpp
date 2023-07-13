#include<bits/stdc++.h>
bool isValidParenthesis(string str)
{
    stack<char> s;
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if(ch == '(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
          if (!s.empty()) {
            if (ch == ')' && s.top() == '(' || ch == '}' && s.top() == '{' || ch == ']' && s.top() == '['){
                s.pop();
            }
            else{
                return false;
            }
          }
          else{
              return false;
          }
        }
    }
    if(s.empty()) return true;
    else return false;

}