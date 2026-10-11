#include <stdio.h>
int main()
{
  int secs;
  int HH, MM, SS;
  printf("Enter number of seconds : ");
  scanf("%d", &secs);

  HH = secs / 3600;
  MM = (secs % 3600) / 60;
  SS = secs % 60;

  printf("Time in HH:MM:SS is %02d : %02d : %02d", HH, MM, SS);

  return 0;
}