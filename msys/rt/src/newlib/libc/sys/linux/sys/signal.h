/* libc/sys/linux/sys/signal.h - Signal handling */

/* Written 2000 by Werner Almesberger */


#ifndef _SYS_SIGNAL_H
#define _SYS_SIGNAL_H

#include <sys/types.h>
#include <linux/signal.h>

/* --- include/signal.h thinks it knows better :-( --- */

#undef SIG_DFL
#undef SIG_IGN
#undef SIG_ERR

/* --- redundant stuff below --- */

#include <_ansi.h>

int _EXFUN(kill, (int, int));
int _EXFUN(sigaction, (int, const struct sigaction *, struct sigaction *));
int _EXFUN(sigaddset, (sigset_t *, const int));
int _EXFUN(sigdelset, (sigset_t *, const int));
int _EXFUN(sigismember, (const sigset_t *, int));
int _EXFUN(sigfillset, (sigset_t *));
int _EXFUN(sigemptyset, (sigset_t *));
int _EXFUN(sigpending, (sigset_t *));
int _EXFUN(sigsuspend, (const sigset_t *));
int _EXFUN(sigpause, (int));

#ifndef _POSIX_SOURCE
extern const char *const sys_siglist[];
typedef __sighandler_t sig_t; /* BSDism */
#endif

#endif