#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   
    
//1.找出数组中元素最大值并打印    
    int arr1[5] = { 33,5,22,44,55 };
    int max = arr1[0];
    for (int i = 1; i <= 4; i++) {
        if (arr1[i] > max) max = arr1[i];
    }
    printf("%d\n", max);
     
//2.生成10个随机数并存入数组并求和  
    int arr2[10] = { 0 };
    srand(time(NULL));
    for (int i = 0; i <= 9; i++) arr2[i] = rand() % 100 + 1;
    int plus1 = 0;
    for (int i = 0; i <= 9; i++) {
        plus1 += arr2[i];}
    printf("%d\n", plus1);
    
//3.生成10个不同的随机数并存入数组并求和、求平均数、统计 
    int arr3[10] = { 0 };
    srand(time(NULL));
    while (1) {
        for (int i = 0; i <= 9; i++) {
            arr3[i] = rand() % 100 + 1;
            printf("%d ", arr3[i]);
        }
        for (int k = 0; k <= 9; k++){ if (arr3[k] != arr3[k + 1]) goto a; }
    }
a:    
    int plus2 = 0;
    for (int i = 0; i <= 9; i++) {
        plus2 += arr3[i];
    }
    printf("所有数据的和为%d\n所有数据的平均数为%d\n", plus2,plus2/10);
    int k = 0;
    for (int i = 0; i <= 9; i++) {
        if (arr3[i] < (plus1 / 10)) k++;
    }
    printf("有%d个数据比平均值小\n",k );

//4.录入5个数据并存入数组，然后：（1）遍历数组（2）反转数组（3）再次遍历
    int arr4[5] = { 0 };
    printf("请输入5个数：");
    scanf("%d %d %d %d %d", &arr4[0], &arr4[1], &arr4[2], &arr4[3], &arr4[4]);
    printf("现在已经存入了5个数：");
    for (int i = 0; i < 5; i++) printf("%d\n", arr4[i]);
    //开始反转：
    for (int i = 0; i < 5/2; i++) {
        int temp = arr4[i];
        arr4[i] = arr4[4 - i];
        arr4[4 - i]=temp;
    }
    printf("反转后这5个数变成：");
    for (int i = 0; i < 5; i++) printf("%d ", arr4[i]);

//5.打乱数组中所有数据的顺序
    int arr5[] = { 1,2,3,4,5 };
    srand(time(NULL));
    for (int i = 0; i < 5 ; i++) {
        int len = rand() % 5;
        int temp = arr5[i];
        arr5[i] = arr5[len];
        arr5[len] = temp;
    }
    printf("打乱后这5个数变成：");
    for (int i = 0; i < 5; i++) printf("%d ", arr5[i]);



    return 0;
}