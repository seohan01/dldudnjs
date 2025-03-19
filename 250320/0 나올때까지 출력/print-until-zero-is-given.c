#include <stdio.h>

int main() {

    int arr[100];
    int num,count=0;

    while(1) {
        scanf("%d\n",&num);
        
        if(num==0) break;

        arr[count] = num;
        count++;

    }

    for(int i=0;i<count;i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}