#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sudoku_board {
  int count_remaining[9];
  int grid[9][9];
};

void deserialize_puzzle(char *puzzle_file) {
  struct sudoku_board game_board = { .count_remaining = { 9 }, .grid = { {0, 0}, {0, 0}  } };
  FILE *fp;
  char buff[128];

  fp = fopen(puzzle_file, "r");
  fscanf(fp, "%s", buff);
  fscanf(fp, "%s", buff);
  printf("1 : %s\n", buff);
  
  for(int row = 0; row < 9; row++) {
    for(int col = 0; col < 9; col++) {
      if(buff[row * 9 + col] != '.') {
        int value = atoi(&buff[row * 9 + col]);
        game_board.grid[col][row] = value;
        game_board.count_remaining[value]--;
      }
    }
  }
  printf("%s\n", game_board.grid);
}

void show_grid(char *grid_data) {
  // TODO function to render the game grid 
  printf("%s\n", grid_data);
}

int main(int argc, char *argv[]) {
	printf("*==[Sudoku Solver]==*\n");
  if (argc == 2) {
    deserialize_puzzle(argv[1]);
  } else {
	  printf("Input a puzzle!\n");
  }

	return 0;
}
