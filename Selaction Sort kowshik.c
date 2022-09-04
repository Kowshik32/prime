#include<stdio.h>
int main()
{
int i,j,min;
int swap;
    int kowshik[5] ={20,5,63,41,32};
   for(i=0;i<5;i++)
{



    for(j=i+1;j<5;j++)
    {
        min=j;

        if (kowshik[i] > kowshik[min])
        {



        swap =  kowshik[i];
        kowshik[i] = kowshik[min];
        kowshik[min] = swap;
    }
}

}
    for(i=0;i<5;i++)
    {

        printf("%d ",kowshik[i]);
    }
}



