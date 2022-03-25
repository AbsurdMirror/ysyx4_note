// 测试 printf 函数 输出换行和不换行的区别

// 设置运行环境 WIN_ENV  LINUX_ENV
#define WIN_ENV

#include <stdio.h>

#ifdef WIN_ENV
#include <windows.h>
void sleep (int n) {
  Sleep(n * 1000);
}
#else
#include <unistd.h>
#endif


void main()
{
  // with '\n'
  printf("test with \\n \n");
  sleep(1);
  printf("printf \n");

  sleep(1);

  // without '\n'
  printf("test without \\n");
  sleep(1);
  printf("printf");
}