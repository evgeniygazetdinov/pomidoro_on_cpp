# define the C compiler to use
CC = g++
CFLAGS= -std=c++11
OBJS = main.cpp

# all: main.cpp
#     $(CC) $(CFLAGS) $(OBJS);

all: eseguibile

eseguibile: $(OBJS)
    $(CC) $(CFLAGS) $^ -o eseguibile

