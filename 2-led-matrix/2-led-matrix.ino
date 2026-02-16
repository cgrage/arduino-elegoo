// LED Matrix
// Bitte lest die readme.md für Informationen und Bilder.

// Installiert die LedControl-Bibliothek über den Bibliotheksverwalter.
#include "LedControl.h"

// Wir brauchen einen LedControl, um damit zu arbeiten
// Pin 10: LOAD, Pin 11: CLK, Pin 12: DataIn
LedControl led = LedControl(12, 11, 10);
const int ADR = 0;
const uint8_t BUZZER_PIN = 8; // Buzzer an Pin 8

// Frequenzen der Töne, die wir brauchen:
const int T_PS = 0, T_A0 = 220, T_C1 = 262, T_D1 = 294, T_E1 = 330, T_F1 = 349, T_G1 = 392, T_A1 = 440, T_B1 = 466;

// Länge der Töne (Ganze Note = 1,5 sek)
const int L1 = 1500, L2 = L1 / 2, L4 = L2 / 2, L8 = L4 / 2;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  led.shutdown(ADR, false); // MAX72XX aufwecken
  led.setIntensity(ADR, 8); // Helligkeit auf Mittelwert setzen
  led.clearDisplay(ADR); // Display löschen

  zeigeStartbild();
  delay(1000);
}


void loop() {
  takt( 1); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L4); ton(T_D1, L8); 
  takt( 2); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L8); ton(T_D1, L8); ton(T_D1, L8);
  takt( 1); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L4); ton(T_D1, L8);
  takt( 2); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L8); ton(T_D1, L8); ton(T_D1, L8);
  takt( 3); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L4); ton(T_D1, L8);
  takt( 4); ton(T_D1, L4); ton(T_D1, L8); ton(T_D1, L8); ton(T_A0, L8); ton(T_C1, L8);
  takt( 5); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_E1, L8);
  takt( 6); ton(T_F1, L4); ton(T_F1, L4); ton(T_F1, L8); ton(T_G1, L8);
  takt( 7); ton(T_E1, L4); ton(T_E1, L4); ton(T_D1, L8); ton(T_C1, L8);
  takt( 8); ton(T_D1, L2); ton(T_A0, L8); ton(T_C1, L8);
  takt( 9); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_E1, L8);
  takt(10); ton(T_F1, L4); ton(T_F1, L4); ton(T_F1, L8); ton(T_G1, L8);
  takt(11); ton(T_E1, L4); ton(T_E1, L4); ton(T_D1, L8); ton(T_C1, L8);
  takt(12); ton(T_D1, L2); ton(T_A0, L8); ton(T_C1, L8);
  takt(13); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_F1, L8);
  takt(14); ton(T_G1, L4); ton(T_G1, L4); ton(T_G1, L8); ton(T_A1, L8);
  takt(15); ton(T_B1, L4); ton(T_B1, L4); ton(T_A1, L8); ton(T_G1, L8);
  takt(16); ton(T_A1, L8); ton(T_D1, L4); ton(T_PS, L8); ton(T_D1, L8); ton(T_E1, L8);
  takt(17); ton(T_F1, L4); ton(T_F1, L4); ton(T_G1, L4);
  takt(18); ton(T_A1, L8); ton(T_D1, L4); ton(T_PS, L8); ton(T_D1, L8); ton(T_F1, L8);
  takt(19); ton(T_E1, L4); ton(T_E1, L4); ton(T_F1, L8); ton(T_D1, L8);
  takt(20); ton(T_E1, L2); ton(T_A0, L8); ton(T_C1, L8);
  takt(21); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_E1, L8);
  takt(22); ton(T_F1, L4); ton(T_F1, L4); ton(T_F1, L8); ton(T_G1, L8);
  takt(23); ton(T_E1, L4); ton(T_E1, L4); ton(T_D1, L8); ton(T_C1, L8);
  takt(24); ton(T_D1, L2); ton(T_A0, L8); ton(T_C1, L8);
  takt(25); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_E1, L8);
  takt(26); ton(T_F1, L4); ton(T_F1, L4); ton(T_F1, L8); ton(T_G1, L8);
  takt(27); ton(T_E1, L4); ton(T_E1, L4); ton(T_D1, L8); ton(T_C1, L8);
  takt(28); ton(T_D1, L2); ton(T_A0, L8); ton(T_C1, L8);
  takt(29); ton(T_D1, L4); ton(T_D1, L4); ton(T_D1, L8); ton(T_F1, L8);
  takt(30); ton(T_G1, L4); ton(T_G1, L4); ton(T_G1, L8); ton(T_A1, L8);
  takt(31); ton(T_B1, L4); ton(T_B1, L4); ton(T_A1, L8); ton(T_G1, L8);
  takt(32); ton(T_A1, L8); ton(T_D1, L4); ton(T_PS, L8); ton(T_D1, L8); ton(T_F1, L8);
  takt(33); ton(T_E1, L4); ton(T_E1, L4); ton(T_D1, L8); ton(T_C1, L8);
  takt(34); ton(T_D1, L4); ton(T_D1, L4); ton(T_E1, L4);
  takt(35); ton(T_F1, L4); ton(T_F1, L8); ton(T_F1, L8); ton(T_E1, L4);
  takt(36); ton(T_D1, L2); ton(T_PS, L4);
  takt(37); ton(T_PS, L4); ton(T_PS, L4); ton(T_PS, L4);
  takt(38); ton(T_PS, L4); ton(T_PS, L4); ton(T_PS, L4);
}

void ton(int welcher, int wieLang)
{
  if (welcher == T_PS) {
    noTone(BUZZER_PIN);
    delay(wieLang);
  }
  else
  {
    tone(BUZZER_PIN, welcher);
    delay(wieLang - 20);
    noTone(BUZZER_PIN);
    delay(20);
  }
}

// Macht ein Metronom aus LED 1 und LED 2
void takt(int nummer) {
  zeigeZahl(nummer);
}

void zeigeStartbild() {
  const char* zeilen[] = {
    "                ",
    "  [][]    [][]  ",
    "  [][]    [][]  ",
    "                ",
    "[][]        [][]",
    "  [][]    [][]  ",
    "    [][][][]    ",
    "                "
  };
  zeigeBild(zeilen);
}

void zeigeBild(const char* zeilen[]) {
  for (int y = 0; y < 8; y++)
  {
    for (int x = 0; x < 8; x++)
    {
      char c = zeilen[y][x * 2];
      led.setLed(ADR, x, 7 - y, c != ' ');
    }
  }
}

void zeigeZahl(int zahl)
{
  int links = zahl < 10 ? 0 : zahl / 10;
  int rechts = zahl % 10;

  zeigeZiffer(links, true);
  zeigeZiffer(rechts, false);
}

void zeigeZiffer(int ziffer, bool links) {
  const char* zahlen[] = {
    "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        ", 
    "    []  ", "    []  ", "  [][]  ", "  [][]  ", "  []  []", "  [][][]", "    [][]", "  [][][]", "    []  ", "    []  ", 
    "  []  []", "  [][]  ", "      []", "      []", "  []  []", "  []    ", "  []    ", "      []", "  []  []", "  []  []", 
    "  []  []", "    []  ", "    []  ", "  [][]  ", "  []  []", "  [][]  ", "  [][]  ", "      []", "    []  ", "  []  []", 
    "  []  []", "    []  ", "  []    ", "      []", "  [][][]", "      []", "  []  []", "    []  ", "  []  []", "    [][]", 
    "  []  []", "    []  ", "  []    ", "      []", "      []", "      []", "  []  []", "    []  ", "  []  []", "      []", 
    "    []  ", "  [][][]", "  [][][]", "  [][]  ", "      []", "  [][]  ", "    []  ", "  []    ", "    []  ", "  [][]  ", 
    "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        ", "        "
  };

for (int y = 0; y < 8; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      char c = zahlen[y * 10 + ziffer][x * 2];
      led.setLed(ADR, x + (links ? 0 : 4), 7 - y, c != ' ');
    }
  }
}
