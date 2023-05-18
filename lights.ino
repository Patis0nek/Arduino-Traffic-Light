#include <Arduino.h>

int red = 13, yellow = 12, green = 11;
int red2 = 10, yellow2 = 9, green2 = 8;
int pred = 5, pgreen = 4;
int buttonPin = 2;

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);

    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);

    pinMode(pred, OUTPUT);
    pinMode(pgreen, OUTPUT);

    pinMode(buttonPin, INPUT);

    Serial.begin(9600);
}

void loop()
{
    zmiana1();
}

void przycisk()
{
    // delay(7000);
    for (int i = 0; i < 28; i++) {
        int state = digitalRead(buttonPin);
        if (state == LOW) {
            delay(1000);
            zmiana1();
        } else {
            delay(250);
        }
    }
}

void zmiana1()
{
    // zolte
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);

    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red2, HIGH);

    digitalWrite(pgreen, LOW);
    digitalWrite(pred, HIGH);

    delay(3000);

    //  czerwone
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);

    digitalWrite(yellow2, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);

    digitalWrite(pgreen, HIGH);
    digitalWrite(pred, LOW);

    delay(7000);

    // czerwone i zolte
    digitalWrite(yellow, HIGH);

    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);

    for (int i = 0; i < 4; i++) {
        digitalWrite(pgreen, HIGH);
        digitalWrite(pred, LOW);
        delay(250);
        digitalWrite(pgreen, LOW);
        delay(250);
    }

    // delay(2000);

    // zielone
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);

    digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);

    digitalWrite(pgreen, LOW);
    digitalWrite(pred, HIGH);

    przycisk();
}