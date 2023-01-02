#include<stdio.h>
int main()
{
    int n,i;
    int *p ;
    float avg=0 ;

    printf("Enter number of values you want to enter\n");
    scanf("%d",&n);

    p=(int *)malloc(n);
    if(p == NULL)
    {
        printf("Memory allocation failed : ");
        return 0;
    }

    printf("Enter %d values\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum+p[i];
    }
    avg = sum/n ;
    printf("Average = %f\n",avg);

    free(p);
    return 0;
}
