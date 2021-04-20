/*
 ============================================================================
 Name        : Program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,rev=0,remain,choice;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
    printf("The entered number in words is :");
	while(num != 0){
		remain = num % 10;
		rev = rev * 10 + remain;
		num = num / 10;
	}

	while (rev != 0){
		choice = rev % 10;
		switch(choice){
		case 0 :
			printf(" Zero");
			break;
		case 1:
			printf(" One");
			break;
		case 2:
			printf(" Two");
			break;
		case 3:
			printf(" Three");
			break;
		case 4:
			printf(" Four");
			break;
		case 5:
			printf(" Five");
			break;
		case 6:
			printf(" Six");
			break;
		case 7:
			printf(" Seven");
			break;
		case 8:
			printf(" Eight");
			break;
		case 9:
			printf(" Nine");
			break;
		default:
			printf("Wrong");
		}
	rev = rev / 10;
	}
	return EXIT_SUCCESS;
}
