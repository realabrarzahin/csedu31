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

  int space_start = 0;
  int space_count = 0;

  int i = 0;
  int j = 0;

  while (line[i] != '\0' && limit--) {

    if (line[i] == ' ' && !space_start) {

      space_start = 1;
      space_count++;
    } else if (line[i] == ' ' && space_start) {

      space_count++;
    } else if (line[i] != ' ') {

      space_start = 0;

      int tab_count = space_count / TAB_SIZE;
      int spc_count = space_count % TAB_SIZE;

      int iterate = tab_count + spc_count;

      while (tab_count || spc_count) {

        if (tab_count) {

          line_entab[j] = '\t';
          tab_count--;
          j++;
        } else if (spc_count) {

          line_entab[j] = ' ';
          spc_count--;
          j++;
        }
      }

      line_entab[j] = line[i];
      j++;

      space_count = 0;
    }

    i++;
  }
}

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
