#include <stdio.h>
int main()
{
    int year;
    printf("输入你的年份: ");
    scanf("%d", &year);
    //闰年：能被4整除且不能整除100或能被400整除
    if( year%4 == 0 && year%100 !=0 ||year%400 == 0 ){
        printf("您输入的年份是闰年 \n");
    }else {
        printf("您输入的年份是平年 \n");
    }
    return 0;
}
