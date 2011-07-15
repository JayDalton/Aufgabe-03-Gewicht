//###############################################################################
/**
  Die Funktion berechnet aus den uebergebenen Werten für Gewicht und Größe den 
  Body-Mass-Index (BMI) und liefert diesen zurück.

  @param	gewicht Wert des Gewicht
  @param	groesse Wert der Größe

  @return	Liefert den berechneten Wert des BMI
**/
//###############################################################################
double bmi_index_berechnen(double gewicht, double groesse)
{
	return groesse > 0 ? gewicht / (groesse * groesse) : 0;
}

//###############################################################################
/**
  Die Funktion berechnet aus den uebergebenen Werten für Größe und Index den Wert 
  des entsprechende Gewicht und liefert diesen zurück.

  @param	groesse Wert der Größe
  @param	index Wert des Index

  @return	Liefert den berechneten Wert für das Gewicht
**/
//###############################################################################
double bmi_gewicht_berechnen(double groesse, double index)
{
	return (groesse * groesse) * index;
}

//###############################################################################
/**
  Die Funktion ermittelt aus dem uebergebenem Alter die Zuordnung zur entsprechenden 
  Altersgruppe und liefert diese zurück.

  @param	alter Wert des Alter

  @return	Identität des Alter als Ganzzahl
**/
//###############################################################################
unsigned int bmi_gruppe_ermitteln(unsigned int alter)
{
	unsigned int gruppe = 0;

	if (19 <= alter && alter <= 24)
	  gruppe = 1;
	
	if (25 <= alter && alter <= 34)
	  gruppe = 2;

	if (35 <= alter && alter <= 44)
	  gruppe = 3;

	if (45 <= alter && alter <= 54)
	  gruppe = 4;

	if (55 <= alter && alter <= 64)
	  gruppe = 5;

	if (65 <= alter)
	  gruppe = 6;

	return gruppe;
}

//###############################################################################
/**
  Die Funktion schreibt die uebergebenen Werte für Index, Gruppenbezeichnung und
  untere und obere Grenze des Normalgewicht formatiert in die Standardausgabe. 

  @param	index Wert des Body-Mass-Index
  @param	gruppe Ganzzahl Entsprechnung der Altersgruppe
  @param	minimum Untere Grenze Normalgewicht
  @param	maximum Obere Grenze Normalgewicht
**/
//###############################################################################
void bmi_ausgabe_schreiben(double index, int gruppe, double minimum, double maximum)
{
   char bezeichnung[6][30] = {
     "krankhaftes Untergewicht", 
     "Untergewicht",
     "Normalgewicht",
     "leichtes Uebergewicht",
     "Uebergewicht",
     "krankhaftes Uebergewicht"
   };

   printf("\nIhr Body-Mass-Index betraegt: %.1lf", index);

   printf("\nSie haben %s.", bezeichnung[gruppe]);

   printf("\n%s %.1lf - %.1lf kg", 
     "Ihr Gewicht sollte in folgendem Bereich liegen:",
     minimum,
     maximum
   );
}


//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 1, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_1_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 14)
      klasse = 0;

   if (14.0 <= index && index < 19.0)
      klasse = 1;

   if (19.0 <= index && index < 24.0)
   	  klasse = 2;

   if (24.0 <= index && index < 29.0)
   	  klasse = 3;

   if (29.0 <= index && index < 39.0)
   	  klasse = 4;

   if (39.0 <= index)
   	  klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 19.0);
   double maximum = bmi_gewicht_berechnen(groesse, 23.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 2, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_2_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 15)
     klasse = 0;

   if (15.0 <= index && index < 19.0)
     klasse = 1;

   if (20.0 <= index && index < 25.0)
	 klasse = 2;

   if (25.0 <= index && index < 30.0)
      klasse = 3;

   if (30.0 <= index && index < 40.0)
      klasse = 4;

   if (40.0 <= index)
      klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 20.0);
   double maximum = bmi_gewicht_berechnen(groesse, 24.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 3, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_3_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 15)
     klasse = 0;

   if (15.0 <= index && index < 19.0)
     klasse = 1;

   if (20.0 <= index && index < 25.0)
	 klasse = 2;

   if (25.0 <= index && index < 30.0)
      klasse = 3;

   if (30.0 <= index && index < 40.0)
      klasse = 4;

   if (40.0 <= index)
      klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 20.0);
   double maximum = bmi_gewicht_berechnen(groesse, 24.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 4, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_4_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 15)
     klasse = 0;

   if (15.0 <= index && index < 19.0)
     klasse = 1;

   if (20.0 <= index && index < 25.0)
	 klasse = 2;

   if (25.0 <= index && index < 30.0)
      klasse = 3;

   if (30.0 <= index && index < 40.0)
      klasse = 4;

   if (40.0 <= index)
      klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 20.0);
   double maximum = bmi_gewicht_berechnen(groesse, 24.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 5, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_5_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 15)
     klasse = 0;

   if (15.0 <= index && index < 19.0)
     klasse = 1;

   if (20.0 <= index && index < 25.0)
	 klasse = 2;

   if (25.0 <= index && index < 30.0)
      klasse = 3;

   if (30.0 <= index && index < 40.0)
      klasse = 4;

   if (40.0 <= index)
      klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 20.0);
   double maximum = bmi_gewicht_berechnen(groesse, 24.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

//###############################################################################
/**
  Die Funktion ermittelt aus den uebergebenen Werten für Body-Mass-Index und Größe
  die Gewichtsklasse der Altersgruppe 6, lässt die obere und untere Gewichtsgrenze
  des Normalgewicht berechnen und lässt die resultierenden Werte ausgeben.

  @param	index Body-Mass-Index
  @param	groesse Wert der Größe in cm
**/
//###############################################################################
void bmi_gruppe_6_berechnen(double index, double groesse)
{
   unsigned int klasse = 0;

   if (index < 15)
     klasse = 0;

   if (15.0 <= index && index < 19.0)
     klasse = 1;

   if (20.0 <= index && index < 25.0)
	 klasse = 2;

   if (25.0 <= index && index < 30.0)
      klasse = 3;

   if (30.0 <= index && index < 40.0)
      klasse = 4;

   if (40.0 <= index)
      klasse = 5;

   double minimum = bmi_gewicht_berechnen(groesse, 20.0);
   double maximum = bmi_gewicht_berechnen(groesse, 24.9);
   bmi_ausgabe_schreiben(index, klasse, minimum, maximum);
}

