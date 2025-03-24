#include <stdio.h>

int main() {
    // Please write your code here.
    int n;

     scanf("%d",&n);

     for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d * %d = %d",i,j,i*j);
              if (j < n) {  // 마지막 요소 뒤에는 쉼표를 출력하지 않음
                printf(", ");
            }
        }
        printf("\n");
     }
    return 0;
}