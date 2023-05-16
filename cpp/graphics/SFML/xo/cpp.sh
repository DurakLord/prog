#!/bin/bash

g++ -I./include -c ./*.cpp
g++ -o main *.o

rm *.o
