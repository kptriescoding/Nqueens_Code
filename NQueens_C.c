
#include<stdio.h>
#include<stdlib.h>
void NQueens(int n,int k,int *x);
int Place(int k,int ind,int *x);
int main(){
    int n;
    printf("Enter the number of Queens\n");
    scanf("%d",&n);
    int x[n];
    printf("The possible Positions are\n");
    NQueens(n,0,x);
}


void NQueens(int n,int k,int *x){
    for(int i=0;i<n;i++){
    if(Place(k,i,x)){
        x[k]=i;
        if(k==n-1){
            for(int j=0;j<n;j++)
                printf(" %d ",x[j]);
            printf("\n");
            return;
        }
        NQueens(n,k+1,x);
    }
    }
}



int Place(int k,int ind,int *x){
for(int i=0;i<k;i++){
    if(x[i]==ind||abs(x[i] - ind) == abs(i - k))return 0;
}
return 1;
}