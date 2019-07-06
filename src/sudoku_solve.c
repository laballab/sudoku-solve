#include <stdio.h>
#include "../include/sudoku_solve.h"

struct sudoku_board {
  int count_remaining[9] ;
  int grid[9][9] ;
} board;

int main(int argc, char *argv[]) {
	printf("*==[Sudoku Solver]==*\n");
  if (argc == 2) {
    show_grid(argv[1]);
  } else {
	  printf("Input a puzzle!\n");
  }

	return 0;
}

void show_grid(char *grid_data) {
  // TODO function to render the game grid 
  printf("%s\n", grid_data);
}



