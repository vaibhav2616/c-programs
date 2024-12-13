#include <stdio.h>
int B_S(int a[], int n, int k) {
  int low = 0, high = n - 1,mid;
  while (low <= high) {
    mid = (low + high) / 2;
      if (k == a[mid]) {
      printf("%d is found at index %d", k, mid);
      break;
    } else if (k < a[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}
int main() {
  int n, i, a[100], k;
  printf("enter size of the array:");
  scanf("%d", &n);
  printf("Enter array elements:");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter element to be searched:");
  scanf("%d", &k);
  B_S(a, n, k);
  return 0;
}