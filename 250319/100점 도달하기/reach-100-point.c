#include <stdio.h>

int main() {
    // Please write your code here.
    int score;

    scanf("%d",&score);

    for(int i=score;i<=100;i++) {
        if(i>=90) {
            printf("A ");
        }
        else if (i>=80) {
            printf("B ");
        }
        else if(i>=70) {
            printf("C ");
        }
        else if(i>=60) {
            printf("D ");
        } 
        else {
            printf("F ");
        }
    }
    return 0;
}