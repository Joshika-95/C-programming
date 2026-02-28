#include <stdio.h>
void palindrome (int n) {
     int rev=0;
     int temp=n;
     while (n!=0) {
          rev=rev*10+n%10;
          n=n/10;
     }
     if (temp==rev) {
          printf("Palindrome");
     }
     else {
          printf("No Palindrome");
     }
}
int main() {
     int n;
     scanf("%d",&n);
     palindrome(n);
     return 0;
}