¦X¨ÖÀÉ®×
#include<stdio.h>
void main()
{
FILE *fp1, *fp2;
char file1[100];
char file2[100];
gets(file1);
gets(file2);

fp1 = fopen(file1, "a");
fp2 = fopen(file2, "r");
if(fp1 == NULL || fp2 == NULL)
{
printf("Error\n");
}
else
{
char strbuf[100];
while(fgets(strbuf, 99, fp2)!=NULL)
{
fputs(strbuf, fp1);
}
fclose(fp2);
fclose(fp1);
}
}


¤À³ÎÀÉ®×
#include<stdio.h>
#include<string.h>
void main()
{
char fileName[100];
FILE *fpin = fopen("d:\\test1.txt", "r");
if(fpin == NULL)
{
printf("Error\n");
}
else
{
char strbuf[100];
int fileID = 1;
while(fgets(strbuf, 99, fpin) != NULL)
{
sprintf(fileName, "d:\\output%d.txt", fileID);
FILE* fpout = fopen(fileName, "w");
fputs(strbuf, fpout);
fclose(fpout);
fileID++;	
}
fclose(fpin);	
}

}



