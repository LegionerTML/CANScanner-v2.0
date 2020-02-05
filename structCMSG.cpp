#pragma once
typedef struct {
	long l_id;
	unsigned char by_len;
	unsigned char by_msg_lost;
	unsigned char by_extended;
	unsigned char by_remote;
	unsigned char aby_data[8];
	unsigned long ul_tstamp;
}CMSG;