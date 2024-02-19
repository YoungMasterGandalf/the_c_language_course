#include <stdio.h>
#include <poll.h>

int main() {
    int left_pipe_pos = 20; // must be >= 0
    int width = 50; // must be non-zero positive

    int star_pos_index = left_pipe_pos + 1;
    int right_pipe_pos = left_pipe_pos + width + 1;

    int direction = 1; // 1 = incrementing, -1 = decrementing

    int star_left_pipe_offset;
    int star_right_pipe_offset;

    while (1) {
        star_left_pipe_offset = star_pos_index - left_pipe_pos;
        star_right_pipe_offset = right_pipe_pos - star_pos_index;
        printf("%*s|", left_pipe_pos - 1, "");
        printf("%*s*", star_left_pipe_offset, "");
        printf("%*s|\r", star_right_pipe_offset, "");
        fflush(stdout);

        star_pos_index += direction;

        if (star_pos_index == left_pipe_pos || star_pos_index == right_pipe_pos) {
            direction *= -1;
        }

        poll(NULL, 0, 50);
    }
}
