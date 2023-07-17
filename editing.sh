#!/bin/sh

echo "enter the name of the file to change :"
read oldfile 
echo "enter the name of the new file :"
read newfile 


echo  "enter the old parameter to be replaced: "
read oldnote
echo "You entered: $oldnote"


echo  "enter the new parameter: "
read newnote
echo "You entered: $newnote"


echo "enter 1 if  note. Enter 2 if you want to insert a triplet,  3 for quintuplets, an 4 for dynamics, articulations,  5 for legato, 6 for marks"

read num
case $num in
1) sed "s/$oldnote/$newnote /g" <$oldfile >$newfile.ly ;;

2) sed  "s/$oldnote/\\\times 2\/3 {$newnote } /g" <$oldfile >$newfile.ly ;;
3) sed  "s/$oldnote/\\\times 4\/5 {$newnote } /g" <$oldfile >$newfile.ly ;;

4) sed "s/$oldnote/$oldnote$newnote /g" <$oldfile >$newfile.ly ;;
5) sed "s/$oldnote/($oldnote) /g" <$oldfile >$newfile.ly ;;
6) sed "s/$oldnote/$oldnote^\\\markup{$newnote } /g" <$oldfile >$newfile.ly ;;


esac

lilypond $newfile.ly
timidity $newfile.midi













