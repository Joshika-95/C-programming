#include<stdio.h>
int main() {
    int doctorType;
    scanf("%d",&doctorType);
    switch(doctorType) {
        case 1:
            printf("Consultation Fee:500");
            break;
        case 2:
            printf("Consultation Fee:1200");
    }
    return 0;
}