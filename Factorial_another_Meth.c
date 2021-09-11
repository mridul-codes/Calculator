#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the Factorial no.\n");
    scanf("%d", &a);
    if (a==0)
    {
        printf("The required factorial is 1\n");
    }
    else if (a!=0&&a!=2)
    {
        b=a;
        c = a - 1;

        do
        {
            b = b * c;
            c--;
            
        } while (c!=1);
    }
    else
    {
        b = 2;
    }
    
    
    printf("\nThe required factorial is %d\n", b);
    
    return 0;
}