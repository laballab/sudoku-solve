#include <stdio.h>

void show_grid(char *grid_data) {
  printf("%s", grid_data);
}

int main(int argc, char *argv[]) {
	printf("*==[Sudoku Solver]==*\n");
  if (argc == 2) {
    show_grid(argv[1]);
  }

	return 0;
}

