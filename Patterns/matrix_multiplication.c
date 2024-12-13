#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    printf("Enter order of the matrix A:");
    scanf("%d %d",&r1,&c1);
    if(r1!=c1){
        printf("Order of matrix A not nxn\n");
    } else {
        printf("Enter the elements of matrix A:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter order of the matrix B:");
        scanf("%d %d",&r2,&c2);
        if(r2!=c2){
            printf("Order of matrix B not nxn\n");
        } else {
            if(c1!=r2){
                printf("Cannot multiply");
            } else {
                printf("Enter the elements of matrix B:\n");
                for(i=0;i<r2;i++){
                    for(j=0;j<c2;j++){
                        scanf("%d",&b[i][j]);
                    }
                }
                for(i=0;i<r1;i++) {
                    for(j=0;j<c2;j++) {
                        c[i][j] = 0;
                    }
                }
                for(i=0;i<r1;i++){
                    for(j=0;j<c2;j++){
                        for(k=0;k<c1;k++){
                            c[i][j]=c[i][j]+a[i][k]*b[k][j];
                        }
                    }
                }
                printf("resultant matrix:\n");
                for(i=0;i<r1;i++){
                    for(j=0;j<c2;j++){
                        printf("%d\t",c[i][j]);
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}        