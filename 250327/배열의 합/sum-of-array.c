#include <stdio.h>

int main() {
    // Please write your code here.
    int arr1[4][4], arr2[1][4];
    
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d ",&arr1[i][j]);
        }
      
    }

    for(int i=0;i<4;i++) {      //0 1 2 3
        for(int j=0;j<1;j++) {  //0
            arr2[i][j] = arr1[i][0] + arr1[i][1] + arr1[i][2] + arr1[i][3]; 
            printf("%d\n",arr2[i][j]) ;
        }
    }

   

    return 0;
}