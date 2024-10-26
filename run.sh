#!/bin/bash

GREEN='\033[1;32m'
NO_COLOR='\033[0m' # No Color

# Rebuild libft in src
echo -e "${GREEN}Rebuilding libft...${NO_COLOR}"
cd src && \
make fclean && \
make && \
make bonus

echo -e "\n${GREEN}Compiling the test program...${NO_COLOR}"
# Compile the test program
cd ../tests && \
make && \

# Run the tests with Valgrind for memory checking
echo -e "\n${GREEN}Running Valgrind tests...${NO_COLOR}"
make leakfull && \

echo -e "\n${GREEN}Compiling main.c using the static library...${NO_COLOR}"
# Compile main.c using the static library
cd ../ && \
cc -Wall -Wextra -Werror main.c -L src -lft -o main.out

# Check if main compilation was successful
if [ $? -eq 0 ]; then
    echo -e "\n${GREEN}Running main function...${NO_COLOR}"
    ./main.out
else
    echo -e "${NO_COLOR}Compilation of main.c failed.${NO_COLOR}"
    exit 1
fi

# Check code style
echo -e "\n${GREEN}Checking code style with Norminette...${NO_COLOR}"
cd src && \
norminette && \

# Run francinette tests
echo -e "\n${GREEN}Running Francinette tests...${NO_COLOR}"
~/francinette/tester.sh && \

echo -e "\n${GREEN}All tasks completed successfully!${NO_COLOR}"
