#!/bin/bash

GREEN='\033[0;32m'
NO_COLOR='\033[0m' # No Color

# Rebuild libft in src
cd src && \
make re
cd ../tests && \
# Compile the test program
make && \
# Run the tests with Valgrind for memory checking
make leakfull && \
# Check code style
cd ../src && \
norminette && \
echo "" && \
echo -e "${GREEN}SUCESSO!${NO_COLOR}"
