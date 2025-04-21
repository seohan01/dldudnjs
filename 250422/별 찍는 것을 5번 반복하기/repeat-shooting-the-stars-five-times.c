#include <stdio.h>

int num() {
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=10;j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Please write your code here.
    int  result = num();
  
    
    return 0;
}