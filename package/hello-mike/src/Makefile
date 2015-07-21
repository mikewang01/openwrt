# build helloworld executable when user executes "make"

hello-mike: hello-mike.o
	$(CC) $(LDFLAGS) hello-mike.o -o hello-mike

hello-mike.o: hello-mike.c
	$(CC) $(CFLAGS) -c hello-mike.c

# remove object files and executable when user executes "make clean"
clean:
	rm *.o hello-mike
