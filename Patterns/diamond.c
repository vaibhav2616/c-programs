#include<stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
   /* for (i=1;i<=n;i++) {
        int spaces=(i<(n+1)/2) ? n-i+1 : i;
        for (j=1;j<=spaces;j++) {
            printf("  ");
        }
        int stars=(i<(n+1)/2) ? 2*i-1 : 2*(n-i+1)-1;
        for (k=1;k<=stars;k++) {
            printf("* ");
        }
        printf("\n");
    
  return 0;
}*/
                                          //OR
    int nsp=(n+1)/2;
    int nst=1;
    int ml=(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ // spaces
            printf("  ");
        }
        for(int k=1;k<=nst;k++){ // stars
            printf("* ");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
            }
        printf("\n");
        }
return 0;
}
/*#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<(n+1)/2){
            for(j=1;j<=n-i+1;j++){
                printf("  ");
            }
            for(k=1;k<=2*i-1;k++){
                printf("* ");
            }
        }
        else{
            for(j=1;j<=i;j++) {
                printf("  ");
            }
            for(k=1;k<=2*(n-i+1)-1;k++){    //2*i-1
                printf("* ");
            }
        }
        printf("\n");
    }
return 0;
}*/