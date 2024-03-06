#include<stdio.h>
int main()
{
    //declare an array to store operation name
        char *operaion[]={"addition","subtraction","multiplication","division","exit"};
        int choice;
        //display menu
        printf("Choose an operation: \n");
        printf("1.Addition\n");
        printf("2.Sustraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        scanf("%d",&choice);

        //Check choice is valid
        //Addition section
    int a,n,b,sum=0,x[100];
    printf("Enter number of subject: ");
    scanf("%d",&n);
        for(a=0; a<n; a++)
        {
            scanf("%d",&x[a]);
        }
        for(b=0; b<n; b++)
        {
            if(x[b] >= 0 && x[b]<=100)
            sum=(sum+x[b]);
        }
        printf("Addition is: %d\n",sum);
//subtraction section

        for(a=0; a<n; a++)
        {
            scanf("%d",&x[a]);
        }
        for(b=0; b<n; b++)
        {
            if(x[b] >= 0 && x[b]<=100)
            sum=sum*x[b];
        }
        printf("Subtraction is: %d\n",sum);
    return 0;
}
