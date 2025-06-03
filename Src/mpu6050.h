/*
 * mpu6050.h
 *
 *  Created on: May 31, 2025
 *      Author: sabari
 */

#ifndef SRC_MPU6050_H_
#define SRC_MPU6050_H_
#include <stdint.h>
#include "stm32f4xx_hal.h"

typedef enum{
	MPU6050_OK,
	MPU6050_ERR
}mpu6050_status_t;

typedef struct {
	int16_t x;
	int16_t y;
	int16_t z;
}mpu6050_accel_data_t;

mpu6050_status_t mpu6050_init(I2C_HandleTypeDef *hi2c, uint8_t i2c_dev_addr);
mpu6050_status_t  mpu6050_read_accelerometer_data(I2C_HandleTypeDef *hi2c, uint8_t i2c_dev_addr, mpu6050_accel_data_t *accel_data);
mpu6050_accel_data_t mpu6050_accelerometer_calibration(const mpu6050_accel_data_t *error_offset,mpu6050_accel_data_t *raw_data);

#define MPU6050_REG_WHOAMI     (uint8_t)117
#define MPU6050_REG_PWMGMT_1   (uint8_t)107
#define MPU6050_REG_ACCEL_START    (uint8_t)59

#endif /* SRC_MPU6050_H_ */
