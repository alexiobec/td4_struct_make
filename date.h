#ifndef DATE
#define DATE

typedef struct _Date {
    int jour;
    int mois;
    int an;
} date;

void print_date( date * d );
date * create_date( int jour , int mois , int an );

#endif