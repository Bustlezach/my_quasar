#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_spaceship
**
** @param {char*} param_1
**
** @return {char*}
**
*/


char* toUpperCase(char* str) {
  int i;
  for (i = 0; i < strlen(str); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32; // subtract 32 to convert to uppercase
    }
  }
  return str;
}

char* my_spaceship(char* str) {
  str = toUpperCase(str);
  int i = 0;
  int size = strlen(str);

  int x = 0;
  int y = 0;
  char* direction = "up";

  while (i < size) {
    char mov = str[i];

    if (mov == 'A') {
      if (strcmp(direction, "up") == 0) {
        y--;
      } else if (strcmp(direction, "right") == 0) {
        x++;
      } else if (strcmp(direction, "down") == 0) {
        y++;
      } else if (strcmp(direction, "left") == 0) {
        x--;
      }
    }

    if (mov == 'L') {
      if (strcmp(direction, "up") == 0) {
        direction = "left";
      } else if (strcmp(direction, "left") == 0) {
        direction = "down";
      } else if (strcmp(direction, "down") == 0) {
        direction = "right";
      } else if (strcmp(direction, "right") == 0) {
        direction = "up";
      }
    }

    if (mov == 'R') {
      if (strcmp(direction, "up") == 0) {
        direction = "right";
      } else if (strcmp(direction, "right") == 0) {
        direction = "down";
      } else if (strcmp(direction, "down") == 0) {
        direction = "left";
      } else if (strcmp(direction, "left") == 0) {
        direction = "up";
      }
    }

    i++;
  }

  static char result[100];
  sprintf(result, "{x: %d, y: %d, direction: '%s'}", x, y, direction);
  return result;
}
