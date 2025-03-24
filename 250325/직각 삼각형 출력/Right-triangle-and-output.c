#include <stdio.h>

int main() {
    // Please write your code here.
    int N,num = 1;

    scanf("%d",&N);

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=num;j++) {
            printf("*");
           
        }
        num+=2;
        printf("\n");
    }
    return 0;
}