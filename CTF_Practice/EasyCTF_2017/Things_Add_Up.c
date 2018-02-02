#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n, val;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d", sum);
    /*
    int *array = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum += array[k];
    }
    fprintf(stdout, "%d", sum);
    */

    return 0;
}