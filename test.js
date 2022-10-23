var obj = {n:1 , toString: () => obj.n++}


if (obj ==1 && obj == 2 && obj == 3 ){
    console.log(obj.n);
}
console.log(obj === 1);
console.log(obj == 4);
console.log(obj.n);