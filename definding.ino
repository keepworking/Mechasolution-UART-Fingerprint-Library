#define ACK_SUCCESS 	  0x00
#define ACK_FAIL		    0x01
#define ACK_FULL		    0x04
#define ACK_NOUSER		  0x05
#define ACK_USER_EXIST	0x06
#define ACK_FIN_EXIST	  0x07
#define ACK_TIMEOUT		  0x08

#define CMD_SLEEP		    0x2c
#define CMD_MODE		    0x2d
#define CMD_ADD1		    0x01
#define CMD_ADD2		    0x02
#define CMD_ADD3		    0x03
#define CMD_DEL_USER	  0x04
#define CMD_D_ALL_USER	0x05
#define CMD_NUM_OF_USER	0x09
#define CMD_COMP_1_1    0x0b
#define CMD_COMP_I_N	  0x0c
#define CMD_ACQ_USER	  0x0A
#define CMD_GET_VER		  0x26
#define CMD_COMP_LV		  0x28             //?
#define CMD_UPLOAD		  0x24
#define CMD_UPLOAD_EX	  0x03