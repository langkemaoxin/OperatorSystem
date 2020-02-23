# OperatorSystem
 深入理解计算机系统的相关代码实例


csapp.h其实就是一堆头文件的打包，在http://csapp.cs.cmu.edu/public/code.html 这里可以下载。这是《深入理解计算机系统》配套网站。

在头文件的#end if前面加上一句#include “csapp.c”，因为那个头文件要把csapp.c文件包含了进去.

linux没有自带csapp.h，所以要自己导入，放到 /usr/include的文件夹里面。

还有就是因为csapp.c中有关于线程的头文件，在用gcc的时候最后要加上-lpthread

如 # gcc -o Ex  Ex.c -lpthread

