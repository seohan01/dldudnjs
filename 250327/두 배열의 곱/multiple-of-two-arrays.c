#include <stdio.h>

int main() {
    // Please write your code here.
    int arr1[3][3], arr2[3][3];

    for(int i=0;i<3;i++) {
      scanf("%d %d %d\n",&arr1[i][0],&arr1[i][1],&arr1[i][2]);      
    }

   

    for(int i=0;i<3;i++) {
      scanf("%d %d %d\n",&arr2[i][0],&arr2[i][1],&arr2[i][2]);      
    }
  
    for(int j=0;j<3;j++) {
        printf("%d %d %d\n",arr1[j][0]*arr2[j][0], arr1[j][1]*arr2[j][1], arr1[j][2]*arr2[j][2]);
    }
    return 0;
}