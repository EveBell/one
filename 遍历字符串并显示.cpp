#include<stdio.h>

void put_string(const char s[])
{
	int i=0;
	while(s[i])
	   putchar(s[i++]);
}

int main(void)
{
	char str[128];
	
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s",str);
	
	printf("ÄãÊäÈëÁË£º");
	put_string(str);
	printf("\n");
	
	return 0; 
}
