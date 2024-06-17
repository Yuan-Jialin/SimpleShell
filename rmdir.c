#include <stdio.h>
#include <sys/stat.h>

void yjlrmdir(char argv[]){
    if (rmdir(argv) == 0) {
        printf("目录 '%s' 已成功删除\n", argv);
    } else {
        perror("rmdir 错误");
    }
}