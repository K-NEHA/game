ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out -lm
   endif
endif

TEST_PROJ_NAME = Tic Tac Toe
BUILD_DIR=Build

INC =-Iinc -Iunity

SRC = src/check.c src/board.c src/rule.c 

PROJECT=main.c

UNITY=unity/unity.c
TEST=test/test_cases.c

	
all:
	gcc $(INC) $(SRC) $(PROJECT) -o all.exe
run: all
	./all.exe

test:
	gcc $(SRC) $(TEST) $(UNITY) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))


