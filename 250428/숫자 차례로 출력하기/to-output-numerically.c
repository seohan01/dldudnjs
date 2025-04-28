#include <stdio.h>

void result1(int n) {
    if (n==0) return;

    result1(n-1);   //5 4 3 2 1
    
    printf("%d ",n);
}

void result2(int n) {
    if(n==0) return;

    printf("%d ",n);
    result2(n-1);
}

int main() {
    int n;
    scanf("%d", &n);

    result1(n);
    printf("\n");
    result2(n);
    // Please write your code here.
    return 0;
}