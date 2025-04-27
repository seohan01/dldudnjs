#include <stdio.h>

void view(int *, int); 

int main() {
    int score[100] = {0};
    int i, j, n;
    int key;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {      // n 입력받음
        scanf("%d", &score[i]);
    }
     
    for (i = 0; i < n - 1; i++) {
        key = score[i + 1];
        for (j = i; j > -1; j--) {
            if (score[j] > key) {
                score[j + 1] = score[j];
            } else {
                break;
            }
        }
        score[j + 1] = key;
    }
   
    view(score, n); 
}

void view(int *arr_view, int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr_view[i]);
    }
    printf("\n");
}
