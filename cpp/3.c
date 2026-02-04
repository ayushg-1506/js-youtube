#include <stdio.h>
int main() {
	int pin,choice;
	float amnt , bal = 5000;
	printf("Enter pin:");
	scanf("%d",&pin);
	if(pin != 1234){
	    printf("Invalid\n");
	    return 0;
	}
	do{
	    printf("\n---ATM---\n");
	    printf("1.Withdraw\n2.Balance\n3.exit\n");
	    printf("Enter choice:");
     	scanf("%d",&choice);
     	if(choice==1){
     	    printf("Enter amnt:");
	        scanf("%f",&amnt);
	        if(amnt<=bal){
	            bal-=amnt;
	            printf("collect cash\nbalance=%.2f\n",bal);
	        }
	        else{
	            printf("iinsuf bal\n");
	        }
     	}
     	else if(choice==2){
     	    printf("balance=%.2f\n",bal);
     	}
     	else if(choice==3){
     	    printf("thenks\n");
     	}
     	else{
     	    printf("Invalidchoice\n");
     	}
	}while(choice!=3);
	return 0;
	
}

