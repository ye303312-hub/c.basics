#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max;
    printf("enter x=");
    scanf("%d",&x);
    printf ("enter y=");
    scanf ("%d",&y);
    printf ("enter z =");
    scanf("%d",&z);
    max =x*(x>=y)+y*(y>x);
    max=max*(max>=z)+z*(z>max);
    printf ("max:%d",max);
    return 0;

}
