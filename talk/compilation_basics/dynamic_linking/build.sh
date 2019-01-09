# Compile
g++ -c -fPIC add.cc
g++ -c -fPIC sub.cc

#Generate libraries
g++ add.o -shared -o libadd.so
g++ sub.o -shared -o libsub.so

#Remove useless stuff
rm -rf *.o

# Create an executable
g++ main.cc -ladd -lsub  # use -L . (Why?)

