#include<stdio.h>

int main() {

    int table, i=1;

    printf("Enter table : ");
    scanf("%d", &table);

    while(i<=10) {
        printf("%d X %d = %d\n", table,i,table*i);
        i++;
    }
}