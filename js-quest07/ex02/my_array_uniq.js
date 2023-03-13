/*
**
** QWASAR.IO -- my_array_uniq
**
**
** @param {Integer[]} param_1
** @return {integer[]}

**
*/


function my_array_uniq(param_1) {
    param_1 = new Set(param_1);
    const newArr = Array.from(param_1);
    return(newArr);
  };