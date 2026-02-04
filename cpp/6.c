#include <stdio.h>
void read(int r,int c,int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter element[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void displaymat(int r,int c,int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void multiplymat(int m,int n,int q,int A[m][n],int B[n][q],int C[m][q]){
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            C[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            for(int j=0;j<q;j++){
                C[i][j]+=(A[i][k]*B[k][j]);
            }
        }
    }
    
}
int main() {
	int m,n,p,q;
	printf("Enter the row and column of matrix A:");
	scanf("%d %d", &m,&n);
	printf("Enter the row and column of matrix B:");
	scanf("%d %d", &p,&q);
	if(p!=q){
	    printf("Matrix multiplication not possible!\n");
	    return 0;
	}
	int A[m][n],B[p][q],C[m][q];
	printf("\nEnter the elements of matrix A:\n");
	read(m,n,A);
	printf("\nEnter the elements of matrix B:\n");
	read(p,q,B);
	
	multiplymat(m,n,q,A,B,C);
	printf("Matrix A:\n");
	displaymat(m,n,A);
	printf("Matrix B:\n");
	displaymat(p,q,B);
	printf("Resultant Matrix c:\n");
	displaymat(m,n,C);
	return 0;
	
}

