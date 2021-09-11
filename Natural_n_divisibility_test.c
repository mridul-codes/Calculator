//To check if the entered no. and its serial natural no. are divisible by 2 or no.
#include<stdio.h>

int main(){
    int input, test;
   

    printf("\nPlease enterd a no. to check divisibility test with its serial fowllowing no. \n");
    scanf("%d", &input);
    printf("Enter the no. you want check the divisibility test\t");
    scanf("%d", &test);
    for (input ; input>=1; input--)
    {
        if (input%test==0)
        {
            printf("the no. %d is divisible by %d\n", input, test);
        }
        else
        {
            printf("The no. %d is not divisible by %d\n", input, test);
        }
        
    }
    
    return 0;
}