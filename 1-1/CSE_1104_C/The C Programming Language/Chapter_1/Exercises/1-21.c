#include <stdio.h>

#define MAX_LINE 1000
#define TAB_SIZE 4

int get_line(char line[], int limit) {

  int c;
  int len = 0;

  int space_flag = 0;

  while ((c = getchar()) != '\n' && c != EOF && limit--) {
    line[len] = c;
    len++;

    if (c != ' ')
      space_flag = 1;
  }

  len++;
  line[len] = '\0';

  if (space_flag)
    return len;
  else
    return 0;
}

void init_line(char line[]) {

  int i = 0;

  while (line[i] != '\0') {
    line[i] = '\0';
    i++;
  }
}

void print_line(char line[]) { printf("%s\n", line); };

void entab_line(char line[], char line_entab[], int limit) {

  int count_space = 0;
  int space_flag = 0;

  int i = 0;
  int j = 0;

  while (line[i] != '\0' && limit--) {

    if (line[i] == ' ' && !space_flag) {

      space_flag = 1;
      count_space++;

    } else if (line[i] == ' ' && space_flag) {

      count_space++;

    } else if (line[i] != ' ' && space_flag) {

      line_entab[j] = line[i];
      j++;

      int tabs = count_space / TAB_SIZE;
      int spaces = count_space % TAB_SIZE;

      for (int i = 0; i < tabs; i++) {

        line_entab[j] = '\t';
        j++;
      }

      for (int i = 0; i < spaces; i++) {

        line_entab[j] = ' ';
        j++;
      }

      count_space = 0;
      space_flag = 0;

    } else {

      line_entab[j] = line[i];
      j++;
    }

    i++;
  }
};

int main() {

  char line[MAX_LINE];
  char line_entab[MAX_LINE];

  init_line(line);
  init_line(line_entab);

  int len;

  while ((len = get_line(line, MAX_LINE)) > 0) {

    entab_line(line, line_entab, MAX_LINE);

    print_line(line_entab);

    init_line(line);
    init_line(line_entab);
  }

  return 0;
}
