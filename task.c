#include<stdio.h>
int main()
{

    int a,n,b,sum=0,x[100];
    printf("Enter index number: ");
    scanf("%d",&n);
        for(a=0; a<n; a++)
        {
            scanf("%d",&x[a]);
        }
        for(b=0; b<n; b++)
        {
            if(x[b] >= 0 && x[b]<=100)
            sum=sum+x[b];
        }
        printf("%d\n",sum);

    return 0;
}
