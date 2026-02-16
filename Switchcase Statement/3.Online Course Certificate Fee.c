#include<stdio.h>
int main() {
    int courseType;
    scanf("%d",&courseType);
    switch(courseType) {
        case 1:
            printf("Certificate Fee:0");
            break;
        case 2:
            printf("Certificate Fee:500");
    }
    return 0;
}