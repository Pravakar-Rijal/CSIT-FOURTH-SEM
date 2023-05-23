criminal(X):-american(X),weapon(W),hostile(C),sell(X,W,C).
hostile(C):-enemy(C,america).
has(iraq,missile).
sell(george,missile,iraq).
american(george).
country(iraq).
enemy(iraq,america).
weapon(missile).
