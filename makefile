all: inh LL_test

inh: MU_Person.h student.h main.cpp LL/LL.cpp LL/NODE.cpp
	g++ main.cpp LL/LL.cpp LL/NODE.cpp -o inh

LL_test: MU_Person.h student.h LL/LL.cpp LL/NODE.cpp LL/LL_test.cpp
	g++ LL/LL_test.cpp LL/LL.cpp LL/NODE.cpp -o LL_test

clean:
	rm -f inh LL_test