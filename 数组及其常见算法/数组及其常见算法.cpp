#include <stdio.h>
int order1(int arr[], int len, int num);

int main()
{

//一、数组 : 是存储多个相同类型数据的集合，具有固定长度和连续内存存储的特性。

    //格式： 数据类型 数组名[长度] = {数据1，数据2，...};

     //一旦定义，长度就不可变了； 若初始化时不写长度，则默认长度等于数据值个数，若写了则要注意长度>=数据值个数，多余未初始化的数据值默认为 0 ，0.0 ，\0 ，NULL


//二、元素访问：
     
   //索引：指数组从各个元素的排序顺序，左边第一个为0，顺次向右排序
    //通过索引获取元素：    int num = 数组名[索引] ；
    //通过索引修改元素：    数组名[索引] = 新数据值 ；


   //元素遍历： 利用循环依次获取数组中的每一个元素
    int arr[9] = { 0 };
    int len = 9;
    for (int i = 0; i < len; i++) printf("%d", arr[i]);


//三、内存：软件在运行时用来临时存储数据的地方，计算机以每一字节为单位编出内存地址
    
   //内存地址的规则：
       //32位操作系统的内存地址以32位的二进制数来表示，最高支持2^32B=4096MB=4G内存
       //64位操作系统的内存地址以64位的二进制数来表示，最高支持2^64B=17179TB内存
          //读取时会先把64位数的地址先以4个数为一组转成16进制再读取

   //c语言变量的内存地址：以int类型（4字节）为例，当定义一个int类型的变量时，计算机会申请4个连续的字节，取第一个字节的内存地址为该变量的地址，称为首地址
    //获取变量的内存地址：
    int a = 10;
    printf("%p", &a);          //& 是取地址运算符

   /*c语言数组的内存地址：以int类型（4字节）为例，当定义一个int类型的长度为3的数组时，计算机会申请3 * 4个连续的字节，取第一个元素的首地址为该数组的地址，
    *而索引对于计算机来说是偏移量，指相对首地址来说往后偏移了多少个单位                   */                

    //获取变量的内存地址：
    int abc[3] = {0};
    printf("%p", &abc);
    printf("%p", &abc[0]);
    printf("%p", &abc[1]);
    printf("%p", &abc[2]);









    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
//常见算法
  //查找：基本查找，二分查找，插值查找，分块查找，哈希查找，鼠标查找，斐波那契查找
    int arr1[] = { 11,22,33 }, num1 = 33;         //定义数组和要查找的变量
    int len1 = sizeof(arr1) / sizeof(int);        
    int index1 = order1(arr1, len1, num1);         //调用函数查找数据
    printf("%d", index1);                         //输出索引

    int arr2[] = { 2,6,15,56,78 }, num1 = 33;         //定义数组和要查找的变量
    int len2 = sizeof(arr2) / sizeof(int);
    int index2 = BinarySearch(arr2, len1, num1);         //调用函数查找数据
    printf("%d", index2);
	
    
    
    
    
    
    return 0;
}




//常见算法
  //查找：基本查找，二分查找，插值查找，分块查找，哈希查找，数表查找，斐波那契查找

//基本查找（顺序查找）：
int order1(int arr[],int len,int num) {
    for (int i = 0; i < len; i++) {
        if (num == arr[i]) return i;
    }
    return -1;
}


//二分查找 ： 要求数组中的数据必须是有序的，每次排除一半的范围
int BinarySearch(int arr[],int len,int num) {
    int min = 0, max = len - 1;
    while  (min<=max) {
        int mid = (min + max) / 2;
        if (num > arr[mid]) {
            min = mid+1;    
        }
        else if (num < arr[mid]) {
            max = mid-1;      
        }
        else if (num == arr[mid]) return mid;
    }
    return -1;
}


//插值查找： 要求数据有序且分布尽量均匀，     若满足要求则查找效率比二分查找快，否则反而更慢
int InterpolationSearch(int arr[], int len, int key) {
    int min = 0, max = len - 1;
    while (min<=max && key >= arr[min] && key <= arr[max]) {
       int mid = min +(max-min)* (key - arr[min]) / (arr[max] - arr[min]);
       if (key < arr[mid]) max = mid - 1;
       else if (key > arr[mid]) min = mid + 1;
       else return mid;
    }
    return -1;
}



//排序：冒泡排序，选择排序
    //冒泡排序
     int BubbleSort(int arr[],int len){
         for (int i = 0;i<len-1; i++) {
             for(int k=0;k<len-1-i; k++) {
                 if (arr[k] > arr[k + 1]) {
                     int temp = arr[k + 1];
                     arr[k + 1] = arr[k];
                     arr[k] = temp;
                 }                 
             }
         }
     }

     //冒泡排序的变形：  但是效率比较低
     int BubbleSort1(int arr[], int len) {
         for (int i = 0; i < len - 1; i++) {
             for (int k = 1; k <= len - 1 - i; k++) {
                 if (arr[i] > arr[i + k]) {
                     int temp = arr[i + k];
                     arr[i + k] = arr[i];
                     arr[i] = temp;
                 }
             }
         }
     }

     //选择排序：

     void SelectionSort(int arr[], int len) {
         // 外层循环：确定第 i 位放最小值
         for (int i = 0; i < len - 1; i++) {
             int minIndex = i;  // 先假设 i 是最小值的下标

             // 内层循环：从 i+1 开始找真正最小值的下标
             for (int j = i + 1; j < len; j++) {
                 if (arr[j] < arr[minIndex]) {
                     minIndex = j;  // 找到更小的，记录下标
                 }
             }

             // 【重点】一轮找完，只交换 1 次
             int temp = arr[i];
             arr[i] = arr[minIndex];
             arr[minIndex] = temp;
         }
     }


     
     
     
     
     
     
/*
## 📝 C语言数组 - 常见的两个小问题

### 问题一：数组作为函数的参数

**代码示例：**
```c
#include<stdio.h>

void printArr(int arr[]);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printArr(arr);
    return 0;
}

void printArr(int arr[])
{
    for (int i = 0; i < len; i++)  // ❌ 错误！len未定义
    {
        printf("%d\n", arr[i]);
    }
}
```

**⚠️ 常见错误：**
- `len`是main函数的**局部变量**，在printArr函数中**无法直接访问**
- 编译器会报错：`len`未定义

**✅ 正确做法：**
```c
void printArr(int arr[], int len)  // 把长度也传进去
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// 调用时：
printArr(arr, len);
```

**📌 关键点：**
- 数组作为参数传递时，**不会传递数组长度**
- 需要额外传递数组长度参数

---

### 问题二：数组的索引越界

**示例：**
```c
int arr[5] = {1, 2, 3, 4, 5};
printf("%d", arr[5]);  // ❌ 越界！有效索引是0-4
```

**⚠️ 越界后果：**
- 访问未分配的内存
- 程序崩溃或数据错乱
- 编译器不一定会报错，但运行时会出问题

**✅ 注意事项：**
- 数组索引从**0**开始
- 最后一个元素索引是 `长度-1`
- 循环时注意边界：`i < len`（不是 `i <= len`）

---

### 总结

| 问题 | 原因 | 解决方案 |
|------|------|----------|
| 数组传参无法获取长度 | 数组传递不携带长度信息 | 额外传递长度参数 |
| 数组越界 | 访问超出范围的索引 | 确保索引在 0~len-1 之间 |

*/







     






