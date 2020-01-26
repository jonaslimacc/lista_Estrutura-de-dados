#include<stdio.h>

int main(){
    int n1,n2,*max;
    printf("1o numero:");
    scanf("%i",&n1);
    printf("2o numero:");
    scanf("%i",&n2);
    if (n1>n2){
        max=&n1;
    }
    else {
        max=&n2;
    }
    printf("maior: %i",*max);
}

/*#include<stdio.h>
int main(){
    int n1,n2,*end1,*end2;
    printf("1o numero:");
    scanf("%i",&n1);
    printf("2o numero:");
    scanf("%i",&n2);
    if (n1>n2){
        end1=&n1;
        printf("maior: %i",*end1);
    }
    else {
        end2=&n2;
        printf("maior: %i",*end2);    
    }
}
*/