# Buzzer: "He is a Pirate"

Spielt eine vereinfachte Version von "He is a Pirate" (Hans Zimmer) über den Buzzer auf einem Arduino/Elegoo. Optional blinken zwei LEDs passend zum Takt.

# Komponenten

- Elegoo / Arduino, Steckbrett, Jumper-Kabel
- Passive Buzzer
- (2×) LED und (2x) 220–330 Ohm Widerstände

# Schaltplan / Anschlüsse

- Buzzer (Passiv) → Pin 8
- Buzzer GND → GND am Arduino
- LED 1 (opt): Langes Bein → Pin 9, kurzes Bein → Widerstand → GND
- LED 2 (opt): Langes Bein → Pin 10, kurzes Bein → Widerstand → GND

# Anpassungen

- Tempo ändern: Im Sketch gibt es eine Variable für die Dauer/Beats.
- Nach jedem Ton wird eine Pause von 20ms gemacht. Das kann angepasst werden (in spieleTon)


