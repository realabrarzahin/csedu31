#include <stdio.h>

#define TAB_SIZE 4
#define MAXLINE 1000

int get_line(char line[], int limit){

  int len = 0;
  int c;

  while((c = getchar()) != '\n' && c != EOF && limit--){
    line[len] = c;
    len++;
  }
  
  line[len] = '\0';

  return len;
}

void entab(char line[], char line_entab[]){
  
  int i =  0;

  int l = -1, r = -1;

  while(line[i] != '\0'){
    if(line[i] == ' '){
       if(l == -1) l = i;
       else r = i;
    }
    else{
  
      if(l != -1 && r != -1){
        int tab = (r - l + 1) / TAB_SIZE;
        int space = (r - l + 1) % TAB_SIZE;
        
        

         
        i = i - (tab * 3);
      }

      l = -1;
      r = -1;
    }

    i++;
  }

}
void clear_line(char line[], int size){

  int i = 0;

  while(line[i] != '\0'){
    line[i] = '\0';
    i++;
  }

}

int main(){
  
  int len;
  char line[MAXLINE];
  char line_entab[MAXLINE];

  while((len = get_line(line, MAXLINE)) > 0){

    entab(line, line_entab);

    printf("%s\n", line_entab);

    clear_line(line, MAXLINE);
    clear_line(line_entab, MAXLINE);
  }

  return 0;
}
