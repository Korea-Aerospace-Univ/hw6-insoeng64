#include <stdio.h>
void main() {
    char str[10];
    char* p = str;
    for(int i = 0; i < 10; i++)
        scanf("%c", (p+i));
    int maxFrequency = 0;
    char maxCh;
    for (int j = 0; j < 10; j++) {
        int frequency = 0;
        char ch = *(p+j);
        for (int i = 0; i < 10; i++) {
            if (*(p + i) == *(p + j)) {
                frequency++;
            }
        }
        if (frequency > maxFrequency) { maxCh = ch; maxFrequency = frequency; }
    }
    printf("%c %d", maxCh, maxFrequency);
}
