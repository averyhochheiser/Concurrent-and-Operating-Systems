int a = 15;
int c = 9;
int k = 0;
int m = 0;
int r = 15;
int s = 7;
int u = 15;
int x = 6;
int y = 7;


init {
 
  a = 9;
  a = 5;
  a = 2;
  a = 7;

  s = 14;
  s = 9;

  x = 14;
  x = 8;
  x = 9;
  a = -1;

  k = 5;

  m = 2;

  c = 9;

  do
    :: r == 15 -> r = 9
    :: r == 9 -> r = 15
  od;

}
