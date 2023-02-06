//BIBLIOTHEKEN
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int WIDTH ;
int HEIGHT ;

//COUNTER
int counter = 0 ;

//CHARS
const char hashtag = '#' ;
const char new_line = '\n' ;
const char hn[2] = { hashtag , new_line } ;

//HASHTAG
char Hashtag() {
	++counter ;
	return hn[0] ;
}

//WEITE
void get_width() {
	int width_input ;
	printf( "Please enter the width..\n" ) ;
	scanf( "%d" , &width_input ) ;
	WIDTH = width_input ;
}

//HÖHE
void get_height() {
	int height_input ;
	printf( "Please enter the height...\n" ) ;
	scanf( "%d" , &height_input ) ;
	HEIGHT = height_input ;
}

//BAUEN
void build() {
	int how_row ;
	int how_col ;
	int sz[2] = { how_row , how_col } ;
	get_width() ;
	assert( WIDTH > 0 );
	get_height() ;
	assert( HEIGHT > 0 );
	for( sz[ 1 ] = 0 ; sz[ 1 ] < HEIGHT ; ++sz[ 1 ] ) {
		for( sz[ 0 ] = 0 ; sz[ 0 ] < WIDTH ; ++sz[ 0 ] ) {
			printf( "%c" , Hashtag() ) ;
		}
		printf( "%c" , hn[1] ) ;
	}
}

//MAIN
int main( void ) {
	printf( "Welcome to rect-builder2.0!!\n" ) ;
	build() ;
	printf( "\n%d Blocks were used\n" , counter ) ;
	exit(EXIT_SUCCESS) ;
}
