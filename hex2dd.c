#include "csapp.h"
int main(int argc,char **argv)
{
    struct in_addr inaddr;
    unit32_t addr;
    char buf[MAXBUF];
    if(argc!=2){
        fprintf(stderr,"usage: %s <hex number>\n",argv[0]);
    }

    sscanf(argv[1],"%x",&addr);
    inaddr.s_addr=htonl(addr);

    print("%s\n",buf);
    exit(0);
}

/*
当前项目的作用是：把16进制的数据，转换成点十进制

> gcc hex2dd.c
> ./a.out 0x8002c2f2  
> 128.2.194.242
*/