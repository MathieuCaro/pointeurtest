#include <stdio.h>
#include <stdlib.h>

int swap_char(char *a, char *b){
    //printf("Avant : La valeur de a est : %c et la valeur de b est : %c \n",*a,*b);
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //printf("Apres : La valeur de a est : %c et la valeur de b est : %c\n",*a,*b);
    return 0;
}

int add_two_int( int *a, int *b){
    printf("a = %d et b = %d\n", *a, *b);
    int somme = *b + *a;
    *a = somme;
    printf("a = %d et b = %d\n", *a, *b);
    return 0;
}

int equal_zero(int tab[], int size){
    int *pointeur;
    pointeur=tab;
    for(int i=0;i<size;i++){
        if(*pointeur ==0){
            printf("%d\n",i);
        }
        pointeur++;
    }
    return 0;
}

int copy_array(int tab[], int tab2[], int size){
    int *pointeur1, *pointeur2;
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        pointeur2 = pointeur1;
        printf("%d : %d\n", i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
}

int print_array(int tab[], int size){
    int *pointeur;
    pointeur = tab;
    for(int i=0;i<size;i++){
        printf("%d : %d\n", i,*pointeur);
        pointeur++;
    }

}

int swap_array(int tab[], int tab2[], int size){
    printf("Avant changement :\n");
    printf("Tableau 1 :           Tableau 2\n");
    int *pointeur1, *pointeur2;
    int *a,*b,temp;
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        printf("%d : %d           %d :  %d \n", i,*pointeur1,i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
    printf("Apres changement :\n");
    printf("Tableau 1 :           Tableau 2\n");
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        temp = *pointeur1;
        *pointeur1 = *pointeur2;
        *pointeur2 = temp;
        printf("%d : %d           %d :  %d \n", i,*pointeur1,i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
}

int length_string(char *string){
    int i=0;
    while(string[i]){
        i++;
    }
    //printf("La taille de la chaine est de : %d",i);
    return i;
}

/*int reverse(char *tab){
    char tab2[]="";
    char *pointeur1, *pointeur2;
    int size=length_string(tab);
    pointeur1 = &tab[size];
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        *pointeur2=*pointeur1;
        pointeur1--;
        printf("%c",pointeur2);
        pointeur2++;
    }
    return 0;
}*/

void inverse_string(char* string){
    //printf("taille chaine :%s",*string);
    int length = length_string(string);
    //printf("taille chaine :%d",length);
    char* pt;
    char* pt_end = string+length-1;
    for(pt = string; pt < string + length/2; pt++){
        //printf("taille chaine :%s",string);
        swap_char(pt,pt_end);
        pt_end--;
    }
}
