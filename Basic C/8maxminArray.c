#include <stdio.h>
int main()
 {
    int numbers[10],i,n,max,min;
    

    printf("Enter the number of elements ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0]; // Assume the first element as maximum
    min = numbers[0]; // Assume the first element as minimum

    for (i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
