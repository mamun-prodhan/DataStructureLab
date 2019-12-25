#include <stdio.h>
int main()
{
    int a[100]={10,15,20,30,40,50,60,70,80,90}, b[100];
    int x,y,z,i,max,min,n,f,pos;
    n=10;f=0;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    a[10]=200;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    a[5]=300;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            pos=i;
        }
    }

    if(f==1)
        printf("%d",pos);
    else
        printf("not found");

        printf("\n");


        scanf("%d",&y);
    for(i=n-1;i>=3;i--)
    {
        a[i+1] = a[i];
    }

    a[3]=y;
    n++;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    scanf("%d",&z);
    for(i=z;i<n;i++)
    {
        a[i]=a[i+1];
    }

    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");


    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    max = a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    printf("%d \n",max);

    min = a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    printf("%d \n",min);



    return 0;
}


