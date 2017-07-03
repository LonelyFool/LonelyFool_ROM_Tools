#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f charge_list 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[4]))
	"\050\066\336\165\005\100\351\272\227\054\251\135\223\016\011\125"
	"\232\216\247\112\314\362\327\343\020"
#define      pswd_z	256
#define      pswd	((&data[75]))
	"\164\271\272\134\034\163\143\242\072\240\225\312\201\204\103\340"
	"\243\320\370\223\305\153\274\374\112\061\340\132\050\250\024\234"
	"\142\317\370\176\103\134\040\176\374\266\110\176\073\214\137\337"
	"\134\127\150\175\142\332\131\075\320\251\301\055\310\031\114\215"
	"\155\253\133\033\121\360\250\072\364\213\331\157\241\143\162\011"
	"\366\332\206\131\264\340\226\205\212\130\263\123\161\377\341\337"
	"\252\074\372\374\055\243\066\041\056\020\221\320\163\003\331\152"
	"\336\140\303\222\101\132\030\313\262\313\036\044\313\000\003\166"
	"\074\376\162\151\241\251\212\320\271\033\240\055\037\172\227\375"
	"\332\133\220\034\265\250\347\150\163\006\214\076\006\220\265\103"
	"\216\047\254\060\320\067\000\212\123\240\267\162\032\117\157\365"
	"\252\377\022\140\250\372\311\034\001\126\133\010\346\020\113\165"
	"\067\367\245\010\057\246\222\202\106\112\364\141\231\144\127\104"
	"\144\152\245\014\144\156\050\145\305\203\155\254\223\270\041\313"
	"\260\307\323\337\155\146\141\264\260\126\026\112\272\156\216\037"
	"\330\063\053\074\242\124\241\147\330\017\023\154\307\065\067\167"
	"\374\013\126\152\162\270\037\043\016\065\155\311\244\373\350\174"
	"\057\024\271\321\150\133\070\101\152\114\255\062\201\344\251\175"
	"\360\000\350\142\270\007\206\307\075\363\220\341\357\170\136\036"
	"\214\027\162\042\303\057\037\015\141\377\147\211\247\174\045\012"
	"\114\036\210\217\172\251\016\167\137\127\366\233\343\125\172\100"
	"\254\355\143\157\034\202\175\175\201\345\007\051\142\054\063\256"
	"\113"
#define      opts_z	1
#define      opts	((&data[378]))
	"\161"
#define      xecc_z	15
#define      xecc	((&data[380]))
	"\305\020\261\005\127\070\202\054\135\316\231\300\071\065\167\112"
#define      msg2_z	19
#define      msg2	((&data[395]))
	"\174\353\124\075\144\074\265\255\122\042\330\315\370\264\030\235"
	"\266\237\055\207"
#define      tst1_z	22
#define      tst1	((&data[420]))
	"\064\310\053\244\344\002\256\236\342\306\312\311\317\356\062\244"
	"\235\360\262\343\116\210\003\143\157\145\052\255\042\142\056"
#define      msg1_z	42
#define      msg1	((&data[450]))
	"\151\226\213\030\256\267\232\373\377\204\020\055\266\321\340\177"
	"\361\151\100\200\131\150\016\217\344\051\341\076\342\341\370\272"
	"\047\157\073\155\034\041\223\154\370\000\254\052\010\200\341\107"
	"\126"
#define      rlax_z	1
#define      rlax	((&data[495]))
	"\154"
#define      tst2_z	19
#define      tst2	((&data[498]))
	"\026\321\375\315\310\256\155\141\214\370\141\266\377\247\372\154"
	"\125\354\001\161\327\316"
#define      text_z	368
#define      text	((&data[580]))
	"\324\165\301\171\132\157\233\274\235\242\046\365\014\275\200\044"
	"\236\307\173\105\164\037\051\345\146\100\267\065\337\144\314\263"
	"\331\216\054\063\375\310\360\233\153\026\221\167\323\022\234\162"
	"\331\027\270\116\067\341\063\236\042\353\324\001\117\240\007\020"
	"\345\355\017\050\210\206\001\014\036\307\025\120\235\350\142\323"
	"\106\373\030\245\356\357\361\271\141\012\144\246\121\225\250\252"
	"\123\174\057\111\052\106\073\143\322\033\061\057\135\141\027\060"
	"\362\055\257\310\171\120\060\300\307\332\031\170\345\001\044\317"
	"\120\324\327\330\017\350\133\060\070\075\337\133\167\034\213\252"
	"\252\020\142\270\034\125\257\015\152\136\154\233\334\255\066\277"
	"\166\046\224\326\022\372\267\111\122\177\030\254\162\011\114\065"
	"\351\000\323\327\012\370\246\133\107\252\316\367\315\034\372\240"
	"\172\037\062\153\344\053\320\201\316\045\374\044\322\363\103\036"
	"\245\314\331\103\175\332\064\212\045\271\270\274\073\332\024\132"
	"\201\210\061\144\167\307\272\364\276\203\157\126\131\214\340\164"
	"\040\243\243\254\240\162\373\042\345\141\374\077\251\117\031\064"
	"\226\113\332\011\205\154\373\317\247\102\075\010\372\375\015\360"
	"\356\076\105\103\136\231\113\132\050\314\140\303\007\047\011\372"
	"\151\224\156\347\071\333\070\204\363\227\367\040\140\251\025\167"
	"\205\232\007\064\076\357\273\302\156\302\114\371\134\161\060\276"
	"\315\260\141\373\221\207\115\021\036\216\266\046\274\264\157\142"
	"\011\375\176\146\266\174\122\253\047\007\156\357\320\007\372\041"
	"\221\035\316\160\110\250\240\323\057\106\200\163\053\036\174\365"
	"\265\007\222\347\355\245\177\141\320\237\324\022\311\000\305\060"
	"\105\023\134\025\301\272\246\255\016\222\244\260\073\124\035\234"
	"\077\130\207\023\212\050\247\245\305\345\076\043\044\235\222\330"
	"\300\350\302\176\265\251\005\022\146\377\325\326\212\160\265\050"
	"\057\342\134\055\252\114\310\026\143\131\215\067\153\051\251\105"
	"\101\141\224\170\103\307\027\145\262\353\147\002\214\035\052\273"
	"\000\207\350\253\324\261\301\067\013\116\156\167\170\030\275\272"
	"\172\121\063\276"
#define      date_z	1
#define      date	((&data[1002]))
	"\044"
#define      shll_z	10
#define      shll	((&data[1003]))
	"\343\045\245\160\352\132\360\251\210\332\315"
#define      inlo_z	3
#define      inlo	((&data[1014]))
	"\031\345\207"
#define      chk1_z	22
#define      chk1	((&data[1020]))
	"\146\123\123\172\173\115\020\304\131\376\072\274\304\116\212\073"
	"\151\212\356\361\141\001\107\345\250\027\025"
#define      lsto_z	1
#define      lsto	((&data[1044]))
	"\330"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
