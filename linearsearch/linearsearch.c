#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = linearSearch(arr, size, key);
    
    if (result == -1)
        printf("Element %d is not present in the array\n", key);
    else
        printf("Element %d is present at index %d\n", key, result);
    
    return 0;
}