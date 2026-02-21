#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size-1];
    int sum=0;
    for (int i=0;i<size-1;i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int actualSum=size*(size+1)/2;
    printf("%d",actualSum-sum);
    return 0;
}