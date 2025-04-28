#include <stdio.h>

void print(int n) {
    
    if (n==0) return;

    printf("HelloWorld\n");
    print(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    // Please write your code here.
    
    return 0;
}