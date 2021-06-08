#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void print_date( date * d ) {
    printf( "date : %d/%d/%d\n" , d->jour , d->mois , d->an );

}

date * create_date( int jour , int mois , int an ) {
    date * d = malloc( sizeof( date ) );
    d->jour = jour;
    d->mois = mois;
    d->an = an;
}




