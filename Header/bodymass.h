#define GRUPPE_UNTER_19
#define GRUPPE_19_BIS_24
#define GRUPPE_25_BIS_34
#define GRUPPE_35_BIS_44
#define GRUPPE_45_BIS_54
#define GRUPPE_55_BIS_64
#define GRUPPE_UEBER_65

char bmi_index_bezeichnen(unsigned int klasse);
unsigned int bmi_gruppe_ermitteln(unsigned int alter);
double bmi_index_berechnen(double gewicht, double groesse);
double bmi_gewicht_berechnen(double groesse, double index);
double bmi_groesse_berechne(double gewicht, double index);

void bmi_gruppe_1_berechnen(double index, double groesse);
void bmi_gruppe_2_berechnen(double index, double groesse);
void bmi_gruppe_3_berechnen(double index, double groesse);
void bmi_gruppe_4_berechnen(double index, double groesse);
void bmi_gruppe_5_berechnen(double index, double groesse);
void bmi_gruppe_6_berechnen(double index, double groesse);
