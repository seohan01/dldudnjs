#include <stdio.h>

int n,swap;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.
                                //n = 5
    for(int i=1;i<n;i++) {      // 1 2 3 4 
      for(int j=0;j<n-i;j++) {  // 4 3 2 1
        if(arr[j]>arr[j+1]) {
          swap = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = swap;
        }
      }
    }

    for(int i=0;i<n;i++) {
      printf("%d ",arr[i]);
    }
    return 0;
}