#include <stdio.h>
#include <string.h>

int minChar(char* str) {
    char rev[1000];
    strcpy(rev, str);         
    strrev(rev);              
    int size = strlen(str);
    strcat(str, "₹");         
    strcat(str, rev);         
    int n = strlen(str);
    int lps[2000];            
    for (int i = 0; i < n; i++) {
        lps[i] = 0;
    }
    int pre = 0, suf = 1;
    while (suf < n){
        if (str[pre] ==str[suf]){
            lps[suf] =pre+1;
            pre++;
            suf++;
        } 
        else{
            if (pre ==0)
                suf++;
            else
                pre=lps[pre-1];
        }
    }
    return size-lps[n-1];  
}

int main(){
    char str[1000];
    printf("Enter the string: ");
    gets(str);
    int ans = minChar(str);
    printf("Minimum characters to add: %d\n", ans);
    return 0;
}