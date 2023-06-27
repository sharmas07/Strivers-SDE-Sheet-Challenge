int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    
    int plat_needed = 1, result = 1;
    int i = 1,j = 0;
    
    while(i < n && j < n){
        if(at[i] <= dt[j]){
            plat_needed++;
            i++;
        }
        else if(at[i] > dt[j]){
            plat_needed--;
            j++;
        }
        result = max(result, plat_needed);
    }
    return result;
}