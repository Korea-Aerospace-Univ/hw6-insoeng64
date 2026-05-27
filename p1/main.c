#include <stdio.h>
void main() {
    char str[10];
    for (char *p = str; p < str+10; p++)
        scanf("%c", p);
    int maxFrequency = 0;
    char maxCh;
    for (char* p = str; p < str + 10; p++) {
        int frequency = 0;
        
        for (char* p1 = str; p1 < str + 10; p1++) {
            if (*p == *p1) {
                frequency++;
            }
        }
        if (frequency > maxFrequency) { maxCh = p; maxFrequency = frequency; }
    }
    printf("%c %d", maxCh, maxFrequency);
}
