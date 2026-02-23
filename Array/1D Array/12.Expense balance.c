#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int leftSum=0;
    int found=-1;
    for (int i=0;i<n;i++) {
        int right_sum=total-leftSum-arr[i];
        if (leftSum==right_sum) {
            found=i;
            break;
        }
        leftSum+=arr[i];
    }
    printf("%d",found);
    return 0;
}