#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : eelkabia < eelkabia @student .1337.ma> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2024 / 10 / 31 11 : 01 : 10 by eelkabia # + # # + # #
#Updated : 2024 / 11 / 01 13 : 24 : 58 by eelkabia## # ########.fr #
# #
#**************************************************************************** #

CC = cc
	CFLAGS = -Wall - Wextra - Werror NAME = libft.a
												FUNCTION = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
																ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c
																	ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
																		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c
																			ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c
																				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
																					ft_itoa.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_memmove.c

																						OBJ = $(FUNCTION
																								:.c =.o)

																									all : $(NAME)

#$(NAME) : $(OBJ)
#$(CC) $(CFLAGS) - o $(NAME) $(OBJ)

																											$(NAME)
	: $(OBJ)
			ar rcs $(NAME) $(OBJ)

		%.o : %.c $(CC) $(CFLAGS) -
		c $ <
	-o $ @

		clean : rm -
		f $(OBJ)

			fclean : clean
							rm -
						f $(NAME)

							re : fclean all