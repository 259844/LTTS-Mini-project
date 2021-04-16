PROJ_NAME = chat_app
TEST_PROJ_NAME = Test_$(PROJ_NAME)

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

all: client server
	@echo "* Done"

client:
	@echo "* Building Client"
	@gcc client.c -o client

server:
	@echo "* Building Server"
	@gcc server.c -o server

clean:
	@rm  client server 1>/dev/null 2>&1
	@echo "* Done"

help:
	@echo "chat app: A chat ecosystem built purely in C"
	@echo ""
	@echo "* server: Build the server"
	@echo "* client: Build the client"
	@echo "* all:    Build the server and client"
	@echo "* clean:  Remove project binaries"
	@echo ""

cppcheck:
	cppcheck --enable=all $(SRC) main(client).c
	cppcheck --enable=all $(SRC) main(server).c
	
