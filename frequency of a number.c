#include <stdio.h>
#include <string.h>

int main() {
  char num[1001];
  int digits[10] = {0}; // initialize all values to 0

  // read in the string
  scanf("%s", num);

  // find the frequency of each digit
  for (int i = 0; i < strlen(num); i++) {
    if (num[i] >= '0' && num[i] <= '9') {
      digits[num[i] - '0']++; // increment the count for the corresponding digit
    }
  }

  // print the frequency of each digit
  for (int i = 0; i < 10; i++) {
    printf("%d ", digits[i]);
  }
  printf("\n");

  return 0;
}



