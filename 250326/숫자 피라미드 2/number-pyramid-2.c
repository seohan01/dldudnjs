#include <stdio.h>

int main() {
    // Please write your code here.
    int N,count=0,num=1;

    scanf("%d",&N);        // N = 4

    for(int i=1;i<=N;i++) { // 1 2 3 4
        for(int j=1;j<=i;j++) { //1 12 123 1234
            printf("%d ",num++);
          
        }
        printf("\n");
    }

    
    return 0;
}