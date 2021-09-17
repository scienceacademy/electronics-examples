#include <LedControl.h>

int CS = 10;
int CLK = 11;
int DIN = 12;

// DIN, CLK, CS, Number of matrices
LedControl matrix = LedControl(DIN, CLK, CS, 1);

void setup()
{
    matrix.shutdown(0, false);
    matrix.setIntensity(0, 9);
    matrix.clearDisplay(0);
    // matrix number, row, col, on/off
    matrix.setLed(0, 0, 0, true);
    matrix.setLed(0, 6, 4, true);
    matrix.setColumn(0, 7, B01011010);
}

void loop()
{
    loadingBar(true);
    loadingBar(false);
}

void loadingBar(bool d)
{
  for(int col = 0; col < 8; col++)
  {
      for(int row = 0; row < 8; row++)
      {
          matrix.setLed(0, row, col, d);
          delay(25);
      }
  }
  //matrix.clearDisplay(0);
//  delay(1000);
}
