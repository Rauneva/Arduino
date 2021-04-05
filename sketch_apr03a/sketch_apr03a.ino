#include <Stepper.h> // библиотека для шагового двигателя

// количество шагов на 1 оборот, измените значение для вашего мотора
const int stepsPerRevolution = 200 ;

// устанавливаем порты для подключения драйвера
Stepper myStepper(stepsPerRevolution, 5, 4, 14, 12);

void setup() {
  myStepper.setSpeed(100); // устанавливаем скорость 60 об/мин
}

void loop() {
  // поворачиваем ротор по часовой стрелке
  //myStepper.step(stepsPerRevolution);
  //delay(2000);

  // поворачиваем ротор против часовой стрелки
  //myStepper.step(-stepsPerRevolution);
  //delay(2000);
}
