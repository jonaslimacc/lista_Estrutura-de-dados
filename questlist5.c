#include<stdio.h>

int main(){
    int i,matriz1[2][2]={1,2,3,4};
    int j,matriz2[2][2]={5,6,7,8};

    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d + ",matriz1[i][j]);
            printf("%d ",matriz2[i][j]);
            printf(" = %d| ",matriz1[i][j]+matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}