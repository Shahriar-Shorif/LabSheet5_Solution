#include<stdio.h>
//3. Show 1, 3, 5, 6, 8, 10, 11, 13.... Using loop.
int main()
{
    int x;
    scanf("%d",&x);
    int count = 1;
    for(int i = 1; i<=x; i++){
        printf("%d ",count);
        if(i%3 == 0){
            count++;
        }else
        {
            count+=2;
        }
    }
    return 0;
}
