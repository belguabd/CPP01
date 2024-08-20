FLAGS=c++ -Wall -Wextra  -Werror

NAME=WEAPON

SRC=main.cpp  Weapon.cpp HumanA.cpp  HumanB.cpp


OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp HumanB.hpp HumanA.hpp Weapon.hpp
	$(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)


fclean :clean
	$(RM) $(NAME)


re: fclean all 