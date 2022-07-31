all: compile run

compile:
	@g++ -g -Wall Roman.cpp -o Roman

run:
	@./Roman