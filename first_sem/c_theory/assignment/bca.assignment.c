#include <stdio.h>
 int main() {
    int n, category, regular=0, premium=0, recliner=0;
    float total=0, discount, finalamount;
    printf("enter the number of tickets:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("enter category:");
        scanf("%d", &category);
            if(category==1) {
            printf("regular\n");
            total=total+150;
            regular++;
        }
        else if(category==2) {
            printf("premium\n");
            total=total+250;
            premium++;
        }
        else if(category==3) {
            printf("recliner\n");
            total=total+400;
            recliner++;
        }
    }
    if(n>5) {
        discount=total*0.10;
    }
    else {
        discount=0;
    }
    finalamount=total-discount;
    printf("\n---final bill---\n");
    printf("regular tickets:%d\n", regular);
    printf("premium tickets:%d\n", premium);
    printf("recliner tickets:%d\n", recliner);
    printf("total:%.2f\n", total);
    if(n>5) {
        printf("discount applied:yes\n");
    }
    else {
        printf("discount applied:no\n");
    }
    printf("final amount:%.2f\n", finalamount);
    return 0;
}
