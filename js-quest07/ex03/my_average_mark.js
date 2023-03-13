/*
**
** QWASAR.IO -- my_average_mark
**
**
** @param {String_integer[]} param_1
** @return {float}

**
*/


function my_average_mark(param_1) {
    let sum = 0;
    const size = param_1.length;

    for(let i = 0; i < size; i++){
        sum += param_1[i]['integer'];
    }
    const average = sum / size;

    return(average.toFixed(1));
    
};