#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("pls enter an no");
    scanf("%d",&x);

    if(x%2==0)
        printf("%d is even no",x);
    else
        printf("%d is an odd no",x);

    getch();
}
