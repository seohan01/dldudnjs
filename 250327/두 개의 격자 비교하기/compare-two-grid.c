#include <stdio.h>

int main() {
    int arr1[10][10], arr2[10][10], arr3[10][10];
    int N, M;

    scanf("%d %d", &N, &M);   // N이 가로(열), M이 세로(행)

    // 첫 번째 격자 입력
    for(int j = 0; j < M; j++) {
        for(int i = 0; i < N; i++) {
            scanf("%d", &arr1[j][i]);  // 주소값으로 입력받음
        }
    }

    // 두 번째 격자 입력
    for(int j = 0; j < M; j++) {
        for(int i = 0; i < N; i++) {
            scanf("%d", &arr2[j][i]);  // 주소값으로 입력받음
        }
    }

    // 새로운 격자 생성
    for(int j = 0; j < M; j++) {
        for(int i = 0; i < N; i++) {
            if(arr1[j][i] == arr2[j][i]) {
                arr3[j][i] = 0;
            } else {
                arr3[j][i] = 1;
            }
        }
    }

    // 결과 출력
    for(int j = 0; j < M; j++) {
        for(int i = 0; i < N; i++) {
            printf("%d ", arr3[j][i]);  // 올바른 배열 접근
        }
        printf("\n");
    }

    return 0;
}