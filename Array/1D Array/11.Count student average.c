#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if (n<=0) {
        printf("0");
        return 0;
    }
    float avg=(float)sum/n;
    int count=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>avg) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}