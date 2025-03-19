#include <stdio.h>

int main() {
    // Please write your code here.
    int N,count;


    scanf("%d",&N);
    count = 0;

    for(int i=1;i<=100;i++) {
        
        count+=i;
       // printf("i : %d count : %d\n",i,count);    // 1 3 6 

        if(count>=N) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}