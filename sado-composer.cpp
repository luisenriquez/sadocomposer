#include <iostream>
#include <math.h>
#include "functions-modal.h"
#include "scales12.h"
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;



      int main() {
int i; int j; float freq;int random_seed; int random_exp; int random_exp2; float octave; int mode; int limit; int dur; int dur_offset;  int option; int pitch; int pitch_offset;
string title; string composer; string key ;  string clef; string compas; string tempo; 



 cout<< "\\version \"2.14.2\" "<<endl;
cout << "\\header { "<<endl;

cout<< "%% Insert the composition's title and press enter:" <<endl; 
 getline (cin,title);
cout << "title = " <<"\"" <<title <<"\"" <<endl;  //title

cout<< "%% Insert the composer's name and press enter:" <<endl; 
  getline (cin,composer);
cout << "composer = " <<"\"" <<composer <<"\" }" <<endl;  //composer

cout <<"resetBarnum = \\context Score \\applyContext" <<endl;
 cout <<" #(set-bar-number-visibility 2) " <<endl;

cout << "\\score{<< " <<endl;
 
cout << "\\new Voice " <<endl;
cout << "\\with { " <<endl;
cout << "\\remove \"Note_heads_engraver\" \\consists \"Completion_heads_engraver\" } {" <<endl;



cout<< "%% Insert the CLEF:" <<endl; 
getline (cin,clef);
cout << "\\clef "  <<clef  <<endl;  //clef

cout<< "%% Insert the KEY:" <<endl; 
getline (cin,key);
cout << "\\key "  <<key  <<endl;  //key

cout<< "%% Insert the TIME:" <<endl; 
getline (cin, compas);
cout << "\\time "  <<compas <<endl;  //time

cout<< "%% Insert the TEMPO:" <<endl; 
getline (cin,tempo);
cout << "\\tempo "  <<tempo  <<endl;  //tempo

do
{ 



cout<< "%% Insert your INITIAL FREQ:" <<endl; 
cin>> freq;

cout<< "%% Insert the OCTAVE:" <<endl; 
cin>> octave;

cout<< "%% Insert the SCALE:" <<endl; 
cin >> mode;

cout<< "%% how many notes?:" <<endl; 
cin>> limit;

cout<< "%% index of pitches? (depends number of notes in scale):" <<endl;
cin>> pitch;

cout<< "%% offset of pitches (Sum no more than notes in scale + 1):" <<endl;
cin>> pitch_offset;

cout<< "%% index of durations? (from 1 to 8):"<<endl;
cin>> dur;

cout<< "%% offset of durations?:(Sum no more than 9)" <<endl;
cin>> dur_offset;

Atonal atonal;
Sistem * ato = &atonal;

Triton triton;
Sistem * tri = &triton;

Dorian dorian;
Sistem * dor = &dorian;

Frigian frigian;
Sistem * fri = &frigian;

Lydian lydian;
Sistem * lyd = &lydian;

Mixolydian mixolydian;
Sistem * mix = &mixolydian;

Eolian eolian;
Sistem * eol = &eolian;

Locrian locrian;
Sistem * loc = &locrian;

Ionian ionian;
Sistem * ion = &ionian;

Blues blues;
Sistem * blu = &blues;

Pentatonic_min  pentatonic_min;
Sistem * pent_min = &pentatonic_min;

Pentatonic_lyd  pentatonic_lyd;
Sistem * pent_lyd = &pentatonic_lyd;

Pentatonic_mix  pentatonic_mix;
Sistem * pent_mix = &pentatonic_mix;

Whole_tone  whole_tone;
Sistem * who = &whole_tone;

Diminished diminished;
Sistem * dim = &diminished;

Half_diminished half_diminished;
Sistem * half_dim = &half_diminished;

Augmented augmented;
Sistem * aug = &augmented;

Arpegio_maj7  arpegio_maj7;
Sistem * arp_maj7 = &arpegio_maj7;

Arpegio_min7  arpegio_min7;
Sistem * arp_min7 = &arpegio_min7;

Arpegio_7  arpegio_7;
Sistem * arp_7 = &arpegio_7;

Arpegio_min7_b5  arpegio_min7_b5;
Sistem * arp_min7_b5 = &arpegio_min7_b5;

Arpegio_maj  arpegio_maj;
Sistem * arp_maj = &arpegio_maj;

Arpegio_min  arpegio_min;
Sistem * arp_min = &arpegio_min;

Arpegio_aug  arpegio_aug;
Sistem * arp_aug = &arpegio_aug;

Arpegio_dim  arpegio_dim;
Sistem * arp_dim = &arpegio_dim;




Sistem * ptr ;

for (i=1 ; i<2 ; i++)
{
srand((unsigned)time(0));
random_seed= (rand()%12);
//cout <<"random_seed =" <<random_seed <<endl;

	for(j=random_seed;j<=limit ;j++)
{

random_exp=(rand()% pitch) + (pitch_offset) ;
random_exp2=(rand()% dur) + (dur_offset);
	
        ion->set_values(freq,FAC12, random_exp);
	dor->set_values(freq,FAC12, random_exp);
	fri->set_values(freq,FAC12, random_exp);
	lyd->set_values(freq,FAC12, random_exp);
	mix->set_values(freq,FAC12, random_exp);
	eol->set_values(freq,FAC12, random_exp);
	loc->set_values(freq,FAC12, random_exp);
	tri->set_values(freq,FAC12, random_exp);
	ato->set_values(freq,FAC12, random_exp);
	
	blu->set_values(freq,FAC12,random_exp);
	pent_min->set_values(freq,FAC12, random_exp);
	pent_lyd->set_values(freq,FAC12, random_exp);
	pent_mix->set_values(freq,FAC12, random_exp);
	who->set_values(freq,FAC12, random_exp);
	dim->set_values(freq,FAC12, random_exp);
	half_dim->set_values(freq,FAC12, random_exp);
	aug->set_values(freq,FAC12, random_exp);

	arp_maj7->set_values(freq,FAC12, random_exp);
	arp_min7->set_values(freq,FAC12, random_exp);
	arp_7->set_values(freq,FAC12, random_exp);
	arp_min7_b5->set_values(freq,FAC12, random_exp);
	arp_maj->set_values(freq,FAC12, random_exp);
	arp_min->set_values(freq,FAC12, random_exp);
	arp_aug->set_values(freq,FAC12, random_exp);
	arp_dim->set_values(freq,FAC12, random_exp);
	
{
if(freq == 0)
{ break;}

/*   cout<< "freqs are:" 

<< dor->scale() * octave <<" note: " <<endl;*/
else if (mode ==1)
 {lily(ion->scale() * octave);}

else if (mode ==2)
{ lily(dor->scale() * octave);}

else if (mode ==3)
{ lily(fri->scale() * octave);}

else if (mode ==4)
{ lily(lyd->scale() * octave);}

else if (mode ==5)
{ lily(mix->scale() * octave);}

else if (mode ==6)
{ lily(eol->scale() * octave);}

else if (mode ==7)
{ lily(loc->scale() * octave);}

else if (mode ==8)
{ lily(tri->scale() * octave);}

else if (mode ==9)
{ lily(ato->scale() * octave);}

//
else if (mode ==10)
{ lily(blu->scale() * octave);}

else if (mode ==11)
{ lily(pent_min->scale() * octave);}

else if (mode ==12)
{ lily(pent_lyd->scale() * octave);}

else if (mode ==13)
{ lily(pent_mix->scale() * octave);}

else if (mode ==14)
{ lily(who->scale() * octave);}

else if (mode ==15)
{ lily(dim->scale() * octave);}

else if (mode ==16)
{ lily(half_dim->scale() * octave);}

else if (mode ==17)
{ lily(aug->scale() * octave);}

else if (mode ==18)
{ lily(arp_maj7->scale() * octave);}

else if (mode ==19)
{ lily(arp_7->scale() * octave);}

else if (mode ==20)
{ lily(arp_min7->scale() * octave);}

else if (mode ==21)
{ lily(arp_min7_b5->scale() * octave);}

else if (mode ==22)
{ lily(arp_maj->scale() * octave);}

else if (mode ==23)
{ lily(arp_min->scale() * octave);}

else if (mode ==24)
{ lily(arp_aug->scale() * octave);}

else if (mode ==25)
{ lily(arp_dim->scale() * octave);}

else
{ break;}

//cout <<"4. ";
duration(random_exp2);
//cout<<"= " <<random_exp <<" " <<random_exp2 <<" :";


}
	
}

cout<< "\n"<<endl;
	 }

cout <<" %% choose an option:(1)new inst, (2)more notes, (3) quit "<<endl;
cin >> option;

if(option == 1)
{ 
cout << "} " <<endl;
cout << "\\new Voice " <<endl;
cout << "\\with { " <<endl;
cout << "\\remove \"Note_heads_engraver\" \\consists \"Completion_heads_engraver\" } {" <<endl;
cout<< "%% Insert the clef again: " <<endl; 
cin >> clef;
cout << "\\clef " <<clef <<endl;

}
else if(option == 3)
{break;}

else
{
cout << " %%let's keep playing " <<endl;
}

}
while (option != 3);

cout<< "\n"<<endl;

cout<< " \\bar \"||\" "<<endl;	      
cout<< "} >> " <<endl;

cout<< " \\midi {\\context {\\Score tempoWholesPerMinute = #(ly:make-moment ";
cout << tempo <<" )}}"  <<endl;
cout<< "\\layout {}";

cout<< "}" <<endl;
}


