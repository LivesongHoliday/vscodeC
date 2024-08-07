#include <stdio.h>
#include <stdlib.h>

// 函数声明
void bubble_sort(int arr[], int len);

// 主函数，程序入口
int main()
{
    int max_size = 100; // 初始最大输入数量为100
    int *arr = (int *)malloc(max_size * sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }

    int len = 0;
    printf("请输入数字，以非数字字符结束输入：\n");
    while (scanf("%d", &arr[len]) == 1)
    {
        len++;
        if (len >= max_size)
        {
            max_size *= 2;
            int *temp = (int *)realloc(arr, max_size * sizeof(int));
            if (temp == NULL)
            {
                printf("内存分配失败\n");
                free(arr); // 释放之前分配的内存
                return 1;
            }
            arr = temp; // 更新指针
        }
    }

    // 清空输入缓冲区
    while (getchar() != '\n')
        ;

    bubble_sort(arr, len); // 调用冒泡排序函数

    // 打印排序后的数组
    printf("排序后的数组：\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // 释放内存
    return 0;
}

// 冒泡排序函数，对输入的数组进行排序
void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int swapped = 0; // 增加一个标志位，用于优化冒泡排序
        for (int j = 0; j < len - 1 - i; j++)
        {
            // 交换元素位置
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // 如果没有发生交换，说明数组已经有序，提前退出
        if (!swapped)
            break;
    }
}
