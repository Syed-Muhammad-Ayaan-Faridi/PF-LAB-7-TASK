#include <stdio.h>
int main(){
    int num[5],temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter numbers into the array: ");
        scanf("%d",&num[i]);
    }
    printf("%d ",num[4]);
    for (int j = 0; j < 4; j++)
    {
        printf("%d ",num[j]);
    }
    return 0;
}