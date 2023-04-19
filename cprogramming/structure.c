#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
} s;

int main() {
	int i;
	char c;
    FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<3;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",s.name);
		printf("Enter roll no.: ");
		scanf("%d",&s.roll);
		printf("Enter marks: ");
		scanf("%d",&s.marks);
		fprintf(fptr,"\nName: %s \nRoll no.=%d \nMarks=%d \n",s.name,s.roll, s.marks);
	}
	fclose(fptr);
	
	
	 fptr = fopen("C:\\student.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
  
    fclose(fptr);
	
}
