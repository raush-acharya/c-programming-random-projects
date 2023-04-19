# include <stdio.h>
main (){
	int f1,f2,i1,i2,rf,ri,s;
	printf("enter first distance(feet,inch):");
	scanf("%d,%d",&f1,&i1);
	printf("enter second distance(feet,inch):");
	scanf("%d,%d",&f2,&i2);
	rf=f1+f2;
	ri=i1+i2;
	if (ri>=12){
		s=ri/12;
		rf=rf+s;
		ri=ri-(s*12);
	}
	printf("%d feet and %d inches",rf,ri);
	}
