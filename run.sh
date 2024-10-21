#!/bin/bash

GREEN='\033[1;32m'
NO_COLOR='\033[0m' # No Color

# Rebuild libft in src
cd src && \
make fclean && \
make bonus
# Compile the test program
cd ../tests && \
make && \
# Run the tests with Valgrind for memory checking
make leakfull && \
# Check code style
cd ../src && \
norminette && \
echo "" && \
echo -e "${GREEN}SUCCESS!${NO_COLOR}"
