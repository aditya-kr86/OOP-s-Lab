#include<stdio.h>
int recursive_linearsearch(int *arr, int size, int index, int key){
    // base case
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    // recursive case
    return recursive_linearsearch(arr, size, index+1, key);
    
    
}
int main()
{
    int size_of_array = 10;
    int arr[10] = {6, 8, 3, 2, 4, 11, 1, 9, 10, 5};
    int i = 0;
    int to_search = 8;
    int index = recursive_linearsearch(arr, size_of_array, i, to_search);

    if (index != -1)
    {
        printf("The element %d is found at index %d",to_search, index);
    }
    else
    {
        printf("The element %d is not found",to_search);
    }
    
    return 0;
}
