#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[4][4],count=0;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d ",&arr[i][j]);
        }
    }

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(arr[i][j]%5==0) {
                count++;
            }
        }
    }

    printf("%d",count);

    return 0; 
}