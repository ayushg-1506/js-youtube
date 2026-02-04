#include <stdio.h>
#include <string.h>
#include <ctype.h>
void tpc(char str[]){
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
    }
}
int main() {
    int n,f=0,tc=0;
    char temp[50],search[50];
    printf("enter np. of students: ");
    scanf("%d",&n);
    char names[n][50];
    printf("enter names of %d students:\n",n);
    for(int i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("enter name to search: ");
    scanf("%s",search);
    for(int i=0;i<n;i++){
        if(strcmp(names[i],search)==0){
            printf("name found at post %d(after sort): \n",i+1);
            f =1;
            break;
        }
    }
    if(!f){
        printf("Name %s not found in the list.\n", search);
    }
    for(int i=0;i<n;i++){
        tc+=strlen(names[i]);
    }
    for(int i=0;i<n;i++){
        tpc(names[i]);
    }
    printf("Names of students in alphabetical order(UC):\n");
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    printf("total no. of char in all names: %d \n",tc);
	return 0;
}

