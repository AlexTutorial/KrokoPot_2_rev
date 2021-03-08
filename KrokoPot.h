#ifndef KrokoPot_h
#define KrokoPot_h
#include <Arduino.h>


// код библиотеки
class KrokoPot  // класс
{
  private:
  // список свойств и методов для использования внутри класса
  int _valpot; // значение
  int _valpotAngle; // значение
  int _valpotAngle2; // значение
  int _pwm; // значение
  byte _pin; // пин
  int _angle; // угол
  int _accel; // ускорение +/0/-
  public:
  // список методов доступных другим функциям и объектам программы
  KrokoPot(byte pin); // инициализация 
  int getPotVaule(); // читаем
  int mapToServo(); // читаем, переводим
  int mapToPWM(); // читаем, переводим
  writePWM(byte pwmpin); // читаем, пишем
  int getAcceleration(); // читаем, считаем
};
#endif