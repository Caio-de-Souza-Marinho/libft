#!/bin/bash

GREEN='\033[1;32m'
NO_COLOR='\033[0m'

echo -e "\n${GREEN}Running Norminette${NO_COLOR}"
cd src && \
norminette && \

cd .. && \
echo -e "\n${GREEN}Rebuilding libft...${NO_COLOR}"
make re && \

echo -e "\n${GREEN}Running test program with Valgrind...${NO_COLOR}"
cd tests && \
make leakfull && \

# echo -e "\n${GREEN}Compiling main.c using the static library...${NO_COLOR}"
# cd .. && \
# cc -Wall -Wextra -Werror main.c -L . -lft -o main.out

# Check if main compilation was successful
# if [ $? -eq 0 ]; then
#   echo -e "\n${GREEN}Running main function...${NO_COLOR}"
#   ./main.out
# else
#   echo -e "${NO_COLOR}Compilation of main.c failed.${NO_COLOR}"
#    exit 1
# fi

echo -e "\n${GREEN}All tasks completed successfully!${NO_COLOR}"
