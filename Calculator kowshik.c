#include <stdio.h>
void On();
int n;
int a,b,x;
int main()
{

    void on();
    void Exit();


    while(1)
    {


        printf("1.Press 1 to calculating valu:\n");
        printf("2.Press 2 to to exit :\n");
        scanf("%d",&x);

        switch(x)
        {
        case 1:
        {
            On();
            break;
        }
        case 2:
        {
            exit(0);

            break;
        }

        }

    }
    return 0;
}

void On()
{

    printf("Enter the value of A abd B: ");
    scanf("%d %d",&a,&b);
    printf("To add Write 1\nTo Subtract write 2\nTo multiply write 3\nTo divide write 4\n");
    scanf("%d",&n);



    switch (x)
    {
    case 1:
        printf("The Adition is: %d\n",a + b);
        break;
    case 2:
        printf("The Subtract is: %d\n",a - b);
        break;
    case 3:
        printf("The Maltiply is: %d\n",a* b);
        break;
    case 4:
        printf("The Division is: %d\n",a / b);
        break;

    default:
        printf("Invalid Number\n");
    }
}
