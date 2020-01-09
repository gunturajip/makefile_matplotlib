all: gap.cpp
	g++ gap.cpp -o a.out
gap.cpp: a.out
	./a.out
	python3 example.py


