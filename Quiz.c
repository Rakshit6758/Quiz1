#include<stdio.h>
#include<stdlib.h>
main()
{
	int score=0;
	char answer;
	char name[30];
	int enroll;
	puts ("*******************************************************************");
	puts ("          multiple choice questions examination                    ");
	puts ("                  total marks=20*2=40                              ");
	puts ("                  no. of questions=20                              ");
	puts ("*****************************************************************\n");
	
	//user basic given data 
	printf("Candidate name:");
	gets(name);
	//question and solutions 
	puts("\n1. printf is a predefined funtion!");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n2. which function is used to take the input!");
	puts("A.printf\nB.scanf\nC.int mai()\nD.#include<stdio.h>");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='B')||(answer=='b'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n3. printf and scanf works under the directory of _____");
	puts("A.#include<math.h>\nB.#include<stdio.h>\nC.#include<cs50.h>\nD.none of the above");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='B')||(answer=='b'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n4. Who invented C language?");
	puts("\nA.rabindr nath tagore\nB.mahatma gandhi\nC.Dennis Ritchie\nD.none of these");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='c')||(answer=='C'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n5. C language was invented in which year?");
	puts("A.1972\nB.1947\nC.1987\nD.1927");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n6. What is the storage size of float?");
	puts("A.3\nB.4\nC.6\nD.8");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='b')||(answer=='B'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n7. What is the storage size of double?");
	puts("A.8\nB.10\nC.2\nD.6");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='a')||(answer=='A'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n8. What is the storage size of long double?");
	puts("A.2\nB.6\nC.8\nD.10");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='d')||(answer=='D'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n9 float is a data type");
	puts("A.true\nB.false");
	printf("Ans:");
	sscanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else 
	{
	score=score-1;
	}
	puts("\n10. 500.0 is an integer value in c language");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='b')||(answer=='B'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n11. How many keywords are thier in c language");
	puts("A.42\nB.32\nC.56\nD.none of these");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='b')||(answer=='B'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n12. Character(char).Represents letters,digits,punctuation marks and control characters.");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n13. strings(string). Represents the sequences of integers");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='b')||(answer=='B'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n14. variables are only visible after thier declaration and in the block they have been declared.");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n15. several variable can be declared together.");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n16. double represents the set of real numbers.");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n17. What is the storage size of int.");
	puts("A.2\nB.4\nC.8\nD.6");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n18. Which of them is not a float value.");
	puts("A.23.8\nB.67.6\nC.56\nD.23.0");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='C')||(answer=='c'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	puts("\n19. C programs are converted into machine code using a program called compiler");
	puts("A.true\nB.false");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='A')||(answer=='a'))
	{
		score=score+2;
	}
	else 
	{
		score=score-1;
	}
	puts("\n20. DirectX game file is written in which computer language");
	puts("A.java#\nB.c++\nC.C\nD.rubby");
	printf("Ans:");
	scanf("%c",&answer);
	if ((answer=='c')||(answer=='C'))
	{
		score=score+2;
	}
	else
	{
		score=score-1;
	}
	//score calculations
	puts("\n**************************************************************************");
	puts("************************************\n");
	printf("%s scored %d out of 40\n",name,score);
	puts("\n**************************************");
	puts("***************************************\n");
	puts("Press enter for the answer sheet");
	getch();
	puts("1.a,2.b,3.b,4.c,5.a,6.b,7.a,8.d,9.a,10.b,11.b,12.a,13.b,14.a,15.a,16.a,17.a or b,18.c,19.a,20.c");
	}
