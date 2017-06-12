/*
** instructions2.c for instructions2 in /home/benjamin.g/delivery/CPE_2016_Pushswap
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Tue Nov 15 14:35:59 2016 Benjamin GAYMAY
** Last update Sat Nov 26 10:14:59 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "./include/my.h"

void		my_ra(t_list **la)
{
  t_list	*last_elem;
  t_list	*second_elem;

  if ((*la) != NULL)
    {
      second_elem = (*la)->next;
      last_elem = (*la);
      while (last_elem->next != NULL)
	last_elem = last_elem->next;
      (*la)->next = NULL;
      last_elem->next = (*la);
      *la = second_elem;
      my_putstr("ra");
    }
}

void		my_rb(t_list **lb)
{
  t_list	*last_elem;
  t_list	*second_elem;

  if ((*lb) != NULL)
    {
      second_elem = (*lb)->next;
      last_elem = (*lb);
      while (last_elem->next != NULL)
	last_elem = last_elem->next;
      (*lb)->next = NULL;
      last_elem->next = (*lb);
      *lb = second_elem;
      my_putstr("ra");
    }
}

void	my_rr(t_list **la, t_list **lb)
{
  my_ra(la);
  my_putchar(' ');
  my_rb(lb);
}

void		my_rra(t_list **la)
{
  t_list	*last_elem;

  if ((*la) != NULL)
    {
      last_elem = *la;
      while (last_elem->next->next != NULL)
	last_elem = last_elem->next;
      last_elem->next->next = (*la);
      *la = last_elem->next;
      last_elem->next = NULL;
    }
  my_putstr("rra");
}

void		my_rrb(t_list **lb)
{
  t_list	*last_elem;

  if ((*lb) != NULL)
    {
      last_elem = *lb;
      while (last_elem->next->next != NULL)
	last_elem = last_elem->next;
      last_elem->next->next = (*lb);
      *lb = last_elem->next;
      last_elem->next = NULL;
    }
  my_putstr("rrb");
}
