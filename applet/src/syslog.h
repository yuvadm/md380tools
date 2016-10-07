/*
 *  syslog.h
 * 
 */

#ifndef SYSLOG_H
#define SYSLOG_H

#ifdef __cplusplus
extern "C" {
#endif


inline int is_syslog_enabled()
{
    return 1 ;
}

void syslog_printf(const char *fmt, ...);

void syslog_dump_dmesg();

#ifdef __cplusplus
}
#endif

#endif /* SYSLOG_H */

