#include <stdio.h>

int main() {
    // Please write your code here.
    int A,B,result;
    result = 0; 

    //2 3 4 5
    scanf("%d %d",&A,&B);

    for(int i=A;i<=B;i++) {
        if(i%2==0) {
            result +=i;
        }
    }

    printf("%d",result);
    return 0;
}