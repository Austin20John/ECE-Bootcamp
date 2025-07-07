#include <stdio.h>

int findMissingSum(int arr[], int size) {
    int n = size + 1; 
    long total = (long)n * (n + 1) / 2;
    long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (int)(total - sum);
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Missing = %d\n", findMissingSum(arr, size));  
    return 0;
}