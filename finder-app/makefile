CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = writer
OBJS = writer.o

ifdef CROSS_COMPILE
    CC = $(CROSS_COMPILE)gcc
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean