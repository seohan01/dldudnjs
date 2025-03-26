#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[4][4],total=0;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d ",&arr[i][j]);
        }
    }

    total = arr[0][0] + arr[1][0] + arr[1][1] + arr[2][0] + arr[2][1] + arr[2][2] + arr[3][0] + arr[3][1] + arr[3][2] + arr[3][3];
    printf("%d",total);
    return 0;
}