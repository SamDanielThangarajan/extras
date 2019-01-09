g++ -c add.cc
g++ -c sub.cc
ar rvs lib.a add.o
ar rvs lib.a sub.o
g++ main.cc lib.a
