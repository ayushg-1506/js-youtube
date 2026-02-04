#include <stdio.h>
int main() {
	int sid,isd,ism,isy,rd,rm,ry,td,dl,fine;
	printf("Enter id:");
	scanf("%d",&sid);
	printf("Enter issue date:");
	scanf("%d %d %d",&isd,&ism,&isy);
	printf("Enter return date:");
	scanf("%d %d %d",&rd,&rm,&ry);
	td = (ry-isy)*360 + (rm-ism)*30 + (rd-isd);
	if(td<=7){
	    printf("student id:%d\nNo fine.Thanks\n",sid);
	}
	else if(td>=8 && td<=15){
	    dl=td-7;
	    fine = dl*5;
	    printf("student id:%d\n fine:%d\n",sid,fine);
	}
	else if(td>=16 && td<=30){
	    dl=td-7;
	    fine = dl*10;
	    printf("student id:%d\n fine:%d\n",sid,fine);
	}
	else{
	    printf("student id:%d\n membership cancelled\n",sid);
	}
	return 0;
	
}

