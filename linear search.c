#include<stdio.h>
void main()
{
    int a[20], key, N, flag = 0,i;

    printf("Enter array limit\n");
    scanf("%d", &N);

    printf("Enter %d elements\n", N);
    for(i = 0; i<N; i++)    scanf("%d",&a[i]);

    printf("enter the number to be searched\n");
    scanf("%d", &key);



    for(i = 0; i<N; i++)
        if(a[i] == key)
        {
            flag = 1;
            break;
        }
    if(flag)    printf("Search is success");
    else    printf("Search failed");

}
