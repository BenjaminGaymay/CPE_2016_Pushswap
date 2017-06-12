/*
** my_push_swap.c for my_putsh_swap in /home/benjamin.g/delivery/CPE_2016_Pushswap
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Tue Nov 22 14:05:36 2016 Benjamin GAYMAY
** Last update Sun Dec 18 19:27:53 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "./include/my.h"

void	my_push_swap(t_list **la, t_list **lb)
{
  int	i;

  i = list_in_ascending_order(*la, *lb);
  while (((*la)->next != NULL) && i == 0)
    {
      if (nb_min(*la) == 0)
	my_pb(la, lb);
      else
	my_ra(la);
      i = list_in_ascending_order(*la, *lb);
      if (i == 0)
	my_putchar(' ');
    }
  while ((*lb) != NULL)
    {
      my_putchar(' ');
      my_pa(la, lb);
    }
}

int		nb_min(t_list *la)
{
  t_list	*tmp;
  int		i;

  tmp = la;
  i = 0;
  while (tmp != NULL)
    {
      if (la->nb > tmp->nb)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}

int	list_in_ascending_order(t_list *la, t_list *lb)
{
  t_list	*tmp;
  t_list	*tmp2;
  int		i;

  tmp = la;
  tmp2 = lb;
  i = 0;
  if ((tmp2 == NULL) || (tmp->nb >= tmp2->nb))
    {
      while (tmp->next != NULL)
	{
	  if (tmp->nb <= tmp->next->nb)
	    i++;
	  tmp = tmp->next;
	}
      i++;
      if (i == my_list_len(la))
	return (1);
    }
  else
    return (0);
  return (0);
}

int		check_last_nb(t_list *la)
{
  t_list	*tmp;
  t_list	*tmp2;

  tmp = la;
  tmp2 = la;
  while (tmp->next != NULL)
    {
      tmp2 = tmp;
      tmp = tmp->next;
    }
  return (tmp->nb);
}
