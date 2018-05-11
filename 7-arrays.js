let a = [ 10, 20, 30, 40 ];

a.forEach(function(x) {
    console.log(x);
});

const c = a.map(function(x) {
    return x * 2;
});

const s = a.reduce(function(sum, x) {
    return sum + x;
}, 100);

console.log(s);
