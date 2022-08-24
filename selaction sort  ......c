#include<stdio.h>
int main()
{

    int arry [100000];
    int i,j,n,swap,min;
    printf("Enter the Size of the array :");
    scanf("%d",&n);
    printf("Enter the %d Element prass: ",n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&arry[i]);

    }

for(i=0;i<n;i++)
{



    for(j=i+1;j<n;j++)
    {

        if (arry[i] > arry[j])
        {



        swap =  arry[i];
        arry[i] = arry[j];
        arry[j] = swap;
    }
}

}

printf("After the sorting : ");
for(i=0;i<n;i++)
{

    printf("%d  ",arry[i]);
}
}





