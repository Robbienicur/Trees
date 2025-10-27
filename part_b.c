#include <stdio.h>

#define MAX_FULL 11
int root_full = 0;            // index of the root
int numElements_full = 11;    // total stored elements
char nodes_full[MAX_FULL] = {
  /*0*/ 'G',
  /*1*/ 'D', /*2*/ 'I',
  /*3*/ 'B', /*4*/ 'F', /*5*/ 'H', /*6*/ 'J',
  /*7*/ 'A', /*8*/ 'C', /*9*/ 'E', /*10*/ 'K' // new node to make it full
};
// 'F' is at index 4 with children 9 ('E') and 10 ('K')

int main(void) {
  return 0;
}
