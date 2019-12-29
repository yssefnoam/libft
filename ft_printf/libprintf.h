/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:11:02 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/29 17:50:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# define MAX_INT 2147483647
# define TRUE 1
# define FALSE 0

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_changed(int *space, int *zero, int banzero, int bandot);
void	ft_changes(int *space, int *zero, int banzero, int bandot);
int	ft_changem(char **p, va_list ap);
void	ft_init(int *var1, int *var2);
int		is_pc(char **p);

char	*ft_addtop(unsigned long int n);
char	*ft_cnv(char **c, va_list ap);
char	*ft_ctoa(int c);
char	*ft_find_conv(char	*ptr, va_list ap);
char	*ft_itoa(int n);
char	*ft_itox(unsigned int n, char c);
char	*ft_dlt_mns(char *s);
char	*ft_strdup(const char *string);
char	*ft_strjoin(char *string1, char *string2);
char	*ft_uitoa(unsigned int n);
char	*ft_dlt_0x(char *s);

int		ft_f1(int sp, int zr, char ptr, char *s);
int	the_output(int c1, int j);
int		ft_d_u_i(int sp, int zr, char *s);
int		ft_space(int num);
int		ft_zero(int num);
int		ft_p(char *s, int sp, int zr);
int		ft_c(char *s, int sp);
int		ft_s(char *s, int sp, int zr);
int		ft_mod(int sp, int zr);
int		ft_all(char **ptr, va_list ap, int sp, int zr);
int		ft_atoi(char **str, va_list ap);
int		ft_check_all(char c);
int		ft_f2(char *s, int space, int minus, char c);
int		ft_free(char **ptr);
int		ft_is_flage(char c);
int		ft_isdigit(int c);
int		ft_printf(const char *p, ...);
int		ft_putstr(char *str, char c);
int		ft_star(int num);
size_t	ft_strlen(char *str);

#endif
