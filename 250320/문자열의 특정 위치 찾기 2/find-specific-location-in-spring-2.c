#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char ch;
    int count = 0;
    char word1[] = "apple";
    char word2[] = "banana";
    char word3[] = "grape";
    char word4[] = "blueberry";
    char word5[] = "orange";

    scanf("%c",&ch);

    if(word1[2] ==ch || word1[3] ==ch) {
        printf(word1);
        printf("\n");
        count++;
    }

    if(word2[2] ==ch || word2[3] == ch) {
        printf(word2);
        printf("\n");
        count++;
    }

    if(word3[2] == ch || word3[3] == ch) {
        printf(word3);
        printf("\n");
        count++;
    }
    if(word4[2] ==ch || word4 [3] == ch) {
        printf(word4);
        printf("\n");
        count++;
    }
    if(word5[2] ==ch || word5[3] == ch) {
        printf(word5);
        printf("\n");
        count++;
    }
    printf("%d",count);
    


    return 0;
}