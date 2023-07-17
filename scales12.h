#include <iostream>
#include <math.h>
#include <string>


#define FAC12 1.05946309436



using namespace std;

class Sistem {
protected:
float freq, prop,n ;

public:
	void set_values(float a,float b ,float c)
	{freq=a; prop=b; n=c;}
	void set_dobles(float a, float b, float c)
	{freq=a * 2; prop=b; n=c;}

	virtual float scale(void)=0;
//virtual float fibo(int n) = 0;
	};
	
	
class Sistem12:public Sistem{
public:
	float scale()
 
       
	{return (freq) * pow(FAC12, n);}
 
	};





class Atonal:public Sistem{
public:

	float scale() 
       
{	
return (freq) * pow(FAC12, n);}
/*
     float fibo(int n)
	{
	if (n <= 2)
	return freq * 1;
	else
	return  (freq) * pow(FAC12,fibo(n-1) + fibo(n-2))  ;
	}
*/
};

class Triton:public Sistem{
public:

	float scale() 
       
 
	{
if (n==0 || n==1 || n==4 ||  n==6 || n==7 || n==10 || n==12)
{
return (freq) * pow(FAC12, n);}

else if (n==2 || n==8)
{return (freq) * pow(FAC12, n-2);}

else 
{return 1;}

}

};


class Dorian:public Sistem{
public:

	float scale() 
       
	{
if (n==0 || n==2 || n==3 || n==5 || n==7 || n==9 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==4|| n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==6 || n==8)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}
};


class Frigian:public Sistem{
public:
	float scale() 

{
if (n==0 || n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
{return (freq) * pow(FAC12, n);}

else if (n==2 || n==4)
{ return (freq) * pow(FAC12, n-1);}

else if (n==6 || n==9 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}

};



class Lydian:public Sistem{
public:
	float scale() 

{
if (n==0 || n==2 || n==4 || n==6 || n==7 || n==9 || n==11 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==3)
{ return (freq) * pow(FAC12, n-1);}

else if (n==5 || n==8 || n==10)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};	


class Mixolydian:public Sistem{
public:
	float scale() 
	
{
if (n==0 || n==2 || n==4 || n==5 || n==7 || n==9 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3 || n==6 || n==8)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}
};



class Eolian:public Sistem{
public:
float scale() 
	

{
if (n==0 || n==2 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==4 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==6 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};


class Locrian:public Sistem{
public:
	float scale() 
	
{
if (n==0 || n==1 || n==3 || n==5 || n==6 || n==8 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==2 || n==4 || n==7)
{ return (freq) * pow(FAC12, n-1);}

else if (n==9 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};


class Ionian:public Sistem{
public:
	float scale() 
	
{
if (n==0 || n==2 || n==4 || n==5 || n==7 || n==9 || n==11 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==8 || n==10)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3 || n==6)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};


// Blues

class Blues:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==5 || n==6 || n==7 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==2 || n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==4 || n==6 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};

//minor pentatonic
class Pentatonic_min:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==5 || n==7 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==2 || n==6 ||n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==4 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};

// lydian pentatonic
class Pentatonic_lyd:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==6 || n==7 || n==11 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==5 || n==8)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3 || n==10)
{ return (freq) * pow(FAC12, n+1);}

else if (n==1 || n==9)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}

}	
};


// mixolydian pentatonic
class Pentatonic_mix:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==5 || n==7 || n==10 || n==12)
{

return (freq) * pow(FAC12, n);}

else if (n==1 || n==6 || n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else if (n==2)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}

}	
};

//SIMETRICAS
//whole tone 

class Whole_tone:public Sistem{
public:
	float scale()
{
if (n==0 || n==2 || n==4 || n==6 || n==8 || n==10 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==3 || n==5 || n==7 || n==9 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else
{return 1;}

}	
};

//diminished
class Diminished:public Sistem{
public:
	float scale()
{
if (n==0 || n==2 || n==3 || n==5 || n==6 || n==8 || n==9 || n==11 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==4 || n==7 || n==10)
{ return (freq) * pow(FAC12, n-1);}

else
{return 1;}

}	
};
	
//half-diminished
class Half_diminished:public Sistem{
public:
	float scale()
{
if (n==0 || n==1 || n==3 || n==4 || n==6 || n==7 || n==9 || n==10 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==2 || n==5 || n==8 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};

//augmented

class Augmented:public Sistem{
public:
	float scale()
{
if (n==0 || n==1 || n==4 || n==5 || n==8 || n==9 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==2 || n==6 || n==10)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3|| n==7 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}

}	
};


//ARPEGIOS septima
//Maj7
class Arpegio_maj7:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==7 || n==11|| n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==5 || n==8)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3|| n==6 || n==10)
{ return (freq) * pow(FAC12, n+1);}

else if (n==2|| n==9)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}

}	
};

//7
class Arpegio_7:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==7 || n==10|| n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==5 || n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3|| n==6 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else if (n==2)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}

}	
};

//min7
class Arpegio_min7:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==7 || n==10|| n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==4 || n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==2|| n==6 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else if (n==5)
{ return (freq) * pow(FAC12, n-2);}


else
{return 1;}

}	
};

//min7(b5)
class Arpegio_min7_b5:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==7 || n==10|| n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==4 || n==8 || n==11)
{ return (freq) * pow(FAC12, n-1);}

else if (n==2|| n==6 || n==9)
{ return (freq) * pow(FAC12, n+1);}

else if (n==5)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}

}	
};

//ARPEGIOS TRIAD
//Major
class Arpegio_maj:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==7 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==5)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3|| n==6 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else if (n==2 || n==9 )
{ return (freq) * pow(FAC12, n-2);}

else if (n==10 )
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}
}	
};

//minor
class Arpegio_min:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==7 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==4 || n==8)
{ return (freq) * pow(FAC12, n-1);}

else if (n==2|| n==6 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else if (n==5 || n==9)
{ return (freq) * pow(FAC12, n-2);}

else if (n==10)
{ return (freq) * pow(FAC12, n+2);}

else
{return 1;}
}	
};

//Augmented
class Arpegio_aug:public Sistem{
public:
	float scale()
{
if (n==0 || n==4 || n==8 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==5 || n==9)
{ return (freq) * pow(FAC12, n-1);}

else if (n==3|| n==7 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else if (n==2 || n==6 || n==10)
{ return (freq) * pow(FAC12, n-2);}

else
{return 1;}
}	
};

//Diminished
class Arpegio_dim:public Sistem{
public:
	float scale()
{
if (n==0 || n==3 || n==6 || n==9 || n==12)
{

return (freq) * pow(FAC12,n);}

else if (n==1 || n==4 || n==7 || n==10)
{ return (freq) * pow(FAC12, n-1);}

else if (n==2|| n==5 || n==8 || n==11)
{ return (freq) * pow(FAC12, n+1);}

else
{return 1;}
}	
};




