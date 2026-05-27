#include <stdio.h>
void main() {
    int str[20];
    int str1[20];
    int N = 0;
    scanf("%d", &N);

    for (int* p = str; p < str + N; p++)
        scanf("%d", p);
    for (int* p1 = str1; p1 < str1 + N; p1++)
        scanf("%d", p1);
    
    for (int* p = str, *p1 = str1+N-1; p < str + N; p++, p1--) {
        printf(" %d", *p + *p1);
    }
}
