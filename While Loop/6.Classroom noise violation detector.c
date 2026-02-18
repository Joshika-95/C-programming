#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int noise;
    int i=0;
    int count=0;
    int violation=0;
    int max_streak=0;
    while (i<N) {
        scanf("%d",&noise);
        if (noise>70) {
            violation++;
            count++;
            if (count>max_streak) {
                max_streak=count;
            }
        }
        else {
            count=0;
        }
        i++;
    }
    printf("Noise Violations: %d\n",violation);
    printf("Longest Violation Streak: %d",max_streak);
    return 0;
}