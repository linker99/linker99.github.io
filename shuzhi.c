#include<stdio.h>
/*把十进制转换成16进制*/

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len)
{
	int i = len - 1;
//	size_t i = len - 1; // 由于size_t是无符号整数，故i肯定时大于等于0的，所以gcc把下面的for循环优化成了死循环,导致程序出错
	for(; i >= 0; i--)
	{
	//	printf("%ld\n",i);
		printf("%.2X ", start[i]); //输出十六进程，至少两位
	}
	printf("\n");
}
void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));
}
int main(int argc, char **argv)
{
	int ival = 12345;
	show_int(ival);
	return 0;
}
