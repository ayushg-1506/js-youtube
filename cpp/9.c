#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char name[100],sname[100];
    int f=0,c,n;
    do{
        printf("\n---student menu--\n");
        printf("1.write\n2.read\n3.search name\n4.exit\n");
        printf("enter c:");
        scanf("%d",&c);
        if(c==1){
            fp = fopen("stduent.txt","w");
            if(fp==NULL){
                printf("error opening\n");
                return 0;
            }
            printf("enter no. of student:");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                printf("enter name of student %d:",i+1);
                scanf("%s",name);
                fprintf(fp,"%s\n",name);
            }
            fclose(fp);
            printf("names entered succesfully\n");
        }
        else if(c==2){
            fp = fopen("stduent.txt","r");
            if(fp==NULL){
                printf("file not found\n");
                break;
            }
            printf("\n---names in file---\n");
            while(fscanf(fp,"%s",name)!=EOF){
                printf("%s\n",name);
            }
            fclose(fp);
        }
        else if(c==3){
            fp = fopen("stduent.txt","r");
            if(fp==NULL){
                printf("file not found\n");
                break;
            }
            printf("enter name to search: ");
            scanf("%s",sname);
            int i=0;
            while(fscanf(fp,"%s",name)!=EOF){
                i++;
                if(strcmp(name,sname)==0){
                    printf("name %s found at %d\n",sname,i);
                    f=1;
                    break;
                }
            }
            if(!f){
                printf("name not found\n");
            }
            fclose(fp);
        }
        else if(c==4){
            printf("exiting...\n");
        }
        else{
            printf("invalid\n");
        }
    }while(c!=4);
}

