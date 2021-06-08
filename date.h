#ifndef DATE
#define DATE

typedef struct _Date {
    int jour;
    int mois;
    int an;
} date;

void print_date( date * d );
date * create_date( int jour , int mois , int an );

typedef struct _Person {
    char * nom;
    char * prenom;
    date * naissance;
} person;

person * create_person( char * nom , char * prenom , date * naissance );
void print_person( person * p );
void print_string( char * s );

int compare_date( date * date1 , date * date2 );

date * dupliquer_date( date * d );
person * dupliquer_person( person * p );






#endif