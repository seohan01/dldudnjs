#include <stdio.h>

int main() {
    // Please write your code here.

    int arr[3][3];

    scanf("%d %d %d\n",&arr[0][0],&arr[0][1],&arr[0][2]);
    scanf("%d %d %d\n",&arr[1][0],&arr[1][1],&arr[1][2]);
    scanf("%d %d %d\n",&arr[2][0],&arr[2][1],&arr[2][2]);    

    printf("%d %d %d\n",3*arr[0][0],3*arr[0][1],3*arr[0][2]);
    printf("%d %d %d\n",3*arr[1][0],3*arr[1][1],3*arr[1][2]);
    printf("%d %d %d\n",3*arr[2][0],3*arr[2][1],3*arr[2][2]);
    return 0;
}