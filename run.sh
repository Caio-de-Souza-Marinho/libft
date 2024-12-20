#!/bin/bash

GREEN='\033[1;32m'
NO_COLOR='\033[0m'

echo -e "\n${GREEN}Running Norminette${NO_COLOR}"
cd src && \
norminette && \

echo -e "\n${GREEN}Rebuilding libft...${NO_COLOR}"
make fclean && \
make && \
# make bonus && \

echo -e "\n${GREEN}Compiling the test program...${NO_COLOR}"
cd ../tests && \
make && \

echo -e "\n${GREEN}Running Valgrind tests...${NO_COLOR}"
make leakfull && \

# echo -e "\n${GREEN}Compiling main.c using the static library...${NO_COLOR}"
# cd ../ && \
# cc -Wall -Wextra -Werror main.c -L src -lft -o main.out

# Check if main compilation was successful
# if [ $? -eq 0 ]; then
#    echo -e "\n${GREEN}Running main function...${NO_COLOR}"
#    ./main.out
# else
#    echo -e "${NO_COLOR}Compilation of main.c failed.${NO_COLOR}"
#    exit 1
# fi

# Run francinette tests
# cd src && \
# echo -e "\n${GREEN}Running Francinette tests...${NO_COLOR}"
# ~/francinette/tester.sh && \

echo -e "\n${GREEN}All tasks completed successfully!${NO_COLOR}"
