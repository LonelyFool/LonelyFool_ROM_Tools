#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f NFE_script 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[5]))
	"\101\276\227\206\052\166\137\373\346\036\177\244\133\067\143\226"
	"\205\052\120\270\125\120\056\274\232\212\145\201"
#define      msg2_z	19
#define      msg2	((&data[31]))
	"\234\205\154\133\233\011\261\040\116\021\215\241\356\335\106\372"
	"\030\117\061\140\302\031\261\060"
#define      chk2_z	19
#define      chk2	((&data[55]))
	"\363\304\007\046\211\361\034\306\031\127\312\271\013\277\136\167"
	"\043\136\145\033\242\237\241\360\046"
#define      date_z	1
#define      date	((&data[77]))
	"\010"
#define      rlax_z	1
#define      rlax	((&data[78]))
	"\263"
#define      tst1_z	22
#define      tst1	((&data[79]))
	"\215\133\250\155\062\154\117\242\210\102\313\272\032\040\103\150"
	"\224\272\346\334\271\133\067\254\014"
#define      xecc_z	15
#define      xecc	((&data[104]))
	"\241\377\373\002\205\132\214\016\173\013\022\052\353\145\142\004"
	"\236"
#define      inlo_z	3
#define      inlo	((&data[121]))
	"\111\217\350"
#define      pswd_z	256
#define      pswd	((&data[171]))
	"\230\142\363\135\152\224\115\221\302\370\101\140\306\204\330\333"
	"\012\020\207\026\162\265\303\167\123\016\001\136\012\275\135\242"
	"\037\120\000\211\344\115\033\247\105\134\007\013\341\340\347\227"
	"\037\272\077\225\304\072\256\066\037\176\121\162\101\203\162\254"
	"\232\014\206\011\033\370\042\033\206\124\046\115\302\157\344\342"
	"\052\044\167\357\136\046\045\176\244\166\360\346\372\142\222\224"
	"\157\031\236\212\021\301\245\227\025\314\344\330\074\311\272\147"
	"\355\062\126\114\131\173\312\376\362\272\344\354\035\167\201\214"
	"\220\037\026\241\341\274\070\366\210\035\317\305\346\211\054\324"
	"\274\202\040\025\376\352\023\361\245\367\335\302\157\137\117\377"
	"\177\146\240\140\042\331\127\253\366\046\160\335\260\235\261\155"
	"\037\321\202\036\274\226\017\141\216\355\044\375\114\164\374\314"
	"\332\235\055\375\166\204\250\155\253\031\112\133\266\374\311\326"
	"\316\113\364\212\342\004\354\160\362\020\156\076\204\152\013\136"
	"\010\070\133\176\274\004\353\150\036\066\304\324\062\215\253\000"
	"\331\240\213\273\244\167\053\226\207\232\325\014\005\340\153\015"
	"\031\307\213\326\313\167\076\352\255\002\276\340\217\151\341\150"
	"\011\154\043\256\343\117\105\153\352\032\170\357\373\343\374\024"
	"\252\207\352\166\377\050\140\255\053\037\215\272\211\156\043\353"
	"\360\157\001\142\044\305\331\170\324\333\326\337\230\064\201\270"
	"\205\202\101\151\317\134\021\025\271\030\041\232\370\010\206\351"
	"\167\210\113\234\115\044\025\042\000\354\001\230\040\203\120\245"
	"\005\222\017\325\357\041\352\250\072\013\103\063\024\311\034"
#define      opts_z	1
#define      opts	((&data[491]))
	"\214"
#define      shll_z	10
#define      shll	((&data[493]))
	"\075\036\311\033\351\253\040\005\137\167\257\301"
#define      text_z	124
#define      text	((&data[509]))
	"\045\112\106\165\360\025\371\352\364\253\176\033\141\376\323\012"
	"\222\173\224\262\154\127\236\227\210\014\261\243\232\240\231\334"
	"\017\351\246\003\126\321\015\334\136\115\370\171\266\246\315\221"
	"\124\260\301\334\143\353\205\165\374\007\025\312\157\256\127\107"
	"\073\242\107\371\254\362\165\342\241\361\234\227\115\042\231\231"
	"\114\232\252\354\052\167\336\027\012\244\070\256\275\125\050\211"
	"\167\112\007\120\325\342\145\174\167\071\015\323\043\241\246\100"
	"\167\272\123\143\242\104\037\012\346\332\314\163\036\065\204\107"
	"\223\113\010\000\041\367\041\013\240\133\027\344\216\053\255\253"
	"\267\377\023\337\237\237\035\141\054"
#define      lsto_z	1
#define      lsto	((&data[657]))
	"\273"
#define      tst2_z	19
#define      tst2	((&data[660]))
	"\201\266\162\171\217\234\214\012\100\243\341\217\223\155\060\252"
	"\235\135\332\266\221\317\201\330"
#define      msg1_z	42
#define      msg1	((&data[689]))
	"\147\376\373\114\215\046\371\311\154\014\003\221\121\261\323\044"
	"\212\201\362\032\353\063\102\061\033\350\150\017\324\167\043\173"
	"\205\001\060\000\356\257\242\273\207\174\315\143\363\120\156\277"
	"\260\070\335\371\113\275\230\353\333\372"/* End of data[] */;
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
