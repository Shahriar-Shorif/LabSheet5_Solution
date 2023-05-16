#include<stdio.h>
//1. Show 0, 3, 4, 7, 8, 11, 12, 15.... Using loop.
int main()
{
    int x;
    scanf("%d",&x);
    int count = 0;
    int i;
    for(i = 0; i<=x; i++){
            printf("%d ",count);
        if( i%2==0){
            count+=3;
        }else
        {
         count++;
        }

    }
    return 0;
}
