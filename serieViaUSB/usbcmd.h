#ifndef _USBCMD_H_
#define _USBCMD_H_

/*
 * Commandes USB 
 * 
 * Par Matthew Khouzam et Jerome Collin <jerome.collin@polymtl.ca>
 *
 */
#define	USBDEV_VENDOR	0x16C0	/* ATMEL */
#define	USBDEV_PRODUCT	0x05DC 	/* USBasp */

/* 
    USB function call identifiers 
    ATTENTION: ces identificateurs doivent etre identiques a ceux
    contenus dans usbasp, fichier usbasp.h.
*/
#define USBASP_FUNC_CONNECT     1
#define USBASP_FUNC_DISCONNECT  2
#define USBASP_FUNC_TRANSMIT    3
#define USBASP_FUNC_READFLASH   4
#define USBASP_FUNC_ENABLEPROG  5
#define USBASP_FUNC_WRITEFLASH  6
#define USBASP_FUNC_READEEPROM  7
#define USBASP_FUNC_WRITEEEPROM 8
#define USBASP_FUNC_SETLONGADDRESS 9
#define USBASP_FUNC_SETISPSCK  10
#define USBASP_FUNC_SETSERIOS  11
#define USBASP_FUNC_READSER    12
#define USBASP_FUNC_WRITESER   13

// Fonction ISP - USB
#define USBASP_BLOCKFLAG_FIRST    1
#define USBASP_BLOCKFLAG_LAST     2

#define USBASP_READBLOCKSIZE   200
#define USBASP_WRITEBLOCKSIZE  200

// Fonction UART IOS
#define USBASP_MODE_SETBAUD300		0x10
#define USBASP_MODE_SETBAUD600		0x11
#define USBASP_MODE_SETBAUD1200    	0x12
#define USBASP_MODE_SETBAUD2400     0x13
#define USBASP_MODE_SETBAUD4800     0x14
#define USBASP_MODE_SETBAUD9600     0x15
#define USBASP_MODE_SETBAUD19200    0x16
#define USBASP_MODE_SETBAUD38400    0x17
#define USBASP_MODE_SETBAUD57600    0x18
#define USBASP_MODE_SETBAUD115200   0x19

#define USBASP_MODE_SETBAUD_SMALLEST USBASP_MODE_SETBAUD300
#define BAUD_RATES_AVAILABLE 10
const int BAUD_RATES[BAUD_RATES_AVAILABLE] = {
        300,
        600,
        1200,
        2400,
        4800,
        9600,
        19200,
        38400,
        57600,
        115200
};

#define USBASP_MODE_UART5BIT		0x05
#define USBASP_MODE_UART6BIT		0x06
#define USBASP_MODE_UART7BIT		0x07
#define USBASP_MODE_UART8BIT		0x08

#define USBASP_MODE_PARITYN			0x01
#define USBASP_MODE_PARITYE			0x02
#define USBASP_MODE_PARITYO			0x03

#endif /* _USBCMD_H_ */
