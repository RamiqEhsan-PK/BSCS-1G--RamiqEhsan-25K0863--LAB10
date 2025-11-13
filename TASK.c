#include <stdio.h>
#include <string.h>

int main(){

char word[4][10]={
	"Apple",
	"Grapes",
	"Banana",
	"Orranges"
};

strcpy(word[1],"Mango");

int i =0;
int j= 0;
for(i; i<4; i++){
	puts(word[i]);
	
	for(j;word[i][j]!='\0';j++){
		printf("%c\n",word[i][j]);
	}
	j=0;
	
	printf("word count: %d\n\n",strlen(word[i]));
	
	
}



return 0;
}

