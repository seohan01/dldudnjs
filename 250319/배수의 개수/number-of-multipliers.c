#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int mul3=0,mul5=0;

    for(int i=0;i<10;i++) {
        scanf("%d\n",&arr[i]);
    }

    for(int j=0;j<10;j++) {
        if(arr[j]%3==0) {
            mul3++;
        } 
        if(arr[j]%5==0) {
            mul5++;
        }
    }
    printf("%d %d",mul3,mul5);
    return 0;
}