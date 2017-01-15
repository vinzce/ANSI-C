#include <stdio.h>

int main() {
  int c;

  c = getchar(); //gets char
  while( c != EOF) {
    putchar(c); //place char
    c = getchar();
  }
}
