const d = 20;

function makeAdder(a) {
    const t = a * 2;
    return function(b) {
        return function(c) {
            return (d + t + b) * c;
        }
    }
}

const add10 = makeAdder(10);
const add20 = add10(20);
const r = add20(2);

console.log(r);
