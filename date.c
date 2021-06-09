#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void print_date( date * d ) {
    printf( "%d/%d/%d" , d->jour , d->mois , d->an );

}

date * create_date( int jour , int mois , int an ) {
    date * d = malloc( sizeof( date ) );
    d->jour = jour;
    d->mois = mois;
    d->an = an;
}

person * create_person( char * nom , char * prenom , date * naissance ) {
    person * p = malloc( sizeof( date ) );
    p->nom = nom;
    p->prenom = prenom;
    p->naissance = naissance;
}

void print_person( person * p ) {
    print_string( p->prenom );
    printf( " " );
    print_string( p->nom );
    printf( " est né le : " );
    print_date( p->naissance );
}

void print_string( char * s ) {
    while ( *s ) {
        printf( "%c" , *s );
        s++;
    }
}

int compare_date( date * date1 , date * date2 ) {
    if ( date1->jour == date2->jour ) {
        if ( date1->mois == date2->mois ) {
            if ( date1->an == date2->an ) {
                return 1;
            }
        }
    }
    return 0;
}

date * dupliquer_date( date * d ) {
    return create_date( d->jour , d->mois , d->an );
}

person * dupliquer_person( person * p ) {
    return create_person( p->nom , p->prenom , p->naissance );
}
