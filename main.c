#include <stdio.h>

int WIDTH ;
int HEIGHT ;
int input_w ;
int input_h ;
const char hashtag_char = '#' ;
const char new_line = '\n' ;
int how_big_row;
int how_much_columns;

int counter = 0 ;

const char hashtag() {
	++counter ;
	return hashtag_char ;
}

int get_width() {
	printf( "Enter the width of the rect:\n" ) ;
	scanf( "%d" , &input_w ) ;
	WIDTH = input_w ;
	printf( "%d is the width.\n" , WIDTH ) ;
}

int get_height() {
	printf( "Enter height:\n" ) ;
	scanf( "%d" , &input_h ) ;
	HEIGHT = input_h ;
	printf( "%d is the height.\n" , HEIGHT ) ;
}

void build_rect() {
	get_width() ;
	get_height() ;
	for( how_much_columns = 0 ; how_much_columns < HEIGHT ; ++how_much_columns ) {
		for( how_big_row = 0 ; how_big_row < WIDTH ; ++how_big_row ) {
			printf( "%c" , hashtag() ) ;
		}
		printf( "%c" , new_line ) ;
	}
}

int main() {
	printf( "Welcome to rect-builder!!\n\n" ) ;
	build_rect() ;
	printf( "%d Blocks used" , counter ) ;
	return 0 ;
}
