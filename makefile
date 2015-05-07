CC=g++
CCFLAGS=-Wall
LDFLAGS=
SOURCES=$(wildcard *.cpp)
BITMAP_SOURCES=$(wildcard bitmaps\*.cpp)
GAME_SOURCES=$(wildcard game\*.cpp)
GAME_OBJECTS=$(GAME_SOURCES:.cpp=.o)
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=my_game

all: my_game

my_game: main.o	
	$(CC) $(LDFLAGS) -o main.o

main.o: main.c 

#all: $(TARGET)
 
#$(TARGET): $(OBJECTS)
#	$(CC) $(LDFLAGS) -o $@ $^
# 
#%.o: %.c %.h
#	$(CC) $(CCFLAGS) -c $<
# 
#%.o: %.c
#	$(CC) $(CCFLAGS) -c $<
 
clean:
	rm -f *.o $(TARGET)

