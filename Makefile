NAME = libftpp.a
SRC_DIR = src/
OBJ_DIR = objs/
INCLUDE	= include/
C = c++
FLAGS= -Wall -Wextra -Werror -std=c++11



$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@echo "Libft++ created!"