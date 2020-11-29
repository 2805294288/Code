#include <stdio.h>
#include <assert.h>
#include <string.h>

char* MyStrncat(char* dest, char* src, size_t len)
{
	assert(NULL != dest && NULL != src);
	char* ret = dest;
	int offset = 0;
	while (*dest)
	{
		*dest++;
	}
	while (len--)
	{
		*dest++ = *src++;
	}

	*dest = '\0'; //strncat�����ڽ���������'\0'����������'\0'���Ŀ��ʣ��ռ�

	return ret;
}

int main()
{
	char arr1[6] = "World";
	char arr2[15] = "Hello ";
	printf("%s\n", MyStrncat(arr2, arr1, strlen(arr2)));
	return 0;
}
