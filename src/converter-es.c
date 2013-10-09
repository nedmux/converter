#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
  printf ("¿Qué quieres hacer? (escribe las letras entre parétesis)\n");
  printf ("Celsius a Kelvin (a)\nKelvin a celsius(b)\nCelsius a Fahrenheit(c)\nFahrenheit a Celsius(d)\nKelvin a Fahrenheit(e)\nFahrenheit a Kelvin(f)\n");
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
	      printf ("Su elección no coincide con ninguna de las anteriores\n");
	      modo ();
}}

cck () {
  float celsius;
  float kelvin;
  printf ("Escribe una temperatura en grados Celsius:\n");
  fflush( stdin );
  scanf ("%f", &celsius);
  kelvin=celsius+273.15;
  printf ("Eso son %f grados Kelvin\n",kelvin);
  repetir ();
}

kkc () {
  float celsius;
  float kelvin;
  printf ("Escribe una temperatura en grados Kelvin:\n");
  fflush( stdin );
  scanf ("%f", &kelvin);
  celsius=kelvin-273.15;
  printf ("Eso son %f grados Celsius\n",celsius);
  repetir ();
}

kkf () {
  float fahrenheit;
  float kelvin;
  printf ("Escribe una temperatura en grados Kelvin:\n");
  fflush( stdin );
  scanf ("%f", &kelvin);
  fahrenheit=(kelvin*(9/5))-459.67;
  printf ("Eso son %f grados Fahrenheit\n",fahrenheit);
  repetir ();
}

ffk () {
  float fahrenheit;
  float kelvin;
  printf ("Escribe una temperatura en grados Fahrenheit:\n");
  fflush( stdin );
  scanf ("%f", &fahrenheit);
  kelvin=(fahrenheit+459.67)/1.8;
  printf ("Eso son %f grados Kelvin\n",kelvin);
  repetir ();
}

ffc () {
  float fahrenheit;
  float celsius;
  printf ("Escribe una temperatura en grados Fahrenheit:\n");
  fflush( stdin );
  scanf ("%f", &fahrenheit);
  celsius=(fahrenheit-32)/1.8;
  printf ("Eso son %f grados Celsius\n",celsius);
  repetir ();
}

ccf () {
  float fahrenheit;
  float celsius;
  printf ("Escribe una temperatura en grados Celsius:\n");
  fflush( stdin );
  scanf ("%f", &celsius);
  fahrenheit=(celsius+32)*1.8;
  printf ("Eso son %f grados Fahrenheit\n",fahrenheit);
  repetir ();
}
  

repetir () {
  char r;
  printf ("¿Calculamos otra temperatura? (s/n):\n");
  fflush( stdin ); 
  scanf ("%s",&r);
  if (r == 's'||r == 'S') {
    main ();
  }
  else;
} 
