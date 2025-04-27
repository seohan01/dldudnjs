#include <stdio.h>

#define MAX_N 100000

int n;
int arr[MAX_N + 1];

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify(int n, int i) {
    int largest = i;
    int l = i * 2;
    int r = i * 2 + 1;

    if (l <= n && arr[l] > arr[largest])
        largest = l;
    
    if (r <= n && arr[r] > arr[largest])
        largest = r;
    
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        Heapify(n, largest);
    }
}

void HeapSort() {
    for (int i = n / 2; i >= 1; i--)
        Heapify(n, i);

    for (int i = n; i > 1; i--) {
        swap(&arr[1], &arr[i]);
        Heapify(i - 1, 1);
    }
}

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    
    HeapSort();

    for (int i = 1; i <= n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
