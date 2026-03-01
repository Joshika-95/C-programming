#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int idx=-1;
    int *p=arr;
    for(int i=0;i<n;i++) {
        if(*p==x) {
            idx=i+1;
            break;
        }
        p++;
    }
    printf("%d",idx);
    return 0;
}