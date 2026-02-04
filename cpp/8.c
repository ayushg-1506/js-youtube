#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
struct employe{
    int id;
    char name[50];
    int age;
    float sal;
};
int main() {
    struct employe emp[MAX];
    struct employe *ptr=emp;
    int n=0, choice;
    do{
        printf("---Emp record sys--\n");
        printf("1.add\n2.display\n3.exit\n");
        printf("enter choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(n<MAX){
               printf("enter emp id:");
               scanf("%d",&(ptr+n)->id);
               printf("enter emp name:");
               scanf("%s",(ptr+n)->name); 
               printf("enter emp age:");
               scanf("%d",&(ptr+n)->age); 
               printf("enter emp sal:");
               scanf("%f",&(ptr+n)->sal); 
               n++;
            }
            else{
                printf("\nrecord full\n");
            }
        }
        else if(choice==2){
            if(n==0){
                printf("\nempty\n");
            }
            else{
                printf("\n%-10s %-20s %-10s %-10s\n","Emp_id","Emp_name","Emp_age","Emp_sal");
                printf("--------------------------------\n");
                for(int i=0;i<n;i++){
                    printf("%-10d %-20s %-10d %-10.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->age,(ptr+i)->sal);
                }
            }
        }
        else if(choice==3){
            printf("exit..\n");
        }
        else{
            printf("\ninvalid choice\n");
        }
        
        
    }while(choice!=3);
	return 0;
}

