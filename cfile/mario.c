#include <stdio.h>

#define BOARD_WIDTH 80
#define BOARD_HEIGHT 24

char board[BOARD_HEIGHT][BOARD_WIDTH];

int player_x, player_y;

void move_player(int dx, int dy) {
    int new_x = player_x + dx;
    int new_y = player_y + dy;
    if (new_x >= 0 && new_x < BOARD_WIDTH && new_y >= 0 && new_y < BOARD_HEIGHT) {
        player_x = new_x;
        player_y = new_y;
    }
}

int main() {
    // Initialize the game board
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if (y == BOARD_HEIGHT - 1) {
                board[y][x] = '_';  // Ground
            } else {
                board[y][x] = ' ';  // Air
            }
        }
    }
    board[BOARD_HEIGHT - 2][0] = 'M';  // Mario
    player_x = 0;
    player_y = BOARD_HEIGHT - 2;

    // Game loop
    while (1) {
        // Print the game board
        for (int y = 0; y < BOARD_HEIGHT; y++) {
            for (int x = 0; x < BOARD_WIDTH; x++) {
                putchar(board[y][x]);
            }
            putchar('\n');
        }

        // Prompt the player for a direction to move
        printf("Enter a direction to move (up, down, left, right): ");
        char direction[10];
        scanf("%s", direction);

        // Call the player's movement function with the chosen direction
        if (strcmp(direction, "up") == 0) {
            move_player(0, -1);
        } else if (strcmp(direction, "down") == 0) {
            move_player(0, 1);
        } else if (strcmp(direction, "left") == 0) {
            move_player(-1, 0);
        } else if (strcmp(direction, "right") == 0) {
            move_player(1, 0);
        }

        // Update the game board to reflect the player's new position
        board[player_y][player_x] = 'M';
        board[player_y][player_x - 1] = ' ';
        if (player_x == BOARD_WIDTH - 1) {
            // Victory!
            printf("You win!\n");
            break;
        }
    }

    return 0;
}