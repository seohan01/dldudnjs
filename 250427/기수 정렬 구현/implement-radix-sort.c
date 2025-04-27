#include <stdio.h>

#define MAX_N 100000
#define MAX_K 6
#define MAX_DIGIT 10

int n;
int arr[MAX_N];

int arr_new[MAX_DIGIT][MAX_N];
int arr_new_size[MAX_DIGIT];

void RadixSort() {
    int p = 1;
    for (int pos = 0; pos < MAX_K; pos++) {
        for (int i = 0; i < MAX_DIGIT; i++) {
            arr_new_size[i] = 0;
        }

        
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / p) % 10;
            arr_new[digit][arr_new_size[digit]++] = arr[i];
        }

        
        int index = 0;
        for (int i = 0; i < MAX_DIGIT; i++) {
            for (int j = 0; j < arr_new_size[i]; j++) {
                arr[index++] = arr_new[i][j];
            }
        }

        p *= 10;
    }
}

int main() {
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    RadixSort();

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
