#include <utmp.h>
#include <stdio.h>
#include <unistd.h>

void yjlwho() {
    struct utmp *entry;

    setutent(); // 重置utmp文件的读取位置

    while ((entry = getutent()) != NULL) {
        if (entry->ut_type != USER_PROCESS) continue; // 只关心正常登录的用户进程

        printf("%-8s", entry->ut_user); // 用户名
        printf(" ");
        printf("%-s", entry->ut_line);  // tty设备
        printf(" ");
        printf("%10ld", entry->ut_time); // 登录时间戳
        printf(" ");
        printf("%s", entry->ut_host);    // 远程主机名
        printf("\n");
    }

    endutent(); // 关闭utmp文件

}