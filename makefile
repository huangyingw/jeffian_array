OBJECTS = jeffian_array.exe
LOCFLAGS = -I../jeffian_array
CC = g++
CCFLAGS = -ansi -W -Wall -lstdc++
LOCFLAGS =
all: $(OBJECTS)
%.o: %.cc %.cpp
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -g -o $@
%.exe: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@
clean:
	rm -rf *.o core *.stackdump
clobber: clean
	rm -rf *.exe
