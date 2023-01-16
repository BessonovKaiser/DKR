#include <stdio.h>
#include <float.h>

int find_sum(int array[], int size) {
    int sum=0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0){
            sum += array[i];
        }
    }
    return sum;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = -100+rand()%201;
    }

    printf("Sum: %d", find_sum(array, size));
    return 0;
}
