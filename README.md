
SADO COMPOSER

new algorithmic composition software interface

This software is under development. It is an experimental lilypond interface to musicians who want to try harmony and melodies. I will be programming a lot of scores in different programming languages for a while but finally I have decided to put them together. I hope you find it useful

Soon we will be adding chords, microtonal harmony, dynamics and many algorithms for controlling pitches, rythms, tempo, and other parameters.

FIRST: You need to have installed g++, cmake, lilypond and timidity.

$apt-get install g++ cmake lilypond timidity

INSTALL:

$mkdir build && cd build 
$cmake ../ 
$make 
$ mv ../sado-composer.sh .  
$ mv ../editing.sh .   

RUN IT:

$sh sado-composer.sh

THEN, BUILD YOUR SCORE:

Insert the composition's title: "the title"

Insert composer's name: "your name"

Insert the Clef: e.g. bass

Insert the Key: e.g. c \major

Insert the time: e.g. 3/4

Insert the tempo: e.g. 4=120

Insert your initial freq: e.g. 110

Insert the octave: e.g. 1 (if you want a bigger range of intervals use 2+)

Insert the scale: e.g. 3 (At the moment are only available are: SCALES: 1.Major 2.Dorian 3.FRigian 4.Lydian 5. Mixolydian 6.Minor 7.Locrian 8.Tritonal 9. Atonal 10. BLues 11.Minor Pentatonic 12. Lydian Pentatonic 13. Mixolydian Pentatonic 14.whole tone 15.Diminished 16. Half-whole diminished 17. Augmented ARPEGIOS: 18.Maj7 19.Dominant 7 20.min7 21. min7(b5) 22.Major 23.minor 24.Augmented 25. diminished)

How many notes: e.g. 100 (as many as you wish)

Index of pitches: eg: 13 (The range of pitches. There are 12 pitches in an equal temperated 12 system. You can perhaps specify just the first 5 by chosing 4)

Offset of pitches: eg: 0 (You can specify from which pitch you start, but the sum should not be more than 13. eg: choosing 7 means you start from the 6th pitch)

Index of durations: eg:8 (Longer durations start at lower numbers. choose the range of durations)

Offset of durations: eg:1 (If you prefer faster durations, you could specify it by adding this offset)

THIS IS UNDER DEVELOPMENT, BUT YOU COULD STILL FIND IT USEFUL. MARKOV CHAINS, FIBONACCI, DODECAPHONY, MICROTONOS AND MUCH MORE VERY SOON...

Then you can choose to add a new instrument(1), add more notes to your current instrument(2), or finish the score(3)

   EDITING

All parameters can be changes at any time. Use the file editing.sh for making changes. 

$cd /score

$sh ./editing.sh

Enter the name of the file to be changed (e.g. old.ly)

Enter the new file without extention (e.g. new)

Enter the old parameter to be changed (e.g. dis'8)

Enter the new parameter (e.g. dis'16)

Then, choose your best option:
1) change parameter
2) insert triplet
3) insert quintuplet
4) insert dynamics or articulations (In some cases you must scape the character "\". Use it 6 times ej for "\p": "\\\\\\p"
5) insert legato
6) insert marks

!!!!ENJOY



