/*
** my_str_isnum.c for my_str_isnum in /home/benjamin.g/delivery/CPool_Day06
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Mon Oct 10 21:45:18 2016 Benjamin GAYMAY
** Last update Thu Nov 24 09:21:46 2016 Benjamin GAYMAY
*/

#include"my.h"

int	my_str_isnum(char *str)
{
  int	i;
  int	f;

  i = 0;
  f = 0;
  if (str[0] == '-')
    i++;
  while (str[i] != '\0')
    {
      if ((str[i] < '0') || (str[i] > '9'))
	f++;
      i++;
    }
  if (f != 0)
    return (0);
  else
    return (1);
}
