CC = gcc
CFLAGS = -Wall -g

SRCS = main.c lab1.c

OBJS = $(SRCS:.c=.o)

TARGET = explode

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c lab1.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
