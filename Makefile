# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjacquem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/26 20:33:21 by cjacquem          #+#    #+#              #
#    Updated: 2017/02/15 14:59:01 by cjacquem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===== Editable =====
NAME	:=	libftlite.a
# ====================

# ===== Standard =====
CC		:=	clang
CFLAGS	:=	-Wall -Wextra -Werror
SRCDIR	:=	src/
INCDIR	:=	include/
OBJDIR	:=	obj/
SRC		:=	$(SRCDIR)ft_array/ft_arrdel.c \
			$(SRCDIR)ft_ctype/ft_isalnum.c \
			$(SRCDIR)ft_ctype/ft_isalpha.c \
			$(SRCDIR)ft_ctype/ft_isascii.c \
			$(SRCDIR)ft_ctype/ft_isdigit.c \
			$(SRCDIR)ft_ctype/ft_isprint.c \
			$(SRCDIR)ft_ctype/ft_tolower.c \
			$(SRCDIR)ft_ctype/ft_toupper.c \
			$(SRCDIR)ft_list/ft_lstadd.c \
			$(SRCDIR)ft_list/ft_lstdel.c \
			$(SRCDIR)ft_list/ft_lstdelone.c \
			$(SRCDIR)ft_list/ft_lstiter.c \
			$(SRCDIR)ft_list/ft_lstmap.c \
			$(SRCDIR)ft_list/ft_lstnew.c \
			$(SRCDIR)ft_puts/ft_putchar.c \
			$(SRCDIR)ft_puts/ft_putchar_fd.c \
			$(SRCDIR)ft_puts/ft_putendl.c \
			$(SRCDIR)ft_puts/ft_putendl_fd.c \
			$(SRCDIR)ft_puts/ft_putnbr.c \
			$(SRCDIR)ft_puts/ft_putnbr_fd.c \
			$(SRCDIR)ft_puts/ft_putstr.c \
			$(SRCDIR)ft_puts/ft_putstr_fd.c \
			$(SRCDIR)ft_stdlib/ft_atoi.c \
			$(SRCDIR)ft_stdlib/ft_itoa.c \
			$(SRCDIR)ft_stdlib/ft_memalloc.c \
			$(SRCDIR)ft_stdlib/ft_memdel.c \
			$(SRCDIR)ft_string/ft_bzero.c \
			$(SRCDIR)ft_string/ft_memchr.c \
			$(SRCDIR)ft_string/ft_memcmp.c \
			$(SRCDIR)ft_string/ft_memcpy.c \
			$(SRCDIR)ft_string/ft_memmove.c \
			$(SRCDIR)ft_string/ft_memset.c \
			$(SRCDIR)ft_string/ft_strcat.c \
			$(SRCDIR)ft_string/ft_strchr.c \
			$(SRCDIR)ft_string/ft_strclr.c \
			$(SRCDIR)ft_string/ft_strcmp.c \
			$(SRCDIR)ft_string/ft_strcpy.c \
			$(SRCDIR)ft_string/ft_strdel.c \
			$(SRCDIR)ft_string/ft_strdup.c \
			$(SRCDIR)ft_string/ft_strequ.c \
			$(SRCDIR)ft_string/ft_striter.c \
			$(SRCDIR)ft_string/ft_striteri.c \
			$(SRCDIR)ft_string/ft_strjoin.c \
			$(SRCDIR)ft_string/ft_strlcat.c \
			$(SRCDIR)ft_string/ft_strlen.c \
			$(SRCDIR)ft_string/ft_strmap.c \
			$(SRCDIR)ft_string/ft_strmapi.c \
			$(SRCDIR)ft_string/ft_strncat.c \
			$(SRCDIR)ft_string/ft_strncmp.c \
			$(SRCDIR)ft_string/ft_strncpy.c \
			$(SRCDIR)ft_string/ft_strnequ.c \
			$(SRCDIR)ft_string/ft_strnew.c \
			$(SRCDIR)ft_string/ft_strnstr.c \
			$(SRCDIR)ft_string/ft_strrchr.c \
			$(SRCDIR)ft_string/ft_strsplit.c \
			$(SRCDIR)ft_string/ft_strstr.c \
			$(SRCDIR)ft_string/ft_strsub.c \
			$(SRCDIR)ft_string/ft_strtrim.c \
			$(SRCDIR)ft_tools/ft_countwrd.c \
			$(SRCDIR)ft_tools/ft_wrdlen.c

OBJ		:=	$(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)
INC		:=	-I./$(INCDIR)
OBJF	:=	.obj_exists
# ====================

# ===== Colors =====
CLEAR		= "\033[2K"
UP			= "\033[A"
EOC			= "\033[0;0m"
BLACK		= "\033[0;30m"
RED			= "\033[0;31m"
GREEN		= "\033[0;32m"
YELLOW		= "\033[0;33m"
BLUE		= "\033[0;34m"
PURPLE		= "\033[0;35m"
CYAN		= "\033[0;36m"
WHITE		= "\033[0;37m"
# ==================

.PHONY:	all norme clean fclean re
.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $@ $(OBJ)
		ranlib $@
		printf $(GREEN)" $* compiled!\n"$(EOC)

$(OBJDIR)%.o: $(SRCDIR)%.c $(OBJF)
		$(CC) $(FLAG) -c $< -o $@ $(INC)
		printf $(GREEN)"|"$(EOC)

$(OBJF):
		test -d $(OBJDIR) || mkdir $(OBJDIR)
		test -d $(OBJDIR)ft_array || mkdir $(OBJDIR)ft_array
		test -d $(OBJDIR)ft_ctype || mkdir $(OBJDIR)ft_ctype
		test -d $(OBJDIR)ft_list || mkdir $(OBJDIR)ft_list
		test -d $(OBJDIR)ft_puts || mkdir $(OBJDIR)ft_puts
		test -d $(OBJDIR)ft_stdlib || mkdir $(OBJDIR)ft_stdlib
		test -d $(OBJDIR)ft_string || mkdir $(OBJDIR)ft_string
		test -d $(OBJDIR)ft_tools || mkdir $(OBJDIR)ft_tools
		test -d $(OBJF) || touch $(OBJF)

norme:
		printf $(RED)
		norminette $(SRCDIR) $(INCPATH) | grep -v Norme -B1 || true
		printf $(EOC)

clean:
		rm -rf $(OBJDIR) $(OBJF)

fclean: clean
		rm -f $(NAME)

re: fclean all
