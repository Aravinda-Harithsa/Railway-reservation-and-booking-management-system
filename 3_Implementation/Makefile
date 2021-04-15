PROJECT_NAME = Railway_Ticket_Booking_System
TEST_NAME=TEST_$(PROJECT_NAME)
EXECUTE =   SRC/Resrervation_Swr.c unity/unity.c 
TEST_CASE= Test/test.c unity/unity.c
ASPECT=coverage_$(PROJECT_NAME)

#This will be used to check the OS which the System is running ON 
ifdef OS
	RM = del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
	editor=notepad
else
	ifeq ($(shell uname), Linux)
		RM=rm -rf
		FixPath=$1
			EXEC=out
			editor=cat
	endif
endif


.PHONY : all test coverage run clean doc

$(PROJECT_NAME) : $(SRC) 
	gcc SRC/Resrervation_Swr.c  -I -c $(EXECUTE) -o $(call  FixPath,$(PROJECT_NAME).$(EXEC))
run: $(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)
test:
	gcc Test/test.c -I -c unity/unity.c -o Test/$(TEST_NAME).$(EXEC)
	./Test/$(TEST_NAME).$(EXEC)
coverage:$(SRC)
		gcc -fprofile-arcs -ftest-coverage SRC/Resrervation_Swr.c -I -c $(EXECUTE) -o $(ASPECT).$(EXEC)
		./$(ASPECT).$(EXEC)
		gcov -a SRC/Resrervation_Swr.c
		$(editor) SRC/Resrervation_Swr.c.gcov

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcn
	$(RM) *.gcov
	$(RM) *.gcda
	$(RM) *.gcno

