## Step1 复制文件

​	将`kln.c, patch.h, sys.c, Makefile`复制到虚拟机的文件夹中。

## Step2 编辑sys.c

1. 在图1的①处填入分配的系统调用号
2. 在图1的②处填入系统调用的代码

![sys](week2/免编译/img/sys.jpg)

<center>图1 编辑sys.c</center>

## Step3 编译并安装

- 在文件所在目录中以root用户运行下列命令

  ```shell
  make
  ```

  待编译完成，将会在当前目录下生成`syscall.ko`文件。安装`syscall.ko`模块。

  ```shell
  insmod syscall.ko
  ```

  
