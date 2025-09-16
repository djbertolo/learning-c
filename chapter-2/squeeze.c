#include <stdbool.h>
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
  char s1[] = "HELLO, THERE!";
  char s2[] = "HE";
  printf("%s , %s\n", s1, s2);
  squeeze(s1, s2);
  printf("%s , %s\n", s1, s2);
}

void squeeze(char s1[], char s2[]) {
  int left, right;

  for (left = right = 0; s1[left] != '\0'; left++) {
    int jleft;
    bool valid = true;
    for (jleft = 0; s2[jleft] != '\0'; jleft++) {
      if (s1[left] == s2[jleft]) {
        valid = false;
        break;
      }
    }
    if (valid) {
      s1[right++] = s1[left];
    }
  }
  s1[right] = '\0';
}
