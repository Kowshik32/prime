#include<stdio.h>
int main()
{

    int kowshik[1000];
    int i,n;
    printf("Enter the Size of the array: ");
    scanf("%d",&n);
    printf("Enter the %d Element: ",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&kowshik[i]);

    }
    marge(kowshik, 0, n - 1);
    printf("After Sorting : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",kowshik[i]);
    }
    return 0;


}
void marge(int kowshik[],int high ,int low)
{
    int mid;
    if(low < high)
    {
        mid=low+high/2;
        marge(kowshik,low,mid);
        marge (kowshik,mid+1,high);
        margesort(kowshik,mid,high,low);

    }
}
    void margesort(int kowshik[],int low,int mid,int high )
    {

        int i,lo,k,mi,a[100];
        lo=low;
        i = low;
        mi = mid+1;
        while ((lo <= mid) && (mi<=high))
               {
                   if (kowshik[lo] <= kowshik[mi])
                {

                    a[i] = a[lo];
                    lo++;
                }
                else
                {

                    a[i] = a[mi];
                    mi++;
                }
                i++;
               }

               if (lo > mid)
               {

                   for(k = mid ;k<=high;k++)
                   {
                       a[i] = kowshik[k];
                       i++;

                   }
               }
               else {
                for(k=lo;i<mid;k++)
                {
                   a[i] = kowshik[k];
                   i++;

                }

               }
               for(k=low;k<high;k++)
               {

                   kowshik[k] = a[k];
               }
    }










