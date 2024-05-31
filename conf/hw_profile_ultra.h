#define _HOSTNAME             "Ultra-Dongle"
#define _DEFAULT_HOSTNAME _HOSTNAME
#define OTAURL              "http://ota.smart-stuff.nl/ultra/v5/"

//poorten
#define IO_BUTTON             0 //multifunctional flash/button

#define RGBLED_PIN           42
// #define PIN_NEOPIXEL   		 42
#define BRIGHTNESS           50 // Set BRIGHTNESS to about 1/5 (max = 255)
#define DTR_IO               17
#define RXP1                 18
#define TXP1                 -1 //no txp1
#define TXO1                 21
#define O1_DTR_IO            15
#define P1_LED               16
#define SSL_RAND              4
#define LED              	 41 //fake 
#define PRT_LED           	 16

#define IO_S0_1             45 
#define IO_H2O_2            46
#define IO_WATER     		46 //double
#define GPIO5               5
#define GPIO6               6
#define GPIO7               7
#define GPIO8               8
#define GPIO9               9

//ETH tunnel
// #define ETH_CS            	10
// #define ETH_IRQ         	14 
// #define ETH_SPI_SCK       	12
// #define ETH_SPI_MISO      	13
// #define ETH_SPI_MOSI      	11

//ETH API
 #define INT_GPIO            14
 #define MISO_GPIO           13
 #define MOSI_GPIO           11
 #define SCK_GPIO            12
 #define CS_GPIO             10

//MODBUS
#define RXPIN       		1
#define TXPIN       		3
#define RTSPIN      		2
#define BAUDRATE  		 9600
