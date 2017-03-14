/*
Problem Statement

For this problem you will utilise the programming interface, which you can access via the navigation bar at the top of your screen.
The input for your program will be given via STDIN - that's cin, input(), and System.in for cxx, Python, and Java respectively. Output goes to STDOUT - cout, print, and System.out. Your program will be run on several sets of input, and if your output matches ours for each testcase, this problem will be marked solved.
We'll start with a simple challenge. Each testcase has two lines of input. The first will contain an integer N. The second will contain a series of integers a_1, a_2, ..., a_N. You are to output the sum of that series - that is, a_1 + a_2 + ... + a_n. Good luck!

Input Constraints

0 < N < 100
-1000 < a_i < 1000

Sample Input
\
1 2 3 4 5
Sample Output
15
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n)
    int *array = malloc(sizeof(int) * n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d", sum);

    return EXIT_SUCCESS;
}