/*
 * Nom: compteur 32 bits
 * Copyright (C) 2005 Matthew Khouzam
 * License http://www.gnu.org/copyleft/gpl.html GNU/GPL
 * Description: Ceci est un exemple simple de programme
 * Version: 1.1
 */


#include <avr/io.h>

int main()
{
  DDRA = 0xff; // PORT A est en mode sortie
  DDRB = 0xff; // PORT B est en mode sortie
  DDRC = 0xff; // PORT C est en mode sortie
  DDRD = 0x00; // PORT D est en mode entrée
  unsigned long compteur=0; // le compteur est initialise a 0.
                            // c'est un compteur de 32 bits


  while(true) {
    if ( PIND & 0x04 ) {
      PORTC = 0x01;
    }
    else {
      PORTC = 0x00;
    }
  }
  return 0;
}
