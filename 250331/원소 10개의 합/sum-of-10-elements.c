#include <stdio.h>

int main() {
    // Please write your code here.
    int sum=0, arr[10];

    for(int i=0;i<10;i++) {
        scanf("%d ",&arr[i]);
    }

    for(int i=0;i<10;i++) {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}