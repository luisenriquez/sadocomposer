#!/bin/sh
g++ ../sado-composer.cpp -o sado-composer
echo "enter the name of your new score :"
read newfile 
mkdir -p ./score
./sado-composer | tee ./score/$newfile.ly
lilypond ./score/$newfile.ly
mv $newfile.pdf ./score
mv $newfile.midi ./score
timidity ./score/$newfile.midi

