#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int usage;
    int i=0;
    int hours=0;
    int max_usage=0;
    while (i<n) {
        scanf("%d",&usage);
        if (i==0) {
            max_usage=usage;
        }
        if (usage>max_usage) {
            max_usage=usage;
        }
        if (usage>5) {
            hours++;
        }
        i++;
    }
    printf("Max usage: %d\n",max_usage);
    printf("Surge usage: %d\n",hours);
    return 0;
}


