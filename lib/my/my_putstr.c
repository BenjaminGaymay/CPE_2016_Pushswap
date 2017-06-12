/*
** my_putstr.c for my_putstr in /home/benjamin.g/delivery/CPool_Day04
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Oct  6 15:28:00 2016 Benjamin GAYMAY
** Last update Tue Nov  8 11:45:46 2016 Benjamin GAYMAY
*/

#include"my.h"

int	my_putstr(char *str2)
{
  int	i;

  i = 0;
  while (str2[i] != '\0')
    {
      my_putchar(str2[i]);
      i = i + 1;
    }
  return (0);
}
