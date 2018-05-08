/*------------------------------------------------------
Student's Name: Utkarsh Chaudhary	
Student's email address:  uc129@uowmail.edu.au
Lab group (CLA/01, CLA/02,...): CLA 02
Purpose of this assignment:    • Bit-wise operations
			• Dynamic memory allocation
			• Text files
			• Software development, debugging and testing 
-------------------------------------------------------*/ 
#include <stdio.h>
#include <stdlib.h>  /* For exit() function. */
#include <errno.h>  /* For Error Messages */
#include <string.h>  /* For processing Strings */

void corruptData( unsigned char data[], int size );  /* A function used to corrupt data. */
void displayData(FILE* inFile);

extern int errno ; 



int main (int argc, char *argv[])
{

	if (*argv==NULL)  {   /* Checking if commandline argument is provided */

	printf("Insufficient number of arguments. The program has terminated.");
	exit(0);
   	}

FILE *inFile1;
int errnum;
char c[4];
char *array;
int size=0;

	inFile1 = fopen(argv[1], "r");   /* Opening file stream. "r" for read  */


	if( inFile1 == NULL){     /* Error Handling when not able to open file. */
		 errnum = errno;
		 fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
  		  exit(0);
 		 }
	
	
	c=fgets("%.4s"inFile);
	
		if (c[0]!="L"|| c[1]!=":"){
		printf("Wrong file format. The program has terminated.");
		exit(0);
		}
	
	sscanf(c,"%d",&size);
	

 	
char *array;
	array=(char*) malloc(size);
 	

		

	
	
	



return(0);
}






/*----------------------------CorruptData Function-------------------------------------*/

void corruptData( unsigned char data[], int size )
{
 int i;
 for(i=0; i<size; i++)
     {
	 if(i%2 == 0)
		 fileData[i] = fileData[i] ^ 0x1;  /*corrupt bit 0 */
 	else
		 fileData[i] = fileData[i] ^ 0x4;  /*corrupt bit 2 */
     }
 
 } 

/*----------------------------DisplayData Function-------------------------------------*/


void displayData(FILE* inFile)
    {
 	
	char c;


	c = fgetc(inFile);
  
 	while (c != EOF)
    		
	{
      		
		 printf("%c",c);
      		
		 c = fgetc(inFile);
    
	}
 
    	
		
	
   }











