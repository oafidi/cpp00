NAME = phonebook

COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Contact.cpp PhoneBook.cpp main.cpp
HEADERS = Contact.hpp PhoneBook.hpp

OBJ = $(SRCS:.cpp=.o)

%.o : %.cpp $(HEADERS)
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