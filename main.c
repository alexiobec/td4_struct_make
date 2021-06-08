#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void main( ) {
    date * d = malloc( sizeof( date ) );
    d->jour = 8;
    d->mois = 6;
    d->an = 2021;
    print_date( d );

}