#include <stdio.h>
int main(int argc,char *argv[])
{
	char word[255];
	char *str;
	int wordlenght;
	int length = 0;
	FILE *fp;
	fp = fopen(argv[2], "r");
	if(fp) {
		length= fread(str, 1, wordlenght, fp);
		str[length] = 0;
		fclose(fp);
	}
	if(argv[1][1] == 'w'){
		int count = 0;
		for(int i = 0;i < length;i++){
			if(word[i] == ',' || word[i] == ' ' || word[i] == '.')
				count++; 
		}
		printf("wordCount：%d",count);
	}
	if(argv[1][1] == 'c')
		printf("charCount：%d",length);
	getchar();
	return 0;
}