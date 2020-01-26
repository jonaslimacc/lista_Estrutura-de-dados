#include <stdio.h>
#include <string.h>

int main(){
    char palav1[20], palav2[20];
    int i;
    int tamPalav1, tamPalav2;
    int contPalav1, contPalav2;

    printf("1a palavra:");
    fgets(palav1,20,stdin);
    printf("2a palavra:");
    fgets(palav2,20,stdin);

    tamPalav1 = strlen(palav1);
    tamPalav2 = strlen(palav2);

    if((tamPalav1!=tamPalav2)||(strcmp(palav1,palav2)==0)){
        printf("\nNao sao anagramas.\n");
        return 0;
    }
    for (i=0;i<tamPalav1;i++){
        contPalav1 += palav1[i];
    }
        for(i=0;i<tamPalav2;i++){
            contPalav2 += palav2[i];
            }
    contPalav1==contPalav2 ? printf("\nSao anagramas.\n") : printf("\nNao sao anagramas.\n");
    return 0;
}

