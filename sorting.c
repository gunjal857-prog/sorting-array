#include <stdio.h>

void fun(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("[%d]", arr[i]);
    }

    // Bubble Sort
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("\nArray after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("[%d]", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];   
    fun(arr, n);

    return 0;

}


