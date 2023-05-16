#include<stdio.h>
//2. Show 0, 2, 3, 5, 6, 8, 9, 11.... Using loop.

int main()
{
    int x;
    scanf("%d",&x);
    int count = 0;
    for(int i = 1; i<=x; i++){
            printf("%d ",count);
        if(i%2 == 0){
            count++;
        }else
        {
            count = count+2;
        }
    }
    return 0;
}
