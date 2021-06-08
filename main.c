#include <stdio.h>
#include <stdlib.h>
#include "date.h"

void main( ) {
    date * d = create_date( 8 , 6 , 2021 );
    print_date( d );

}