#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      operations.c \
                          utils.c \
                          push_op.c \
                          aux/ft_printf/src/ft_flags.c \
                          aux/ft_printf/src/ft_printf_x.c \
                          aux/ft_printf/src/ft_printf_c.c \
                          aux/ft_printf/src/ft_printf_xx.c \
                          aux/ft_printf/src/ft_printf_utils.c \
                          aux/ft_printf/src/ft_printf_di.c \
                          aux/ft_printf/src/ft_printf.c \
                          aux/ft_printf/src/ft_printf_p.c \
                          aux/ft_printf/src/ft_printf_u.c \
                          aux/ft_printf/src/ft_printf_s.c \
                          aux/libft/src/ft_isalpha.c \
                          aux/libft/src/ft_striteri.c \
                          aux/libft/src/ft_lstlast.c \
                          aux/libft/src/ft_lstmap.c \
                          aux/libft/src/ft_lstsize.c \
                          aux/libft/src/ft_memcmp.c \
                          aux/libft/src/ft_strmapi.c \
                          aux/libft/src/ft_split.c \
                          aux/libft/src/ft_lstadd_front.c \
                          aux/libft/src/ft_strtrim.c \
                          aux/libft/src/ft_lstiter.c \
                          aux/libft/src/ft_isprint.c \
                          aux/libft/src/ft_memset.c \
                          aux/libft/src/ft_putnbr_fd.c \
                          aux/libft/src/ft_strchr.c \
                          aux/libft/src/ft_isalnum.c \
                          aux/libft/src/ft_strlen.c \
                          aux/libft/src/ft_putstr_fd.c \
                          aux/libft/src/ft_lstnew.c \
                          aux/libft/src/ft_isascii.c \
                          aux/libft/src/ft_itoa.c \
                          aux/libft/src/ft_strlcpy.c \
                          aux/libft/src/ft_strncmp.c \
                          aux/libft/src/ft_toupper.c \
                          aux/libft/src/ft_calloc.c \
                          aux/libft/src/ft_memmove.c \
                          aux/libft/src/ft_tolower.c \
                          aux/libft/src/ft_putchar_fd.c \
                          aux/libft/src/ft_strlcat.c \
                          aux/libft/src/ft_memcpy.c \
                          aux/libft/src/ft_strdup.c \
                          aux/libft/src/ft_lstadd_back.c \
                          aux/libft/src/ft_atoi.c \
                          aux/libft/src/ft_lstclear.c \
                          aux/libft/src/ft_lstdelone.c \
                          aux/libft/src/ft_strnstr.c \
                          aux/libft/src/ft_strrchr.c \
                          aux/libft/src/ft_memchr.c \
                          aux/libft/src/ft_bzero.c \
                          aux/libft/src/ft_putendl_fd.c \
                          aux/libft/src/ft_strjoin.c \
                          aux/libft/src/ft_isdigit.c \
                          aux/libft/src/ft_substr.c \
                          main.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


