function my_levenshtein(s1, s2) {
    s1 = s1.toUpperCase();
    s2 = s2.toUpperCase();
  
    let count = 0;
    if (s1.length !== s2.length) {
      return -1;
    }
  
    for (let i = 0; i < s1.length; i++) {
      if (s1[i] !== s2[i]) {
        count++;
      }
    }
    return count;
  }