#include <stdio.h>
#include <stdlib.h>

int main() {
    int max_size = 100;  // 初始最大输入数量为100
    int *arr = (int *)malloc(max_size * sizeof(int));
    
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    } 
    else 
    {   
        printf("It has assigned%d size ram:\n", max_size);           
        return 0;
    }
        
    
}