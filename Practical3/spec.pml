ltl spec1 { (u == 15)}
ltl spec2 { ((a == 15) U (a == 9))}
ltl spec3 { ( <> ((a == 9)) U <> ((a == 5)))}
ltl spec4 { ( <> ((a == 5)) U <> ((a == 2)))}
ltl spec5 { ( <> ((a == 2)) U <> ((a == 7)))}
ltl spec6 { ((s == 7) U ((s == 6) || (s == 14)))}
ltl spec7 { ( <> ((s == 6)) -> ( <> ((s == 8)) && [](!((s == 9)))))}
ltl spec8 { ( <> ((s == 14)) -> ( <> ((s == 9)) && [](!((s == 8)))))}
ltl spec9 { (x == 6)}
ltl spec10 { <> ((x == 14))}
ltl spec11 { ((a > 0) U (x == 8))}
ltl spec12 { ((a > 0) U []((x == 9)))}
ltl spec13 { ((r == 15) || (r == 9))}
ltl spec14 { [](((r == 15) -> <> ((r == 9))))}
ltl spec15 { [](((r == 9) -> <> ((r == 15))))}
ltl spec16 { ((k == 0) U (k == 5))}
ltl spec17 { ((m == 0) U []((m == 2)))}
ltl spec18 { ( <> ((m < 14)) && []((m > 14)))}
ltl spec19 { (y == 7)}
ltl spec20 { <> ((y == 7))}
ltl spec21 { ((y == 0) U (y == 7))}
ltl spec22 { ((y == 0) U []((y == 7)))}
ltl spec23 { <> ((c == 9))}