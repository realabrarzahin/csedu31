#include <stdio.h>

#define NUM_COL 6
#define MAXLINE 1000

int get_line(char line[], int limit) {

  int c;
  int len = 0;

  while ((c = getchar()) != EOF && c != '\n' && limit--) {
    line[len] = c;
    len++;
  }

  if (c == '\n') {
    line[len] = '\n';
    len++;
  }

  line[len + 1] = '\0';

  return len;
}

void detab(char line[], char line_notab[]) {

  int i = 0;
  int k = 0;

  while (line[k] != '\0') {
    if (line[k] == '\t') {
      for (int j = 0; j < NUM_COL; j++) {
        line_notab[i] = ' ';
        i++;
      }

      k++;
    } else {
      line_notab[i] = line[k];

      k++;
      i++;
    }
  }
}

void clear_line(char line[], int size){

  int i = 0;
  while(line[i] != '\0'){
    line[i] = '\0';
    i++;
  }
}


int main() {

  int len;
  char line[MAXLINE];
  char line_notab[NUM_COL * MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {

    detab(line, line_notab);
    printf("%s", line_notab);

    clear_line(line_notab, NUM_COL * MAXLINE);
    clear_line(line, MAXLINE);
  }

  return 0;
}
