#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void prepara(char * s,int choice,char * s2)
{
	char killcomputer[200];
	sprintf(killcomputer,"/Applications/MATLAB_R2015b.app/bin/matlab -nodesktop -nosplash -nojvm -r \"coicetotal(%d,'%s','",choice,s);
	strcat(killcomputer,s2);
	strcat(killcomputer,"');\"\n");
	puts(killcomputer);
	system(killcomputer);
}
void jmenu()
{
	char s[25];
	system("clear");
	int res;
	printf("Loja de efeitos:\n\n1 - Delay - 10$\n2 - Flanger - 15$\n3 - Tremolo - 15$\n4 - Wah-Wah - 25$\n\n");
	scanf("%d",&res);
	getchar();
	system("clear");

	printf("Insira o nome do ficheiro a cagar tacos!\n");
	gets(s);
	switch(res)
	{
		case 1:
		{
			prepara(s,1,"out_delay.wav");
			break;
		}
		case 2:
		{
			prepara(s,2,"out_flang.wav");
			break;
		}
		case 3:
		{
			prepara(s,3,"out_trem.wav");
			break;
		}
		case 4:
		{
			prepara(s,4,"out_wah.wav");
			break;
		}
	}
}
int main()
{
	jmenu();
}