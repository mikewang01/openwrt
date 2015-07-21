# build helloworld executable when user executes "make"

#CC?=gcc
LIB += -lcurl -lcrypto -lz -lssl
#CFLAGS ?= -Wall -O2
urcl_test: urcl_test.o
	@echo $(LFLAGS)
	$(CC) $(LDFLAGS) $(LIB) urcl_test.o -o urcl_test
	
urcl_test.o: urcl_test.c
	@echo $(CC)
	@echo $(CFLAGS)
	$(CC) $(CFLAGS) -c urcl_test.c

# remove object files and executable when user executes "make clean"
clean:
	rm *.o urcl_test
