#include <stdio.h>
int main()
{
    int Pass[10], Fail[10], Marks, i = 0, PassTotal = 0,FailTotal = 0,PassCount = 0,FailCount = 0;
    float Passavg,Failavg;
    printf("To exit Enter -1 as your marks!!!\n");
    printf("Enter your marks: ");
    scanf("%d", &Marks);
    while (Marks != -1)
    {
        if (Marks >= 5 && Marks <= 10)
        {
            Pass[i] = Marks;
            PassTotal += Marks;
            PassCount += 1;
            Fail[i] = 0;
        }
        else if (Marks >= 0 && Marks < 5)
        {
            Pass[i] = 0;
            Fail[i] = Marks;
            FailTotal += Marks;
            FailCount += 1;
        }
        else {
            printf("Re-enter Marks, between 0 to 10");
        }
        i+=1;
        if(i == 10) break;
        printf("Enter your marks: ");
        scanf("%d", &Marks);
        
    }
    for (int j = 0; j < 10; j++) printf("%d ",Pass[j]);
    Passavg = PassTotal/(float)PassCount;
    printf("\nAverage Passing Score = %.1f\n",Passavg);
    for (int k = 0; k < 10; k++) printf("%d ",Fail[k]);
    Failavg = FailTotal/(float)FailCount;
    printf("\nAverage Failing Score = %.1f\n",Failavg);

    return 0;
}