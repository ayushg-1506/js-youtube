#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <ctype.h>
int main() {
    char str[100],org[100], *s,*e,temp;
    int len=0;
    printf("enter string:");
    scanf("%s",str);
    strcpy(org,str);
    char *ptr=str;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    s=str;
    e=str+len-1;
    while(s<e){
        temp = *s;
        *s=*e;
        *e=temp;
        s++;
        e--;
    }
    printf("\noriginal string:%s\n",org);
    printf("rev string:%s\n",str);
    printf("string len:%d\n",len);
    
}

