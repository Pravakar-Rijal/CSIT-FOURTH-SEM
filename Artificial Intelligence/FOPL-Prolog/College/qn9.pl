horse(Y):-offspring(Y,X),horse(X).
horse(bluebeard).
parent(bluebeard,charlie).
offspring(X,Y):-parent(Y,X).
mammal(cow).
mammal(pig).
mammal(horse).