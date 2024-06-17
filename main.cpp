#include"main.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
#include "vector"
#include "string"

using namespace std;
#define MAX 128
//

int main() {
    printf("Welcome to Mybash.\n");
    printf("Now you can use some basic command like 'ls'.\n");
    printf("put 'help' to get more command\n");

    vector<string> q;
    while (1) {
        printf(">>>");
        char buff[128] = {0};
        fgets(buff, 128, stdin);
        buff[strlen(buff) - 1] = 0;
        char *s = strtok(buff, " ");
        if (s == NULL) {
            continue;
        }
        char *myargv[MAX] = {0};
        myargv[0] = s;
        int i = 1;

        while ((s = strtok(NULL, " ")) != NULL) {
            myargv[i++] = s;
        }
        q.push_back(myargv[0]);

        if (strcmp(myargv[0], "help") == 0) {
            help();
        } else if (strcmp(myargv[0], "ls") == 0) {
            ls();
        } else if (strcmp(myargv[0], "pwd") == 0) {
            pwd(myargv[0]);
        } else if (strcmp(myargv[0], "exit") == 0) {
            exit(-1);
        } else if (strcmp(myargv[0], "cat") == 0) {
            cat(myargv[1]);
        } else if (strcmp(myargv[0], "cd") == 0) {
            cd(myargv[1]);
        } else if (strcmp(myargv[0], "echo") == 0) {
            echo(i, myargv);
        } else if (strcmp(myargv[0], "wc") == 0) {
            wc(myargv[1]);
        } else if (strcmp(myargv[0], "rm") == 0) {
            rm(myargv[1]);
        } else if (strcmp(myargv[0], "mkdir") == 0) {
            mymkdir(myargv[1]);
        } else if (strcmp(myargv[0], "clear") == 0) {
            clear();
        } else if (strcmp(myargv[0], "date") == 0) {
            date();
        } else if (strcmp(myargv[0], "rmdir") == 0) {
            yjlrmdir(myargv[1]);
        } else if (strcmp(myargv[0], "who") == 0) {
            yjlwho();
        } else if (strcmp(myargv[0], "kill") == 0) {
            yjlkill(myargv[2]);
        }else if (strcmp(myargv[0], "exec") == 0) {
            exe(myargv[1]);
        }else if (strcmp(myargv[0], "chmod") == 0) {
            //printf(myargv[1]);
            //printf("%s", myargv[2]);
            mychmod(3, myargv);
        } else if (strcmp(myargv[0], "history") == 0) {
            for (int i = 0; i < q.size(); i++) {
                cout << q[i] << endl;
            }
        } else {
            printf("Wrong Command\n");
        }
    }
    return 0;
}
