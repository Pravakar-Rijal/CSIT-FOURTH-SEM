fibonacci(N,X):-N=0,X is 0.
fibonacci(N,X):-N=1,X is 1.
fibonacci(N,X):-N>1,
    N1 is N-1,
    N2 is N-2,
    fibonacci(N1,X1),
    fibonacci(N2,X2),
    X is X1 + X2.