#include
#include
void main()
{
	int y, m, d;
	char bdate[] = "1990/6/29";
	sscanf(bdate, "%d/%d/%d", &y, &m, &d);
	printf("%d %d %d\n", y, m, d);
}



#include
#include
void main()
{
	int y = 1990;
	int m = 6;
	int d = 22;
	char bdate[100];
	
	sprintf(bdate, "%d/%d/%d", y, m, d);
	puts(bdate);
}



#include
#include
void main()
{
	char str1[100];
	char str2[11];
	gets(str1);
	for(int i = 0; str1[i] != '\0'; i++)
	{
		if(str1[i] == 'E' || str1[i] == 'e')
		{
			strncpy(str2, &str1[i], 10);
			str2[10] = '\0';
			break;
		}
	}
	puts(str2);
}


#include
#include

void main()
{
	char str1[] = "Hello";
	char str2[100];
	strcpy(str2, str1);
	printf("%s\n", str2);
	strcpy(str2, &str1[2]);
	printf("%s\n", str2);
}
