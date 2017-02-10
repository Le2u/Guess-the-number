#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    srand(time(0));
    int number = rand()%100+1;
    int count ;
    int a ;
    
    printf("我这里有一个1～100之间的数字。\n");
    do{
        printf("请输入这个1～100之间的数字：\n");
        scanf("%d",&a);
        count ++ ;
        if ( a > number ) {
            printf("你猜的数字大了。\n");
        }else if ( a < number ){
            printf("你猜的数字小了。\n");
        }
    }while ( a != number);
    printf("你猜对了，一共猜了%d次。\n", count);
}
