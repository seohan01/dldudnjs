#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[9][9],count,start = 1;

    scanf("%d",&n);


    count = n;

    for(int i=0;i<n;i++) {
        start = 1;
        count = n;
        for(int j=0;j<n;j++) {  // arr[0][0] arr[0][1] arr[0][2] .....
        if(i%2==0) {    //짝수라면
            arr[i][j] = start++;
        }
        else if (i%2!=0) {    //홀수라면
            arr[i][j] = count--;
        }
    }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
   




    return 0;
}