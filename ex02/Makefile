CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = dream

SRCS = Account.cpp tests.cpp

OBJ = $(SRCS:.cpp=.o)

%.o : %.cpp Account.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all