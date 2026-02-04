#include <stdio.h>
int main() {
	int n,age,basefare, fare,subtotal=0,gst,total;
	char gender;
	printf("Enter total no of passengers:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    printf("\nPassenger %d\n",i);
	    printf("Enter age:");
	    scanf("%d",&age);
	    printf("Enter gender(M/F):");
	    scanf(" %c", &gender);
	    printf("Enter basefare:");
	    scanf("%d",&basefare);
	    if(age<5  || gender=='F'||gender=='f'){
	        fare=0;
	    }
	    else if(age>60){
	        fare = basefare*0.7;
	    }
	    else{
	        fare = basefare;
	    }
	     printf("Payable fare: %d\n",fare);
	    subtotal+=fare;
	}
	gst = subtotal*0.05;
	total=subtotal+gst;
	printf("\nSubtotal: %d\n",subtotal);
	printf("GST(5%%): %d\n",gst);
	printf("Total Fare: %d\n",total);
	
	

}

