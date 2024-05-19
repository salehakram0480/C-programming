#include <stdio.h>

int main() {
    int nump, age[100], count = 0;

    printf("Enter the number of people: ");
    scanf("%d", &nump);

    printf("Enter the ages of people:\n");
    for (int i = 0; i < nump; i++) {
        scanf("%d", &age[i]);
        if (age[i] <= 20)
            count++;
    }

    if (count == 0) {
        printf("Saved All\n");
    } else {
        printf("Only a few are saved and the following are dead:\n");
        for (int i = 0; i < nump; i++) {
            if (age[i] < 20)
                printf("%d\n", age[i]);
        }
    }

    return 0;
}
