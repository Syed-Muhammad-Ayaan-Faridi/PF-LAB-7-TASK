#include <stdio.h>
int main(){
    int array[10],row,flag,searchvalue,searchcount;
    row = searchcount = flag = 0;
    for(int i = 0;i<10;i++){
        printf("Enter a value: ");
        scanf("%d",&array[i]);
    }
    printf("Enter Search Value: ");
    scanf("%d",&searchvalue);
    // Check for Duplication
    while (row<=9)
    {
        if( searchvalue == array[row] ){
            searchcount += 1;
        }
        row++;
    }
    if(searchcount == 0){
        printf("No Duplication");
    }
    else printf("%d Occurred %d times",searchvalue,searchcount); 
    
}
    