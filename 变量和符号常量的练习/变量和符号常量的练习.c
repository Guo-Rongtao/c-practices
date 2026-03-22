#include <stdio.h>
#define NAME "周杰伦"
#define AGE 21
#define HEIGHT 180.5
#define WEIGHT 56
int main() {
    printf("我是%s，今年%d岁。\n身高%fCM,体重%dKG。\n\n",NAME,AGE,HEIGHT,WEIGHT);

    int age = 21; float height = 180.5; float weight = 56.0;
    printf("我是周杰伦，今年%d岁。\n身高%fCM,体重%dKG。\n\n",age, height,weight);

 //     变量

        //变量可以重新赋值
    age = 22, height = 188, weight = 67.8;
    printf("一年以后我%d岁,身高%fCM,体重%fKG。",age,height,weight);

    //变量可以进行计算
    weight = (weight + (5 - 10) * 3) / 0.5;                  //或者printf("发福后体重变成%fKG",(weight+(5-10)*3)/0.5);
    printf("发福后体重变成%fKG\n\n",weight);

    int money = 50, use1 = 5;
    printf("小明余额：%d元。\n\n购买冰激凌花费%d元，余额剩余：%d元。\n", money, use1, money - 5);

    return 0;
}