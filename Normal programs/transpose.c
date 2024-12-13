#include <stdio.h>
int main() {
int i,j,n,m,a[10][10];
  printf("Enter the number of rows and columns: ");
  scanf("%d %d",&n,&m);
  printf("Enter the elements of the matrix: ");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("Given matrix: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      printf("%d\t", a[i][j]);
    printf("\n");
  }
  printf("The transpose of the matrix is: \n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)
      printf("%d\t",a[j][i]);
  printf("\n");
  }
  return 0;
}