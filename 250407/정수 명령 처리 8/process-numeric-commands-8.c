#include <stdio.h>
#include <string.h>

int n;
char command[20];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push_front") == 0 || strcmp(command, "push_back") == 0) {
            int x;
            scanf("%d", &x);
        }
    }
    // Please write your code here.
    return 0;
}