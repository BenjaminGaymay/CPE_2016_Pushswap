/*
** instructions.c for instructions in /home/benjamin.g/delivery/CPE_2016_Pushswap
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Tue Nov 15 09:23:45 2016 Benjamin GAYMAY
** Last update Sat Nov 26 10:21:53 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "./include/my.h"

void	my_sa(t_list **la)
{
  int	tmp;

  if ((*la) != NULL)
    {
      tmp = (*la)->nb;
      (*la)->nb = (*la)->next->nb;
      (*la)->next->nb = tmp;
      my_putstr("sa");
    }
}

void	my_sb(t_list **lb)
{
  int	tmp;

  if ((*lb) != NULL)
    {
      tmp = (*lb)->nb;
      (*lb)->nb = (*lb)->next->nb;
      (*lb)->next->nb = tmp;
      my_putstr("sb");
    }
}

void	my_sc(t_list **la, t_list **lb)
{
  my_sa(la);
  my_putchar(' ');
  my_sb(lb);
}

void		my_pa(t_list **la, t_list **lb)
{
  t_list	*tmp;

  if (*lb != NULL)
    {
      tmp = (*lb)->next;
      (*lb)->next = (*la);
      *la = (*lb);
      *lb = tmp;
    }
  my_putstr("pa");
}

void		my_pb(t_list **la, t_list **lb)
{
  t_list	*tmp;

  if (*la != NULL)
    {
      tmp = (*la)->next;
      (*la)->next = (*lb);
      *lb = (*la);
      *la = tmp;
      my_putstr("pb");
    }
}
