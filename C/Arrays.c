#include<iostream>

void show_bytes (char *start, int len);
void show_int (int x);

int main (void) {
  int a = 12345; //represented as 0x00003039
  printf("int a = 12345;\n");
  show_int (a); //show_bytes( (byte *) &a, sizeof(int));
}

void show_bytes (char *start, int len) {
  int i;
  for (i = 0; i < len; i++) {
    printf("%p\t0x%.2x\n", start+i, *(start + i));
  }
  printf ("\n");
}

void show_int (int x)
  show_bytes ((char *) &x, sizeof(int));
}
