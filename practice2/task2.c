#include <stdio.h>
#include <stdlib.h>

struct Item {
    char name[20];
    int total;
    float price;
};

int main() {
    int n;
    printf("Enter the количество products: \n");
    scanf("%d", &n);
    struct Item *products = (struct Item*)malloc(sizeof(n));

    for (int i=0; i<n; i++) {
        scanf("%s %d %f", &products[i].name, &products[i].total, &products[i].price);
    }
    for(int i=0; i<n; i++) {
        printf("\nItem: %s\n", products[i].name);
        printf("Quantity: %d\n", products[i].total);
        printf("Price: %f\n", products[i].price);
    }
    free(products);
    return 0;
}