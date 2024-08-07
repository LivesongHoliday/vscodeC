#include <stdio.h>
 
// 主函数，程序的入口点
int main() 
{
 
char c = 'a'; // 字符型变量 c 赋值 'a'
int i = c; // 整数型变量 i 赋值 ASCII 码 97
c = i; // 字符型变量 c 赋值 ASCII 码 97
 
printf("%c\n", c); // 输出字符型变量 c
 
printf("%d\n", i); // 输出整数型变量 i
    return 0;
}