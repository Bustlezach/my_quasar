/*
**
** QWASAR.IO -- my_map_mult_two
**
**
** @param {Integer[]} param_1
** @return {integer[]}

**
*/


function my_map_mult_two(param_1) {
    const newArr = [];
    let i = 0;
    const size = param_1.length;

    while(i < size){
        newArr.push(param_1[i] * 2);
        i++;
    }
    return newArr;
};