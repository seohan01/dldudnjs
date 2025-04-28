#include <stdio.h>

void star(int n) {

    if (n==0) return;
    star(n-1);


    for(int j=1;j<=n;j++) {
        printf("*");
    }
        printf("\n");
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    star(n);

    return 0;
}