//Practical 3 Threads
//
// Tasks:
//
//  1. Modify thread code below *where necessary*
//     to ensure action-functions run atomically.
// 
//     Do not modify the order in which action-functions are called.
//     Do not add or modify action-function calls.
//
//  2. Modify the `assert` statements inside inline `endassertions`
//     to check for the correct final values of the global variables.


proctype Thread1() {
	printf( "Thread1 Running\n" );
	
atomic {action_11();}
atomic {action_12();}
atomic {action_13();}
atomic {action_14();}
	printf("Waiting for (gO == 6)\n");
	
	do :: atomic {
			if
			:: (gO == 6) -> action_15();
			:: else -> skip;
			fi;
			break;
	} od;
}


proctype Thread2() {
	printf( "Thread2 Running\n" );
	
atomic {action_21();}
atomic {action_22();}
atomic {action_23();}
atomic {action_24();}
atomic {action_25();}
}


proctype Thread3() {
	printf( "Thread3 Running\n" );
	
atomic {action_31();}
atomic {action_32();}
atomic {action_33();}
atomic {action_34();}
	printf("Waiting for (gO == 1)\n");
	
	do :: atomic {
			if
			:: (gO == 1) -> action_35();
			:: else -> skip;
			fi;
			break;
	} od;
}


proctype Thread4() {
	printf( "Thread4 Running\n" );
	
	action_41();
atomic {action_42();}
atomic {action_43();}
atomic {action_44();}
atomic {action_45();}
	printf("Waiting for (gA > 3)\n");
	
	do :: atomic {
			if
			:: (gA > 3) -> action_46();
			:: else -> skip;
			fi;
			break;
	} od;
	
}


proctype Thread5() {
	printf( "Thread5 Running\n" );
	
atomic {action_51();}
	action_52();
atomic {action_53();}
atomic {action_54();}
atomic {action_55();}
	printf("Waiting for (gA < 3)\n");
	
	do :: atomic {
			if
			:: (gA < 3) -> action_56();
			:: else -> skip;
			fi;
			break;
	} od;
}


inline endassertions(){
	printf("End Assertions\n")
	assert(gA == 4 || gA == 2 || gA == 6 || gA == 0);
	assert(gD == 3);
	assert(gK == 9);
	assert(gX == 6 || gX == 8 || gX == 16 || gX == 18);
	assert(gW == 8 || gW == 4 || gW == 12 || gW == 14);
	assert(gS == 4 || gS == 5 || gS == 6);
	assert(gB == 6 || gB == 8 || gB == 1 || gB == 55 || gB == 70 || gB == 37 || 
	gB == 52 || gB == 50 || gB == 32 || gB == 19 || gB == 34 || gB == 12 || 
	gB == 16 || gB == 2 || gB == 110 || gB == 140 || gB == 74 || gB == 104 || 
	gB == 100 || gB == 64 || gB == 38 || gB == 68 || gB == 18 || gB == 5 || gB == 4 || gB == 24 || gB == 13 || gB == 15 || 
	gB == 21 || gB == 9 || gB == 26 || gB == 10 || gB == 17 || gB == 14 || gB == 6 || gB == 20 || gB == 28 || gB == 23);
	assert(gJ == 53 || gJ == 68 || gJ == 35 || gJ == 50 || gJ == 48 || gJ == 30 || gJ == 17 || gJ == 32);
	assert(gV == 60 || gV == 10);
	assert(gO == 1 || gO == 6);
}

