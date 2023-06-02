##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(shell find *.cpp)

OBJ	=	$(SRC:.cpp=.o)

NAME	=	Z

all:	$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) -g3 -Wall -Wextra -Werror -std=c++20

clean:
	@rm -f $(OBJ)
	@find -name a.out -delete

fclean:	clean
	@rm -f $(NAME)
	@find -name "*~" -delete
	@find -name "*#" -delete
	@find -name "*.o" -delete

re:	fclean all