#include <iostream>
#include <math.h>

using namespace std;

int majorChords(int n)
{
switch(n)
{
case 110: cout<<"<c e g b>";
break;
case 116: cout<<"<d fis a cis>";
break;
case 123: cout<<"<e gis b dis>";
break;
case 130: cout<<"<f a c e>";
break;
case 138:cout<<"cis";
break;
case 146: cout<<"d";
break;
case 155:cout<<"dis";
break;
case 164:cout<<"e";
break;
case 174:cout<<"f";
break;
case 184:cout<<"fis";  //
break;
case 195:cout<<"g";   //
break;
case 207: cout<<"gis";
break;
}
}

int lily(int n)
{
switch(n)
{
case 1: cout<<"r";
break;
case 27: cout<<"a,,,";
break;
case 29: cout<<"ais,,,";
break;
case 30:cout<<"b,,,";
break;

case 32: cout<<"c,,";
break;
case 34:cout<<"cis,,";
break;
case 36: cout<<"d,,";
break;
case 38:cout<<"dis,,";
break;
case 41: cout<<"e,,";
break;
case 43:cout<<"f,,";
break;
case 46: cout<<"fis,,";
break;
case 48:cout<<"g,,";
break;
case 51: cout<<"gis,,";
break;


case 55: cout<<"a,,";
break;
case 58: cout<<"ais,,";
break;
case 61:cout<<"b,,";
break;
case 65: cout<<"c,";
break;
case 69:cout<<"cis,";
break;
case 73: cout<<"d,";
break;
case 77:cout<<"dis,";
break;
case 82: cout<<"e,";
break;
case 87:cout<<"f,";
break;
case 92: cout<<"fis,";
break;
case 97:cout<<"g,";
break;
case 103: cout<<"gis,";
break;

case 110: cout<<"a,";
break;
case 116: cout<<"ais,";
break;
case 123:cout<<"b,";
break;
case 130: cout<<"c";
break;
case 138:cout<<"cis";
break;
case 146: cout<<"d";
break;
case 155:cout<<"dis";
break;
case 164:cout<<"e";
break;
case 174:cout<<"f";
break;
case 184:cout<<"fis";  //
break;
case 195:cout<<"g";   //
break;
case 207: cout<<"gis";
break;


case 220: cout<<"a";  //
break;
case 233: cout<<"ais";
break;
case 246:cout<<"b";
break;
case 261: cout<<"c'";
break;
case 277:cout<<"cis'";
break;
case 293: cout<<"d'";
break;
case 311:cout<<"dis'";
break;
case 329: cout<<"e'";
break;
case 349:cout<<"f'";
break;
case 369: cout<<"fis'"; 
break;
case 391:cout<<"g'";  //
break;
case 415: cout<<"gis'";
break;

case 440: cout<<"a'";
break;
case 466: cout<<"ais'";
break;
case 493:cout<<"b'";
break;
case 523: cout<<"c''";
break;
case 554:cout<<"cis''";
break;
case 587: cout<<"d''";
break;
case 622:cout<<"dis''";
break;
case 659: cout<<"e''";
break;
case 698:cout<<"f''";
break;
case 739: cout<<"fis''";
break;
case 783:cout<<"g''";
break;
case 830: cout<<"gis''";
break;

case 880: cout<<"a''";
break;
case 932: cout<<"ais''";
break;
case 987:cout<<"b''";
break;
case 1046: cout<<"c'''";
break;
case 1108:cout<<"cis'''";
break;
case 1174: cout<<"d'''";
break;
case 1244:cout<<"dis'''";
break;
case 1318: cout<<"e'''";
break;
case 1396:cout<<"f'''";
break;
case 1480: cout<<"fis'''";
break;
case 1567:cout<<"g'''";
break;
case 1661: cout<<"gis'''";
break;

case 1760: cout<<"a'''";
break;
case 1864: cout<<"ais'''";
break;
case 1975:cout<<"b'''";
break;
case 2093: cout<<"c''''";
break;
case 2217:cout<<"cis''''";
break;
case 2349: cout<<"d''''";
break;
case 2489:cout<<"dis''''";
break;
case 2637: cout<<"e''''";
break;
case 2793:cout<<"f''''";
break;
case 2960: cout<<"fis''''";
break;
case 3136:cout<<"g''''";
break;
case 3322: cout<<"gis''''";
break;

case 3520: cout<<"a''''";
break;
case 3729: cout<<"ais''''";
break;
case 3951:cout<<"b''''";
break;
case 4186: cout<<"c'''''";
break;
}
return n;

}


int duration(int n)
{
if (n == 1 || n== 0)
{ cout<<"1 ";}

else if (n == 2)
{ cout<<"2 ";}

else if (n == 3)
{ cout<<"2. ";}

else if (n == 4)
{ cout<<"4 ";}

else if (n == 5)
{ cout<<"4. ";}

else if (n == 6)
{ cout<<"8 ";}

else if (n == 7)
{ cout<<"8. ";}

else if (n == 8)
{ cout<<"16 ";}

else if (n == 9)
{ cout<<"16. ";}

else 
{ cout<<"4 ";}

}


int dynamics (int n)
{
  if (n==0 || n==1)
{cout<<"\\ppp ";}

  else if (n==2)
{cout<<"\\pp ";}

  else if (n==3)
{cout<<"\\p ";}

  else if (n==4)
{cout<<"\\mp ";}

  else if (n==5)
{cout<<"\\mf ";}

  else if (n==6)
{cout<<"\\f ";}

  else if (n==7)
{cout<<"\\ff ";}

  else if (n==8)
{cout<<"\\fff ";}

  else if (n==9)
{cout<<"\\sfz ";}

else
{cout<<"\\mp ";}

}


/*
int duration(int n)
{
switch(n)
{

 case 1: cout<<"1 ";
break;
case 2: cout<<"2 ";
break;
case 3: cout<<"2. ";
break;
case 4: cout<<"4 ";
break;
case 5: cout<<"4. ";
break;
case 6: cout<<"8 ";
break;
case 7: cout<<"8. ";
break;
case 8: cout<<"16 ";
break;
case 9: cout<<"nil ";
break;
case 10: cout<<"nil ";
break;
case 11: cout<<"nil ";
break;
case 12: cout<<"nil ";
break;

case 13: cout<<"nil ";
break;

}
return n;
}

*/

