#include <stdio.h>
void main()
{
    int a[3][3],i,j;
    int *b=&a;
    printf("Enter elements for the matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element-[%d][%d]:",i,j);
            scanf("%d",(b+i*3+j));
        }
    }
    printf("The Matrix is:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(b+i*3+j));
        }
        printf("\n");
    }
}
