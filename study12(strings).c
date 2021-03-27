#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
char string1[100];
char string2[100];

void write1(){
	printf("paragraph 1: ");
	for(i = 0; i < 100; i++){
		scanf("%s", &string1[i]);		
	}
}

void write2(){
	printf("paragraph 2: ");
	for(i = 0; i < 100; i++){
		scanf("%s", &string1[i]);		
	}
}

void concat(){
	strcat(string1,string2);
}

void display(){
	printf("Concatinated Paragraph: %s", string1);
}
int main()
{
	int ch;
		printf("\t\t***Options***");
		printf("\n\t1. Write paragraph 1(max 100 characters)");
		printf("\n\t2. Write paragraph 2(max 100 characters)");
		printf("\n\t3. Concatinate both paragraphs");
		printf("\n\t4. Display paragraphs");
		printf("\n\nSelect an option:");
	scanf("%d", &ch);
		switch(ch){
			case 1:
				write1();
				break;
			case 2:
				write2();
				break;
			case 3:
				concat();
				break;
			case 4:
				display();
				break;
			default:
				printf("Wrong choice!!");
		}
	return 0;
}
