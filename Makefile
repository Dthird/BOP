test: test.cpp
	g++ test.cpp -o test
tst: test
	./test
.PHONY: tst
