#include <stdio.h>

int main() {
    // Please write your code here.
    int start, end,final_result=0;

    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++) {   //start부터 ~~ end까지
        // 3    4 5 6   7
        int plus = 0;

    
        for(int j=1;j<=i;j++) {     // 11, 21 22, 31 32 33, 41 42 43 44...
             if(i%j==0) {    
             plus++;           
             }
        }
    
        if(plus==3) {
            final_result++;
        }
        
    }

    printf("%d",final_result);

   
    return 0;
}