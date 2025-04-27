#include <stdio.h>

#define MAX_N 100000

int n;
int arr[MAX_N];

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void QuickSort(int low, int high) {
    if (low < high) {
        int pos = Partition(low, high);
        QuickSort(low, pos - 1);
        QuickSort(pos + 1, high);
    }
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    QuickSort(0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
