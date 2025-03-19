#include <stdio.h>

int main() {
    // Please write your code here.
    int A,B,count=0;

    scanf("%d %d",&A,&B);

    printf("%d ",A);
    while(1) {
        if(A>=B) break;

        if(A%2!=0) {        //짝수
            A=A*2;
            if (A>B) break;
            printf("%d ",A);
        }

        else if(A%2==0) {   //홀수
            A=A+3;
            if (A>B) break;
            printf("%d ",A);
        }
    }
   
    return 0;
}