#include <stdio.h>

#include "pointeurs.h"

int main(){
    char a='a',b='b';
    int tab[10]={1,2,3,4,0,2,13,54,0,7};
    int tab2[10]={0};
    int tab3[10]={10,9,8,7,6,5,4,3,2,1};
    char chaine[] = "bonjour";
    //swap_char(&a, &b);
    //add_two_int( &a,&b);
    //equal_zero(tab,10);
    //copy_array(tab,tab2,10);
    //print_array(tab,10);
    //swap_array(tab,tab3,10);
    //length_string("Hello World!");
    //reverse("Bonjour");
    //char str[]="Bonjour";
    //printf("%c",reverse(str));
    inverse_string(chaine);
    printf("Inversement de la chaine : %s\n",chaine);
    return 0;
}
