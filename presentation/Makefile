.PHONY: all clean cleanall

all: main.pdf

main.pdf: *.tex *.bib ucsbseal_cmyk.pdf Makefile
	rubber --module xelatex main

clean:
	rubber --clean main
	rm main.pdf
