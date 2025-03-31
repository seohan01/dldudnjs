#include <stdio.h>

int main() {
    // Please write your code here.
    int N,  arr[100], result[100];

    scanf("%d",&N);

    for(int i=0;i<N;i++) {
        scanf("%d ",&arr[i]);
    }

    for(int j=N-1;j>=0;j--) {
        if(arr[j]%2==0) {
            printf("%d ",arr[j]);
        }
    }

    

    return 0;
}