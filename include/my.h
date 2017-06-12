/*
** my.h for my.h in /home/benjamin.g/delivery/CPool_bistro-matic/lib/my
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Nov  3 15:16:46 2016 Benjamin GAYMAY
** Last update Sun Dec 18 19:28:21 2016 Benjamin GAYMAY
*/

#ifndef MY_H_
# define MY_H_

/*
** libmy.a
*/
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_getnbr(char *str);
int	my_str_isnum(char *str);

typedef struct	s_list
{
  int		nb;

  struct s_list	*next;
}		t_list;

/*
**main.c
*/
void	my_put_in_list(t_list **list, int nb);
t_list	*my_put_in_end(t_list *list, int nb);
void	my_show_list(t_list *list);
int	my_list_len(t_list *list);

/*
**my_push_swap.c
*/
void	my_push_swap(t_list **la, t_list **lb);
int	list_in_ascending_order(t_list *la, t_list *lb);
int	check_last_nb(t_list *la);
int	nb_min(t_list *la);

/*
**instruction.c
*/
void	my_sa(t_list **la);
void	my_sb(t_list **lb);
void	my_sc(t_list **la, t_list **lb);
void	my_pa(t_list **la, t_list **lb);
void	my_pb(t_list **la, t_list **lb);

/*
**instruction2.c
*/
void	my_ra(t_list **la);
void	my_rb(t_list **lb);
void	my_rr(t_list **la, t_list **lb);
void	my_rra(t_list **la);
void	my_rrb(t_list **lb);

/*
**intructions3.c
*/
void	my_rrr(t_list **la, t_list **lb);
void	swap_elem(int *array, int index1, int index2);

#endif /* !MY_H_ */
