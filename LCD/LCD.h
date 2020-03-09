#ifndef __LCD__H__
#define __LCD__H__

#include "std_types.h"
#include "IO_ports.h"


#define LCD_DATA GPIO_PORTC_DATA_R
#define LCD_DATA_DIR GPIO_PORTC_DIR_R
#define LCD_DATA_DEN GPIO_PORTC_DEN_R
#define LCD_DATA_AFSEL GPIO_PORTC_AFSEL_R
#define LCD_DATA_AMSEL GPIO_PORTC_AMSEL_R
#define LCD_DATA_PCTL GPIO_PORTC_PCTL_R


#define LCD_CTRL GPIO_PORTD_DATA_R
#define LCD_CTRL_DIR GPIO_PORTD_DIR_R
#define LCD_CTRL_DEN GPIO_PORTD_DEN_R
#define LCD_CTRL_AFSEL GPIO_PORTD_AFSEL_R
#define LCD_CTRL_AMSEL GPIO_PORTD_AMSEL_R
#define LCD_CTRL_PCTL GPIO_PORTD_PCTL_R


void init(void);
void LCD_cmd(char cmd);
void LCD_char(char data);
void LCD_displayString(const char *Str);


#endif
