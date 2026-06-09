#ifndef BLUETOOTH_H
#define BLUETOOTH_H

void bluetooth_init(void);
void process_bt_command(char cmd);
void bt_send(const char *msg);

#endif
