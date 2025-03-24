#include <stdio.h>

int main() {
    // Please write your code here.
    int N,num;

    scanf("%d",&N);

    num = N;
    for(int i=1;i<=N;i++) {
        for(int j=num;j>=1;j--) {      // ***** **** *** ** *
            printf("* ");
        }
       num--;
        printf("\n");
    }
    return 0;
}