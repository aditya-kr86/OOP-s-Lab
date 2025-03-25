// To Find The missing Value in array of size n-1
#include <stdio.h>

int main() {
    int n = 11;
    int arr[10] = {6, 8, 3, 2, 4, 11, 1, 9, 10, 5};
    int sum_of_1_to_11 = (n * (n + 1)) / 2;
    int given_array_sum = 0;

    printf("The sum of 1 to 11 is: %d\n", sum_of_1_to_11);

    for (int i = 0; i < 10; i++) {
        given_array_sum = given_array_sum + arr[i];
    }
    int missing_value = sum_of_1_to_11 - given_array_sum;

    printf("The Missing Number is: %d\n", missing_value);
    
    return 0;
}
