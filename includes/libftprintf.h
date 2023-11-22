/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:14:37 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 13:39:29 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef	struct	s_flags
{
	int		dot;
	int		minus;
	int		dotnum;
	int		number;
	int		zero;
	char	type;
}				t_flags;

void			helpprint(char *str, int i, int *c);
int				helpik(t_flags hert, int c);
int				phelp(t_flags hert, int i);
int				phelp1(t_flags hert, int i);
int				phelp2(t_flags hert, int i, int c, unsigned long long p);
int				dhelp(t_flags hert, int x, long y);
int				uhelp(t_flags hert, unsigned int x);
int				uhelp1(t_flags hert, unsigned long long x);
int				xhelp(t_flags hert, unsigned long long x);
int				xhelp2(t_flags hert, unsigned long long x);
int				returnx(t_flags hert, unsigned long long x);
int				erktiv(int x);
void			putu(unsigned int n);
int				uerk(unsigned int n);
void			f1u(t_flags hert, int z, int x, int y);
void			f2u(t_flags hert, int z, int x, int y);
void			f1(t_flags hert, int z, int x, int y);
void			f2(t_flags hert, int n, int x, int y);
void			f3(t_flags hert, int n, int x, int z);
void			f4(t_flags hert, int n, int x, int z);
void			f5(t_flags hert, int n, int x, int y);
int				cased(va_list arg, t_flags hert);
void			ss(t_flags hert, int b, char *arr, int *c);
int				casetok(t_flags hert);
void			casecc(t_flags hert, char c, int *k);
void			sc(t_flags hert, char *arr, int i, int *c);
int				cases(va_list arg, t_flags hert);
int				casec(va_list arg, t_flags hert);
void			print1(t_flags *hert, int *i, char *str, va_list arg);
void			print2(t_flags *hert, int *i, char *str, va_list arg);
int				print3(t_flags *hert, int *i, char *str, va_list arg);
void			inic(int *i, t_flags *hert);
int				ft_printf(const char *s, ...);
int				xcase(va_list arg, t_flags hert);
void			xxp(unsigned long long p);
int				xxcase(va_list arg, t_flags hert);
void			casepp(unsigned long long p);
void			pp(t_flags hert, int b, unsigned long long p);
int				casep(va_list arg, t_flags hert);
void			xp(unsigned long long p);
int				xerk(unsigned long long x);
int				caseu(va_list arg, t_flags hert);
void			ppp(t_flags *hert, int *i, char *str, va_list arg);
void			f3xx(t_flags hert, int n, unsigned long long x,
		unsigned long long y);
void			f1xx(t_flags hert, int z, unsigned long long x,
		unsigned long long y);
void			f2xx(t_flags hert, int z, unsigned long long x,
		unsigned long long y);
int				returnx(t_flags hert, unsigned long long x);
void			f3x(t_flags hert, int n, unsigned long long x,
		unsigned long long y);
void			f1x(t_flags hert, int z, unsigned long long x,
		unsigned long long y);
void			f2x(t_flags hert, int z, unsigned long long x,
		unsigned long long y);
int				returnu(t_flags hert, int x);
int				returnd(t_flags hert, int x);
int				minuserk(int x);
void			f3u(t_flags hert, int n, int x, int y);

#endif
