#include<KrokoPot.h>

// реализация методов
KrokoPot::KrokoPot(byte pin) {
	_pin = pin; // запоминаем
}

int KrokoPot::getPotVaule(){
	_valpot = analogRead(_pin); // читаем
	return _valpot; // выводим
}

int KrokoPot::mapToServo(){
	_valpotAngle2 = analogRead(_pin); // читаем
	_angle = map(_valpotAngle2, 0, 1023, 0, 180); // преобразуем
	return _angle; // выводим
}

int KrokoPot::mapToPWM(){
	_valpotAngle = analogRead(_pin); // читаем
	_pwm = map(_valpotAngle, 0, 1023, 0, 255); // преобразуем
	return _pwm; // выводим
}

KrokoPot::writePWM(byte pwmpin) {
    _valpotAngle = analogRead(_pin); // читаем
	_pwm = map(_valpotAngle, 0, 1023, 0, 255); // преобразуем
	analogWrite(pwmpin, _pwm); // пишем
}

int KrokoPot::getAcceleration(){
	int x = analogRead(_pin);
	delay(100);
	int y = analogRead(_pin);
	if(x > y){
		return -1;
	}
	if(y > x){
		return 1;
	}
	else
	{
		return 0;
	}
}
