PROJ_NAME = chat_app
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/server.c\
      src/client.c
      
INC	= -Iinc\
-Iunity\

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


.PHONY: default
default: help

all:
gcc src/server.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC)) \
gcc src/client.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))



# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_PROJECT_NAME).$(EXEC)
	./$(TEST_PROJECT_NAME).$(EXEC)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.$(EXEC)
	

#For Linux Only
valgrind:
		./$(PROJECT_NAME).out < input_redirect.txt
