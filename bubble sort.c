#include<stdio.h>
int main()
{


int kowshik[10000];
int i,j,n,swap;
printf("Enter the Size of the arry: ");
scanf("%d",&n);
printf("Enter %d Element: ",n);
for(i=0;i<n;i++)
{

scanf("%d",&kowshik[i]);
}

for(i=0;i<n-1;i++)
{

    for(j=0;j<n-i-1;j++)
    {

        if (kowshik[j] > kowshik[j+1])
        {

            swap = kowshik[j];
            kowshik[j] = kowshik[j+1];
            kowshik[j+1] = swap;
        }
    }


    }
        printf("After the Sorting: ");
        for(i=0;i<n;i++)
        {

            printf("%d ",kowshik[i]);
        }
    }

