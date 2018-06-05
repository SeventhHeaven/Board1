#include <stdio.h>



/* Board Size */
#define tate 5
#define yoko 7



/* Board */
static char masu[ tate ][ yoko ];





/* Initialize Board */
void init_masu( )
{
    int i, j;
    for ( i = 0 ; i < tate ; i++ ) {
        for ( j = 0 ; j < yoko ; j++ ) {
            masu[ i ] [ j ] = ' ';
        }
    }
    masu[ tate / 2 ][ yoko / 2 ] = '*' ;
}



/* Draw Board Line */
void print_line( )
{
    int i, j;
    for ( i = 0 ; i < yoko ; i++ ) {
        putchar( '-' );
    }
    putchar( '\n' );
}



/* Draw Board */
void print_masu( )
{
    int i, j;
    print_line();
    for ( i = 0 ; i < tate ; i++ ) {
        for ( j = 0 ; j < yoko ; j++ ) {
            putchar( masu[ i ] [ j ] );
        }
        putchar( '\n' );
    }
    print_line();
}



/* Move Down */
int move_down( )
{
    int i, j;
    for ( i = 0 ; i < ( tate -1 ) ; i++ ) {
        for ( j = 0 ; j < yoko ; j++ ) {
            if ( ( masu[ i ] [ j ] == '*' ) && ( masu[ i + 1 ] [ j ] == ' ' ) ) {
                masu[ i ][ j ] = ' ';
                masu[ i + 1 ][ j ] = '*';
                return 1;
            }
        }
    }
    return 0;
}



/* Move Up */
int move_up( )
{
    int i, j;
    for ( i = 1 ; i < tate ; i++ ) {
        for ( j = 0 ; j < yoko ; j++ ) {
            if ( ( masu[ i ] [ j ] == '*' ) && ( masu[ i - 1 ] [ j ] == ' ' ) ) {
                masu[ i ][ j ] = ' ';
                masu[ i - 1 ][ j ] = '*';
                return 1;
            }
        }
    }
    return 0;
}



/* Move Right */
int move_right( )
{
    int i, j;
    for ( i = 0 ; i < tate ; i++ ) {
        for ( j = 0 ; j < ( yoko - 1 ) ; j++ ) {
            if ( ( masu[ i ] [ j ] == '*' ) && ( masu[ i ] [ j + 1 ] == ' ' ) ) {
                masu[ i ][ j ] = ' ';
                masu[ i ][ j + 1 ] = '*';
                return 1;
            }
        }
    }
    return 0;
}



/* Move Left */
int move_left( )
{
    int i, j;
    for ( i = 0 ; i < tate ; i++ ) {
        for ( j = 1 ; j < yoko ; j++ ) {
            if ( ( masu[ i ] [ j ] == '*' ) && ( masu[ i ] [ j - 1 ] == ' ' ) ) {
                masu[ i ][ j ] = ' ';
                masu[ i ][ j - 1 ] = '*';
                return 1;
            }
        }
    }
    return 0;
}





/* main */
int main( int argc, char** argv ) {
    char c;
    init_masu();
    while ( 1 ) {
        system( "clear" );
        print_masu();
        puts( "Down:2 Up:8 Right:6 Left:4" );
        c = getchar();
        switch ( c ) {
            case '2':
                move_down();
                break;
            case '8':
                move_up();
                break;
            case '6':
                move_right();
                break;
            case '4':
                move_left();
                break;
        }
    }
}
