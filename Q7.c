#include <stdio.h>
int main(){
    int dupindex[100] = {0},number[10],c=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d",&number[i]);
    }

    printf("\nArray after populating: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", number[i]);
    printf("\n");

    for (int j = 0; j < 10; j++)
    {
        if (dupindex[number[j]] == 0) dupindex[number[j]] = 1;
        else number[j] = -1;
    }

    printf("Array after removing duplication: ");
    for (int ind = 0; ind < 10; ind++) {
        printf("%d ", number[ind]);
    }
    printf("\n");
    return 0;
}