NAME = megaphone

COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMPILER) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all