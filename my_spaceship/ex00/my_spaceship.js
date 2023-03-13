function my_spaceship(str) {
    // str = str.toUpperCase();
    let i = 0;
    let size = str.length;
  
    let x = 0;
    let y = 0;
    let direction = "up";
  
    while (i < size) {
      mov = str[i];
  
      if (mov === "A") {
        if (direction === 'up') (y--);
        else if (direction === 'right') (x++);
        else if (direction === 'down') (y++);
        else if (direction === 'left') (x--);
      }
  
      if (mov === "L") {
        if (direction === 'up') ((direction) = 'left');
        else if (direction === 'left') ((direction) = 'down');
        else if (direction === 'down') ((direction) = 'right');
        else if (direction === 'right') ((direction) = 'up');
      }
  
      if (mov === "R") {
        if (direction === 'up') ((direction) = 'right');
        else if (direction === 'right') ((direction) = 'down');
        else if (direction === 'down') ((direction) = 'left');
        else if (direction === 'left') ((direction) = 'up');
      }
      i++;
    }
    return "{x: " + x + ", y: " + y + ", direction: '" + direction + "'}";
  }