#include <stdio.h>

int htoi(char s[]);

int main() {
  // Example usage
  char hex_string[] = "0xFF1A";
  printf("The integer value of %s is: %d\n", hex_string,
         htoi(hex_string)); // Output: 65306

  char hex_string2[] = "1a";
  printf("The integer value of %s is: %d\n", hex_string2,
         htoi(hex_string2)); // Output: 26
  return 0;
}

/* htoi: converts a string of hexadecimal digits (including an optional 0x or
 * 0X) into its equivalent integer value. */
int htoi(char s[]) {
  int i = 0;
  int n = 0;

  // 1. Skip the optional "0x" or "0X" prefix
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    i = 2;
  }

  // 2. Loop through the remaining characters
  for (; s[i] != '\0'; ++i) {
    int digit;
    // 3. Convert character to its integer value
    if (s[i] >= '0' && s[i] <= '9') {
      digit = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      digit = s[i] - 'a' + 10;
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      digit = s[i] - 'A' + 10;
    } else {
      break; // Stop if a non-hexadecimal character is found
    }

    // 4. Add the digit to the total
    n = 16 * n + digit;
  }

  return n;
}
