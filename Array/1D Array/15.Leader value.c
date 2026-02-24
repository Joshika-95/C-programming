#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int leader[n];
    int count=0;
    int max=arr[n-1];
    leader[count++]=max;
    for (int i=n-2;i>=0;i--) {
        if (arr[i]>max) {
            max=arr[i];
            leader[count++]=max;
        }
    }
    for (int i=count-1;i>=0;i--) {
        printf("%d ",leader[i]);
    }
    return 0;
}