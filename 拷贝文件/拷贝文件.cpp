#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const char* before_copy = "D:\\grt17\\Desktop\\C作品_VS\\拷贝文件\\aaa.txt";
	FILE* file1 = fopen(before_copy, "w");
	fputs("asdfghjkl你好你好你好", file1);
	fclose(file1);
	
	FILE* file2 = fopen(before_copy, "r");
	char arr_before_copy[6];
	int n1;
	while ((n1 = fread(arr_before_copy, 1, 6, file2)) != 0) {
		for (int i = 0; i < n1; i++) printf("%c", arr_before_copy[i]);
	}

	FILE* file3 = fopen("D:\\grt17\\Desktop\\C作品_VS\\拷贝文件\\bbb.txt", "w");
	char arr_before_copy1[6];
	int n2;
	while ((n2 = fread(arr_before_copy1, 1, 6, file2)) != 0) {
		for (int i = 0; i < n2; i++) fwrite(arr_before_copy1, 1,n2,file3 );
	}


	fclose(file2);
	fclose(file3);
	return 0;
}
