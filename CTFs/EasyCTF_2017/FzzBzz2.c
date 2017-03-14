#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++) {
        if ((i%3 == 0) && (i%5 == 0)) {
            printf("FzzBuzz\n");
            continue;
        }
        if (i%3 == 0) {
            printf("Fzz\n");
            continue;
        }
        if (i%5 == 0) {
            printf("Buzz\n");
            continue;
        }
        printf("%s\n", );("%d\n", i);
    }
    return 0;
}