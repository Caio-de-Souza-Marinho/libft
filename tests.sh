#!/bin/bash

GREEN='\033[1;32m'
NO_COLOR='\033[0m'

echo -e "\n${GREEN}Running Norminette${NO_COLOR}"
cd src && \
norminette && \

cd .. && \
echo -e "\n${GREEN}Rebuilding libft...${NO_COLOR}"
make fclean && make re && \

echo -e "\n${GREEN}Running test program with Valgrind...${NO_COLOR}"
cd tests && \
make fclean && \
make leakfull ARGS="$1"&& \

echo -e "\n${GREEN}All tasks completed successfully!${NO_COLOR}"
