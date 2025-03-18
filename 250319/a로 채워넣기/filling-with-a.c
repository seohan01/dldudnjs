#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    
    int len;
    char str[100];

    scanf("%s",&str);
    len = strlen(str);

    str[1] = 'a';
    str[len-2] = 'a';

    printf("%s",str);
    

    return 0;
}