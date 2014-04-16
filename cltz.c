#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args) {
	int num_rows, pos, target_pos;

	scanf("%d %d %d", &num_rows, &pos, &target_pos);

	int num_moves = 0;

	int pos_2_counter = 0;

	while (pos != target_pos) {
		num_moves++;

		// printf("#%d: pos = %d, target_pos = %d\n", num_moves, pos, target_pos);

		if (pos % 2 == 0)
			pos /= 2;
		else 
			pos = 3 * pos + 1;

		if (pos == target_pos) {
			printf("%d\n", num_moves);
			return 0;
		}

		if (pos < 1 || pos > num_rows) {
			printf("%d\n", -1);
			return 0;
		}

		if (pos == 2) {
			pos_2_counter++;
		}

		if (pos_2_counter == 9) {
			printf("%d\n", -1);
			return 0;
		}
	}

	printf("%d\n", num_moves);

	return 0;
}
