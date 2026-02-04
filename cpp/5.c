#include <stdio.h>
int main() {
	int n,choice,above=0,marks[50],max,min,sum=0;
	float avg = 0;
	printf("Enter no.  of stud: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
	    printf("Enter marks of student %d: ",i+1);
	    scanf("%d",&marks[i]);
	    sum+=marks[i];
	}
	avg = (float)sum/n;
	max=min=marks[0];
	for(int i=0;i<n;i++){
	    if(marks[i]>max){
	        max=marks[i];
	    }
	    if(marks[i]<min){
	        min=marks[i];
	    }
	    if(marks[i]>avg){
	        above++;
	    }
	}
	do{
	    printf("\n---MENU---\n");
	    printf("1.avg\n2.highest\n3.lowest\n4.above avg\n5.exit\n");
	    printf("enter choice:");
	    scanf("%d",&choice);
	    if(choice==1){
	        printf("class avg: %.2f\n",avg);
	    }
	    else if(choice==2){
	        printf("high marks: %d\n",max);
	    }
	    else if(choice==3){
	        printf("lowest marks: %d\n",min);
	    }
	    else if(choice==4){
	        printf("above avg: %d\n",above);
	    }
	    else if(choice==5){
	        printf("exiting\n");
	    }
	    else{
	        printf("invalid\n");
	    }
	}while(choice!=5);
	return 0;
	
}

