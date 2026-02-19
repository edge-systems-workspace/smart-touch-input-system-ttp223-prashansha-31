#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author prashansha-31 (Prashansha Maheshwari)
 * @date 2026-02-17
 *
 * @details
 * Reads digital touch input from a TTP223 touch sensor and prints
 * structured messages to the Serial Monitor every 300 ms.
 */

const uint8_t touchPin = 2;
int touchState = 0;

/**
 * @brief Initialize Serial and touch input.
 *
 * @details
 * Configures the Serial Monitor at 9600 baud and sets the touch
 * sensor pin mode to INPUT. Prints an initialization banner.
 */
void setup() {
    Serial.begin(9600);
    pinMode(touchPin, INPUT);
    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}