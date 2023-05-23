romans(X):-pompeian(X).
loyalto(X,caesar):-romans(X),not(hate(X,caesar)).
hate(X,caesar):-romans(X),not(loyalto(X,caesar)).
not(loyalto(X,Y)):-tryToAssassinate(X,Y).
tryToAssassinate(marcus,caesar).
pompeian(marcus).