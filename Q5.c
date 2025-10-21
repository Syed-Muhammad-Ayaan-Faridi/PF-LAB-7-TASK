#include <stdio.h>
int main(){
    int Number[10],Large=-1000000,Small=999999,Num,Diff;

    for(int i = 0;i<10;i++){
        printf("Enter a Number: ");
        scanf("%d",&Num);
        if (Num > Large)
        {
            Large = Num;
        }
        if (Num < Small)
        {
            Small = Num;
        }
    }
    Diff = Large - Small;
    printf("%d",Diff);

    return 0;
}