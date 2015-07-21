# build helloworld executable when user executes "make"

net_test: net_test.o
	$(CC) $(LDFLAGS) net_test.o -o net_test

net_test.o: net_test.c
	$(CC) $(CFLAGS) -c net_test.c

# remove object files and executable when user executes "make clean"
clean:
	rm *.o net_test
