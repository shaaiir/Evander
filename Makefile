CC = clang

CFLAGS = -Wall -Wextra -Iinclude

TARGET = build/evander

SOURCES = \
	src/main.c \
	src/system.c \
	src/cpu.c \
	src/memory.c \
	src/storage.c \
	src/process.c

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -rf build