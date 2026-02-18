#include <stdio.h>
int main() {
    int n;
    int hours;
    scanf("%d",&n);
    int i=0;
    int total=0;
    int days=0;
    while (i<n) {
        scanf("%d",&hours);
        total+=hours;
        if (hours>2) {
            days++;
        }
        i++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d",days);
    return 0;
}