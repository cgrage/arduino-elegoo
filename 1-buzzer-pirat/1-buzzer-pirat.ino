// Der Buzzer Pirat
// Bitte lest die readme.md für Informationen und Bilder.

// Pin-Definitionen
const uint8_t BUZZER_PIN = 8; // Buzzer an Pin 8
const uint8_t LED_PIN_1 = 9;  // LED 1 an Pin 9
const uint8_t LED_PIN_2 = 10; // LED 2 an Pin 10

// Frequenzen der Töne, die wir brauchen:
const int TON_A0 = 220;
const int TON_C1 = 262;
const int TON_D1 = 294;
const int TON_E1 = 330;
const int TON_F1 = 349;
const int TON_G1 = 392;
const int TON_A1 = 440;
const int TON_B1 = 466;

// Länge der Töne (Ganze Note = 1,5 sek)
const int GANZE = 1500;
const int HALBE = GANZE / 2;
const int VIERTEL = HALBE / 2;
const int ACHTEL = VIERTEL / 2;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
}

void loop() {

  takt(1);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL); 

  takt(2);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);

  takt(1); // wiederholung
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);

  takt(2); // wiederholung
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);

  takt(3);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);

  takt(4);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(5);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_E1, ACHTEL);

  takt(6);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);

  takt(7);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(8);
  spieleTon(TON_D1, HALBE);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(9);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_E1, ACHTEL);

  takt(10);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);

  takt(11);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(12);
  spieleTon(TON_D1, HALBE);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);
  
  takt(13);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_F1, ACHTEL);

  takt(14);
  spieleTon(TON_G1, VIERTEL);
  spieleTon(TON_G1, VIERTEL);
  spieleTon(TON_G1, ACHTEL);
  spieleTon(TON_A1, ACHTEL);

  takt(15);
  spieleTon(TON_B1, VIERTEL);
  spieleTon(TON_B1, VIERTEL);
  spieleTon(TON_A1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);

  takt(16);
  spieleTon(TON_A1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spielePause(ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_E1, ACHTEL);

  takt(17);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_G1, VIERTEL);

  takt(18);
  spieleTon(TON_A1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spielePause(ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_F1, ACHTEL);

  takt(19);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_D1, ACHTEL);

  takt(20);
  spieleTon(TON_E1, HALBE);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(21);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_E1, ACHTEL);

  takt(22);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);

  takt(23);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(24);
  spieleTon(TON_D1, HALBE);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(25);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_E1, ACHTEL);

  takt(26);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);

  takt(27);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(28);
  spieleTon(TON_D1, HALBE);
  spieleTon(TON_A0, ACHTEL);
  spieleTon(TON_C1, ACHTEL);

  takt(29);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_F1, ACHTEL);

  takt(30);
  spieleTon(TON_G1, VIERTEL);
  spieleTon(TON_G1, VIERTEL);
  spieleTon(TON_G1, ACHTEL);
  spieleTon(TON_A1, ACHTEL);

  takt(31);
  spieleTon(TON_B1, VIERTEL);
  spieleTon(TON_B1, VIERTEL);
  spieleTon(TON_A1, ACHTEL);
  spieleTon(TON_G1, ACHTEL);
  
  takt(32);
  spieleTon(TON_A1, ACHTEL);
  spieleTon(TON_D1, VIERTEL);
  spielePause(ACHTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_F1, ACHTEL);
  
  takt(33);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  spieleTon(TON_D1, ACHTEL);
  spieleTon(TON_C1, ACHTEL);
  
  takt(34);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_D1, VIERTEL);
  spieleTon(TON_E1, VIERTEL);
  
  takt(35);
  spieleTon(TON_F1, VIERTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_F1, ACHTEL);
  spieleTon(TON_E1, VIERTEL);

  takt(36);
  spieleTon(TON_D1, HALBE);
  spielePause(VIERTEL);

  takt(37);
  spielePause(VIERTEL);
  spielePause(VIERTEL);
  spielePause(VIERTEL);

  takt(38);
  spielePause(VIERTEL);
  spielePause(VIERTEL);
  spielePause(VIERTEL);
}

void spieleTon(int welcher, int wieLang)
{
  tone(BUZZER_PIN, welcher);
  delay(wieLang - 20);
  noTone(BUZZER_PIN);
  delay(20);
}

void spielePause(int wieLang) {
  noTone(BUZZER_PIN);
  delay(wieLang);
}

void ende() {
  noTone(BUZZER_PIN);
  delay(3000);
}

// Macht ein Metronom aus LED 1 und LED 2
void takt(int nummer) {
  if (nummer % 2 == 0) {   // wenn 'nummer' eine gerade Zahl ist...
    digitalWrite(LED_PIN_1, HIGH); // LED 1 an
    digitalWrite(LED_PIN_2, LOW);  // LED 2 aus
  }
  else {                   // sonst:
    digitalWrite(LED_PIN_1, LOW);  // LED 1 aus
    digitalWrite(LED_PIN_2, HIGH); // LED 2 an
  }
}
