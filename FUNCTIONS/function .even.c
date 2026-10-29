#include <stdio.h>
#include <stdbool.h>

bool iseven(int number)
{
    return number %2 ==0;
}
int main ()
{
    int num;
    printf ("enter an integer :");
    scanf ("%d",&num);
    if(iseven(num))
    {
        printf ("%d is even.\n",num);
    }
    else
    {
        printf ("%d is odd.\n",num);
    }




{
    return 0;
}
}
