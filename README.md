# ORIENTATION_CONTROL_USING_MPU6050-STM32F401CCU6
**AIM**:
- To interface an MPU6050 sensor with an STM32 microcontroller using I2C, read accelerometer data and compare the given data with the values given in the datasheet of the MPU6050 Sensor.

**Software Used**
- STM32 CUBEIDE
- STM32 CUBE MONITOR (For analyse and compare the values through graph)

**Hardware Used**
- Black Pill WeAct Board (STM32F401CCU6)
- MPU6050 (Accelerometer & Gyroscope Sensor)

**PIN CONFIGURATION**

| Peripheral     | Function     | STM32 Pin  | Description                      |
|----------------|--------------|----------- |----------------------------------|
| **MPU6050**    | I2C1_SCL     | PB6        | I2C Clock line                   |
|                | I2C1_SDA     | PB7        | I2C Data line                    |
|                | VCC          | 3.3V       | Power supply (do NOT use 5V)     |
|                | GND          | GND        | Ground                           |
|                | ADO          | GND/3.3V   | Ground/power supply              |

> ℹ️ Note: Ensure MPU6050 is powered with 3.3V. Do not connect to 5V directly. If ADO is 1 then the I2C address 0x69 or if 0 then 0x68 (see your datasheet for address)

# Output

![output1](https://github.com/Sabari-M-BE-ECE/ORIENTATION_CONTROL_USING_MPU6050-STM32F401CCU6/blob/main/data.png)
![output2](https://github.com/Sabari-M-BE-ECE/ORIENTATION_CONTROL_USING_MPU6050-STM32F401CCU6/blob/main/Screenshot%202025-06-01%20222953.png)

**The output value is almost nearby to the value given in datasheet**(ie, output - 16406 , datasheet value - 16384)
