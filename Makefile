# processes/Makefile
#
# Makefile for process implementation file.
#
# Nicole Sullivan
# nicolesullivanmarie@gmail.com
processes: main.c
	gcc -o main main.c

clean:
	-rm main