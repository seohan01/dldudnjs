#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num); // 입력 받기

        if (num == 25) {
            printf("Good\n");
            break; // 정답을 맞추면 루프 종료
        } 

        if (num < 25) {
            printf("Higher\n");
        } else { // num > 25
            printf("Lower\n");
        }
    }

    return 0;
}