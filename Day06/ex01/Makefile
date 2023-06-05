##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	MyCat.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	MyCat

all:	$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) -g3 -Wall -Wextra -Werror -std=c++20

clean:
	@rm  .\MyCat.o

fclean:	clean
	@rm  $(NAME)
	@rm .\MyCat.exe
	@rm .\MyCat.bat

re:	fclean all