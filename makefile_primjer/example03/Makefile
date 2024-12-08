.SECONDARY:

all: exe/app.elf

%.elf: src/main.o src/help.o src/calc.o
	gcc src/main.o src/help.o src/calc.o -o $@

%.o: %.c
	gcc -c $< -I inc/ -o $@

clean:
	rm -f src/*.o exe/app.elf


