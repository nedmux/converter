#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
  printf ("What do you want to do? (write the character in the parenthesis)\n");
  printf ("Celsius to Kelvin (a)\nKelvin to celsius(b)\nCelsius to Fahrenheit(c)\nFahrenheit to Celsius(d)\nKelvin to Fahrenheit(e)\nFahrenheit to Kelvin(f)\n");
  modo ();
}

modo () {
  char ck;
  char kc;
  char cf;
  char fc;
  char kf;
  char fk;
  char tipo;
  scanf ("%s",&tipo);
  if ( tipo == 'a' ) {
    cck ();
  }
  else
    if ( tipo == 'b' ) {
      kkc ();
    }
    else
      if ( tipo == 'c' ) {
	ccf ();
      }
      else
	if ( tipo == 'd' ) {
	  ffc ();
	}
	else
	  if ( tipo == 'e' ) {
	    kkf ();
	  }
	  else
	    if ( tipo == 'f' ) {
	      ffk ();
	    }
	    else {
	      printf ("You haven't written any of that characters\n");
	      modo ();
}}

cck () {
  float celsius;
  float kelvin;
  printf ("Write the temperature in Celsius:\n");
  fflush( stdin );
  scanf ("%f", &celsius);
  kelvin=celsius+273.15;
  printf ("The result is %f Kelvin degrees\n",kelvin);
  repetir ();
}

kkc () {
  float celsius;
  float kelvin;
  printf ("Write the temperature in Kelvin:\n");
  fflush( stdin );
  scanf ("%f", &kelvin);
  celsius=kelvin-273.15;
  printf ("The result is %f Celsius degrees\n",celsius);
  repetir ();
}

kkf () {
  float fahrenheit;
  float kelvin;
  printf ("Write the temperature in Kelvin:\n");
  fflush( stdin );
  scanf ("%f", &kelvin);
  fahrenheit=(kelvin*(9/5))-459.67;
  printf ("The result is %f Fahrenheit degrees\n",fahrenheit);
  repetir ();
}

ffk () {
  float fahrenheit;
  float kelvin;
  printf ("Write the temperature in Fahrenheit:\n");
  fflush( stdin );
  scanf ("%f", &fahrenheit);
  kelvin=(fahrenheit+459.67)/1.8;
  printf ("The result is %f Kelvin degrees\n",kelvin);
  repetir ();
}

ffc () {
  float fahrenheit;
  float celsius;
  printf ("Write the temperature in Fahrenheit:\n");
  fflush( stdin );
  scanf ("%f", &fahrenheit);
  celsius=(fahrenheit-32)/1.8;
  printf ("The result is %f Celsius degrees\n",celsius);
  repetir ();
}

ccf () {
  float fahrenheit;
  float celsius;
  printf ("Write the temperature in Celsius:\n");
  fflush( stdin );
  scanf ("%f", &celsius);
  fahrenheit=(celsius+32)*1.8;
  printf ("The result is %f Fahrenheit degrees\n",fahrenheit);
  repetir ();
}
  

repetir () {
  char r;
  printf ("Do you want to repeat? (y/n):\n");
  fflush( stdin ); 
  scanf ("%s",&r);
  if (r == 'y'||r == 'Y') {
    main ();
  }
  else;
} 
