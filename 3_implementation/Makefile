PROJ_NAME = chat_app
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD = build

SRC = src/server.c\
      src/client.c\
      
INC	= -Iinc\
-Iunit\

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



$(PROJECT_NAME):all

.PHONY	: all test coverage run clean doc

all:
	gcc src/main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) -o $(TEST_PROJECT_NAME).$(EXEC)
	./$(TEST_PROJECT_NAME).$(EXEC)


run: $(PROJECT_NAME)
	./${PROJECT_NAME}.$(EXEC)
doc:
	make -C documentation

clean:
	$(RM) *.(EXEC)


$(BUILD):
	mkdir build
