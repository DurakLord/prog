#!/bin/bash

g++ -I./include -c ./*.cpp

g++ -lsfml-system -lsfml-window -lsfml-graphics -lsfml-network -lGL  -o main *.o

rm *.o
