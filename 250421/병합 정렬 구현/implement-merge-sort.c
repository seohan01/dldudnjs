#include <stdio.h>

int n;
int arr[100000];

void merge(int list[],int low,int mid,int high) {
    int i,j,k,l;
    i = low;
    j = mid+1;
    k = low;

    while(i<=mid && j<=right) {
        if(list[i]<=list[j]) {
            arr[k++] = list[i++];
        }
        else {
            arr[k++] = list[j++];
        }
    }

    if(i>mid) {
        for(int l=j;l<=mid;l++) {
            arr[k++] = list[l];
        }
        else {
            for(int l=i;l<=mid;l++) {
                arr[k++] = list[l];
            }
        }
        for(int l=low;l<=high;l++) {
            list[l] = arr[l];
        }
    }
}

void merge_sort(int list[].int low,int high) {
    int mid;

    if(low<high) {
        mid = (low+high)/2;
        merge_sort(list,low,mid);
        merge_sort(list,mid+1,high);
        merge(list,low,mid,high);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(list,0,n-1);

    for(int i=0;i<n;i++) {
        printf("%d "arr[i]);
    }

    
    return 0;
}