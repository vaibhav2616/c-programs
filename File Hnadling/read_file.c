#include<stdio.h>
int main(){
    FILE *ptr = fopen("file_name.txt","r");
    char str[100];
    if(fgets(str,100,ptr)!=NULL){
    printf("%s",str);
    }
    return 0;
}