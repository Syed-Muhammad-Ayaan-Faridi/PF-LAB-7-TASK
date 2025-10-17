#include <stdio.h>
int main(){
    int array[5],num;
    for(int i = 0;i<5;i++){
        printf("Enter a value: ");
        scanf("%d",&array[i]);
    }
    printf("The current state of the array is: ");
    for(int i = 0;i<5;i++){    
        printf("%d",array[i]);
    }
    printf("\n The updated state of the array is: ");
    for(int j = 4;j>=0;j--){
        printf("%d",array[j]);
    }
}