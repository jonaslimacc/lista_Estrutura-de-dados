#include<stdio.h>

int main(){
    int i,j,matriz1[2][2]={1,2,3,4};
    printf("Matriz:\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d ",matriz1[i][j]);
        }
        printf("\n");
    }
    printf("Transposta:\n");
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d ",matriz1[j][i]);
        }
        printf("\n");
    }
    return 0;
}