#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "liste.h"

void main( ) {
    date * d = create_date( 8 , 6 , 2021 );
    date * h = create_date( 8 , 6 , 2021 );
    date * g = create_date( 8 , 7 , 2021 );
    //print_date( d );
    person * p = create_person( "Bec" , "Alexio" , d );
    //print_person( p );

    //printf("d est identique à h mais différent de g : \nd comparé à d : %d\nd comparé à h : %d\nd comparé à g :%d ", compare_date (d,d),compare_date (d,h),compare_date (d,g));
    date * i = dupliquer_date( d );
    person * q = dupliquer_person( p );
    //printf("adresse de d : %p \nadresse de sa copie : %p \nOn vérifie que les deux sont bien égales : %d\n",d,i,compare_date(d,i));
    //printf("adresse de p : %p \nadresse de sa copie : %p\n",p,q);
    Liste * vide = create_liste_nulle();
    //Liste * non_vide = insert_debut(d,vide);
    Liste * non_vide = create_liste(d);
    insert_fin(g,non_vide);
    Liste * non_vide1 = insert_debut( h , non_vide );
    Liste * non_vide2 = insert_debut( g , non_vide1 );
    print_liste(non_vide);


}