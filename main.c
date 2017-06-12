/*
** main.c for main in /home/benjamin.g/delivery/CPE_2016_Pushswap
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Tue Nov 15 15:19:20 2016 Benjamin GAYMAY
** Last update Sun Dec 18 19:28:06 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "./include/my.h"

void		my_put_in_list(t_list **list, int nb)
{
  t_list	*element;

  element = malloc(sizeof(*element));
  element->nb = nb;
  element->next = *list;
  *list = element;
}

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_put_nbr(tmp->nb);
      my_putchar(' ');
      tmp = tmp->next;
    }
}

int		my_list_len(t_list *list)
{
  t_list	*tmp;
  int		i;

  tmp = list;
  i = 0;
  while (tmp != NULL)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

int		main(int ac, char **av)
{
  t_list	*la;
  t_list	*lb;

  la = NULL;
  lb = NULL;
  if (ac == 1)
    my_putstr("./push_swap number1 number2 ..");
  else
    {
      while (ac - 1 > 0)
	{
	  if (my_str_isnum(av[ac - 1]) == 1)
	    my_put_in_list(&la, my_getnbr(av[ac - 1]));
	  else
	    {
	      my_putstr("Write only numbers.");
	      my_putchar('\n');
	      return (0);
	    }
	  ac--;
	}
      my_push_swap(&la, &lb);
    }
  my_putchar('\n');
  return (0);
}
