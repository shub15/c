#include <stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int
main ()
{
  int hrs, min, sec;
  hrs = min = sec = 0;
  while (1)
    {
      system ("clear");
      printf ("%d : %d : %d", hrs, min, sec);
      fflush (stdout);
      sec++;
      if (sec == 60)
	{
	  min++;
	  sec = 0;
	}
      if (min == 60)
	{
	  hrs++;
	  min = 0;
	}
      if (hrs == 24)
	{
	  hrs = 0;
	  min = 0;
	  sec = 0;
	}
      sleep (1);
    }
  return 0;
}
