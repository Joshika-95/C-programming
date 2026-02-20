#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int count=0;
    int max_streak=0;
    int N;
    while(i<n) {
        scanf("%d",&N);
        if (N==0) {
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
    printf("Longest Failure Streak: %d",count);
    return 0;
}