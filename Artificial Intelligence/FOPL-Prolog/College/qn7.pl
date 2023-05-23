go:-
    write("Enter a number X"),
    read(X),
    write("Enter another number Y"),
    read(Y),
    sum(X,Y),
    difference(X,Y),
    product(X,Y),
    division(X,Y).
sum(X,Y):- 
    S is X+Y,
    write(" sum is "),
    write(S).
difference(X,Y):-
    D is X-Y,
    write("difference is "),
    write(D).
product(X,Y):-
    P is X*Y,
    write(" product is "),
    write(P).
division(X,Y):-
    Q is X/Y,
    write(" Result of division is "),
    write(Q).