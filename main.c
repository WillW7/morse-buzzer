// adapted from https://github.com/raspberrypi/pico-examples/blob/master/picoboard/blinky/blinky.c
// also a solution ^

#include <stdio.h>
#include "pico/stdlib.h"

#define BUZZER 18 //pin out of buzzer on maker board

#define PAUSE 100 //defines delay between dots/dashes
#define PAUSE_CHAR 300 //defines delay between each letter of a word (3x PAUSE)
#define PAUSE_WORD 700 //defines delay between each word (7x PAUSE)

char str[] = "Text to translate"; //change this to whatever you want
char* ptr = str;

const char *morse_chars[] = {
        ".-",    // A
        "-...",  // B
        "-.-.",  // C
        "-..",   // D
        ".",     // E
        "..-.",  // F
        "--.",   // G
        "....",  // H
        "..",    // I
        ".---",  // J
        "-.-",   // K
        ".-..",  // L
        "--",    // M
        "-.",    // N
        "---",   // O
        ".--.",  // P
        "--.-",  // Q
        ".-.",   // R
        "...",   // S
        "-",     // T
        "..-",   // U
        "...-",  // V
        ".--",   // W
        "-..-",  // X
        "-.--",  // Y
        "--.."   // Z
};

void dot() {
    for(int i=0;i<50;i++) // lasts for ~ 1ms
        {
            gpio_put(BUZZER,1);
            sleep_ms(1);
            gpio_put(BUZZER,0);
            sleep_ms(1);
        }
    sleep_ms(PAUSE);      
}

void dash() { 
    
    // implement the dash
    // usually 3 times dot

}

void play_morse_char(const char *letter) {
    
    // iterate through the morse pattern passed
    // calling dot()/dash() accordingly
    // pausing after letter is completed

}


int main() {
    stdio_init_all();

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);

    for (; *ptr; ++ptr)
    {   
        
        // iterate through string
        // calling play_morse_char(morse_char[index]) on the corresponding letter
        // hint: use assci value and index accordingly
        // handle uppercase, lowercase, spaces and other symbols

    }
    
}