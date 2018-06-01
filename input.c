#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{  

  int ir1 = 5;
  int ir2 = 7;
  float pi = 3.14;   
  float area1 = 0;
  float area2 = 0;

  if (argc == 1)
  {
    area1 = (ir1*ir1*pi);
    printf ("area for 1st initialed radius:%f\n", area1);
    area2 = (ir2*ir2*pi);
    printf("area for 2nd initialed radius:%f\n", area2);
  }

  else if (argc > 1)
  {
    int r1 = atoi(argv[1]);
    area1 = (r1*r1*pi);
    printf("area for 1st radius in command line:%f\n", area1);
  }

  if (argc > 2)
  {
    int r2 = atoi(argv[2]);
    area2 = (r2*r2*pi);
    printf("area for 2nd radius in command line:%f\n", area2);
  }
  
}
