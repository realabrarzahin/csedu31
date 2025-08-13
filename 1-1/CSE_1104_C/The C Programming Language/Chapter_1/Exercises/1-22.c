#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit) {
  int c;
  int line_len = 0;

  while (((c = getchar()) != '\n') && (c != EOF) && limit--) {
    if (!line_len && c == ' ')
      continue;

    else {
      line[line_len] = c;
      line_len++;
    }
  }

  line[line_len] = '\0';
  line_len++;

  return line_len;
}

void print_line(char line[]) { printf("%s\n", line); }

void init_line(char line[], int limit) {
  while (limit--) {
    line[limit] = '\0';
  }
}

void fold_line(char line[], char folded[], int limit) {
  int space_start = 0;

  int i = 0;
  int j = 0;
  int col = 0;

  while (line[i] != '\0') {

    if (line[i] == ' ' && col == 4) {
      if (folded[j] != '\n') {
        folded[j] = '\n';
        j++;
      }
    }

    else if (line[i] != ' ' && col == 4) {
      col = 0;

      folded[j] = line[i];
      j++;
    }

    else if (line[i] == ' ' && !space_start) {
      space_start = 1;

      folded[j] = line[i];
      j++;
    }

    else if (line[i] == ' ' && space_start) {
      folded[j] = line[i];
      j++;
    }

    else if (line[i] != ' ' && space_start) {

      space_start = 0;
      col++;

      folded[j] = line[i];
      j++;
    } else {
      folded[j] = line[i];
      j++;
    }

    i++;
  }
}

int main() {

  char line[MAX_LINE];
  char folded[MAX_LINE];

  int len = 0;

  while ((len = get_line(line, MAX_LINE)) > 0) {

    fold_line(line, folded, MAX_LINE);

    print_line(folded);

    init_line(line, MAX_LINE);
    init_line(folded, MAX_LINE);
  }

  return 0;
}
