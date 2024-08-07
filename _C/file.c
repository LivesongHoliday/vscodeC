#include <stdio.h>
  
// 主函数，程序的入口点
int main()
{
   // 声明一个指向文件的指针
   FILE *fp = NULL;
  
   // 打开一个文件用于读写，如果文件不存在则创建
   fp = fopen("D:/Programming/CC++/test.txt", "w+");
   // 向文件写入格式化字符串
   fprintf(fp, "This is testing for fprintf...\n");
   // 向文件写入字符串
   fputs("This is testing for fputs...\n", fp);
   // 关闭文件
   fclose(fp);
}