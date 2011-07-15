/*###############################################################################
  Kodierung: UTF-8 ohne BOM
###############################################################################*/

#include <stdio.h>
#include <stdlib.h>

#include "einheiten.h"
#include "eingaben.h"
#include "ausgaben.h"
#include "bodymass.h"

#include "einheiten.c"
#include "eingaben.c"
#include "ausgaben.c"
#include "bodymass.c"

//###############################################################################
/**
  Das Programm berechnet nach dem vom Nutzer einzugebenen Werten für Alter, 
  Groesse und Gewicht den resultierenden Body-Mass-Index und bewertet es nach 
  einem festgelegten Schema. Die Werte werden entsprechend klassifiziert und 
  ein für das Alter entsprechende Gewichtsbereich wird ausgegeben. Für ein Alter
  unter 19 Jahren wird eine Meldung ausgegeben und die Berechnung wird abgebrochen.

  @author Thomas Gerlach
  @version 1.0 
**/
//###############################################################################
int main(void)
{
  do {

    system("clear");
    printf("\n\tG e w i c h t s b e r a t e r\n\n");
    printf("\nDas Programm dient der Berechnung des Body-Mass-Index.\n\n");

    int alter = erfasse_ganzzahl("Bitte geben Sie Ihr Alter in Jahren an:", 1, 120);// Test 27
    
    if (alter < 19)
    {

      schreibe_zeile("Für Heranwachsende unter 19 Jahren ist der Body-Mass-Index nicht anwendbar.");

    } else {
    
      double groesse = erfasse_ganzzahl("Bitte geben Sie Ihre Groesse in cm ein:", 1, 250);// Test 178
      double gewicht = erfasse_ganzzahl("Bitte geben Sie Ihr Gewicht in kg ein:", 1, 250);// Test 82.7

      groesse = konvertiere_distanz(groesse, ZENTIMETER, METER);
      double index = bmi_index_berechnen(gewicht, groesse);

      switch (bmi_gruppe_ermitteln(alter))
      {
         case 1:
            bmi_gruppe_1_berechnen(index, groesse);
            break;

         case 2:
            bmi_gruppe_2_berechnen(index, groesse);
            break;

         case 3:
            bmi_gruppe_3_berechnen(index, groesse);
            break;

         case 4:
            bmi_gruppe_4_berechnen(index, groesse);
            break;

         case 5:
            bmi_gruppe_5_berechnen(index, groesse);
            break;

         case 6:
            bmi_gruppe_6_berechnen(index, groesse);
            break;

         default:
            schreibe_zeile("Für Heranwachsende unter 19 Jahren ist der Body-Mass-Index nicht anwendbar.");
            break;
      }
    }
  } while (erfasse_antwort("Noch einmal? (j/n)"));
}


