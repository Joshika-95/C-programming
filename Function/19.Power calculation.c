#include<stdio.h>
#include<math.h>
double power(double a,int b) {
    if(b == 0) return 1.0;
    if (b<0) return 1.0/power(a,-b);
    double res=1.0;
    for (int i=0;i<b;i++) {
        res*=a;
    }
    return res;
}
int main() {
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.1lf",power(a,b));
    return 0;
}
