FLAGS=c++ -Wall -Wextra  -Werror

NAME=WEAPON

SRC=main.cpp HumanA.cpp  Weapon.cpp HumanB.cpp


OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
	$(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)


fclean :clean
	$(RM) $(NAME)


re: fclean all 