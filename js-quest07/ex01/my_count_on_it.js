/*
**
** QWASAR.IO -- my_count_on_it
**
**
** @param {String[]} param_1
** @return {integer[]}

**
*/


function my_count_on_it(param_1) {
    const size = param_1.length;
    let i = 0;
    const newArr = [];
    while(i < size){
        newArr.push(param_1[i].length);
        i++;
    }
    return(newArr);
};