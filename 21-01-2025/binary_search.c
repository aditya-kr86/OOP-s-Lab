#include<stdio.h>

int binary_search(int *arr, int to_find, int size)
{
    int low = 0, mid;
    int high = size - 1;  
    
    while (low <= high)  
    {
        mid = (low + high) / 2;  
        
        if (arr[mid] == to_find) {
            printf("The Index of the given element is %d\n", mid);
            return mid;  
        }
        else if (arr[mid] < to_find) {
            low = mid + 1;  
        }
        else if (arr[mid] > to_find) {
            high = mid - 1;  
        }
    }

    printf("Element not found\n");
    return -1;  
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int element_to_search = 5;
    int size = 10;  

    binary_search(arr, element_to_search, size);

    return 0;
}
