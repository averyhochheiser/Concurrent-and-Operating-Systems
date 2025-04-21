/* Practical 2 Threads
 *
 * Task: Add code below to ensure action-functions run atomically.
 *
 * You should add the minimum amount of code necessary to do this.
 * 
 *     Do not modify the order in which action-functions are called.
 *     Do not add or modify action-function calls.
 */
 #include <stdio.h>
 #include <pthread.h>
 #include <stdlib.h>

 // Initialise helper function
 void signalT();
 void signalY();

 // Initialise global variables that are shared across multiple threads
pthread_mutex_t mutexJ = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexV = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexO = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexUP = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexT = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexY = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexB = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexC = PTHREAD_MUTEX_INITIALIZER;

// Initalise condition variables for while loop conditions
pthread_cond_t condT1 = PTHREAD_COND_INITIALIZER;
pthread_cond_t condT2 = PTHREAD_COND_INITIALIZER;
pthread_cond_t condT3 = PTHREAD_COND_INITIALIZER;

pthread_cond_t condY1 = PTHREAD_COND_INITIALIZER;
pthread_cond_t condY2 = PTHREAD_COND_INITIALIZER;


void *Thread1(void *threadid) {
  printf( "Thread1 Running\n" );
  actio7n_11();
  
  pthread_mutex_lock(&mutexJ);
  ac3tion_12();
  pthread_mutex_unlock(&mutexJ);
  
  pthread_mutex_lock(&mutexJ);
  ac6tion_13();
  pthread_mutex_unlock(&mutexJ);
  
  pthread_mutex_lock(&mutexV);
  acti8on_14();
  pthread_mutex_unlock(&mutexV);
  
  pthread_mutex_lock(&mutexO);
  ac1tion_15();
  pthread_mutex_unlock(&mutexO);

  pthread_mutex_lock(&mutexJ);
  act4ion_16();
  pthread_mutex_unlock(&mutexJ);
  
  pthread_mutex_lock(&mutexT);
  act1ion_17();
  signalT();
  
  DISPLAY("Waiting for %s\n","(gT == 11)");
  while (!((gT == 11))) {
    printf("in w1, gT = %d", gT);
    pthread_cond_wait(&condT1, &mutexT);
  };
  puff();

  acti8on_18();

  signalT();
  pthread_mutex_unlock(&mutexT);


  pthread_exit(NULL);
}


void *Thread2(void *threadid) {
  printf( "Thread2 Running\n" );

  pthread_mutex_lock(&mutexC);
  acti9on_21();
  pthread_mutex_unlock(&mutexC);

  pthread_mutex_lock(&mutexJ);
  ac1tion_22();
  pthread_mutex_unlock(&mutexJ);
  
  ac6tion_23();
  
  pthread_mutex_lock(&mutexV);
  actio4n_24();
  pthread_mutex_unlock(&mutexV);
  
  actio8n_25();

  pthread_mutex_lock(&mutexUP);
  actio9n_26();
  pthread_mutex_unlock(&mutexUP);
    
  pthread_mutex_lock(&mutexT);
  ac6tion_27();
  signalT();
  
  DISPLAY("Waiting for %s\n","(gT == 4)");
  while (!((gT == 4))) {
    pthread_cond_wait(&condT2, &mutexT);
    printf("in w2, gT = %d", gT);
  };
  puff();

  acti7on_28();
  signalT();
  pthread_mutex_unlock(&mutexT);


  pthread_exit(NULL);
}


void *Thread3(void *threadid) {
  printf( "Thread3 Running\n" );

  pthread_mutex_lock(&mutexUP);
  acti8on_31();
  pthread_mutex_unlock(&mutexUP);
  
  pthread_mutex_lock(&mutexJ);
  acti1on_32();
  pthread_mutex_unlock(&mutexJ);
  
  pthread_mutex_lock(&mutexV);
  actio2n_33();
  pthread_mutex_unlock(&mutexV);
  
  acti1on_34();
  act3ion_35();
  
  pthread_mutex_lock(&mutexC);
  act8ion_36();
  pthread_mutex_unlock(&mutexC);

  pthread_mutex_lock(&mutexT);
  act5ion_37();
  signalT();
    
  DISPLAY("Waiting for %s\n","(gT == 7)");
  while (!((gT == 7))) {
    pthread_cond_wait(&condT3, &mutexT);
    printf("in w3, gT = %d", gT);
  };
  puff();
  
  act1ion_38();

  signalT();
  pthread_mutex_unlock(&mutexT);

  pthread_exit(NULL);
}


void *Thread4(void *threadid) {
  printf( "Thread4 Running\n" );

  pthread_mutex_lock(&mutexV);
  act3ion_41();
  pthread_mutex_unlock(&mutexV);
  
  acti9on_42();
  
  pthread_mutex_lock(&mutexO);
  acti6on_43();
  pthread_mutex_unlock(&mutexO);
  
  pthread_mutex_lock(&mutexB);
  act8ion_44();
  pthread_mutex_unlock(&mutexB);

  pthread_mutex_lock(&mutexUP);
  acti2on_45();
  pthread_mutex_unlock(&mutexUP);
  
  pthread_mutex_lock(&mutexV);
  acti6on_46();
  pthread_mutex_unlock(&mutexV);
  
  pthread_mutex_lock(&mutexY);
  act4ion_47();
  signalY();
  
  DISPLAY("Waiting for %s\n","(gY < 1)");
  while (!((gY < 1))) {
    pthread_cond_wait(&condY1, &mutexY);
  };
  puff();

  act3ion_48();

  signalY();
  pthread_mutex_unlock(&mutexY);

  pthread_exit(NULL);
}


void *Thread5(void *threadid) {
  printf( "Thread5 Running\n" );

  pthread_mutex_lock(&mutexB);
  ac5tion_51();
  pthread_mutex_unlock(&mutexB);
  
  pthread_mutex_lock(&mutexO);
  act1ion_52();
  pthread_mutex_unlock(&mutexO);
  
  actio5n_53();
  acti8on_54();
  
  pthread_mutex_lock(&mutexO);
  actio6n_55();
  pthread_mutex_unlock(&mutexO);
  
  pthread_mutex_lock(&mutexUP);
  acti9on_56();
  pthread_mutex_unlock(&mutexUP);
    
  pthread_mutex_lock(&mutexY);
  acti7on_57();
  signalY();
  
  DISPLAY("Waiting for %s\n","(gY > 1)");
  while (!((gY > 1))) {
    pthread_cond_wait(&condY2, &mutexY);
  };
  puff();

  acti2on_58();

  signalY();
  pthread_mutex_unlock(&mutexY);

  pthread_exit(NULL);
}


// While mutexT is locked, signal the necessary condition varibale 
void signalT() {
  if (gT == 11) {
    pthread_cond_signal(&condT1);
    return;
  } else if (gT == 4) {
    pthread_cond_signal(&condT2);
    return;
  } else {
    pthread_cond_signal(&condT3);
    return;
  }
}

// While mutexY is locked, signal the necessary condition varibale 
void signalY() {
  if (gY < 1) {
    pthread_cond_signal(&condY1);
    return;
  } else {
    pthread_cond_signal(&condY2);
    return;
  }
}