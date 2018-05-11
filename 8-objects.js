let t = {
    a: 1,
    b: 'test',
    c: function() {
        console.log(t);
    }
};

const d = 'c';

t.c();
t['c']();
t[d]();