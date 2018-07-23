#include <stdio.h>


void main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

int age;
setbuf(stdout, NULL);
	printf("My Name is XYZ");
	printf("\n \t enter my age \n");
	//fflush(stdout);
	scanf("%d",&age);
	printf("\n my age is %d",age);
	//fflush(stdout);


}
