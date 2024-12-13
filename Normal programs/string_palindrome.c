#include <stdio.h>
#include <string.h>

int Palindrome(char* S) {
    char rev[100];
    strcpy(rev,S);
    strrev(rev); 
    return strcmp(S,rev) == 0;
}

int main() {
    char S[100];
    printf("Enter a string: ");
    gets(S);
    if(Palindrome(S))
        printf("Given string is a palindrome.\n");
    else
        printf("Given string is not a palindrome.\n");
    return 0;
}