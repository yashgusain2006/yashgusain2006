#include <stdio.h>
#include <string.h>

struct list {
    int id;
    char itemName[30];
    int price;
};

void display(struct list l[], int size, char cName[], char cAddress[]) {
    int total = 0;
    printf("\n\n\n\n");
    printf("\t YASH STORE \n");
    printf("\t--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Name : %s \t Address : %s \n ", cName, cAddress);
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("ID : %d\t", l[i].id);
        printf("NAME : %s\t", l[i].itemName);
        printf("PRICE : %d\n", l[i].price);
        printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        total += l[i].price;
    }
    printf("\t\t Total : %d", total);
    printf("\n\n");
    printf("\t THANKS FOR VISITING \n");
    printf("\n\n");
}

int main() {
    printf("hello...........\n");
    char Name[30];
    char address[30];
    int totalItems;
    printf("ENTER YOUR NAME: \n");
    scanf("%s", Name);
    printf("ENTER YOUR ADDRESS: \n");
    scanf("%s", address);
    printf("ENTER TOTAL ITEMS: \n");
    scanf("%d", &totalItems);
    printf("\n");

    struct list l[totalItems];
    for (int i = 0; i < totalItems; i++) {
        l[i].id = (i + 1);
        printf("ENTER ITEM NAME for ID %d:\n", i + 1);
        scanf("%s", l[i].itemName);
        printf("ENTER ITEM PRICE for ID %d:\n", i + 1);
        scanf("%d", &l[i].price);
    }

    display(l, totalItems, Name, address);

    return 0;
}
