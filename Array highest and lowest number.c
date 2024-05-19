#include <stdio.h>

int main() {
    int arr[] = {5, 10, 3, 8, 15, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int highest = arr[0];
    int lowest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    printf("The highest number is: %d\n", highest);
    printf("The lowest number is: %d\n", lowest);

    return 0;
}
