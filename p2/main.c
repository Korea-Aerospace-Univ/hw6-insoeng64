#include <stdio.h>
void main() {
    int str[20];
    int str1[20];
    int* p = str;
    int* p1 = str1;
    int N = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%d", (p+i));
    for (int i = 0; i < N; i++)
        scanf("%d", (p1 + i));

    for (int j = 0; j < N; j++) {
        printf(" %d", * (p + j) + *(p1 + (N-1) - j));
    }
}
