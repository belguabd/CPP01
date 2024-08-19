FLAGS=c++ -Wall -Wextra  -Werror

NAME=Zombie

SRC=main.cpp Zombie.cpp  ZombieHorde.cpp


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