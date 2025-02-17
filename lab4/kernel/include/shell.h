#ifndef _SHELL_H_
#define _SHELL_H_

#define CMD_MAX_LEN 0x100
#define MSG_MAX_LEN 0x100

typedef struct CLI_CMDS
{
    char command[CMD_MAX_LEN];
    char help[MSG_MAX_LEN];
} CLI_CMDS;

int  cli_cmd_strcmp(const char*, const char*);
void cli_cmd_clear(char*, int);
void cli_cmd_read(char*);
void cli_cmd_exec(char*);
void cli_print_banner();

void do_cmd_cat(char*);
void do_cmd_dtb();
void do_cmd_exec(char*);
void do_cmd_help();
void do_cmd_hello();
void do_cmd_info();
void do_cmd_kmalloc();
void do_cmd_ls(char*);
void do_cmd_setTimeout(char* msg, char* sec);
void do_cmd_set2sAlert();
void do_cmd_buddy_system_alloc();
void do_cmd_buddy_system_free();
void do_cmd_malloc();
void do_cmd_free();
void do_cmd_reboot();

#endif /* _SHELL_H_ */
