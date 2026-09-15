# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smolinas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/13 13:19:48 by smolinas          #+#    #+#              #
#    Updated: 2026/09/13 14:14:02 by smolinas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
DEBUGFLAGS = -g -O0

SRC = main.cpp \
      Fixed.cpp 

HDRS = Fixed.hpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDRS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

debug:
	@$(CXX) $(CXXFLAGS) $(DEBUGFLAGS) $(SRC) -o $@

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

test: $(NAME)
	@echo "===== TEST 1: DEBUG ====="
	@echo "If you did, I wouldn’t be asking for more!" >> expected.txt
	@echo "" >> expected.txt
	@echo "[ WARNING ]" >> expected.txt
	@echo "I think I deserve to have some extra bacon for free." >> expected.txt
	@echo "I’ve been coming for years, whereas you started working here just last month." >> expected.txt
	@echo "" >> expected.txt
	@echo "[ ERROR ]" >> expected.txt
	@echo "This is unacceptable! I want to speak to the manager now." >> expected.txt
	@echo "" >> expected.txt
	@diff -u expected.txt output.txt && echo "PASS"

	@echo "===== TEST 6: NO ARGUMENT ====="
	./$(NAME) > output.txt; RET=$$?; \
	if [ $$RET -eq 1 ]; then \
		echo "-------- Type ./harlFilter <OPTION> --------" > expected.txt; \
		echo 'options: "DEBUG"; "INFO"; "WARNING"; "ERROR"' >> expected.txt; \
		if diff -u expected.txt output.txt > /dev/null; then \
			echo "PASS"; \
		else \
			echo "FAIL"; \
			exit 1; \
		fi; \
	else \
		echo "FAIL: expected return 1, got $$RET"; \
		exit 1; \
	fi

oṕen_ref:
	@echo "Subject Ex00 v9 References"	
	@echo "Article 1 "
	xdg-open "https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.htm
	@echo "Article 2 "
xdg-open "https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html"
	@echo "Article 3 "
	xdg-open "https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html"
	@echo "Berkeley article "
	xdg-open "https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
