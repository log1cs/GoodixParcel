typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef union sem_t sem_t, *Psem_t;

union sem_t {
    char __size[32];
    long __align;
};

typedef struct _IO_FILE FILE;

typedef int __pid_t;

typedef uint __uid_t;

typedef long __time_t;

typedef long __suseconds_t;

typedef long __clock_t;

typedef int __clockid_t;

typedef void * __timer_t;

typedef uint __useconds_t;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef ulong pthread_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef union sigval sigval, *Psigval;

union sigval {
    int sival_int;
    void * sival_ptr;
};

typedef union _union_1250 _union_1250, *P_union_1250;

typedef struct _struct_1251 _struct_1251, *P_struct_1251;

typedef union sigval sigval_t;

struct _struct_1251 {
    void (* _function)(sigval_t);
    void * _attribute;
};

union _union_1250 {
    int _pad[12];
    __pid_t _tid;
    struct _struct_1251 _sigev_thread;
};

typedef struct siginfo siginfo, *Psiginfo;

typedef union _union_1441 _union_1441, *P_union_1441;

typedef struct _struct_1442 _struct_1442, *P_struct_1442;

typedef struct _struct_1443 _struct_1443, *P_struct_1443;

typedef struct _struct_1444 _struct_1444, *P_struct_1444;

typedef struct _struct_1445 _struct_1445, *P_struct_1445;

typedef struct _struct_1446 _struct_1446, *P_struct_1446;

typedef struct _struct_1447 _struct_1447, *P_struct_1447;

struct _struct_1445 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1444 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1443 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1446 {
    void * si_addr;
};

struct _struct_1442 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1447 {
    long si_band;
    int si_fd;
};

union _union_1441 {
    int _pad[28];
    struct _struct_1442 _kill;
    struct _struct_1443 _timer;
    struct _struct_1444 _rt;
    struct _struct_1445 _sigchld;
    struct _struct_1446 _sigfault;
    struct _struct_1447 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1441 _sifields;
};

typedef struct siginfo siginfo_t;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __clockid_t clockid_t;

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone * __timezone_ptr_t;

typedef __timer_t timer_t;

typedef struct itimerspec itimerspec, *Pitimerspec;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct itimerspec {
    struct timespec it_interval;
    struct timespec it_value;
};

typedef __time_t time_t;

typedef struct sigevent sigevent, *Psigevent;

struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union _union_1250 _sigev_un;
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef union _union_1457 _union_1457, *P_union_1457;

typedef void (* __sighandler_t)(int);

union _union_1457 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

typedef struct sigaction sigaction, *Psigaction;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[16];
};

struct sigaction {
    union _union_1457 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};




void FUN_00104170(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_wait(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_post(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock(__mutex);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int timer_create(clockid_t __clock_id,sigevent *__evp,timer_t *__timerid)

{
  int iVar1;
  
  iVar1 = timer_create(__clock_id,__evp,__timerid);
  return iVar1;
}



void QSEECom_send_cmd(void)

{
  QSEECom_send_cmd();
  return;
}



void __errno(void)

{
  __errno();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_timedwait(sem_t *__sem,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = sem_timedwait(__sem,__abstime);
  return iVar1;
}



void __system_property_set(void)

{
  __system_property_set();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



void __android_log_buf_print(void)

{
  __android_log_buf_print();
  return;
}



void QSEECom_start_app(void)

{
  QSEECom_start_app();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int timer_delete(timer_t __timerid)

{
  int iVar1;
  
  iVar1 = timer_delete(__timerid);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int timer_settime(timer_t __timerid,int __flags,itimerspec *__value,itimerspec *__ovalue)

{
  int iVar1;
  
  iVar1 = timer_settime(__timerid,__flags,__value,__ovalue);
  return iVar1;
}



void QSEECom_shutdown_app(void)

{
  QSEECom_shutdown_app();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



void QSEECom_scale_bus_bandwidth(void)

{
  QSEECom_scale_bus_bandwidth();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_trywait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_trywait(__sem);
  return iVar1;
}



void fs_mkdirs(void)

{
  fs_mkdirs();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = sem_init(__sem,__pshared,__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void QSEECom_send_modified_cmd(void)

{
  QSEECom_send_modified_cmd();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_getvalue(sem_t *__sem,int *__sval)

{
  int iVar1;
  
  iVar1 = sem_getvalue(__sem,__sval);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = munmap(__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __system_property_get(void)

{
  __system_property_get();
  return;
}



void property_get_int32(void)

{
  property_get_int32();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



void entry(void)

{
  __cxa_finalize(&DAT_0012a000);
  return;
}



void FUN_001044ec(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    (*(code *)param_1)();
  }
  return;
}



int gf_open(void)

{
  int iVar1;
  
  if (g_device_handle == 0) {
    g_device_handle = open("/dev/goodix_fp",2);
    if (g_device_handle < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]open %s failed.\n","gf_open","/dev/goodix_fp");
      __android_log_buf_print(7,7,"BBox::UEC","39::9");
      iVar1 = -0x81;
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]Open device[%s] success. Handle = %d\n","gf_open"
                          ,"/dev/goodix_fp");
      iVar1 = g_device_handle;
    }
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Device has been opened. handle = %d\n","gf_open");
    iVar1 = -0x90;
  }
  return iVar1;
}



ulong gf_close(void)

{
  uint uVar1;
  ulong uVar2;
  
  if (g_device_handle == 0) {
    uVar2 = __android_log_print(3,"FingerGoodix","[%-20s]No device to be closed.\n","gf_close");
    return uVar2;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]Close device. Handle = %d\n","gf_close");
  uVar1 = close(g_device_handle);
  g_device_handle = 0;
  return (ulong)uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_handler_register(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  _union_1457 local_28;
  ulong local_20;
  ulong local_18;
  ulong uStack_10;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Func to register is NULL.\n","gf_handler_register")
    ;
    uVar3 = 0xffffff7b;
  }
  else {
    local_28.sa_handler = (__sighandler_t)0x0;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_1;
    sigaction(0x1d,(sigaction *)&stack0xffffffffffffffd8,(sigaction *)0x0);
    iVar1 = g_device_handle;
    uVar2 = getpid();
    fcntl(iVar1,8,(ulong)uVar2);
    iVar1 = g_device_handle;
    uVar2 = fcntl(g_device_handle,3);
    fcntl(iVar1,4,(ulong)(uVar2 | 0x2000));
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



int gf_handler_unregister(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = g_device_handle;
  uVar1 = getpid();
  fcntl(iVar2,8,(ulong)uVar1);
  iVar2 = g_device_handle;
  uVar1 = fcntl(g_device_handle,3);
  iVar2 = fcntl(iVar2,4,(ulong)(uVar1 & 0xffffdfff));
  return iVar2;
}



undefined8 gf_enable_irq(void)

{
  int iVar1;
  undefined8 uVar2;
  
  DAT_0012a7e8 = 1;
  __android_log_print(3,"FingerGoodix","[%-20s]gf_enable_irq","gf_enable_irq");
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_enable_irq");
    DAT_0012a7e8 = 0;
    uVar2 = 0xffffff7f;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4701);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_ENABLE_IRQ.\n",
                          "gf_enable_irq");
      DAT_0012a7e8 = 0;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



undefined8 gf_disable_irq(void)

{
  int iVar1;
  undefined8 uVar2;
  
  DAT_0012a7e8 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]gf_disable_irq","gf_disable_irq");
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_disable_irq");
    uVar2 = 0xffffff7f;
    DAT_0012a7e8 = 1;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4700);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_DISABLE_IRQ.\n",
                          "gf_disable_irq");
      uVar2 = 0xffffffff;
      DAT_0012a7e8 = 1;
    }
  }
  return uVar2;
}



undefined gf_irq_is_enabled(void)

{
  return DAT_0012a7e8;
}



undefined8 gf_hw_reset(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_hw_reset");
    uVar2 = 0xffffff7f;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4703);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_RESET.\n","gf_hw_reset");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



undefined8 gf_cool_boot(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_cool_boot");
    uVar2 = 0xffffff7f;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4704);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_COOL_BOOT.\n","gf_cool_boot")
      ;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



undefined8 gf_set_speed(void)

{
  return 0;
}



undefined8 gf_read_pm_fb(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_read_pm_fb");
    uVar2 = 0xffffff7f;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4708,param_1);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to get pm_fb \n","gf_read_pm_fb");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_send_key(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_send_key_kernel");
    uVar2 = 0xffffff7f;
  }
  else {
    local_10 = CONCAT44(param_2,param_1);
    iVar1 = ioctl(g_device_handle,0x40084705,&local_10);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to send key[%d], value:%d\n",
                          "gf_send_key_kernel",param_1,param_2);
      uVar2 = 0xffffffff;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_reset_sensor(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined uStack_18;
  char local_17;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = gf_irq_is_enabled();
  __android_log_print(3,"FingerGoodix","[%-20s]gf_reset_sensor: irq_is_enabled = %d",
                      "gf_reset_sensor",iVar1);
  gf_disable_irq();
  usleep(50000);
  g_isReset = 0;
  fnCa_CleanStatus();
  gf_hw_reset();
  do {
    while( true ) {
      iVar2 = param_1;
      usleep(10000);
      gf_secspi_read_status(&uStack_18);
      if (((byte)(local_17 + 0x20U) < 2) || (local_17 == -0x1c)) {
        __android_log_print(3,"FingerGoodix","[%-20s]Reset sensor success!","gf_reset_sensor");
        fnCa_CleanStatus();
        iVar3 = 0;
        if (iVar2 < 1) goto LAB_00104cb4;
        g_isReset = 0;
        if (iVar1 != 1) goto LAB_00104d24;
        goto LAB_00104ce0;
      }
      if (local_17 == '\0') break;
      fnCa_CleanStatus();
      param_1 = iVar2 + -1;
      if (iVar2 + -1 == -1) goto LAB_00104cb0;
    }
    param_1 = iVar2 + -1;
  } while (iVar2 + -1 != -1);
LAB_00104cb0:
  iVar3 = iVar2 + -1;
  fnCa_CleanStatus();
LAB_00104cb4:
  __android_log_print(3,"FingerGoodix","[%-20s]Reset sensor error!","gf_reset_sensor");
  g_isReset = 0;
  if (iVar1 == 1) {
LAB_00104ce0:
    g_isReset = 0;
    gf_enable_irq();
  }
LAB_00104d24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_fw_update(void)

{
  int iVar1;
  byte local_a;
  byte local_9;
  long local_8;
  
  local_a = 0xff;
  local_9 = 0xff;
  local_8 = ___stack_chk_guard;
  iVar1 = gf_irq_is_enabled();
  if (iVar1 == 1) {
    gf_disable_irq();
    fnCa_CleanStatus();
    usleep(3000);
    local_a = 1;
    fnCa_FWUpdate(&local_a);
    gf_hw_reset();
    local_9 = 2;
    fnCa_FWUpdate(&local_9);
    gf_enable_irq();
  }
  else {
    fnCa_CleanStatus();
    usleep(3000);
    local_a = 1;
    fnCa_FWUpdate(&local_a);
    gf_hw_reset();
    local_9 = 2;
    fnCa_FWUpdate(&local_9);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(local_9 | local_a);
}



undefined4 restart_sensor(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\n';
  __android_log_print(3,"FingerGoodix","[%-20s]try restart sensor.","restart_sensor");
  gf_disable_irq();
  do {
    iVar1 = gf_fw_update();
    if (iVar1 == 0) {
      mutex_get_lock();
      iVar1 = fnCa_SetMode(g_mode);
      mutex_get_unlock();
      if (iVar1 == -1) {
        __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetMode failed","restart_sensor");
        gf_enable_irq();
        return 0xffffffff;
      }
      uVar2 = fnCa_controlSampling(0);
      gf_enable_irq();
      return uVar2;
    }
    cVar3 = cVar3 + -1;
    usleep(100000);
  } while (cVar3 != '\0');
  __android_log_print(3,"FingerGoodix","[%-20s]gf_fw_update failed","restart_sensor");
  gf_enable_irq();
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_create_timer(timer_t *param_1,_func_5017 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  sigevent local_48;
  long local_8;
  
  local_48._sigev_un._sigev_thread._attribute = (void *)0x0;
  local_48._sigev_un._16_8_ = 0;
  local_48._sigev_un._24_8_ = 0;
  local_48._sigev_un._32_8_ = 0;
  local_48._sigev_un._40_8_ = 0;
  local_8 = ___stack_chk_guard;
  local_48.sigev_value = (sigval_t)0xf0;
  local_48.sigev_signo = 0;
  local_48.sigev_notify = 2;
  local_48._sigev_un._sigev_thread._function = param_2;
  iVar1 = timer_create(0,&local_48,param_1);
  if (iVar1 == -1) {
    __android_log_print(3,"FingerGoodix","[%-20s]fail to timer_create","gf_create_timer");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]init and start timer success \n","gf_create_timer")
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_active_timer(timer_t *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  itimerspec local_28;
  long local_8;
  
  local_28.it_value.tv_nsec = (long)(param_3 * 1000000) % 1000000000;
  local_8 = ___stack_chk_guard;
  local_28.it_interval.tv_nsec = (long)(param_5 * 1000000) % 1000000000;
  local_28.it_value.tv_sec = (long)(param_3 * 1000000) / 1000000000 + (long)param_2;
  local_28.it_interval.tv_sec = (long)(param_5 * 1000000) / 1000000000 + (long)param_4;
  __android_log_print(3,"FingerGoodix","[%-20s]sec = %d , msec = %d","gf_active_timer",
                      local_28.it_value.tv_sec & 0xffffffff,local_28.it_value.tv_nsec / 1000000);
  if (*param_1 == (timer_t)0x0) {
    uVar2 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]fail to timer_settime,timerID is NULL!",
                        "gf_active_timer");
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a7f0);
    iVar1 = timer_settime(*param_1,0,&local_28,(itimerspec *)0x0);
    if (iVar1 == -1) {
      __android_log_print(3,"FingerGoodix","[%-20s]fail to timer_settime","gf_active_timer");
      timer_delete(*param_1);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a7f0);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a7f0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



undefined4 gf_delete_timer(timer_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != (timer_t)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a7f0);
    iVar1 = timer_delete(*param_1);
    if (iVar1 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a7f0);
      uVar2 = 0;
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a7f0);
      uVar2 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]delete timer failed\n","gf_delete_timer");
    }
    return uVar2;
  }
  return 0;
}



int gf_delete_esd_timer(void)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]delete timer \n","gf_delete_esd_timer");
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a818);
  if ((timerid != (timer_t)0x0) && (iVar1 = timer_delete(timerid), iVar1 == 0)) {
    __android_log_print(3,"FingerGoodix","[%-20s]delete timer success\n","gf_delete_esd_timer");
    timerid = (timer_t)0x0;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a818);
    return iVar1;
  }
  timerid = (timer_t)0x0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a818);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void loop_thread(void)

{
  int iVar1;
  char cVar2;
  char local_9;
  long local_8;
  
  local_9 = '\0';
  local_8 = ___stack_chk_guard;
  mutex_get_lock_esd();
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)&DAT_0012a840);
  if (iVar1 == 0) {
    if (((gScreenStatus != '\x01') && ((g_mode & 0xfffffffb) != 2)) && (g_isPinTest == 0)) {
      fnCa_ESDCheck(&local_9);
      if (local_9 != '\0') {
        usleep(100000);
        __android_log_print(3,"FingerGoodix","[%-20s]ESD CHECK ERROR, RETRY!","loop_thread");
        fnCa_ESDCheck(&local_9);
        if (local_9 != '\0') {
          cVar2 = '\n';
          __android_log_print(3,"FingerGoodix","[%-20s]ESD CHECK ERROR, NEED RESEST!","loop_thread")
          ;
          do {
            iVar1 = gf_fw_update();
            if (iVar1 == 0) goto LAB_001054ac;
            cVar2 = cVar2 + -1;
            usleep(100000);
          } while (cVar2 != '\0');
          gf_delete_esd_timer();
LAB_001054ac:
          fnCa_SetMode(g_mode);
        }
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a840);
  }
  mutex_get_unlock_esd();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_create_esd_timer(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_48 [64];
  long local_8;
  
  local_48._0_8_ = (void *)0x0;
  local_48._8_4_ = 0;
  local_48._12_4_ = 0;
  local_48._16_8_ = (_func_5017 *)0x0;
  local_48._24_8_ = (void *)0x0;
  local_48._32_8_ = 0;
  local_48._40_8_ = 0;
  local_8 = ___stack_chk_guard;
  local_48._48_8_ = 0;
  local_48._56_8_ = 0;
  if (timerid == 0) {
    local_48._0_8_ = (sigval_t)0xff;
    local_48._8_4_ = 0;
    local_48._12_4_ = 2;
    local_48._16_8_ = loop_thread;
    iVar1 = timer_create(0,(sigevent *)local_48,(timer_t *)&timerid);
    if (iVar1 == -1) {
      perror("fail to timer_create");
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]####### timer has been create \n",
                        "gf_create_esd_timer");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_active_esd_timer(void)

{
  int iVar1;
  itimerspec local_28;
  long local_8;
  
  local_28.it_interval.tv_sec = 10;
  local_28.it_interval.tv_nsec = 0;
  local_8 = ___stack_chk_guard;
  local_28.it_value.tv_sec = 10;
  local_28.it_value.tv_nsec = 0;
  iVar1 = timer_settime(timerid,0,&local_28,(itimerspec *)0x0);
  if (iVar1 == -1) {
    perror("fail to timer_settime");
    timer_delete(timerid);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_init_esd_timer(void)

{
  int iVar1;
  itimerspec local_68;
  undefined local_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]init and start timer \n","gf_init_esd_timer");
  local_68.it_interval.tv_sec = 10;
  local_68.it_interval.tv_nsec = 0;
  local_68.it_value.tv_sec = 10;
  local_68.it_value.tv_nsec = 0;
  local_48._0_8_ = (void *)0x0;
  local_48._8_4_ = 0;
  local_48._12_4_ = 0;
  local_48._16_8_ = (_func_5017 *)0x0;
  local_48._24_8_ = (void *)0x0;
  local_48._32_8_ = 0;
  local_48._40_8_ = 0;
  local_48._48_8_ = 0;
  local_48._56_8_ = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a818);
  if (timerid == (timer_t)0x0) {
    local_48._0_4_ = 0xff;
    local_48._12_4_ = 2;
    local_48._16_8_ = loop_thread;
    iVar1 = timer_create(0,(sigevent *)local_48,&timerid);
    if (iVar1 == -1) {
      perror("fail to timer_create");
    }
    else {
      iVar1 = timer_settime(timerid,0,&local_68,(itimerspec *)0x0);
      if (iVar1 == -1) {
        perror("fail to timer_settime");
        timer_delete(timerid);
      }
      else {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a818);
        __android_log_print(3,"FingerGoodix","[%-20s]init and start timer success \n",
                            "gf_init_esd_timer");
      }
    }
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]####### timer has been create \n",
                        "gf_init_esd_timer");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void gf_excute_esd_timer(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]gf_excute_esd_timer","gf_excute_esd_timer");
  __android_log_print(3,"FingerGoodix","[%-20s]gf_excute_esd_timer - excute","gf_excute_esd_timer");
  loop_thread();
  return;
}



int gf_esd_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a840);
  return iVar1;
}



int gf_esd_mutex_unlock(void)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a840);
  return iVar1;
}



int mutex_get_lock(void)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]mutex_get_lock","mutex_get_lock");
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a878);
  return iVar1;
}



int mutex_get_unlock(void)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]mutex_get_unlock","mutex_get_unlock");
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a878);
  return iVar1;
}



uint sigtimer_click_fn(void)

{
  char cVar1;
  uint uVar2;
  
  if (DAT_0012a015 == 0) {
    mutex_get_lock();
    cVar1 = DAT_0012a014;
    if ((DAT_0012a025 != '\0') || (DAT_0012a026 != '\0')) {
      if (DAT_0012a014 == '\0') {
        DAT_0012a024 = '\0';
      }
      else if (DAT_0012a014 == '\x01') {
        __android_log_print(3,"FingerGoodix","[%-20s]====== reprot single click, value = %d ======",
                            "sigtimer_click_fn",0xac);
        gf_send_key(0xac,1);
        gf_send_key(0xac,0);
        DAT_0012a024 = cVar1;
      }
    }
    DAT_0012a014 = 0;
    DAT_0012a015 = 1;
    uVar2 = mutex_get_unlock();
    return uVar2;
  }
  return (uint)DAT_0012a015;
}



uint sigtimer_longpress_fn(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = DAT_0012a024;
  if ((DAT_0012a024 == 0) && (bVar1 = DAT_0012a014, DAT_0012a014 == 0)) {
    mutex_get_lock();
    __android_log_print(3,"FingerGoodix","[%-20s]====== reprot long press , value = %d ======",
                        "sigtimer_longpress_fn",0xac);
    gf_send_key(0xac,1);
    gf_send_key(0xac,0);
    DAT_0012a014 = 0;
    DAT_0012a015 = 1;
    DAT_0012a024 = 1;
    uVar2 = mutex_get_unlock();
    return uVar2;
  }
  return (uint)bVar1;
}



int mutex_get_lock_esd(void)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a878);
  return iVar1;
}



int mutex_get_unlock_esd(void)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a878);
  return iVar1;
}



char * toString(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 100;
  do {
    if (*param_1 == param_2) {
      return *(char **)(param_1 + 2);
    }
    param_1 = param_1 + 4;
  } while (param_1 != piVar1);
  return "UNKNOW";
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_handler(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1d) {
    sem_getvalue((sem_t *)g_sigio_sem,&local_c);
    __android_log_print(3,"FingerGoodix","[%-20s]SIGIO: sem_value == %d","sig_handler",local_c);
    iVar1 = g_mode;
    pcVar3 = toString((int *)&DAT_0012a030,g_mode);
    iVar2 = g_state;
    pcVar4 = toString((int *)&DAT_0012a1c0,g_state);
    __android_log_print(3,"FingerGoodix","[%-20s]g_mode = 0x%x(%s); g_state = 0x%x(%s)",
                        "sig_handler",iVar1,pcVar3,iVar2,pcVar4);
    if (local_c == 0) {
      sem_post((sem_t *)g_sigio_sem);
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]Handler is busying!\n","sig_handler");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_secspi_read_status(void *param_1)

{
  int iVar1;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x12,&uStack_c,0,param_1,10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_secspi_write_status(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x13,&uStack_10,4,&uStack_c,4);
  uVar2 = uStack_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



void sigtimer_baseUpdate(void)

{
  fnCa_updateImageBase(1,1);
  return;
}



void detectBaseUpdateFingerUp(char param_1,byte param_2)

{
  int iVar1;
  
  if ((param_1 == -0x50) && ((param_2 & 3) == 2)) {
    if (DAT_0012a028 == '\0') {
      iVar1 = fnCa_updateImageBase(1,1);
      if (iVar1 < 1) {
        if (g_ta_sensor_info._56_4_ != 0) {
          fnCa_updateNavBase(1,1);
          return;
        }
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]#### 0xd0 is coming after home key up ####",
                            "detectBaseUpdateFingerUp");
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]#### clear 0xd0 and use 0xd0 base updation instead of fingerup base updation ####"
                            ,"detectBaseUpdateFingerUp");
        fnCa_CleanStatus();
        fnCa_updateImageBase(0,2);
        if (g_ta_sensor_info._56_4_ != 0) {
          fnCa_updateNavBase(0,2);
          return;
        }
      }
    }
    else {
      DAT_0012a028 = '\0';
      g_firstFingerUp = 1;
    }
  }
  return;
}



void testBaseUpdate(void)

{
  int iVar1;
  
  iVar1 = gf_active_timer((timer_t *)&baseUpdateTimerID,0,0,5,0);
  if (iVar1 != 0) {
    return;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]gf_active_timer base update ok,testing!",
                      "testBaseUpdate");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_handle_exception(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined local_9;
  long local_8;
  
  local_9 = 0;
  bVar1 = *(byte *)(param_1 + 1);
  local_8 = ___stack_chk_guard;
  if (bVar1 == 0xd0) {
    fnCa_CleanStatus();
    if (isPinTest == '\0') {
      if (g_firstFingerUp == '\0') {
        fnCa_updateImageBase(0,2);
        if (g_ta_sensor_info._56_4_ != 0) {
          fnCa_updateNavBase(0,2);
        }
        DAT_0012a8a4 = DAT_0012a8a4 + 1;
      }
      else {
        g_firstFingerUp = '\0';
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]==> use fingerup interrupt instead of 0xd0 interrupt, ok",
                            "gx_handle_exception");
        fnCa_updateImageBase(1,1);
        if (g_ta_sensor_info._56_4_ != 0) {
          fnCa_updateNavBase(1,1);
        }
        DAT_0012a8a0 = DAT_0012a8a0 + 1;
      }
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]GF_INT_UPDATE_BASE : baseUpdateInterruptCount= %d, baseUpdateInterruptAfterFingerUp = %d"
                          ,"gx_handle_exception",DAT_0012a8a4,DAT_0012a8a0);
      uVar2 = 1;
    }
    else {
      isPinTest = '\0';
      __android_log_print(3,"FingerGoodix","[%-20s]Pin Test: ignore 0xD0 interrupt ",
                          "gx_handle_exception");
      uVar2 = 1;
    }
  }
  else if ((bVar1 < 0xd0) || (4 < bVar1 - 0xe0)) {
    uVar2 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Exception, status=0x%x","gx_handle_exception");
    gf_disable_irq();
    fnCa_CleanStatus();
    local_9 = 1;
    fnCa_FWUpdate(&local_9);
    gf_hw_reset();
    local_9 = 2;
    fnCa_FWUpdate(&local_9);
    gf_enable_irq();
    fnCa_SetMode(g_mode);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



ulong device_send_key(int param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_1 == 0xac) {
    uVar3 = 1;
  }
  else if (param_1 == 0x244) {
    uVar3 = 4;
  }
  else {
    uVar3 = 2;
    if (param_1 != 0x9e) {
      __android_log_print(3,"FingerGoodix","[%-20s]INVALID key","device_send_key");
      return 0xffffffff;
    }
  }
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]key = %d,value = %d, g_send_key_flag = %d,send_key_flag = %d",
                      "device_send_key",param_1,param_2,g_send_key_flag,uVar3);
  if (param_2 == 1) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_send_key_flag & send_key_flag = %d",
                        "device_send_key",uVar3 & g_send_key_flag);
    if ((uVar3 & g_send_key_flag) == 0) {
      gf_send_key(param_1,1);
      uVar1 = (ulong)g_send_key_flag;
      g_send_key_flag = uVar3 | g_send_key_flag;
      return uVar1;
    }
    pcVar2 = "[%-20s]Send fail, already send DOWN.";
  }
  else {
    if (param_2 != 0) {
      uVar1 = __android_log_print(6,"FingerGoodix","[%-20s]Invalid key value %d","device_send_key",
                                  param_2);
      return uVar1;
    }
    __android_log_print(3,"FingerGoodix","[%-20s]g_send_key_flag & send_key_flag = %d",
                        "device_send_key",uVar3 & g_send_key_flag);
    if ((uVar3 & g_send_key_flag) != 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]send key : key = %d , value = %d (up)",
                          "device_send_key",param_1,0);
      gf_send_key(param_1,0);
      uVar1 = (ulong)g_send_key_flag;
      g_send_key_flag = g_send_key_flag & (uVar3 ^ 0xffffffff);
      return uVar1;
    }
    pcVar2 = "[%-20s]Have already send UP.";
  }
  uVar1 = __android_log_print(6,"FingerGoodix",pcVar2,"device_send_key");
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_image(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined uStack_18;
  byte local_17;
  byte local_13;
  undefined local_12;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s %d \n","sig_in_image","sig_in_image",0x16f);
  gf_secspi_read_status(&uStack_18);
  pcVar2 = toString((int *)&DAT_0012a350,(uint)local_17);
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]status = 0x%x(%s), key=0x%02x, Temperature=0x%02x, g_state=0x%02x \n",
                      "sig_in_image",local_17,pcVar2,local_13,local_12,g_state);
  if (local_17 == 0xb0) {
    g_sensor_status = local_13 & 1;
    iVar1 = gx_handle_exception((long)&uStack_18);
    if (iVar1 != 0) goto LAB_00106244;
    fnCa_CleanStatus();
    if ((local_13 & 3) == 2) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","sig_in_image");
      if (g_state == 3) {
        sem_post((sem_t *)g_up_sem);
      }
      device_send_key(0xac,0);
    }
    else if ((local_13 & 3) == 3) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","sig_in_image");
    }
    else if ((local_13 >> 3 & 1) == 0) {
      if ((local_13 >> 5 & 1) != 0) {
        if ((local_13 >> 4 & 1) == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY UP--------","sig_in_image");
          __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_image",
                              g_enable_key);
          uVar3 = device_send_key(0x9e,0);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@Hank ======Back UP reprot  KEY_BACK, value = %d ======",
                              "sig_in_image",0x9e);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@@@@@@@ done device_send_key(KEY_BACK, 0), ret2 = %d\n",
                              "sig_in_image",uVar3 & 0xffffffff);
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------","sig_in_image"
                             );
          __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_image",
                              g_enable_key);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]Thomas : In the Image Mode with BACK KEY DOWN now",
                              "sig_in_image");
          uVar3 = device_send_key(0x9e,1);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@@@@@@@ done device_send_key(KEY_BACK, 1), ret1 = %d\n",
                              "sig_in_image",uVar3 & 0xffffffff);
        }
      }
    }
    else if ((local_13 >> 2 & 1) == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY UP--------","sig_in_image");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_image",g_enable_key)
      ;
      uVar3 = device_send_key(0x244,0);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ======Menu UP reprot  KEY_APPSELECT, value = %d ======",
                          "sig_in_image",0x244);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@@@@@@@ done device_send_key(KEY_APPSELECT, 0), ret2 = %d\n",
                          "sig_in_image",uVar3 & 0xffffffff);
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------","sig_in_image");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_image",g_enable_key)
      ;
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]Thomas : In the Image Mode with MENU KEY DOWN now","sig_in_image")
      ;
      uVar3 = device_send_key(0x244,1);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@@@@@@@ done device_send_key(KEY_APPSELECT, 1), ret1 = %d\n",
                          "sig_in_image",uVar3 & 0xffffffff);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ====== reprot KEY_APPSELECT, value = %d ======",
                          "sig_in_image",0x244);
    }
    goto LAB_00106238;
  }
  iVar1 = gx_handle_exception((long)&uStack_18);
  if (iVar1 != 0) goto LAB_00106244;
  if ((g_state == 3) && (local_17 == 0xc0)) {
    fnCa_controlSampling(1);
    fnCa_CleanStatus();
    goto LAB_00106244;
  }
  if (local_17 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_IMAGE_MODE","sig_in_image")
    ;
    goto LAB_00106244;
  }
  if ((byte)(local_17 + 0x40) < 2) {
    if (g_state == 2) {
      sem_post((sem_t *)g_image_sem);
    }
    else if (g_state == 3) goto LAB_00106234;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Others Interrupt in GF_IMAGE_MODE","sig_in_image");
LAB_00106234:
    fnCa_CleanStatus();
  }
LAB_00106238:
  detectBaseUpdateFingerUp(local_17,local_13);
LAB_00106244:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_key(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined uStack_18;
  byte local_17;
  byte local_13;
  undefined local_12;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s\n","sig_in_key","sig_in_key");
  gf_secspi_read_status(&uStack_18);
  pcVar2 = toString((int *)&DAT_0012a350,(uint)local_17);
  __android_log_print(3,"FingerGoodix","[%-20s]status = 0x%x(%s),key=0x%02x, Temperature=0x%02x \n",
                      "sig_in_key",local_17,pcVar2,local_13,local_12);
  if (local_17 == 0xb0) {
    g_sensor_status = local_13 & 1;
    iVar1 = gx_handle_exception((long)&uStack_18);
    if (iVar1 != 0) goto LAB_00106668;
    if ((local_13 >> 1 & 1) == 0) {
      if ((local_13 >> 3 & 1) == 0) {
        if ((local_13 >> 5 & 1) != 0) {
          if ((local_13 >> 4 & 1) == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY UP--------","sig_in_key");
            __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",
                                g_enable_key);
            uVar3 = device_send_key(0x9e,0);
            __android_log_print(3,"FingerGoodix",
                                "[%-20s]@Hank ======Back UP reprot  KEY_BACK, value = %d ======",
                                "sig_in_key",0x9e);
            __android_log_print(3,"FingerGoodix",
                                "[%-20s]@@@@@@@ done device_send_key(KEY_BACK, 0), ret2 = %d\n",
                                "sig_in_key",uVar3 & 0xffffffff);
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------","sig_in_key"
                               );
            __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",
                                g_enable_key);
            __android_log_print(3,"FingerGoodix",
                                "[%-20s]Johnny : In the Key Mode with BACK KEY DOWN now",
                                "sig_in_key");
            if (gScreenStatus != '\x01') {
              uVar3 = device_send_key(0x9e,1);
              __android_log_print(3,"FingerGoodix",
                                  "[%-20s]@@@@@@@ done gf_send_key(KEY_BACK, 1), ret1 = %d\n",
                                  "sig_in_key",uVar3 & 0xffffffff);
            }
          }
        }
      }
      else if ((local_13 >> 2 & 1) == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY UP--------","sig_in_key");
        __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",g_enable_key)
        ;
        uVar3 = device_send_key(0x244,0);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]@Hank ======Menu UP reprot  KEY_APPSELECT, value = %d ======",
                            "sig_in_key",0x244);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]@@@@@@@ done device_send_key(KEY_APPSELECT, 0), ret2 = %d\n",
                            "sig_in_key",uVar3 & 0xffffffff);
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------","sig_in_key");
        __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",g_enable_key)
        ;
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]Johnny : In the Key Mode with MENU KEY DOWN now","sig_in_key");
        if (gScreenStatus != '\x01') {
          uVar3 = device_send_key(0x244,1);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@@@@@@@ done device_send_key(KEY_APPSELECT, 1), ret1 = %d\n",
                              "sig_in_key",uVar3 & 0xffffffff);
        }
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]@Hank ====== reprot KEY_APPSELECT, value = %d ======",
                            "sig_in_key",0x244);
      }
    }
    else if ((local_13 & 1) == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","sig_in_key");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",g_enable_key);
      uVar3 = device_send_key(0xac,0);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ======HOME UP reprot  KEY_HOMEPAGE, value = %d ======",
                          "sig_in_key",0xac);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@@@@@@@ done device_send_key(KEY_HOMEPAGE, 0), ret2 = %d\n",
                          "sig_in_key",uVar3 & 0xffffffff);
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","sig_in_key");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_key",g_enable_key);
      __android_log_print(3,"FingerGoodix","[%-20s]Johnny : In the Key Mode with HOME KEY DOWN now",
                          "sig_in_key");
      uVar3 = device_send_key(0xac,1);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@@@@@@@ done device_send_key(KEY_HOMEPAGE, 1), ret1 = %d\n",
                          "sig_in_key",uVar3 & 0xffffffff);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ====== reprot KEY_HOMEPAGE, value = %d ======","sig_in_key",
                          0xac);
      if (gScreenStatus == '\x01') {
        gf_send_key(0x74,1);
        gf_send_key(0x74,0);
      }
    }
  }
  else {
    iVar1 = gx_handle_exception((long)&uStack_18);
    if (iVar1 != 0) goto LAB_00106668;
    if (local_17 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_KEY_MODE","sig_in_key");
      goto LAB_00106668;
    }
  }
  fnCa_CleanStatus();
  detectBaseUpdateFingerUp(local_17,local_13);
LAB_00106668:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sig_in_sleep(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Should not happen. Somthing wrong.\n","sig_in_sleep")
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processNavResult(void)

{
  char *pcVar1;
  uint local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  fnCa_GetNavResultPoll(&local_10,&local_c);
  if (local_10 - 1 < 4) {
    pcVar1 = toString((int *)&DAT_0012a4e0,local_10);
    __android_log_print(3,"FingerGoodix","[%-20s]========== Navigation: %s ==========",
                        "processNavResult",pcVar1);
  }
  else {
    pcVar1 = toString((int *)&DAT_0012a4e0,local_10);
    __android_log_print(3,"FingerGoodix","[%-20s]!!!!!!!!!! Navigation: %s !!!!!!!!!!",
                        "processNavResult",pcVar1);
  }
  if (0x11 < local_10) {
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
                        "processNavResult");
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]clickFlag = 0x%x,finishClickDetect = %d, finishLongPressDetect = %d\n"
                        ,"processNavResult",0x55,DAT_0012a015,DAT_0012a024);
    DAT_0012a015 = 1;
    DAT_0012a024 = 1;
    if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
      __stack_chk_fail(local_c);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00106be8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&LAB_00106bec + (long)(char)(&DAT_001117d0)[local_10] * 4))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_nag(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined8 local_18;
  undefined2 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (g_ta_sensor_info._56_4_ != 0) {
    local_18 = 0;
    local_10 = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]%s\n","navigation_new","navigation_new");
    gf_secspi_read_status(&local_18);
    uVar2 = local_18;
    bVar7 = local_18._1_1_;
    uVar1 = local_18 >> 0x30;
    bVar9 = local_18._5_1_;
    pcVar5 = toString((int *)&DAT_0012a350,(uint)local_18._1_1_);
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]status = 0x%x(%s),key=0x%02x, Temperature=0x%02x \n",
                        "navigation_new",bVar7,pcVar5,bVar9,uVar1 & 0xff);
    uVar10 = (uint)bVar9;
    if (bVar7 == 0xb0) {
      g_sensor_status = bVar9 & 1;
      iVar3 = gx_handle_exception((long)&local_18);
      if (iVar3 != 0) goto LAB_00106d70;
    }
    else {
      iVar3 = gx_handle_exception((long)&local_18);
      if (iVar3 != 0) goto LAB_00106d70;
      if (bVar7 == 0) {
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]+++++++++++++++++++++++  Invalid interrupt in GF_NAV_MODE",
                            "navigation_new");
        goto LAB_00106d70;
      }
      if (bVar7 != 0xb0) {
        if (bVar7 == 0xc2) {
          __android_log_print(3,"FingerGoodix","[%-20s]===>  GF_INT_NAV_IMAGE","navigation_new");
          fnCa_CleanStatus();
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]Navigation: Invalid key = %d",
                              "navigation_new",bVar7);
        }
        goto LAB_00106ea0;
      }
    }
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY","navigation_new");
    fnCa_CleanStatus();
    if ((bVar9 >> 1 & 1) == 0) {
      if ((bVar9 >> 3 & 1) == 0) {
        uVar8 = uVar10 & 3;
        if ((bVar9 >> 5 & 1) != 0) {
          if ((uVar2 & 0x100000000000) == 0) {
            puVar6 = &DAT_00112768;
          }
          else {
            puVar6 = &DAT_00112760;
          }
          uVar8 = uVar10 & 3;
          __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY %s--------","navigation_new"
                              ,puVar6);
          uVar4 = gf_send_key(0x9e,(uint)((uVar2 & 0x100000000000) != 0 && -1 < (int)(uVar10 & 0x10)
                                         ));
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@@@@@@@ done gf_send_key(KEY_MENU, 0x%x), ret1 = %d\n",
                              "navigation_new",uVar10 & 0x10,uVar4);
        }
      }
      else {
        if ((uVar2 & 0x40000000000) == 0) {
          puVar6 = &DAT_00112768;
        }
        else {
          puVar6 = &DAT_00112760;
        }
        uVar8 = uVar10 & 3;
        __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY %s--------","navigation_new",
                            puVar6);
        uVar4 = gf_send_key(0x8b,(uint)((uVar2 & 0x40000000000) != 0 && -1 < (int)(uVar10 & 4)));
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]@@@@@@@ done gf_send_key(KEY_BACK, 0x%x), ret1 = %d\n",
                            "navigation_new",uVar10 & 4,uVar4);
      }
    }
    else if ((uVar2 & 0x10000000000) == 0) {
      uVar8 = uVar10 & 3;
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","navigation_new");
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","navigation_new");
      if (((DAT_0012a025 != '\0') || (DAT_0012a026 != '\0')) && (DAT_0012a015 != '\0')) {
        DAT_0012a015 = '\0';
      }
      if ((DAT_0012a027 != '\0') && (DAT_0012a024 != '\0')) {
        DAT_0012a024 = '\0';
        iVar3 = gf_active_timer((timer_t *)&DAT_0012a018,0,DAT_0012a020,0,0);
        if (iVar3 == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]gf_active_timer long press ok!",
                              "navigation_new");
        }
      }
      gf_disable_irq();
      iVar3 = processNavResult();
      if (iVar3 == 1) {
        bVar9 = 2;
        uVar8 = 2;
        gf_enable_irq();
      }
      else {
        uVar8 = uVar10 & 3;
        gf_enable_irq();
      }
    }
    if (uVar8 == 2) {
      if (((DAT_0012a025 != '\0') || (bVar7 = 0xb0, DAT_0012a026 != '\0')) &&
         (bVar7 = 0xb0, DAT_0012a015 == '\0')) {
        DAT_0012a014 = DAT_0012a014 + '\x01';
        if (DAT_0012a014 == '\x01') {
          iVar3 = gf_active_timer((timer_t *)&DAT_0012a008,0,DAT_0012a010,0,0);
          if (iVar3 == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]gf_active_timer single/double click ok!",
                                "navigation_new");
          }
        }
        else if (DAT_0012a014 == '\x02') {
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]====== reprot double click press, value = %d ======",
                              "navigation_new",0xac);
          gf_send_key(0xac,1);
          gf_send_key(0xac,0);
          DAT_0012a014 = '\0';
          DAT_0012a015 = '\x01';
          DAT_0012a024 = '\x01';
        }
      }
    }
    else {
      bVar7 = 0xb0;
    }
    goto LAB_00106ea0;
  }
  local_18 = 0;
  local_10 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]%s\n","navigation_old","navigation_old");
  gf_secspi_read_status(&local_18);
  uVar2 = local_18;
  bVar7 = local_18._1_1_;
  uVar1 = local_18 >> 0x30;
  bVar9 = local_18._5_1_;
  pcVar5 = toString((int *)&DAT_0012a350,(uint)local_18._1_1_);
  __android_log_print(3,"FingerGoodix","[%-20s]status = 0x%x(%s),key=0x%02x, Temperature=0x%02x \n",
                      "navigation_old",bVar7,pcVar5,bVar9,uVar1 & 0xff);
  if (bVar7 == 0xb0) {
    g_sensor_status = bVar9 & 1;
    iVar3 = gx_handle_exception((long)&local_18);
    if (iVar3 != 0) goto LAB_00106d70;
switchD_00106fb4_caseD_b0:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY","navigation_old");
    if ((bVar9 >> 1 & 1) == 0) {
      if ((bVar9 >> 3 & 1) == 0) {
        if ((bVar9 >> 5 & 1) == 0) goto LAB_00106dc8;
        __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------","navigation_old"
                           );
        fnCa_CleanStatus();
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------","navigation_old"
                           );
        fnCa_CleanStatus();
      }
      goto LAB_00106ea0;
    }
    if ((uVar2 & 0x10000000000) == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","navigation_old");
      if (((DAT_0012a025 != '\0') || (DAT_0012a026 != '\0')) && (DAT_0012a015 == '\0')) {
        DAT_0012a014 = DAT_0012a014 + '\x01';
        if (DAT_0012a014 == '\x01') {
          iVar3 = gf_active_timer((timer_t *)&DAT_0012a008,0,DAT_0012a010,0,0);
          if (iVar3 != 0) goto LAB_00106dc8;
          __android_log_print(3,"FingerGoodix","[%-20s]gf_active_timer single/double click ok!",
                              "navigation_old");
          fnCa_CleanStatus();
        }
        else {
          if (DAT_0012a014 != '\x02') goto LAB_00106dc8;
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]====== reprot double click press, value = %d ======",
                              "navigation_old",0xac);
          gf_send_key(0xac,1);
          gf_send_key(0xac,0);
          DAT_0012a014 = '\0';
          DAT_0012a015 = '\x01';
          DAT_0012a024 = '\x01';
          fnCa_CleanStatus();
        }
        goto LAB_00106ea0;
      }
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","navigation_old");
      if (((DAT_0012a025 != '\0') || (DAT_0012a026 != '\0')) && (DAT_0012a015 != '\0')) {
        DAT_0012a015 = '\0';
      }
      if ((DAT_0012a027 != '\0') && (DAT_0012a024 != '\0')) {
        DAT_0012a024 = '\0';
        iVar3 = gf_active_timer((timer_t *)&DAT_0012a018,0,DAT_0012a020,0,0);
        if (iVar3 == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]gf_active_timer long press ok!",
                              "navigation_old");
          fnCa_CleanStatus();
          goto LAB_00106ea0;
        }
      }
    }
LAB_00106dc8:
    fnCa_CleanStatus();
    goto LAB_00106ea0;
  }
  iVar3 = gx_handle_exception((long)&local_18);
  if (iVar3 != 0) goto LAB_00106d70;
  if (bVar7 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_KEY_MODE","navigation_old")
    ;
    goto LAB_00106d70;
  }
  switch(bVar7) {
  case 0xb0:
    goto switchD_00106fb4_caseD_b0;
  case 0xb1:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_LEFT=%d","navigation_old",
                        0x69);
    gf_send_key(0x69,1);
    uVar4 = 0x69;
    break;
  case 0xb2:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_RIGHT=%d","navigation_old",
                        0x6a);
    gf_send_key(0x6a,1);
    uVar4 = 0x6a;
    break;
  case 0xb3:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_DOWN=%d","navigation_old",
                        0x6c);
    gf_send_key(0x6c,1);
    uVar4 = 0x6c;
    break;
  case 0xb4:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_UP=%d","navigation_old",0x67
                       );
    gf_send_key(0x67,1);
    uVar4 = 0x67;
    break;
  case 0xb5:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_LIGHT","navigation_old");
    fnCa_CleanStatus();
    goto LAB_00106ea0;
  case 0xb6:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: GF_INT_KEY_WEIGHT","navigation_old");
    fnCa_CleanStatus();
    goto LAB_00106ea0;
  default:
    __android_log_print(3,"FingerGoodix","[%-20s]Navigation: Invalid key = %d","navigation_old",
                        bVar7);
    goto LAB_00106dc8;
  }
  gf_send_key(uVar4,0);
  DAT_0012a015 = '\x01';
  DAT_0012a024 = '\x01';
  fnCa_CleanStatus();
LAB_00106ea0:
  detectBaseUpdateFingerUp(bVar7,bVar9);
LAB_00106d70:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_hbd(void)

{
  int iVar1;
  char *pcVar2;
  undefined uStack_18;
  byte local_17;
  byte local_13;
  undefined local_11;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s %d \n","sig_in_hbd","sig_in_hbd",0x435);
  gf_secspi_read_status(&uStack_18);
  pcVar2 = toString((int *)&DAT_0012a350,(uint)local_17);
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]status = 0x%x(%s),key=0x%02x, hbd_flag=0x%02x Temperature=0x%02x\n",
                      "sig_in_hbd",local_17,pcVar2,local_13,local_11,0);
  if (local_17 == 0xb0) {
    g_sensor_status = local_13 & 1;
  }
  iVar1 = gx_handle_exception((long)&uStack_18);
  if (iVar1 == 0) {
    if (g_state == 0) {
      fnCa_CleanStatus();
    }
    else {
      if (local_17 == 0xb0) {
        fnCa_CleanStatus();
        if ((local_13 >> 1 & 1) == 0) {
          if ((local_13 >> 3 & 1) == 0) {
            if ((local_13 >> 5 & 1) != 0) {
              __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------",
                                  "sig_in_hbd");
            }
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------","sig_in_hbd"
                               );
          }
        }
        else if ((local_13 & 1) == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","sig_in_hbd");
          DAT_0012a8a8 = 1;
          fnCa_InitHBDetection();
          sem_post((sem_t *)g_hbd_sem);
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","sig_in_hbd");
          fnCa_InitHBDetection();
        }
      }
      else if (local_17 == 0xa0) {
        __android_log_print(3,"FingerGoodix","[%-20s]NOW status is GF_INT_HBD","sig_in_hbd");
        __android_log_print(3,"FingerGoodix","[%-20s] @Judge@ sig_in_hbd (g_state is %d)",
                            "sig_in_hbd",g_state);
        if (g_state == 2) {
          __android_log_print(3,"FingerGoodix","[%-20s]sig_in_hbd --> sem_post(&g_image_sem)",
                              "sig_in_hbd");
          sem_post((sem_t *)g_image_sem);
        }
        else if (g_state == 4) {
          __android_log_print(3,"FingerGoodix","[%-20s]sig_in_hbd --> sem_post(&g_hbd_sem)",
                              "sig_in_hbd");
          sem_post((sem_t *)g_hbd_sem);
        }
      }
      else if (local_17 == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_HBD_MODE","sig_in_hbd")
        ;
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]Others Interrupt in GF_HBD_MODE","sig_in_hbd");
        fnCa_CleanStatus();
      }
      detectBaseUpdateFingerUp(local_17,local_13);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_ff(void)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined uStack_18;
  byte local_17;
  byte local_13;
  undefined local_12;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s %d \n","sig_in_ff","sig_in_ff",0x4ee);
  gf_secspi_read_status(&uStack_18);
  pcVar2 = toString((int *)&DAT_0012a350,(uint)local_17);
  __android_log_print(3,"FingerGoodix","[%-20s]status = 0x%x(%s),key=0x%02x, Temperature=0x%02x \n",
                      "sig_in_ff",local_17,pcVar2,local_13,local_12);
  if (local_17 == 0xb0) {
    g_sensor_status = local_13 & 1;
    iVar1 = gx_handle_exception((long)&uStack_18);
    if (iVar1 != 0) goto LAB_0010793c;
    fnCa_CleanStatus();
    if ((local_13 & 3) == 2) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------","sig_in_ff");
      if (g_state == 3) {
        sem_post((sem_t *)g_up_sem);
      }
      device_send_key(0xac,0);
    }
    else if ((local_13 & 3) == 3) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------","sig_in_ff");
      if ((DAT_0012a8ac != 0) && (g_state != 2)) {
        gf_send_key(0x74,1);
        gf_send_key(0x74,0);
        __android_log_print(3,"FingerGoodix","[%-20s]-----send power key","sig_in_ff");
      }
    }
    else if ((local_13 >> 3 & 1) == 0) {
      if ((local_13 >> 5 & 1) != 0) {
        if ((local_13 >> 4 & 1) == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY UP--------","sig_in_ff");
          __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_ff",g_enable_key
                             );
          uVar3 = device_send_key(0x9e,0);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@Hank ======Back UP reprot  KEY_BACK, value = %d ======",
                              "sig_in_ff",0x9e);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]@@@@@@@ done gf_send_key(KEY_BACK, 0), ret2 = %d\n",
                              "sig_in_ff",uVar3 & 0xffffffff);
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------","sig_in_ff");
          __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_ff",g_enable_key
                             );
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]Johnny : In the Key Mode with BACK KEY DOWN now","sig_in_ff");
          if (gScreenStatus != '\x01') {
            uVar3 = device_send_key(0x9e,1);
            __android_log_print(3,"FingerGoodix",
                                "[%-20s]@@@@@@@ done gf_send_key(KEY_BACK, 1), ret1 = %d\n",
                                "sig_in_ff",uVar3 & 0xffffffff);
          }
        }
      }
    }
    else if ((local_13 >> 2 & 1) == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY UP--------","sig_in_ff");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_ff",g_enable_key);
      uVar3 = device_send_key(0x244,0);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ======Menu UP reprot  KEY_APPSELECT, value = %d ======",
                          "sig_in_ff",0x244);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@@@@@@@ done gf_send_key(KEY_APPSELECT, 0), ret2 = %d\n",
                          "sig_in_ff",uVar3 & 0xffffffff);
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------","sig_in_ff");
      __android_log_print(3,"FingerGoodix","[%-20s]g_enable_key = %d\n","sig_in_ff",g_enable_key);
      __android_log_print(3,"FingerGoodix","[%-20s]Johnny : In the Key Mode with MENU KEY DOWN now",
                          "sig_in_ff");
      if (gScreenStatus != '\x01') {
        uVar3 = device_send_key(0x244,1);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]@@@@@@@ done gf_send_key(KEY_APPSELECT, 1), ret1 = %d\n",
                            "sig_in_ff",uVar3 & 0xffffffff);
      }
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]@Hank ====== reprot KEY_APPSELECT, value = %d ======","sig_in_ff",
                          0x244);
    }
  }
  else {
    iVar1 = gx_handle_exception((long)&uStack_18);
    if (iVar1 != 0) goto LAB_0010793c;
    if (local_17 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_IMAGE_MODE","sig_in_ff");
      goto LAB_0010793c;
    }
    if ((byte)(local_17 + 0x40) < 2) {
      __android_log_print(3,"FingerGoodix","[%-20s] status = %d , g_state = %d","sig_in_ff",local_17
                          ,g_state);
      if (g_state == 2) {
        sem_post((sem_t *)g_image_sem);
      }
      else if ((g_state == 3) || (g_waitdown == '\0')) {
        fnCa_controlSampling(1);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]g_state == GF_HAL_WAIT_FINGERUP, fnCa_CleanStatus","sig_in_ff");
        fnCa_CleanStatus();
      }
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]Others Interrupt in GF_IMAGE_MODE","sig_in_ff");
      fnCa_CleanStatus();
    }
  }
  detectBaseUpdateFingerUp(local_17,local_13);
LAB_0010793c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void sig_in_debug(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]#####################%s \n","sig_in_debug",
                      "sig_in_debug");
  return;
}



void sig_in_default(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]#####################%s \n","sig_in_default",
                      "sig_in_default");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_enable(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char local_11;
  char acStack_10 [8];
  long local_8;
  
  local_11 = '\0';
  local_8 = ___stack_chk_guard;
  iVar2 = gf_open();
  if (iVar2 < 1) {
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]Failed to open device.\n","device_enable");
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]BUILD INFO: %s,%s","device_enable","Jan 16 2018",
                        "14:39:49");
    uVar3 = fnCa_Init(iVar2,g_ta_sensor_info);
    uVar1 = g_ta_sensor_info._12_4_;
    if (uVar3 == 0) {
      sprintf(acStack_10,"%d",g_ta_sensor_info._12_4_);
      __android_log_print(3,"FingerGoodix","[%-20s]Fingerprint module vendor_id = %d",
                          "device_enable",uVar1);
      __system_property_set("sys.fp.vid",acStack_10);
      sem_init((sem_t *)g_hbd_sem,0,0);
      sem_init((sem_t *)g_down_sem,0,0);
      sem_init((sem_t *)g_image_sem,0,0);
      sem_init((sem_t *)g_up_sem,0,0);
      sem_init((sem_t *)g_sigio_sem,0,0);
      DAT_0012a8b0 = 0;
      g_state = 0;
      uVar4 = gf_disable_irq();
      if ((int)uVar4 < 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_disable_irq.\n",
                            "device_enable");
      }
      local_11 = '\0';
      gf_hw_reset();
      iVar2 = fnCa_FWUpdate(&local_11);
      if ((iVar2 == -1) || (local_11 != '\0')) {
        uVar4 = 0xffffffff;
        __android_log_print(3,"FingerGoodix","[%-20s]fnCa_FWUpdate() FAILURE, stop running!",
                            "device_enable");
        gf_close();
      }
      else {
        gf_handler_register((ulong)sig_handler);
        gf_enable_irq();
        iVar2 = pthread_create((pthread_t *)&DAT_0012a8b8,(pthread_attr_t *)0x0,sig_handler_loop,
                               (void *)0x0);
        if (iVar2 == 0) {
          iVar2 = property_get_int32("persist.enable.esd",0);
          if (iVar2 == 1) {
            gf_init_esd_timer();
          }
          iVar2 = gf_create_timer((timer_t *)&DAT_0012a008,sigtimer_click_fn);
          if (iVar2 == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]create doubleclick timer succssfully!",
                                "device_enable");
            iVar2 = gf_create_timer((timer_t *)&DAT_0012a018,sigtimer_longpress_fn);
          }
          else {
            iVar2 = gf_create_timer((timer_t *)&DAT_0012a018,sigtimer_longpress_fn);
          }
          uVar4 = 0;
          if (iVar2 == 0) {
            uVar4 = 0;
            __android_log_print(3,"FingerGoodix","[%-20s]create longpress timer succssfully!",
                                "device_enable");
          }
        }
        else {
          gf_handler_unregister();
          gf_close();
          uVar4 = 0xffffffff;
          __android_log_print(3,"FingerGoodix","[%-20s]Failed in pthread_create. ret = %d\n",
                              "device_enable",iVar2);
        }
      }
    }
    else {
      uVar4 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Init() FAILURE, stop running!",
                          "device_enable");
      __android_log_buf_print(7,7,"BBox::UEC","39::11");
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar4);
  }
  return;
}



undefined8 device_disable(void)

{
  int iVar1;
  
  g_state = 0;
  gf_delete_esd_timer();
  iVar1 = gf_delete_timer((timer_t *)&DAT_0012a008);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]delete doubleclick timer succssfully",
                        "device_disable");
  }
  iVar1 = gf_delete_timer((timer_t *)&DAT_0012a018);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]delete longpress timer succssfully",
                        "device_disable");
  }
  gf_handler_unregister();
  gf_close();
  DAT_0012a8b0 = 1;
  event_notify = 0;
  return 0;
}



undefined8 irq_enable(void)

{
  int iVar1;
  undefined8 uVar2;
  
  DAT_0012a7e8 = 1;
  __android_log_print(3,"FingerGoodix","[%-20s]gf_enable_irq","gf_enable_irq");
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_enable_irq");
    DAT_0012a7e8 = 0;
    uVar2 = 0xffffff7f;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4701);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_ENABLE_IRQ.\n",
                          "gf_enable_irq");
      DAT_0012a7e8 = 0;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



undefined8 irq_disable(void)

{
  int iVar1;
  undefined8 uVar2;
  
  DAT_0012a7e8 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]gf_disable_irq","gf_disable_irq");
  if (g_device_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_device_handle is NULL to do IOCTL Ops.\n",
                        "gf_disable_irq");
    uVar2 = 0xffffff7f;
    DAT_0012a7e8 = 1;
  }
  else {
    iVar1 = ioctl(g_device_handle,0x4700);
    uVar2 = 0;
    if (iVar1 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to do GF_IOC_DISABLE_IRQ.\n",
                          "gf_disable_irq");
      uVar2 = 0xffffffff;
      DAT_0012a7e8 = 1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_waitForFinger(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]===> Waiting Finger Down.\n","device_waitForFinger");
  g_state = 2;
  DAT_0012a8b0 = '\0';
  uVar2 = gf_enable_irq();
  if ((int)uVar2 < 0) {
LAB_00108510:
    uVar2 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_enable_irq.\n",
                        "device_waitForFinger");
  }
  else {
    g_waitdown = 1;
    iVar5 = param_1;
    do {
      do {
        gettimeofday(&local_18,(__timezone_ptr_t)0x0);
        if (iVar5 < 1) {
          local_28.tv_nsec = local_18.tv_usec * 1000 + 500000000;
        }
        else {
          local_28.tv_nsec = local_18.tv_usec * 1000 + 100000000;
        }
        local_28.tv_sec = local_18.tv_sec + local_28.tv_nsec / 1000000000;
        local_28.tv_nsec = local_28.tv_nsec % 1000000000;
        iVar1 = sem_timedwait((sem_t *)g_image_sem,&local_28);
        if (iVar1 == -1) {
          piVar4 = (int *)__errno();
          if (*piVar4 == 0x6e) {
            if (DAT_0012a8b0 == '\x01') {
              __android_log_print(3,"FingerGoodix","[%-20s]Wait for finger down Canceled.",
                                  "device_waitForFinger");
              DAT_0012a8b0 = '\0';
              g_state = 0;
              uVar2 = gf_enable_irq();
              if ((int)uVar2 < 0) goto LAB_00108510;
              uVar2 = 0xffffffff;
              goto LAB_00108380;
            }
          }
          else if (*piVar4 == 4) {
            __android_log_print(3,"FingerGoodix","[%-20s]sem_timedwait() EINTR \n",
                                "device_waitForFinger");
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]errno = %d \n","device_waitForFinger",
                                *piVar4);
          }
        }
        else {
          if (iVar1 == 0) {
            uVar2 = 0;
            __android_log_print(3,"FingerGoodix","[%-20s]sem_timedwait() succeeded\n",
                                "device_waitForFinger");
            __android_log_print(3,"FingerGoodix","[%-20s]got down=================\n",
                                "device_waitForFinger");
            (*event_notify)(1,0,0);
            g_state = 0;
            goto LAB_00108380;
          }
          __android_log_print(3,"FingerGoodix","[%-20s]Unknown return s value.\n",
                              "device_waitForFinger");
        }
      } while (param_1 < 1);
      iVar5 = iVar5 + -100;
    } while (0 < iVar5);
    uVar2 = 0x83;
    __android_log_print(3,"FingerGoodix","[%-20s]wait finger down time out.\n",
                        "device_waitForFinger");
    g_state = 0;
    uVar3 = gf_enable_irq();
    if ((int)uVar3 < 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_enable_irq.\n",
                          "device_waitForFinger");
    }
  }
LAB_00108380:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_waitForFingerUp(int param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  undefined uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  undefined8 local_38;
  undefined2 local_30;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28.tv_sec = 0;
  local_28.tv_nsec = 0;
  local_18.tv_sec = 0;
  local_18.tv_usec = 0;
  local_38 = 0;
  local_30 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]===> Wait Finger Up.\n","device_waitForFingerUp");
  gf_secspi_read_status(&local_38);
  uVar3 = local_38;
  bVar4 = local_38._1_1_;
  uVar1 = local_38 >> 0x30;
  uVar5 = local_38._5_1_;
  pcVar7 = toString((int *)&DAT_0012a350,(uint)local_38._1_1_);
  __android_log_print(3,"FingerGoodix","[%-20s]status = 0x%x(%s),key=0x%02x, Temperature=0x%02x \n",
                      "device_waitForFingerUp",bVar4,pcVar7,uVar5,uVar1 & 0xff);
  g_state = 3;
  g_waitdown = 0;
  uVar8 = gf_enable_irq();
  if (-1 < (int)uVar8) {
    bVar2 = true;
    iVar10 = param_1;
    do {
      if ((bVar4 != 0xb0) && ((uVar3 & 0x10000000000) == 0)) {
        __android_log_print(3,"FingerGoodix","[%-20s]got up=================\n",
                            "device_waitForFingerUp");
        (*event_notify)(2,0,0);
        if (bVar2) {
          device_send_key(0xac,0);
        }
LAB_0010881c:
        uVar8 = 0;
        g_sensor_status = 0;
        goto LAB_00108798;
      }
      gettimeofday(&local_18,(__timezone_ptr_t)0x0);
      local_28.tv_nsec = local_18.tv_usec * 1000 + 100000000;
      local_28.tv_sec = local_18.tv_sec + local_28.tv_nsec / 1000000000;
      local_28.tv_nsec = local_28.tv_nsec % 1000000000;
      iVar6 = sem_timedwait((sem_t *)g_up_sem,&local_28);
      if (iVar6 == -1) {
        piVar9 = (int *)__errno();
        if (*piVar9 != 0x6e) {
          if (*piVar9 == 4) {
            __android_log_print(3,"FingerGoodix","[%-20s]sem_timedwait() EINTR \n",
                                "device_waitForFingerUp");
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]errno = %d \n","device_waitForFingerUp",
                                *piVar9);
          }
        }
      }
      else {
        if (iVar6 == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]sem_timedwait() succeeded\n",
                              "device_waitForFingerUp");
          __android_log_print(3,"FingerGoodix","[%-20s]got up=================\n",
                              "device_waitForFingerUp");
          (*event_notify)(2,0,0);
          goto LAB_0010881c;
        }
        __android_log_print(3,"FingerGoodix","[%-20s]Unknown return s value.\n",
                            "device_waitForFingerUp");
      }
      if (0 < param_1) {
        iVar10 = iVar10 + -100;
        if (iVar10 < 1) goto LAB_0010874c;
      }
      bVar2 = false;
    } while( true );
  }
  __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_enable_irq.\n",
                      "device_waitForFingerUp");
  uVar8 = 0xffffffff;
LAB_001087a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar8);
LAB_0010874c:
  __android_log_print(3,"FingerGoodix","[%-20s]wait finger up time out.\n","device_waitForFingerUp")
  ;
  g_state = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]got up=================\n","device_waitForFingerUp");
  uVar8 = 0x83;
LAB_00108798:
  g_state = 0;
  goto LAB_001087a0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_waitHB(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]>>>>>> ( device_waitHB Interrupt ).\n",
                      "device_waitHB");
  __android_log_print(3,"FingerGoodix","[%-20s]SET :: g_state = GF_HAL_WAIT_HBD","device_waitHB");
  g_state = 4;
  DAT_0012a8c0 = '\0';
  uVar2 = gf_enable_irq();
  if ((int)uVar2 < 0) {
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in device_readHBD.\n",
                        "device_waitHB");
  }
  else {
    do {
      do {
        gettimeofday(&local_18,(__timezone_ptr_t)0x0);
        local_28.tv_nsec = local_18.tv_usec * 1000 + 100000000;
        local_28.tv_sec = local_18.tv_sec + local_28.tv_nsec / 1000000000;
        local_28.tv_nsec = local_28.tv_nsec % 1000000000;
        iVar1 = sem_timedwait((sem_t *)g_hbd_sem,&local_28);
        if (iVar1 == 0) {
          uVar4 = 0;
          __android_log_print(3,"FingerGoodix","[%-20s]hbd sem_timedHBwait() succeeded\n",
                              "device_waitHB");
          goto LAB_00108b34;
        }
        if (iVar1 == -1) {
          piVar3 = (int *)__errno();
          if (*piVar3 == 0x6e) {
            if (DAT_0012a8c0 == '\x01') {
              __android_log_print(3,"FingerGoodix","[%-20s]Wait for HB Canceled.","device_waitHB");
              DAT_0012a8c0 = '\0';
              g_state = 0;
              uVar2 = gf_enable_irq();
              uVar4 = 0xffffffff;
              if ((int)uVar2 < 0) {
                __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_enable_irq.\n"
                                    ,"device_waitHB");
              }
              goto LAB_00108b40;
            }
          }
          else if (*piVar3 == 4) {
            __android_log_print(3,"FingerGoodix","[%-20s]sem_timedHBwait() EINTR \n","device_waitHB"
                               );
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]errno = %d \n","device_waitHB",*piVar3);
          }
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]Unknown return value.\n","device_waitHB");
        }
      } while (param_1 == 0);
      param_1 = param_1 + -100;
    } while (0 < param_1);
    uVar4 = 0x83;
    __android_log_print(3,"FingerGoodix","[%-20s]wait hb time out.\n","device_waitHB");
LAB_00108b34:
    g_state = 0;
  }
LAB_00108b40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_getHBData(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_18 = 0;
  uStack_10 = 0;
  uVar1 = gx_ta_send_command(0x2f,&uStack_2c,4,&uStack_28,0x1c);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      param_1[2] = uStack_18;
      *(undefined4 *)(param_1 + 3) = uStack_10;
      *param_1 = uStack_28;
      param_1[1] = uStack_20;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_getHBRawData(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_10 = 0;
  iVar1 = gx_ta_send_command(0x6a,&uStack_24,4,&uStack_20,0x18);
  if (iVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_1[2] = uStack_10;
      uVar2 = 0;
      *param_1 = uStack_20;
      param_1[1] = uStack_18;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_getGscHbdRet(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  iVar1 = gx_ta_send_command(0x6b,&uStack_34,4,&uStack_30,0x28);
  if (iVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_1[4] = uStack_10;
      uVar2 = 0;
      *param_1 = uStack_30;
      param_1[1] = uStack_28;
      param_1[2] = uStack_20;
      param_1[3] = uStack_18;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_recoverFwCfg(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x39,&uStack_10,4,&uStack_c,4);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      *param_1 = uStack_c;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



undefined8 device_HBCheckUp(void)

{
  if (DAT_0012a8a8 != 0) {
    DAT_0012a8a8 = 0;
    return 0;
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_enableGsc(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_10 = param_1;
  iVar1 = gx_ta_send_command(0x67,&uStack_10,4,&uStack_c,4);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



undefined8 device_enableKeyMode(undefined4 param_1)

{
  g_enable_key = param_1;
  return 0;
}



undefined8 device_enableNavClick(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  
  if (param_1 == 1) {
    if (param_2 < 1) {
      pcVar1 = "disable";
    }
    else {
      pcVar1 = "enable";
    }
    __android_log_print(3,"FingerGoodix","[%-20s]%s double click detect in Navigation,time_ms = %d",
                        "device_enableNavClick",pcVar1,param_3);
    DAT_0012a010 = param_3;
    DAT_0012a026 = param_2 != 0;
    return 0;
  }
  if (param_1 != 2) {
    if (param_1 != 0) {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]unknown click type in Navigation mode, clickType = %d",
                          "device_enableNavClick",param_1);
      return 0;
    }
    if (param_2 < 1) {
      pcVar1 = "disable";
    }
    else {
      pcVar1 = "enable";
    }
    __android_log_print(3,"FingerGoodix","[%-20s]%s single click detect in Navigation,time_ms = %d",
                        "device_enableNavClick",pcVar1,param_3);
    DAT_0012a010 = param_3;
    DAT_0012a025 = param_2 != 0;
    return 0;
  }
  if (param_2 < 1) {
    pcVar1 = "disable";
  }
  else {
    pcVar1 = "enable";
  }
  __android_log_print(3,"FingerGoodix","[%-20s]%s long press detect in Navigation,time_ms = %d",
                      "device_enableNavClick",pcVar1,param_3);
  DAT_0012a020 = param_3;
  DAT_0012a027 = param_2 != 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_readHBD(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  timespec local_28;
  timeval local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]===> readHBD.\n","device_readHBD");
  g_state = 4;
  if ((param_1 == (void *)0x0) || (param_2 != 0x14)) {
    __android_log_print(3,"FingerGoodix","[%-20s]%s,Err input args.\n","device_readHBD",
                        "device_readHBD");
    iVar1 = -1;
    goto LAB_00108f08;
  }
  uVar3 = gf_enable_irq();
  if ((int)uVar3 < 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in device_readHBD.\n",
                        "device_readHBD");
    iVar1 = -1;
    goto LAB_00108f08;
  }
  if (param_3 == 0) {
    iVar1 = -1;
    iVar2 = sem_trywait((sem_t *)g_hbd_sem);
    if (iVar2 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]hbd sem_trywait() succeeded\n","device_readHBD");
      goto LAB_00108ecc;
    }
    __android_log_print(3,"FingerGoodix","[%-20s]wait_stop\n","device_readHBD");
  }
  else if (param_3 < 1) {
    do {
      iVar1 = sem_wait((sem_t *)g_hbd_sem);
      if (iVar1 != -1) break;
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    __android_log_print(3,"FingerGoodix","[%-20s]hbd sem_wait() succeeded\n","device_readHBD");
LAB_00108ecc:
    __android_log_print(3,"FingerGoodix","[%-20s]wait_stop\n","device_readHBD");
    iVar1 = fnCa_read_hbd(param_1,0x14,0);
  }
  else {
    do {
      gettimeofday(&local_18,(__timezone_ptr_t)0x0);
      local_28.tv_nsec = local_18.tv_usec * 1000 + 100000000;
      local_28.tv_sec = local_18.tv_sec + local_28.tv_nsec / 1000000000;
      local_28.tv_nsec = local_28.tv_nsec % 1000000000;
      iVar1 = sem_timedwait((sem_t *)g_hbd_sem,&local_28);
      if (iVar1 == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]hbd sem_timedwait() succeeded\n",
                            "device_readHBD");
        goto LAB_00108ecc;
      }
      param_3 = param_3 + -100;
    } while (0 < param_3);
    iVar1 = 0x83;
    __android_log_print(3,"FingerGoodix","[%-20s]wait hbd time out.\n","device_readHBD");
    g_state = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]wait_stop\n","device_readHBD");
  }
  g_state = 0;
LAB_00108f08:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar1);
}



undefined8 device_setSpeed(int param_1)

{
  if (param_1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Set Low Speed","device_setSpeed");
    gf_set_speed();
    return 0;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]Set High Speed","device_setSpeed");
  gf_set_speed();
  return 0;
}



undefined8 device_setMode(byte param_1)

{
  uint uVar1;
  
  mutex_get_lock();
  __android_log_print(3,"FingerGoodix","[%-20s] Set mode : %d\n","device_setMode",param_1);
  uVar1 = (uint)param_1;
  if ((param_1 != 0x56) && (7 < param_1)) {
    __android_log_print(3,"FingerGoodix","[%-20s]Unsupport mode:0x%x\n","device_setMode",param_1);
    mutex_get_unlock();
    return 0;
  }
  if (g_mode == 2) {
    fnCa_SetMode(6);
    usleep(5000);
    fnCa_SetMode(6);
    usleep(5000);
  }
  if ((uVar1 != 3) && (uVar1 != 0)) {
    fnCa_SetMode((uint)param_1);
    g_mode = uVar1;
    mutex_get_unlock();
    return 0;
  }
  g_mode = 0;
  if (gScreenStatus != '\0') {
    g_mode = 3;
  }
  fnCa_SetMode(g_mode);
  mutex_get_unlock();
  return 0;
}



undefined8 device_getMode(undefined *param_1)

{
  mutex_get_lock();
  *param_1 = (char)g_mode;
  mutex_get_unlock();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_getVersion(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_d4 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  iVar1 = gx_ta_send_command(0x2a,auStack_d4,4,&uStack_d0,0xc4);
  if (iVar1 == 0) {
    if (param_1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      memcpy(param_1,&uStack_d0,0xc4);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



undefined8 device_action(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]device_action input buffer is NULL.\n",
                        "device_action");
    uVar1 = 0xffffff7b;
  }
  return uVar1;
}



void device_notify(undefined8 param_1)

{
  event_notify = param_1;
  return;
}



void device_cancel_waitfinger(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_cancel_waitfinger ","device_cancel_waitfinger"
                     );
  DAT_0012a8b0 = 1;
  return;
}



void device_cancel_waitHB(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_cancel_waitHB ","device_cancel_waitHB");
  DAT_0012a8c0 = 1;
  return;
}



void device_InitialHBAlgorithmBuffer(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_InitialHBAlgorithmBuffer ",
                      "device_InitialHBAlgorithmBuffer");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_in_hbd_debug(void)

{
  int iVar1;
  undefined uStack_18;
  char local_17;
  byte local_13;
  undefined local_11;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s %d \n","sig_in_hbd_debug","sig_in_hbd_debug",0x492
                     );
  gf_secspi_read_status(&uStack_18);
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]status = 0x%x,key=0x%02x, hbd_flag=0x%02x Temperature=0x%02x\n",
                      "sig_in_hbd_debug",local_17,local_13,local_11,0);
  if (local_17 == -0x50) {
    g_sensor_status = local_13 & 1;
  }
  iVar1 = gx_handle_exception((long)&uStack_18);
  if (iVar1 == 0) {
    if (g_state == 0) {
      fnCa_CleanStatus();
    }
    else {
      if (local_17 == -0x50) {
        fnCa_CleanStatus();
        if ((local_13 >> 1 & 1) == 0) {
          if ((local_13 >> 3 & 1) == 0) {
            if ((local_13 >> 5 & 1) != 0) {
              __android_log_print(3,"FingerGoodix","[%-20s]--------BACK KEY DOWN--------",
                                  "sig_in_hbd_debug");
            }
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]--------MENU KEY DOWN--------",
                                "sig_in_hbd_debug");
          }
        }
        else if ((local_13 & 1) == 0) {
          __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY UP----------",
                              "sig_in_hbd_debug");
          DAT_0012a8a8 = 1;
          device_InitialHBAlgorithmBuffer();
          sem_post((sem_t *)g_hbd_sem);
        }
        else {
          __android_log_print(3,"FingerGoodix","[%-20s]--------HOME KEY DOWN--------",
                              "sig_in_hbd_debug");
          device_InitialHBAlgorithmBuffer();
        }
      }
      else if (local_17 == -0x60) {
        __android_log_print(3,"FingerGoodix","[%-20s]NOW status is GF_INT_HBD","sig_in_hbd_debug");
        __android_log_print(3,"FingerGoodix","[%-20s] @Judge@ sig_in_hbd (g_state is %d)",
                            "sig_in_hbd_debug",g_state);
        if (g_state == 2) {
          __android_log_print(3,"FingerGoodix","[%-20s]sig_in_hbd --> sem_post(&g_image_sem)",
                              "sig_in_hbd_debug");
          sem_post((sem_t *)g_image_sem);
        }
        else if (g_state == 4) {
          __android_log_print(3,"FingerGoodix","[%-20s]sig_in_hbd --> sem_post(&g_hbd_sem)",
                              "sig_in_hbd_debug");
          sem_post((sem_t *)g_hbd_sem);
        }
      }
      else if (local_17 == '\0') {
        __android_log_print(3,"FingerGoodix","[%-20s]Invalid interrupt in GF_HBD_MODE",
                            "sig_in_hbd_debug");
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]Others Interrupt in GF_HBD_MODE",
                            "sig_in_hbd_debug");
        fnCa_CleanStatus();
      }
      detectBaseUpdateFingerUp(local_17,local_13);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sig_handler_loop(void)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte local_d;
  int local_c;
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  while( true ) {
    do {
      local_c = 0;
      sem_wait((sem_t *)g_sigio_sem);
      sem_getvalue((sem_t *)g_sigio_sem,&local_c);
      __android_log_print(3,"FingerGoodix","[%-20s]value == %d","sig_handler_loop",local_c);
      local_d = 0;
      uVar3 = gf_read_pm_fb(&local_d);
    } while ((int)uVar3 == -1);
    if ((gScreenStatus == local_d) || (1 < local_d)) {
      iVar6 = 0;
    }
    else {
      gScreenStatus = local_d;
      if (event_notify != (code *)0x0) {
        (*event_notify)(8,local_d,0);
      }
      iVar6 = 1;
      if (local_d == 1) {
        gf_excute_esd_timer();
        iVar6 = 0;
      }
    }
    __android_log_print(3,"FingerGoodix","[%-20s]g_sensor_status = %d , prescreenStatus = %d ",
                        "sig_handler_loop",g_sensor_status,iVar6);
    uVar7 = g_mode;
    bVar2 = gScreenStatus;
    pcVar4 = toString((int *)&DAT_0012a030,g_mode);
    __android_log_print(3,"FingerGoodix","[%-20s]sig_handler_loop::pmStatus=%d, g_mode=%d(%s)",
                        "sig_handler_loop",bVar2,uVar7,pcVar4);
    uVar7 = (uint)gScreenStatus;
    if (gScreenStatus != 1) break;
    if (g_sensor_status == '\x01') goto LAB_00109878;
    mutex_get_lock();
    bVar1 = g_mode == 0;
    if (bVar1) {
      __android_log_print(3,"FingerGoodix","[%-20s]screen off : to FF mode","sig_handler_loop");
      g_mode = 3;
      fnCa_SetMode(3);
      mutex_get_unlock();
      DAT_0012a8ac = uVar7;
    }
    if (g_mode == 3) {
      DAT_0012a8ac = 1;
    }
LAB_00109778:
    mutex_get_unlock();
    __android_log_print(3,"FingerGoodix","[%-20s]prescreenStatus == %d","sig_handler_loop",iVar6);
    if (iVar6 != 0) {
LAB_00109898:
      gf_excute_esd_timer();
    }
    if (!bVar1) {
LAB_001097a0:
      uVar7 = g_mode;
      pcVar4 = toString((int *)&DAT_0012a030,g_mode);
      iVar6 = g_state;
      pcVar5 = toString((int *)&DAT_0012a1c0,g_state);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]#####################handler called.7  g_mode = %d(%s)  g_state = %d(%s)\n"
                          ,"sig_handler_loop",uVar7,pcVar4,iVar6,pcVar5);
      mutex_get_lock();
      if (g_mode == 3) {
        sig_in_ff();
        mutex_get_unlock();
      }
      else if (g_mode < 4) {
        if (g_mode == 1) {
          sig_in_key();
          mutex_get_unlock();
        }
        else if (g_mode < 2) {
          sig_in_image();
          mutex_get_unlock();
        }
        else {
          sig_in_sleep();
          mutex_get_unlock();
        }
      }
      else if (g_mode == 5) {
        sig_in_hbd();
        mutex_get_unlock();
      }
      else if (g_mode < 5) {
        sig_in_nag();
        mutex_get_unlock();
      }
      else if (g_mode == 7) {
        sig_in_hbd_debug();
        mutex_get_unlock();
      }
      else if (g_mode == 0x56) {
        sig_in_debug();
        mutex_get_unlock();
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]Bad mode:%d\n","sig_handler_loop");
        sig_in_default();
        mutex_get_unlock();
      }
    }
  }
  if ((uVar7 == 0) && (g_sensor_status != '\x01')) {
    mutex_get_lock();
    bVar1 = false;
    if (g_mode == 3) {
      bVar1 = true;
      __android_log_print(3,"FingerGoodix","[%-20s]screen on : to IMAGE mode","sig_handler_loop");
      g_mode = 0;
      fnCa_SetMode(0);
      mutex_get_unlock();
      DAT_0012a8ac = 0;
    }
    goto LAB_00109778;
  }
LAB_00109878:
  bVar1 = false;
  __android_log_print(3,"FingerGoodix","[%-20s]prescreenStatus == %d","sig_handler_loop",iVar6);
  if (iVar6 != 0) goto LAB_00109898;
  goto LAB_001097a0;
}



void device_mp_pin(int param_1)

{
  isPinTest = 1;
  g_isPinTest = 1;
  __android_log_print(3,"FingerGoodix","[%-20s]Do device_mp_pin: g_isPinTest = 1","device_mp_pin");
  gf_reset_sensor(param_1);
  g_isPinTest = 0;
  return;
}



void device_irq_control(int param_1)

{
  if (param_1 == 0) {
    gf_disable_irq();
    return;
  }
  if (param_1 != 1) {
    return;
  }
  gf_enable_irq();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00109a58(int *param_1)

{
  int iVar1;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = munmap(*(void **)(param_1 + 4),(ulong)(param_1[6] + 0xfff) & 0xfffff000);
  if (iVar1 != 0) {
    __android_log_print(6,"FingerGoodix","[%-20s]Error::Unmapping ION Buffer failed with ret = %d\n"
                        ,"qsc_ion_dealloc",iVar1);
  }
  local_10[0] = param_1[2];
  close(param_1[1]);
  iVar1 = ioctl(*param_1,0xc0044901,local_10);
  if (iVar1 != 0) {
    __android_log_print(6,"FingerGoodix",
                        "[%-20s]Error::ION Memory FREE ioctl failed with ret = %d\n",
                        "qsc_ion_dealloc",iVar1);
  }
  close(*param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_ta_start(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_10;
  undefined local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s","gx_ta_start","gx_ta_start");
  local_10 = 0;
  local_c = 0;
  __system_property_get("sys.gxfp.lv",&local_10);
  iVar1 = strcmp((char *)&local_10,"1");
  if (iVar1 == 0) {
    pcVar3 = "goodixfplv";
    __android_log_print(3,"FingerGoodix","[%-20s] Loading LV TA, ta_name = %s ; prop = %s",
                        "gx_ta_start","goodixfplv",&local_10);
  }
  else {
    pcVar3 = "goodixfp";
    __android_log_print(3,"FingerGoodix","[%-20s] Loading HV TA, ta_name = %s ; prop = %s",
                        "gx_ta_start","goodixfp",&local_10);
  }
  iVar1 = QSEECom_start_app(&g_ta_handle,"/vendor/firmware",pcVar3,ta_buf_size);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Loading %s Succeed.","gx_ta_start",pcVar3);
    uVar2 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Loading %s failed:%d.","gx_ta_start",pcVar3,iVar1);
    __android_log_buf_print(7,7,"BBox::UEC","39::10");
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



undefined8 gx_alipay_ta_start(void)

{
  int iVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]%s","gx_alipay_ta_start","gx_alipay_ta_start");
  iVar1 = QSEECom_start_app(&g_ali_ta_handle,"/vendor/firmware","alipay",ta_buf_size);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Loading %s Succeed.","gx_alipay_ta_start","alipay")
    ;
    uVar2 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Loading %s failed:%d.","gx_alipay_ta_start",
                        "alipay");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_ta_stop(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_10;
  undefined local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s","gx_ta_stop","gx_ta_stop");
  local_10 = 0;
  local_c = 0;
  iVar1 = strcmp((char *)&local_10,"1");
  if (iVar1 == 0) {
    pcVar3 = "goodixfplv";
    __android_log_print(3,"FingerGoodix","[%-20s] Loading LV TA, ta_name = %s ; prop = %s",
                        "gx_ta_stop","goodixfplv",&local_10);
  }
  else {
    pcVar3 = "goodixfp";
    __android_log_print(3,"FingerGoodix","[%-20s] Loading HV TA, ta_name = %s ; prop = %s",
                        "gx_ta_stop","goodixfp",&local_10);
  }
  if (g_ta_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_ta_handle is NULL.","gx_ta_stop");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = QSEECom_shutdown_app();
    if (iVar1 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Unload %s succeed.","gx_ta_stop",pcVar3);
      uVar2 = 0;
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]Unload %s failed.","gx_ta_stop",pcVar3);
      uVar2 = 0xffffffff;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



undefined8 gx_alipay_ta_stop(void)

{
  int iVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]%s","gx_alipay_ta_stop","gx_alipay_ta_stop");
  if (g_ta_handle == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]g_ta_handle is NULL.","gx_alipay_ta_stop");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = QSEECom_shutdown_app(&g_ali_ta_handle);
    if (iVar1 != 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Unload %s failed.","gx_alipay_ta_stop","alipay");
      return 0xffffffff;
    }
    __android_log_print(3,"FingerGoodix","[%-20s]Unload %s succeed.","gx_alipay_ta_stop","alipay");
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_ta_send_command(undefined4 param_1,void *param_2,uint param_3,void *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined local_1010;
  undefined local_100f;
  undefined4 uStack_810;
  undefined auStack_80c [2052];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a900);
  if ((param_2 == (void *)0x0) || (param_4 == (void *)0x0)) {
    __android_log_print(3,"FingerGoodix","[%-20s]Bad input argument. NULL Buffer.%d,%p,%p",
                        "gx_ta_send_command",param_1,param_2,param_4);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar4 = 0xffffffff;
  }
  else if ((param_3 < 0x801) && (param_5 < 0x801)) {
    uVar3 = param_3 + 1;
    uStack_810 = param_1;
    memcpy(auStack_80c,param_2,(ulong)param_3);
    if ((uVar3 & 0x3f) != 0) {
      uVar3 = param_3 + 0x41 & 0xffffffc0;
    }
    uVar2 = param_5;
    if ((param_5 & 0x3f) != 0) {
      uVar2 = param_5 + 0x40 & 0xffffffc0;
    }
    QSEECom_scale_bus_bandwidth(g_ta_handle,1);
    iVar1 = QSEECom_send_cmd(g_ta_handle,&uStack_810,uVar3,&local_1010,uVar2);
    QSEECom_scale_bus_bandwidth(g_ta_handle,0);
    if (iVar1 == 0) {
      memcpy(param_4,&local_1010,(ulong)param_5);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]Send requestCmd[%d] success, Rsp.data[0] = 0x%x, data[1] = 0x%x",
                          "gx_ta_send_command",param_1,local_1010,local_100f);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to send requestCmd[%d], ret = %d",
                          "gx_ta_send_command",param_1,iVar1);
      __android_log_print(3,"FingerGoodix","[%-20s]Something wrong to com. with TA, restart TA",
                          "gx_ta_send_command");
      __system_property_set("sys.fih.fingerprint","false");
    }
    __android_log_print(3,"FingerGoodix","[%-20s]%s, requestCmd = %d Leave &&&&&&&&&&&&&&",
                        "gx_ta_send_command","gx_ta_send_command",param_1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
  }
  else {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]The maximum length for the send command is %d, and maximum RSP data length is %d"
                        ,"gx_ta_send_command",0x800,0x800);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar4 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_alipay_ta_send_command
               (undefined4 param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  int iVar1;
  ulong __n;
  undefined4 uVar2;
  undefined auStack_1010 [2048];
  undefined4 local_810;
  uint local_80c;
  undefined auStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a900);
  if ((param_2 == (void *)0x0) || (param_4 == (void *)0x0)) {
    __android_log_print(3,"FingerGoodix","[%-20s]Bad input argument. NULL Buffer.",
                        "gx_alipay_ta_send_command");
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar2 = 0xffffffff;
  }
  else if (param_3 < 0x801) {
    __n = (ulong)(param_3 + 8);
    local_810 = param_1;
    local_80c = param_3;
    memcpy(auStack_808,param_2,__n);
    if ((param_3 + 8 & 0x3f) != 0) {
      __n = (ulong)(param_3 + 0x48 & 0xffffffc0);
    }
    iVar1 = QSEECom_send_cmd(g_ali_ta_handle,&local_810,__n,auStack_1010,0x40);
    if (iVar1 == 0) {
      memcpy(param_4,auStack_1010,(ulong)*param_5);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]Failed to send cmd[%d], ret = %d",
                          "gx_alipay_ta_send_command",param_1,iVar1);
      __android_log_print(3,"FingerGoodix","[%-20s]Thomas : 4_13 Force to call init.rc",
                          "gx_alipay_ta_send_command");
      __system_property_set("sys.fih.fingerprint","false");
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
  }
  else {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]The maximum length for the send command is %d, and maximum RSP data length is %d"
                        ,"gx_alipay_ta_send_command",param_3,0x800);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void gx_ta_send_command_ex
               (undefined4 param_1,void *param_2,uint param_3,void *param_4,uint param_5,
               void *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int local_78 [2];
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int local_44;
  int local_40;
  undefined *local_38;
  undefined4 local_30;
  size_t local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]%s entry cmd %d","gx_ta_send_command_ex",
                      "gx_ta_send_command_ex",param_1);
  if ((0x20000 < param_3 || 0x20000 < param_5) || (param_2 == (void *)0x0)) {
    __android_log_print(6,"FingerGoodix","[%-20s]Param is error.","gx_ta_send_command_ex");
    uVar5 = 0xffffffff;
    goto LAB_0010a6fc;
  }
  if (g_ta_handle == (undefined8 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]TA don\'t load or IT\'s REE Version!",
                        "gx_ta_send_command_ex");
    uVar5 = 0xffffffff;
    goto LAB_0010a6fc;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a900);
  puVar1 = g_ta_handle;
  if (g_ta_handle == (undefined8 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Error ta_handle","gx_ta_send_command_ex");
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar5 = 0xffffffff;
    goto LAB_0010a6fc;
  }
  local_48 = 0;
  local_40 = 0;
  iVar2 = open("/dev/ion",0);
  if (iVar2 < 0) {
    __android_log_print(6,"FingerGoodix","[%-20s]Error::Cannot open ION device\n","qsc_ION_memalloc"
                       );
LAB_0010a840:
    __android_log_print(3,"FingerGoodix","[%-20s]Error allocating memory in ion\n",
                        "gx_ta_send_command_ex");
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
    uVar5 = 0xffffffff;
  }
  else {
    local_28 = 0x58000;
    local_20 = 0x1000;
    local_38 = (undefined *)0x0;
    local_44 = 0;
    local_18 = 0x8000000;
    local_14 = 0;
    iVar3 = ioctl(iVar2,0xc0204900);
    if (iVar3 == 0) {
      if (local_10 == 0) {
        __android_log_print(6,"FingerGoodix","[%-20s]Error::ION alloc data returned a NULL\n",
                            "qsc_ION_memalloc");
        goto joined_r0x0010a774;
      }
      local_70 = local_10;
      iVar3 = ioctl(iVar2,0xc0084902);
      if (iVar3 != 0) {
        iVar3 = 0;
        __android_log_print(6,"FingerGoodix","[%-20s]Error::Failed doing ION_IOC_MAP call\n",
                            "qsc_ION_memalloc");
LAB_0010a5d4:
        local_78[0] = local_10;
        if (local_44 != 0) {
          close(local_44);
        }
        iVar4 = ioctl(iVar2,0xc0044901,local_78);
        if (iVar4 != 0) {
          __android_log_print(6,"FingerGoodix","[%-20s]Error::ION FREE ioctl returned error = %d\n",
                              "qsc_ION_memalloc",iVar4);
        }
        if (iVar2 != 0) goto LAB_0010a74c;
        goto joined_r0x0010a754;
      }
      puVar6 = (undefined *)mmap((void *)0x0,local_28,3,1,local_6c,0);
      if (puVar6 == (undefined *)0xffffffffffffffff) {
        iVar3 = -1;
        __android_log_print(6,"FingerGoodix","[%-20s]Error::ION MMAP failed\n","qsc_ION_memalloc");
        if ((local_38 != (undefined *)0x0) && (iVar3 = munmap(local_38,local_28), iVar3 != 0)) {
          __android_log_print(6,"FingerGoodix",
                              "[%-20s]Error::Failed to unmap memory for load image. ret = %d\n",
                              "qsc_ION_memalloc",iVar3);
        }
        goto LAB_0010a5d4;
      }
      local_44 = local_6c;
      local_40 = local_10;
      local_30 = 0x573d4;
      local_48 = iVar2;
      local_38 = puVar6;
    }
    else {
      __android_log_print(6,"FingerGoodix","[%-20s]Error::Error while trying to allocate data\n",
                          "qsc_ION_memalloc");
joined_r0x0010a774:
      if (iVar2 != 0) {
        iVar3 = 0;
LAB_0010a74c:
        close(iVar2);
joined_r0x0010a754:
        if (iVar3 != 0) goto LAB_0010a840;
      }
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    *local_38 = (char)param_1;
    memcpy(local_38 + 1,param_2,(ulong)param_3);
    puVar7 = (undefined4 *)*puVar1;
    *puVar7 = param_1;
    puVar7[1] = (int)local_38;
    puVar7[2] = 0x573d4;
    puVar7[0xc2] = 0;
    local_68 = CONCAT44(4,local_44);
    iVar2 = QSEECom_send_modified_cmd(puVar1,puVar7,0x40,puVar7 + 0xc0,0x40,&local_68);
    puVar6 = local_38;
    if ((iVar2 == 0) && (-1 < (int)puVar7[0xc2])) {
      if (param_4 != (void *)0x0) {
        memcpy(param_4,local_38 + 0x20004,(ulong)param_5);
      }
      if (param_6 != (void *)0x0) {
        memcpy(param_6,puVar6 + 0x40008,0x173cc);
      }
      iVar2 = FUN_00109a58(&local_48);
      if (iVar2 == 0) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
        __android_log_print(3,"FingerGoodix","[%-20s]%s exit cmd %d","gx_ta_send_command_ex",
                            "gx_ta_send_command_ex",param_1);
        uVar5 = 0;
      }
      else {
        __android_log_print(6,"FingerGoodix","[%-20s]return value of dealloc is %d",
                            "gx_ta_send_command_ex",iVar2);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
        uVar5 = 0xffffffff;
      }
    }
    else {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]qsc_issue_send_modified_cmd_req: fail cmd = %d ret = %d                   msg_rsp->status: %d"
                          ,"gx_ta_send_command_ex",param_1,iVar2);
      FUN_00109a58(&local_48);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
      uVar5 = 0xffffffff;
    }
  }
LAB_0010a6fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gx_ta_send_command_ex_ree
               (undefined4 param_1,void *param_2,uint param_3,void *param_4,uint param_5,
               void *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uStack_573f8;
  undefined *puStack_573f0;
  undefined8 uStack_573e8;
  undefined uStack_573e0;
  undefined auStack_573df [999];
  undefined auStack_56ff8 [12];
  int iStack_56fec;
  undefined auStack_373dc [131076];
  undefined auStack_173d8 [95192];
  
  lVar2 = ___stack_chk_guard;
  uStack_573f8 = 0;
  puStack_573f0 = (undefined *)0x0;
  uStack_573e8 = 0;
  memset(&uStack_573e0,0,0x573d4);
  __android_log_print(3,"FingerGoodix","[%-20s]%s entry cmd %d","gx_ta_send_command_ex_ree",
                      "gx_ta_send_command_ex_ree",param_1);
  if ((param_3 < 0x20001 && param_5 < 0x20001) && (param_2 != (void *)0x0)) {
    if (g_ta_handle == 0) {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]handle is NULL, TA don\'t load or IT\'s REE Version!",
                          "gx_ta_send_command_ex_ree");
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0012a900);
    lVar1 = g_ta_handle;
    uStack_573e0 = (undefined)param_1;
    memcpy(auStack_573df,param_2,(ulong)param_3);
    iStack_56fec = 0;
    uStack_573f8 = CONCAT44(uStack_573f8._4_4_,param_1);
    uStack_573e8 = CONCAT44(uStack_573e8._4_4_,0x573d4);
    puStack_573f0 = &uStack_573e0;
    iVar3 = QSEECom_send_cmd(lVar1,&uStack_573f8,0x40,auStack_56ff8,0x40);
    if ((iVar3 == 0) && (-1 < iStack_56fec)) {
      if (param_4 != (void *)0x0) {
        memcpy(param_4,auStack_373dc,(ulong)param_5);
      }
      if (param_6 != (void *)0x0) {
        memcpy(param_6,auStack_173d8,0x173cc);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
      __android_log_print(3,"FingerGoodix","[%-20s]%s exit cmd %d","gx_ta_send_command_ex_ree",
                          "gx_ta_send_command_ex_ree",param_1);
      uVar4 = 0;
    }
    else {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]qsc_issue_send_modified_cmd_req: fail cmd = %d ret = %d                   msg_rsp->status: %d"
                          ,"gx_ta_send_command_ex_ree",param_1,iVar3);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0012a900);
      keymaster_ta_stop();
      __system_property_set("sys.fih.fingerprint","false");
      uVar4 = 0xffffffff;
    }
  }
  else {
    __android_log_print(6,"FingerGoodix","[%-20s]Param is error.","gx_ta_send_command_ex_ree");
    uVar4 = 0xffffffff;
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar4);
}



int fnCa_OpenSession(void)

{
  int iVar1;
  
  iVar1 = gx_ta_start();
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Ta start success.","fnCa_OpenSession");
    return iVar1;
  }
  __android_log_print(6,"FingerGoodix","[%-20s]Ta start failed.","fnCa_OpenSession");
  return iVar1;
}



int fnCa_CloseSession(void)

{
  int iVar1;
  
  iVar1 = gx_ta_stop();
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Ta stop success.","fnCa_CloseSession");
    return iVar1;
  }
  __android_log_print(6,"FingerGoodix","[%-20s]Ta close failed.","fnCa_CloseSession");
  return iVar1;
}



uint fnCa_Init(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = param_1;
  iVar1 = gx_ta_send_command(1,&local_4,4,param_2,0x50);
  uVar2 = (uint)*param_2;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Reset(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(2,&local_c,0,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetMode(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_d;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_d = (undefined)param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(3,&local_d,1,&local_c,4);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]setMode SUCCESS !!! %d","fnCa_SetMode",param_1);
    uVar2 = local_c;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]setMode FAIL !!!%d","fnCa_SetMode",param_1);
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetMode(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(4,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



undefined8 fnCa_SetModeCancel(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Register(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_1c = 8;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(5,&local_1c,4,&local_18,0xc);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CancelRegister(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(6,&local_c,4,&local_10,4);
  DAT_0012a938 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SaveRegisteredFp(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_10 = 0;
  local_28[0] = param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]send length = %d , get length = %d",
                      "fnCa_SaveRegisteredFp",8,0x10);
  iVar1 = gx_ta_send_command(7,local_28,8,&local_18,0x10);
  __android_log_print(3,"FingerGoodix","[%-20s]DELETE: secureId = %lld pAuthId = %lld,pFpId = %d",
                      "fnCa_SaveRegisteredFp",local_28[0],local_10,local_18._4_4_);
  if ((iVar1 == 0) && ((int)local_18 - 1U < 5)) {
    uVar2 = 0;
    *param_3 = local_18._4_4_;
    *param_2 = local_10;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



int fnCa_GetFpNameById(undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = param_1;
  iVar1 = gx_ta_send_command(8,&local_4,4,param_2,0x80);
  return -(uint)(iVar1 != 0);
}



int fnCa_ChangeFpNameById(undefined4 param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = param_1;
  iVar1 = gx_ta_send_command(9,&local_4,4,param_2,param_3);
  return -(uint)(iVar1 != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Recognize(void **param_1,ulong param_2,undefined *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *__src;
  undefined auStack_718 [752];
  undefined4 uStack_428;
  undefined4 local_424;
  undefined auStack_420 [20];
  undefined4 local_40c;
  undefined auStack_408 [1024];
  long local_8;
  
  __src = *param_1;
  local_8 = ___stack_chk_guard;
  local_40c = *(undefined4 *)((long)__src + 0x14);
  memset(&uStack_428,0,0x420);
  memset(auStack_718,0,0x2ec);
  local_424 = (undefined4)(param_2 & 0xffffffff);
  memcpy(auStack_420,__src,(param_2 & 0xffffffff) << 2);
                    // WARNING: Load size is inaccurate
  uStack_428 = *param_1[1];
  memcpy(auStack_408,param_1[2],0x400);
  iVar1 = gx_ta_send_command(10,&uStack_428,0x420,auStack_718,0x2ec);
  DAT_0012a938 = 0;
  if (iVar1 == 0) {
    memcpy(param_3,auStack_718,0x2ec);
    *param_4 = 0x2ec;
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Recognize : TA return,%d/%d","fnCa_Recognize",
                        0x2ec,*param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CancelRecognize(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0xb,&local_c,4,&local_10,4);
  DAT_0012a938 = 0;
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_DelFpTemplates(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *__ptr;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  __ptr = (uint *)malloc((ulong)(param_2 + 1) << 2);
  uVar2 = *param_1;
  *__ptr = param_2;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_DelFpTemplates: id = %d,idCOunt = %d",
                      "fnCa_DelFpTemplates",uVar2,(ulong)param_2);
  memcpy(__ptr + 1,param_1,(ulong)param_2 << 2);
  iVar1 = gx_ta_send_command(0xc,__ptr,(param_2 + 1) * 4,&local_c,4);
  free(__ptr);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



undefined8 fnCa_GetFpTemplateIdList(void *param_1,uint *param_2)

{
  int iVar1;
  uint *__ptr;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  __ptr = (uint *)malloc((ulong)(uVar4 + 1) << 2);
  if (__ptr == (uint *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = gx_ta_send_command(0xd,param_1,4,__ptr,(uVar4 + 1) * 4);
    if (iVar1 == 0) {
      *param_2 = *__ptr;
      __android_log_print(3,"FingerGoodix","[%-20s]pCount = %d","fnCa_GetFpTemplateIdList");
      lVar2 = 0;
      uVar4 = 0;
      if (*param_2 != 0) {
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)((long)param_1 + lVar2) = *(undefined4 *)((long)__ptr + lVar2 + 4);
          lVar2 = lVar2 + 4;
        } while (uVar4 < *param_2);
      }
      free(__ptr);
      uVar3 = 0;
    }
    else {
      free(__ptr);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_ChangeFpPassword(void *param_1,ulong param_2,void *param_3,uint param_4)

{
  int iVar1;
  ulong __n;
  undefined4 local_80c;
  undefined auStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2 & 0xffffffff;
  local_80c = 0;
  memset(auStack_808,0,0x800);
  memcpy(auStack_808,param_1,__n);
  memcpy(auStack_808 + __n + 1,param_3,(ulong)param_4);
  iVar1 = gx_ta_send_command(0xe,auStack_808,param_4 + 1 + (int)__n,&local_80c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_VerifyFpPassword(void *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0xf,param_1,param_2,&local_c,4);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_LoadFpAlogParams(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x10,(void *)0x0,0,&local_c,4);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CleanStatus(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x13,&local_10,4,&local_c,4);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CleanLBStatus(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  iVar1 = gx_ta_send_command(0x1b,local_14,4,&local_c,4);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetStatus(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x12,&local_c,0,param_1,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_ConfirmStatus(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x26,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetLBStatus(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x1a,&local_c,4,&local_10,4);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetLBStatus:LBStatus %d.","fnCa_GetLBStatus",
                      local_10);
  if (iVar1 == 0) {
    uVar2 = 0;
    *param_1 = (char)local_10;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetForceValue(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x1c,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



undefined8 fnCa_ali_invoke_command(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Ta start failed.","fnCa_ali_invoke_command");
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetShareDate(void)

{
  undefined4 local_214;
  undefined auStack_210 [520];
  long local_8;
  
  local_214 = 0;
  local_8 = ___stack_chk_guard;
  memset(auStack_210,0,0x204);
  gx_ta_send_command(0x28,&local_214,4,auStack_210,0x204);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_ESDCheck(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x15,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_FWIsUpdate(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x16,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_FWUpdatePre(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x17,&local_c,4,&local_10,4);
  DAT_0012a938 = 0;
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_FWUpdate(undefined *param_1)

{
  undefined8 uVar1;
  undefined local_d;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_d = *param_1;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x18,&local_d,1,&local_c,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_c;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_DownloadCFG(undefined *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x19,&local_c,4,&local_10,4);
  if ((int)uVar1 == 0) {
    *param_1 = (char)local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Calib(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_preprossor_init","fnCa_Calib");
  iVar1 = gx_ta_send_command(0x14,&local_c,4,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_DriverTest(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x11,&local_c,4,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Fido_Recognize(void **param_1,ulong param_2,undefined *param_3,undefined4 *param_4,
                        undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  void *__src;
  undefined auStack_760 [752];
  undefined4 uStack_470;
  undefined4 local_46c;
  undefined auStack_468 [20];
  undefined4 local_454;
  undefined auStack_450 [1024];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __src = *param_1;
  memset(auStack_760,0,0x2ec);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Fido_Recognize \n","fnCa_Fido_Recognize");
  local_46c = (undefined4)(param_2 & 0xffffffff);
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  uStack_38 = param_5[3];
  local_30 = param_5[4];
  uStack_28 = param_5[5];
  local_20 = param_5[6];
  uStack_18 = param_5[7];
  local_10 = param_5[8];
  memcpy(auStack_468,__src,(param_2 & 0xffffffff) << 2);
  local_454 = 2;
                    // WARNING: Load size is inaccurate
  uStack_470 = *param_1[1];
  memcpy(auStack_450,param_1[2],0x400);
  iVar1 = gx_ta_send_command(10,&uStack_470,0x468,auStack_760,0x2ec);
  DAT_0012a938 = 0;
  if (iVar1 == 0) {
    memcpy(param_3,auStack_760,0x2ec);
    *param_4 = 0x2ec;
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Fido_Recognize : TA return,%d/%d",
                        "fnCa_Fido_Recognize",0x2ec,*param_3);
    uVar2 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Fido_Recognize : Failed.\n",
                        "fnCa_Fido_Recognize");
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetBitmap(void **param_1,uint *param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong __n;
  void *__dest;
  int local_438;
  uint local_434;
  undefined8 local_430;
  ulong uStack_428;
  ulong local_420;
  int local_418;
  uint local_414;
  uint local_410;
  undefined auStack_40c [1028];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetBitmap begin.\n","fnCa_GetBitmap");
  if (param_4 < 4) {
    local_438 = 1;
    local_434 = param_4;
    memset(&local_418,0,0x40c);
    iVar3 = gx_ta_send_command(0x1d,&local_438,8,&local_418,0x40c);
    if ((iVar3 == 0) && (local_410 != 0)) {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]fnCa_GetBitmap:TranferBitmapStatus=%d, DataLen=%d, DataTotalLen=%d.\n"
                          ,"fnCa_GetBitmap",local_418,local_414);
      iVar3 = local_418;
      if (local_418 == 2) {
        __dest = malloc((ulong)local_410);
        __n = (ulong)local_414;
        memcpy(__dest,auStack_40c,__n);
        local_438 = iVar3;
      }
      else {
        __n = 0;
        __dest = (void *)0x0;
      }
      do {
        if (iVar3 != 2) goto LAB_0010c154;
        memset(&local_418,0,0x40c);
        iVar3 = gx_ta_send_command(0x1d,&local_438,8,&local_418,0x40c);
        uVar2 = local_410;
        if ((iVar3 != 0) || (local_410 == 0)) goto LAB_0010c1bc;
        if (local_414 != 0) {
          iVar3 = (int)__n;
          uVar1 = iVar3 + local_414;
          __n = (ulong)uVar1;
          memcpy((void *)((long)__dest + (long)iVar3),auStack_40c,(ulong)local_414);
          if (uVar2 < uVar1) {
            __android_log_print(3,"FingerGoodix",
                                "[%-20s]fnCa_GetBitmap : Index transmission error.\n",
                                "fnCa_GetBitmap");
            goto LAB_0010c1bc;
          }
        }
        iVar3 = local_418;
      } while (local_418 != 3);
      *param_1 = __dest;
      *param_2 = uVar2;
LAB_0010c154:
      if (local_434 == 2) {
        local_438 = 5;
        iVar3 = gx_ta_send_command(0x1d,&local_438,8,&local_430,0x18);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]fnCa_GetBitmap : coverage = %d, quality = %d.\n",
                            "fnCa_GetBitmap",local_430 & 0xffffffff,local_430._4_4_);
        if (iVar3 != 0) {
LAB_0010c1bc:
          uVar4 = 0xffffffff;
          if (__dest != (void *)0x0) {
            free(__dest);
          }
          goto LAB_0010c084;
        }
        if (param_3 != (ulong *)0x0) {
          param_3[2] = local_420;
          *param_3 = local_430;
          param_3[1] = uStack_428;
        }
      }
      uVar4 = 0;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetBitmap end.\n","fnCa_GetBitmap");
    }
    else {
      uVar4 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetBitmap: get bitmap fail.",
                          "fnCa_GetBitmap");
    }
  }
  else {
    uVar4 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetBitmap type error.","fnCa_GetBitmap");
  }
LAB_0010c084:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_reg_from_bmp(void *param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  void *__dest;
  undefined8 uVar3;
  size_t __n;
  undefined8 local_428;
  undefined8 local_420;
  undefined4 local_418;
  uint local_414;
  int local_410;
  undefined auStack_40c [1028];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(&local_418,0,0x40c);
  local_428 = 0;
  local_420 = 0;
  if (param_1 == (void *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_reg_from_bmp:buf is NULL.","fnCa_reg_from_bmp"
                       );
    uVar3 = 0xffffffff;
  }
  else {
    __dest = malloc((long)param_2);
    memcpy(__dest,param_1,(long)param_2);
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_reg_from_bmp:bitmap_len = %d.",
                        "fnCa_reg_from_bmp",param_2);
    local_414 = 0x400;
    local_418 = 1;
    local_410 = param_2;
    memcpy(auStack_40c,__dest,0x400);
    iVar2 = gx_ta_send_command(0x1e,&local_418,0x40c,&local_428,0x10);
    if (iVar2 == 0) {
      iVar2 = 0x400;
      if (0x400 < param_2) {
        do {
          local_414 = param_2 - iVar2;
          __n = (size_t)local_414;
          if ((int)local_414 < 0x401) {
            local_418 = 3;
          }
          else {
            __n = 0x400;
            local_418 = 2;
            local_414 = 0x400;
          }
          lVar1 = (long)iVar2;
          iVar2 = local_414 + iVar2;
          memcpy(auStack_40c,(void *)((long)__dest + lVar1),__n);
          gx_ta_send_command(0x1e,&local_418,0x40c,&local_428,0x10);
        } while (iVar2 < param_2);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (undefined4)local_428;
        param_3[1] = local_428._4_4_;
        param_3[2] = (undefined4)local_420;
        param_3[3] = local_420._4_4_;
      }
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]fnCa_reg_from_bmp:percent = %d, coverage = %d, quality = %d, overlay = %d."
                          ,"fnCa_reg_from_bmp",(undefined4)local_428,local_428._4_4_,
                          (undefined4)local_420,local_420._4_4_);
      free(__dest);
      uVar3 = 0;
    }
    else {
      free(__dest);
      uVar3 = 0xffffffff;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar3);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_reg_from_bmp_in_enrollpic_test(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__dest;
  size_t sVar6;
  void *__dest_00;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 local_428;
  undefined8 local_420;
  undefined local_418 [4];
  uint local_414;
  int local_410;
  undefined local_40c [1028];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(local_418,0,0x40c);
  local_428 = 0;
  local_420 = 0;
  if (param_1 == (int *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_reg_from_bmp:buf is NULL.",
                        "fnCa_reg_from_bmp_in_enrollpic_test");
    uVar7 = 0xffffffff;
  }
  else {
    iVar3 = *param_1;
    __dest = malloc((long)iVar3);
    memcpy(__dest,param_1 + 1,(long)iVar3);
    __android_log_print(3,"FingerGoodix","[%-20s]enrollPic Test: bitmap_len = %d.",
                        "fnCa_reg_from_bmp_in_enrollpic_test",iVar3);
    local_414 = *(uint *)((long)param_1 + (long)(iVar3 + 4));
    sVar6 = (size_t)(int)local_414;
    __dest_00 = malloc(sVar6);
    memcpy(__dest_00,(void *)((long)param_1 + (long)(iVar3 + 8)),sVar6);
    local_410 = iVar3;
    if ((int)local_414 < 1) {
      __android_log_print(3,"FingerGoodix","[%-20s]enrollPic Test: gscdata_len = %d.",
                          "fnCa_reg_from_bmp_in_enrollpic_test",local_414);
      memset(local_418,0,0x40c);
      local_418 = (undefined  [4])0x7;
      memcpy(local_40c,__dest_00,(ulong)local_414);
    }
    else {
      lVar9 = 0;
      do {
        puVar2 = (undefined *)((long)__dest_00 + lVar9);
        lVar9 = lVar9 + 1;
        __android_log_print(3,"FingerGoodix","[%-20s]----%d","fnCa_reg_from_bmp_in_enrollpic_test",
                            *puVar2);
      } while ((int)lVar9 < (int)local_414);
      __android_log_print(3,"FingerGoodix","[%-20s]enrollPic Test: gscdata_len = %d.",
                          "fnCa_reg_from_bmp_in_enrollpic_test",local_414);
      memset(local_418,0,0x40c);
      uVar8 = local_414 - 1;
      local_418 = (undefined  [4])0x7;
      memcpy(local_40c,__dest_00,sVar6);
      puVar10 = (undefined4 *)local_418;
      do {
        puVar1 = puVar10 + 3;
        iVar4 = (int)puVar10;
        puVar10 = (undefined4 *)((long)puVar10 + 1);
        __android_log_print(3,"FingerGoodix","[%-20s]SendData.data[%d]: ----%d",
                            "fnCa_reg_from_bmp_in_enrollpic_test",iVar4 - (int)local_418,
                            *(undefined *)puVar1);
      } while (puVar10 != (undefined4 *)((long)local_418 + (ulong)uVar8 + 1));
    }
    iVar4 = gx_ta_send_command(0x3b,local_418,0x40c,&local_428,0x10);
    if (iVar4 == 0) {
      local_418 = (undefined  [4])0x1;
      iVar4 = 0x400;
      local_414 = 0x400;
      local_410 = iVar3;
      memcpy(local_40c,__dest,0x400);
      iVar5 = gx_ta_send_command(0x3b,local_418,0x40c,&local_428,0x10);
      if (iVar5 == 0) {
        for (; iVar4 < iVar3; iVar4 = uVar8 + iVar4) {
          uVar8 = iVar3 - iVar4;
          sVar6 = (size_t)uVar8;
          if ((int)uVar8 < 0x401) {
            local_418 = (undefined  [4])0x3;
          }
          else {
            sVar6 = 0x400;
            local_418 = (undefined  [4])0x2;
            uVar8 = 0x400;
          }
          local_414 = uVar8;
          memcpy(local_40c,(void *)((long)__dest + (long)iVar4),sVar6);
          gx_ta_send_command(0x3b,local_418,0x40c,&local_428,0x10);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (undefined4)local_428;
          param_3[1] = local_428._4_4_;
          param_3[2] = (undefined4)local_420;
          param_3[3] = local_420._4_4_;
        }
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]fnCa_reg_from_bmp:percent = %d, coverage = %d, quality = %d, overlay = %d."
                            ,"fnCa_reg_from_bmp_in_enrollpic_test",(undefined4)local_428,
                            local_428._4_4_,(undefined4)local_420,local_420._4_4_);
        free(__dest);
        uVar7 = 0;
        goto LAB_0010c770;
      }
    }
    free(__dest);
    uVar7 = 0xffffffff;
  }
LAB_0010c770:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_reg_from_bmp_cancel(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x21,&local_c,4,&local_10,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_reg_save(void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 local_10c;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10c = 0;
  memset(acStack_108,0,0xff);
  memcpy(acStack_108,param_1,(long)param_2);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_reg_save:lable_len = %d,lable = %s.",
                      "fnCa_reg_save",param_2,acStack_108);
  sVar3 = strlen(acStack_108);
  if (sVar3 < 5) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_reg_save:lable is too short.","fnCa_reg_save")
    ;
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = gx_ta_send_command(0x1f,acStack_108,param_2 + 1,&local_10c,4);
    uVar2 = local_10c;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_verify_bmp(uint *param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  undefined8 uVar7;
  uint uVar8;
  size_t __n;
  undefined8 local_430;
  undefined8 local_428;
  ulong local_420;
  undefined4 local_418;
  uint local_414;
  int local_410;
  undefined auStack_40c [1028];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(&local_418,0,0x40c);
  local_420 = 0;
  local_430 = 0;
  local_428 = 0;
  if (param_1 == (uint *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_verify_bmp:buf is NULL.","fnCa_verify_bmp");
    uVar7 = 0xffffffff;
  }
  else {
    uVar2 = *param_1;
    __dest = malloc((long)(int)uVar2);
    memcpy(__dest,param_1 + 1,(long)(int)uVar2);
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_verify_bmp:lable_len = %d,lable = %s.",
                        "fnCa_verify_bmp",uVar2,__dest);
    iVar3 = *(int *)((long)param_1 + (long)(int)(uVar2 + 4));
    __dest_00 = malloc((long)iVar3);
    iVar5 = uVar2 + 8 + iVar3;
    memcpy(__dest_00,(void *)((long)param_1 + (long)(int)(uVar2 + 8)),(long)iVar3);
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_verify_bmp:bitmap_len = %d.","fnCa_verify_bmp"
                        ,iVar3);
    uVar4 = *(uint *)((long)param_1 + (long)iVar5);
    __dest_01 = malloc((long)(int)uVar4);
    memcpy(__dest_01,(void *)((long)param_1 + (long)(iVar5 + 4)),(long)(int)uVar4);
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_verify_bmp:gscdata_len = %d.",
                        "fnCa_verify_bmp",uVar4);
    memset(&local_418,0,0x40c);
    local_418 = 1;
    local_414 = 0x400;
    local_410 = iVar3;
    memcpy(auStack_40c,__dest_00,0x400);
    iVar5 = gx_ta_send_command(0x20,&local_418,0x40c,&local_430,0x18);
    if (iVar5 == 0) {
      iVar5 = 0x400;
      if (0x400 < iVar3) {
        do {
          uVar8 = iVar3 - iVar5;
          __n = (size_t)uVar8;
          memset(&local_418,0,0x40c);
          if ((int)uVar8 < 0x401) {
            local_418 = 3;
          }
          else {
            __n = 0x400;
            local_418 = 2;
            uVar8 = 0x400;
          }
          lVar1 = (long)iVar5;
          iVar5 = uVar8 + iVar5;
          local_414 = uVar8;
          local_410 = iVar3;
          memcpy(auStack_40c,(void *)((long)__dest_00 + lVar1),__n);
          iVar6 = gx_ta_send_command(0x20,&local_418,0x40c,&local_430,0x18);
          if (iVar6 != 0) goto LAB_0010cc54;
        } while (iVar5 < iVar3);
      }
      memset(&local_418,0,0x40c);
      local_418 = 7;
      local_414 = uVar4;
      local_410 = iVar3;
      memcpy(auStack_40c,__dest_01,(ulong)uVar4);
      iVar5 = gx_ta_send_command(0x20,&local_418,0x40c,&local_430,0x18);
      if (iVar5 == 0) {
        memset(&local_418,0,0x40c);
        local_418 = 4;
        local_414 = uVar2;
        local_410 = iVar3;
        memcpy(auStack_40c,__dest,(ulong)uVar2);
        __android_log_print(3,"FingerGoodix","[%-20s]fnCa_verify_bmp:SendData.data = %s",
                            "fnCa_verify_bmp",auStack_40c);
        iVar5 = gx_ta_send_command(0x20,&local_418,0x40c,&local_430,0x18);
        __android_log_print(3,"FingerGoodix",
                            "[%-20s]fnCa_verify_bmp:coverage = %d, quality = %d, result = %d, score = %d, update = %d, recognize_time = %d."
                            ,"fnCa_verify_bmp",local_428._4_4_,local_420 & 0xffffffff,
                            local_430 & 0xffffffff,local_430._4_4_,(undefined4)local_428);
        if (param_3 != (ulong *)0x0) {
          param_3[2] = local_420;
          *param_3 = local_430;
          param_3[1] = local_428;
        }
        if (iVar5 == 0) {
          free(__dest);
          free(__dest_00);
          uVar7 = 0;
          goto LAB_0010cc68;
        }
      }
    }
LAB_0010cc54:
    free(__dest);
    free(__dest_00);
    uVar7 = 0xffffffff;
  }
LAB_0010cc68:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_del_bmp_template(void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10c;
  undefined auStack_108 [256];
  long local_8;
  
  local_10c = 0;
  local_8 = ___stack_chk_guard;
  memset(auStack_108,0,0xff);
  memcpy(auStack_108,param_1,(long)param_2);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_del_bmp_template:lable_len = %d,lable = %s.",
                      "fnCa_del_bmp_template",param_2 + 1U,auStack_108);
  iVar1 = gx_ta_send_command(0x22,auStack_108,param_2 + 1U,&local_10c,4);
  uVar2 = local_10c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_get_hardware_info(undefined4 *param_1)

{
  int iVar1;
  undefined auStack_1c [4];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_18 = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x23,auStack_1c,4,&local_18,0xc);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_get_hardware_info:row = %d, column = %d.",
                      "fnCa_get_hardware_info",local_18 & 0xffffffff,local_18._4_4_);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)local_18;
    param_1[1] = local_18._4_4_;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnca_get_max_enollnum(undefined4 *param_1)

{
  int iVar1;
  undefined auStack_10 [4];
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x44,auStack_10,4,&local_c,4);
  __android_log_print(3,"FingerGoodix","[%-20s]fnca_get_max_enollnum: = %d.","fnca_get_max_enollnum"
                      ,local_c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



undefined8 fnCa_get_supportgsc_info(undefined4 *param_1)

{
  *param_1 = g_ta_sensor_info._28_4_;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_mp_test(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int local_124 [3];
  int local_118;
  int local_114;
  undefined auStack_110 [8];
  uint local_108;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_124[0] = param_1;
  memset(auStack_110,0,0x108);
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_mp_test step = : %d.","fnCa_mp_test",
                      local_124[0]);
  iVar2 = local_124[0];
  if (local_124[0] == 0) {
    local_114 = 0;
    iVar1 = gx_ta_send_command(0x24,&local_114,4,auStack_110,0x108);
LAB_0010e0c0:
    if (iVar1 == 0) {
      if (param_2 != (void *)0x0) {
        memcpy(param_2,auStack_110,0x108);
      }
      uVar3 = 0;
      goto LAB_0010e0dc;
    }
  }
  else {
    if (local_124[0] == 2) {
      local_114 = 9;
      iVar1 = gx_ta_send_command(0x24,&local_114,4,&local_118,4);
      local_114 = iVar2;
      iVar2 = 0;
      if (0 < local_118) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          gx_ta_send_command(0x24,&local_114,4,auStack_110,0x108);
          if (local_108 == 1) {
            iVar2 = iVar2 + 1;
          }
        } while (iVar4 < local_118);
      }
      __android_log_print(3,"FingerGoodix","[%-20s]performance_num =%d; num = %d","fnCa_mp_test",
                          iVar2);
      local_108 = (uint)(local_118 == iVar2);
      goto LAB_0010e0c0;
    }
    if (local_124[0] != 5) {
LAB_0010e0a4:
      iVar1 = gx_ta_send_command(0x24,local_124,4,auStack_110,0x108);
      goto LAB_0010e0c0;
    }
    local_114 = *(int *)((long)param_2 + 0xa8);
    __android_log_print(3,"FingerGoodix","[%-20s]fnCaFp: defect_num = %d","fnCa_mp_test",local_114);
    iVar2 = gx_ta_send_command(0x45,&local_114,4,auStack_110,0x108);
    if (iVar2 == 0) goto LAB_0010e0a4;
  }
  uVar3 = 0xffffffff;
LAB_0010e0dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_update_template(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_update_template:index = %d",
                      "fnCa_update_template",param_1);
  iVar1 = gx_ta_send_command(0x27,local_14,4,&local_c,4);
  uVar2 = local_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetVersion(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_d4 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_10 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_8 = ___stack_chk_guard;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  iVar1 = gx_ta_send_command(0x2a,auStack_d4,4,&local_d0,0xc4);
  if (iVar1 == 0) {
    if (param_1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      memcpy(param_1,&local_d0,0xc4);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetEnrollCnt(undefined4 param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetEnrollCnt count = %d.","fnCa_SetEnrollCnt",
                      param_1);
  iVar1 = gx_ta_send_command(0x2b,local_14,4,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetEnrollCnt(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetEnrollCnt","fnCa_GetEnrollCnt");
  iVar1 = gx_ta_send_command(0x2c,&local_c,4,&local_10,4);
  if (iVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_1 = local_10;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetEnrollCnt count = %d.",
                          "fnCa_GetEnrollCnt");
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



undefined8 fnCa_get_key_from_keymaster(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Error parameter!\n","fnCa_get_key_from_keymaster");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = getKeyFromKeymaster(param_1,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      __android_log_print(6,"FingerGoodix","[%-20s]get key failed! ret: %d",
                          "fnCa_get_key_from_keymaster");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_gen_auth_token_hmac(void *param_1,int param_2,void *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined local_40c;
  int aiStack_408 [256];
  long local_8;
  
  __n = (size_t)param_2;
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa gen hmac, token:%p, tokenLen=%d",
                      "fnCa_gen_auth_token_hmac",param_1,param_2);
  memset(aiStack_408,0,0x400);
  memcpy(aiStack_408,param_1,__n);
  local_410 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_40c = 0;
  iVar1 = getKeyFromKeymaster((undefined4 *)((long)aiStack_408 + __n),0x400 - param_2);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa gen hmac, get key OK!",
                        "fnCa_gen_auth_token_hmac",0);
    iVar1 = gx_ta_send_command(0x33,aiStack_408,
                               *(int *)((long)aiStack_408 + __n + 4) +
                               *(int *)((long)aiStack_408 + __n + 8) + 0x45,&local_450,0x45);
    if (iVar1 == 0) {
      *param_4 = 0x28;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa gen hmac, outlen:%d",
                          "fnCa_gen_auth_token_hmac",0x28);
      memcpy(param_3,(void *)((long)&uStack_438 + 5),(long)*param_4);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    __android_log_print(6,"FingerGoodix","[%-20s]get key failed! ret: %d","fnCa_gen_auth_token_hmac"
                        ,iVar1);
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetHbdBase(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetHbdBase","fnCa_GetHbdBase");
  iVar1 = gx_ta_send_command(0x36,&local_c,4,param_1,4);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetHbdBase base = %d.","fnCa_GetHbdBase",
                        *param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetHbdSwitch(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdSwitch","fnCa_SetHbdSwitch");
  iVar1 = gx_ta_send_command(0x37,&local_c,4,&local_10,4);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdSwitch data = %d.","fnCa_SetHbdSwitch",
                        local_10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetHbdConfig(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdConfig","fnCa_SetHbdConfig");
  iVar1 = gx_ta_send_command(0x38,&local_c,4,&local_10,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetNavResult(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 12000000;
  local_8 = ___stack_chk_guard;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_1;
  iVar1 = gx_ta_send_command(0x41,&local_18,0x10,param_4,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetNavResultPoll(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined auStack_14 [4];
  undefined8 local_10;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = gx_ta_send_command(0x42,auStack_14,4,&local_10,8);
  lVar1 = ___stack_chk_guard;
  *param_1 = (undefined4)local_10;
  *param_2 = local_10._4_4_;
  if (local_8 == lVar1) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar2 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_preprossor_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_preprossor_init","fnCa_preprossor_init");
  iVar1 = gx_ta_send_command(0x29,&local_c,4,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_updateImageBase(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_25;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined uStack_18;
  char local_17;
  long local_8;
  
  local_24 = -1;
  local_8 = ___stack_chk_guard;
  gf_irq_is_enabled();
  local_20 = param_1;
  local_1c = param_2;
  if (param_1 == 1) {
    gx_ta_send_command(0x3c,&local_20,8,&local_24,4);
    iVar1 = local_24;
    if (local_24 < 1) goto LAB_0010eb9c;
    usleep(45000);
    fnCa_GetStatus(&uStack_18);
    if (local_17 == -0x30) {
      iVar1 = 1;
      goto LAB_0010eb9c;
    }
  }
  else {
    iVar1 = local_24;
    if (param_1 != 0) goto LAB_0010eb9c;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]--- %s ---","fnCa_updateImageBase",
                      "fnCa_updateImageBase");
  iVar1 = gx_ta_send_command(0x29,&local_20,8,&local_24,4);
  if (iVar1 == 0) {
    if (local_24 == 0x81) {
      __android_log_print(3,"FingerGoodix","[%-20s]update base time out ! reset sensor !",
                          "fnCa_updateImageBase");
      gf_disable_irq();
      fnCa_CleanStatus();
      local_25 = 1;
      fnCa_FWUpdate(&local_25);
      gf_hw_reset();
      local_25 = 2;
      fnCa_FWUpdate(&local_25);
      gf_enable_irq();
    }
    local_24 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    local_24 = -1;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]FP_REQUEST_UPDATE_IMAGE_BASE, ret = %d",
                      "fnCa_updateImageBase",uVar2);
  iVar1 = local_24;
LAB_0010eb9c:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_updateNavBase(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_14 = -1;
  local_8 = ___stack_chk_guard;
  gf_irq_is_enabled();
  local_10 = param_1;
  local_c = param_2;
  if (DAT_0012a674 == '\0') {
    __android_log_print(3,"FingerGoodix","[%-20s]=== Nav Base hasn\'t completed updation,ignore it",
                        "fnCa_updateNavBase");
    iVar1 = 0;
    goto LAB_0010ece4;
  }
  DAT_0012a674 = 0;
  if (param_1 == 1) {
    gx_ta_send_command(0x3e,&local_10,8,&local_14,4);
    if (0 < local_14) goto LAB_0010ed14;
  }
  else if (param_1 == 0) {
LAB_0010ed14:
    __android_log_print(3,"FingerGoodix","[%-20s]--- %s ---","fnCa_updateNavBase",
                        "fnCa_updateNavBase");
    iVar1 = gx_ta_send_command(0x3f,&local_10,8,&local_14,4);
    local_14 = -(uint)(iVar1 != 0);
    __android_log_print(3,"FingerGoodix","[%-20s]FP_REQUEST_UPDATE_NAV_BASE, ret = %d",
                        "fnCa_updateNavBase",local_14);
  }
  DAT_0012a674 = '\x01';
  iVar1 = local_14;
LAB_0010ece4:
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_InitHBDetection(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x30,&local_10,4,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



int fnCa_read_hbd(void *param_1,uint param_2,undefined param_3)

{
  int iVar1;
  undefined local_1;
  
  local_1 = param_3;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_read_hbd","fnCa_read_hbd");
  iVar1 = gx_ta_send_command(0x2f,&local_1,1,param_1,param_2);
  return -(uint)(iVar1 != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_read_image(byte param_1)

{
  int iVar1;
  undefined4 local_10;
  uint local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_read_image","fnCa_read_image");
  local_c = (uint)param_1;
  iVar1 = gx_ta_send_command(0x66,&local_c,4,&local_10,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetHBData(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_2c = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_10 = 0;
  uVar1 = gx_ta_send_command(0x2f,&local_2c,4,&local_28,0x1c);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      param_1[2] = local_18;
      *(undefined4 *)(param_1 + 3) = local_10;
      *param_1 = local_28;
      param_1[1] = uStack_20;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_getHBRawData(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_24 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_8 = ___stack_chk_guard;
  local_10 = 0;
  iVar1 = gx_ta_send_command(0x6a,&local_24,4,&local_20,0x18);
  if (iVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_1[2] = local_10;
      uVar2 = 0;
      *param_1 = local_20;
      param_1[1] = uStack_18;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_getGscHbdRet(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_34 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_8 = ___stack_chk_guard;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  iVar1 = gx_ta_send_command(0x6b,&local_34,4,&local_30,0x28);
  if (iVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_1[4] = local_10;
      uVar2 = 0;
      *param_1 = local_30;
      param_1[1] = uStack_28;
      param_1[2] = local_20;
      param_1[3] = uStack_18;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_recoverFwCfg(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = gx_ta_send_command(0x39,&local_10,4,&local_c,4);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      *param_1 = local_c;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetGscData(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]-----------fnCa_GetGscData--------","fnCa_GetGscData"
                     );
  local_54 = 0;
  local_10 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  iVar1 = gx_ta_send_command(0x69,&local_54,4,&local_50,0x48);
  if (iVar1 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_1[8] = local_10;
      uVar2 = 0;
      *param_1 = local_50;
      param_1[1] = uStack_48;
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      param_1[4] = local_30;
      param_1[5] = uStack_28;
      param_1[6] = local_20;
      param_1[7] = uStack_18;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_enableGsc(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_10 = param_1;
  iVar1 = gx_ta_send_command(0x67,&local_10,4,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_controlSampling(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_10 = param_1;
  iVar1 = gx_ta_send_command(0x31,&local_10,4,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_dump_data(long param_1,uint param_2)

{
  int iVar1;
  void *__s;
  undefined8 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_dump_data TYPE = %d","fnCa_dump_data",param_2);
  if ((param_2 < 0xe) && (param_1 != 0)) {
    __s = malloc(0x173cc);
    if (__s == (void *)0x0) {
      __android_log_print(6,"FingerGoodix","[%-20s]%s malloc fail","fnCa_dump_data","fnCa_dump_data"
                         );
      uVar2 = 0xffffffff;
    }
    else {
      memset(__s,0,0x173cc);
      __android_log_print(3,"FingerGoodix","[%-20s]TEE VERSION!","fnCa_dump_data");
      iVar1 = gx_ta_send_command_ex(0x3a,&local_c,4,(void *)0x0,0,__s);
      if (iVar1 == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]width = %d , height = %d","fnCa_dump_data",
                            *(undefined4 *)((long)__s + 0x173c4),
                            *(undefined4 *)((long)__s + 0x173c8));
        gf_dump_data_interface((long)__s,param_2,param_1);
        free(__s);
        uVar2 = 0;
      }
      else {
        __android_log_print(6,"FingerGoodix","[%-20s]get dump data  fail","fnCa_dump_data");
        free(__s);
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    __android_log_print(6,"FingerGoodix","[%-20s]%s param error","fnCa_dump_data","fnCa_dump_data");
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_set_active_group(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0;
  local_10 = param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]groupID = %d","fnCa_set_active_group",param_1);
  iVar1 = gx_ta_send_command(0x3d,&local_10,4,&local_c,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_GetIndexByFeatureID(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  local_c = param_1;
  iVar1 = gx_ta_send_command(0x43,&local_c,4,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_LoadAllFpData(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  if (param_1 == (void *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fpData == NULL","fnCa_LoadAllFpData");
    iVar1 = -1;
  }
  else {
    iVar1 = gx_ta_send_command(0x6d,&local_c,4,param_1,0x80);
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_enable_stable_check(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  local_c = param_1;
  iVar1 = gx_ta_send_command(0x6e,&local_c,4,&local_10,4);
  uVar2 = local_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



undefined4 keymaster_ta_start(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]%s","keymaster_ta_start","keymaster_ta_start");
  if (g_keymaster_handle == 0) {
    uVar1 = QSEECom_start_app(&g_keymaster_handle,"/firmware/image",keymaster_name,comm_buf_size);
    puVar2 = (undefined4 *)__errno();
    __android_log_print(3,"FingerGoodix","[%-20s]Loading %s: ret=%d, errno=%d.","keymaster_ta_start"
                        ,keymaster_name,uVar1,*puVar2);
  }
  __android_log_print(3,"FingerGoodix","[%-20s]km handle=%p","keymaster_ta_start",g_keymaster_handle
                     );
  return uVar1;
}



undefined8 keymaster_ta_stop(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_keymaster_handle == 0) {
    return 0;
  }
  iVar1 = QSEECom_shutdown_app(&g_keymaster_handle);
  if (iVar1 == 0) {
    g_keymaster_handle = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]Unload %s succeed.","keymaster_ta_stop",
                        keymaster_name);
    return 0;
  }
  puVar2 = (undefined4 *)__errno();
  __android_log_print(6,"FingerGoodix","[%-20s]Unload %s failed: ret=%d, errno=%d",
                      "keymaster_ta_stop",keymaster_name,iVar1,*puVar2);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void getKeyFromKeymaster(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  keymaster_ta_start();
  if (g_keymaster_handle == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    do {
      local_10 = 0x205;
      local_c = 2;
      iVar1 = QSEECom_send_cmd(g_keymaster_handle,&local_10,8,param_1,param_2);
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]km get key ret:%d, token_rsp:%p, rsp.status:0x%x, rsp.offset:%d, rsp.len:%d"
                          ,"getKeyFromKeymaster",iVar1,param_1,*param_1,param_1[1],param_1[2]);
      if ((5 < iVar2) || (iVar1 == 0)) {
        if (iVar2 < 6) {
          __android_log_print(3,"FingerGoodix","[%-20s]get key success.","getKeyFromKeymaster");
          iVar2 = property_get_int32("persist.close.keymaster",0);
          goto joined_r0x0010fa90;
        }
        iVar1 = -1;
        __android_log_print(6,"FingerGoodix","[%-20s]get key failed!","getKeyFromKeymaster");
        break;
      }
      iVar2 = iVar2 + 1;
      __android_log_print(3,"FingerGoodix","[%-20s]get key failed, will retry later.",
                          "getKeyFromKeymaster");
      keymaster_ta_stop();
      usleep(100000);
      g_keymaster_handle = 0;
      keymaster_ta_start();
    } while (g_keymaster_handle != 0);
  }
  iVar2 = property_get_int32("persist.close.keymaster",0);
joined_r0x0010fa90:
  if (iVar2 == 1) {
    keymaster_ta_stop();
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(iVar1);
  }
  return;
}



undefined8 FUN_0010fac8(void)

{
  return 0;
}



int fnCa_OpenSession(void)

{
  int iVar1;
  
  iVar1 = gx_ta_start();
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Ta start success.","fnCa_OpenSession");
    return iVar1;
  }
  __android_log_print(6,"FingerGoodix","[%-20s]Ta start failed.","fnCa_OpenSession");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void device_enable(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cStack_11;
  char acStack_10 [8];
  long lStack_8;
  
  cStack_11 = '\0';
  lStack_8 = ___stack_chk_guard;
  iVar1 = gf_open();
  if (iVar1 < 1) {
    uVar3 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]Failed to open device.\n","device_enable");
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]BUILD INFO: %s,%s","device_enable","Jan 16 2018",
                        "14:39:49");
    uVar2 = fnCa_Init(iVar1,g_ta_sensor_info);
    if (uVar2 == 0) {
      uVar4 = (ulong)(uint)g_ta_sensor_info._12_4_;
      sprintf(acStack_10,"%d",uVar4);
      __android_log_print(3,"FingerGoodix","[%-20s]Fingerprint module vendor_id = %d",
                          "device_enable",uVar4);
      __system_property_set("sys.fp.vid",acStack_10);
      sem_init((sem_t *)g_hbd_sem,0,0);
      sem_init((sem_t *)g_down_sem,0,0);
      sem_init((sem_t *)g_image_sem,0,0);
      sem_init((sem_t *)g_up_sem,0,0);
      sem_init((sem_t *)g_sigio_sem,0,0);
      DAT_0012a8b0 = 0;
      g_state = 0;
      uVar3 = gf_disable_irq();
      if ((int)uVar3 < 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]Failed to set para in gf_disable_irq.\n",
                            "device_enable");
      }
      cStack_11 = '\0';
      gf_hw_reset();
      iVar1 = fnCa_FWUpdate(&cStack_11);
      if ((iVar1 == -1) || (cStack_11 != '\0')) {
        uVar3 = 0xffffffff;
        __android_log_print(3,"FingerGoodix","[%-20s]fnCa_FWUpdate() FAILURE, stop running!",
                            "device_enable");
        gf_close();
      }
      else {
        gf_handler_register((ulong)sig_handler);
        gf_enable_irq();
        iVar1 = pthread_create((pthread_t *)&DAT_0012a8b8,(pthread_attr_t *)0x0,sig_handler_loop,
                               (void *)0x0);
        if (iVar1 == 0) {
          iVar1 = property_get_int32("persist.enable.esd",0);
          if (iVar1 == 1) {
            gf_init_esd_timer();
          }
          iVar1 = gf_create_timer((timer_t *)&DAT_0012a008,sigtimer_click_fn);
          if (iVar1 == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]create doubleclick timer succssfully!",
                                "device_enable");
            iVar1 = gf_create_timer((timer_t *)&DAT_0012a018,sigtimer_longpress_fn);
          }
          else {
            iVar1 = gf_create_timer((timer_t *)&DAT_0012a018,sigtimer_longpress_fn);
          }
          uVar3 = 0;
          if (iVar1 == 0) {
            uVar3 = 0;
            __android_log_print(3,"FingerGoodix","[%-20s]create longpress timer succssfully!",
                                "device_enable");
          }
        }
        else {
          gf_handler_unregister();
          gf_close();
          uVar3 = 0xffffffff;
          __android_log_print(3,"FingerGoodix","[%-20s]Failed in pthread_create. ret = %d\n",
                              "device_enable",iVar1);
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","[%-20s]fnCa_Init() FAILURE, stop running!",
                          "device_enable");
      __android_log_buf_print(7,7,"BBox::UEC","39::11");
    }
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar3);
  }
  return;
}



undefined8 FUN_0010fad8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *__s;
  undefined8 uVar2;
  
  if (param_3 == (undefined8 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]NULL device on open","fingerprint_open");
    uVar2 = 0xffffffea;
  }
  else {
    __s = (undefined4 *)malloc(0x310);
    memset(__s,0,0x310);
    *(undefined8 *)(__s + 2) = param_1;
    *__s = 0x48574454;
    *(code **)(__s + 0x1c) = FUN_0011058c;
    *(code **)(__s + 0x22) = fnCa_OpenSession;
    *(code **)(__s + 0x24) = fnCa_CloseSession;
    *(code **)(__s + 0x26) = FUN_0011057c;
    *(code **)(__s + 0x28) = fnCa_Reset;
    *(code **)(__s + 0x2a) = FUN_00110398;
    *(code **)(__s + 0x2c) = FUN_00110570;
    *(code **)(__s + 0x2e) = fnCa_SetModeCancel;
    *(code **)(__s + 0x30) = FUN_00110564;
    *(code **)(__s + 0x32) = fnCa_CancelRegister;
    *(code **)(__s + 0x34) = FUN_00110550;
    *(code **)(__s + 0x36) = FUN_00110540;
    *(code **)(__s + 0x38) = FUN_00110530;
    *(code **)(__s + 0x3a) = FUN_0011051c;
    *(code **)(__s + 0x3c) = fnCa_CancelRecognize;
    *(code **)(__s + 0x3e) = FUN_0011050c;
    *(code **)(__s + 0x40) = FUN_00110500;
    *(code **)(__s + 0x42) = FUN_001104ec;
    *(code **)(__s + 0x44) = FUN_001104e0;
    *(code **)(__s + 0x46) = fnCa_LoadFpAlogParams;
    *(code **)(__s + 0x6a) = FUN_001104c4;
    *(code **)(__s + 0x48) = fnCa_DriverTest;
    *(code **)(__s + 0x6e) = FUN_001104ac;
    *(code **)(__s + 0x70) = FUN_0011049c;
    *(code **)(__s + 0x72) = FUN_0011048c;
    *(code **)(__s + 0x78) = fnCa_reg_from_bmp_cancel;
    *(code **)(__s + 0x74) = FUN_0011047c;
    *(code **)(__s + 0x76) = FUN_0011046c;
    *(code **)(__s + 0x7a) = FUN_00110460;
    *(code **)(__s + 0x7c) = FUN_00110458;
    __s[1] = 0x100;
    *(code **)(__s + 0x7e) = FUN_00110450;
    *(code **)(__s + 0x80) = FUN_00110448;
    *(code **)(__s + 0x82) = FUN_0011043c;
    *(code **)(__s + 0x8a) = FUN_00110434;
    *(code **)(__s + 0x8c) = FUN_0011042c;
    *(code **)(__s + 0x98) = FUN_00110424;
    *(code **)(__s + 0x9a) = fnCa_SetHbdSwitch;
    *(code **)(__s + 0x9c) = fnCa_SetHbdConfig;
    *(code **)(__s + 0x84) = FUN_00110414;
    *(code **)(__s + 0x86) = FUN_00110408;
    *(code **)(__s + 0x88) = FUN_001105b0;
    *(code **)(__s + 0xb2) = fnCa_get_key_from_keymaster;
    *(code **)(__s + 0xb4) = FUN_001103a0;
    *(code **)(__s + 0x4c) = FUN_00110390;
    *(code **)(__s + 0x4e) = FUN_00110388;
    *(code **)(__s + 0x50) = device_enable;
    *(code **)(__s + 0x52) = device_disable;
    *(code **)(__s + 0x54) = FUN_00110350;
    *(code **)(__s + 0x56) = FUN_0011031c;
    *(code **)(__s + 0x58) = FUN_00110310;
    *(code **)(__s + 0x5a) = FUN_00110308;
    *(code **)(__s + 0x5c) = FUN_00110300;
    *(code **)(__s + 0x5e) = FUN_001102f8;
    *(code **)(__s + 0x62) = FUN_001102f0;
    *(code **)(__s + 100) = FUN_001102e8;
    *(code **)(__s + 0x66) = FUN_001102e0;
    *(code **)(__s + 0x68) = device_cancel_waitfinger;
    *(code **)(__s + 0x4a) = FUN_0010fac8;
    *(code **)(__s + 0x6c) = FUN_001102c4;
    *(code **)(__s + 0x8e) = FUN_001102bc;
    *(code **)(__s + 0x90) = FUN_00110270;
    *(code **)(__s + 0x92) = FUN_0011022c;
    *(code **)(__s + 0x94) = FUN_001101e8;
    *(code **)(__s + 0x96) = FUN_001101a4;
    *(code **)(__s + 0x9e) = FUN_0011015c;
    *param_3 = __s;
    *(code **)(__s + 0xa0) = device_HBCheckUp;
    *(code **)(__s + 0xa2) = device_cancel_waitHB;
    *(code **)(__s + 0xa4) = device_InitialHBAlgorithmBuffer;
    *(code **)(__s + 0xa6) = FUN_00110148;
    *(code **)(__s + 0xa8) = FUN_0011013c;
    *(code **)(__s + 0xaa) = FUN_0011012c;
    *(code **)(__s + 0xac) = FUN_001100e0;
    *(code **)(__s + 0xae) = FUN_00110098;
    *(code **)(__s + 0xb6) = FUN_00110054;
    *(code **)(__s + 0xb0) = FUN_0011000c;
    *(code **)(__s + 0xb8) = FUN_0010ffc4;
    *(code **)(__s + 0xba) = FUN_0010ff90;
    iVar1 = fnCa_OpenSession();
    if (iVar1 == 0) {
      iVar1 = device_enable();
      if (iVar1 == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]gxFingerPrint open succuss!","fingerprint_open"
                           );
        uVar2 = 0;
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]fingerprint device enable failed! %d",
                            "fingerprint_open",iVar1);
        fnCa_CloseSession();
        uVar2 = 0xffffffff;
      }
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]OpenSession : %d!","fingerprint_open",iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



int fnCa_CloseSession(void)

{
  int iVar1;
  
  iVar1 = gx_ta_stop();
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Ta stop success.","fnCa_CloseSession");
    return iVar1;
  }
  __android_log_print(6,"FingerGoodix","[%-20s]Ta close failed.","fnCa_CloseSession");
  return iVar1;
}



undefined4 FUN_0010ff90(void)

{
  undefined4 uVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint restart sensor.",
                      "fingerprint_hal_restart_sensor");
  uVar1 = restart_sensor();
  return uVar1;
}



void FUN_0010ffc4(undefined8 param_1,undefined4 param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]enable_stable = %d","fingerprint_enable_stable_check"
                      ,param_2);
  fnCa_enable_stable_check(param_2);
  return;
}



void FUN_0011000c(undefined8 param_1,undefined4 param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_GetIndexByFeatureID = %d",
                      "fingerprint_hal_GetIndexByFeatureID",param_2);
  fnCa_GetIndexByFeatureID(param_2);
  return;
}



void FUN_00110054(undefined8 param_1,void *param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint_load_all_fpdata",
                      "fingerprint_load_all_fpdata");
  fnCa_LoadAllFpData(param_2);
  return;
}



void FUN_00110098(undefined8 param_1,undefined4 param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]groupID = %d","fingerprint_set_active_group",param_2)
  ;
  fnCa_set_active_group(param_2);
  return;
}



void FUN_001100e0(undefined8 param_1,long param_2,uint param_3)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint dump data","fingerprint_dump_data");
  fnCa_dump_data(param_2,param_3);
  return;
}



void FUN_0011012c(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  device_enableNavClick(param_2,param_3,param_4);
  return;
}



void FUN_0011013c(undefined8 param_1,undefined4 param_2)

{
  device_enableKeyMode(param_2);
  return;
}



void FUN_00110148(undefined8 param_1,undefined4 param_2)

{
  device_enableGsc(param_2);
  return;
}



void device_InitialHBAlgorithmBuffer(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_InitialHBAlgorithmBuffer ",
                      "device_InitialHBAlgorithmBuffer");
  return;
}



void device_cancel_waitHB(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_cancel_waitHB ","device_cancel_waitHB");
  DAT_0012a8c0 = 1;
  return;
}



undefined8 device_HBCheckUp(void)

{
  if (DAT_0012a8a8 != 0) {
    DAT_0012a8a8 = 0;
    return 0;
  }
  return 0xffffffff;
}



void FUN_0011015c(undefined8 param_1,int param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]GxFingerPrint.c waitHB time = %d",
                      "fingerprint_hal_dev_waitHB",param_2);
  device_waitHB(param_2);
  return;
}



void FUN_001101a4(undefined8 param_1,undefined4 *param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]GxFingerPrint.c recoverFwCfg ",
                      "fingerprint_hal_dev_recoverFwCfg");
  device_recoverFwCfg(param_2);
  return;
}



void FUN_001101e8(undefined8 param_1,undefined8 *param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]GxFingerPrint.c getGscHbdRet ",
                      "fingerprint_hal_dev_getGscHbdRet");
  device_getGscHbdRet(param_2);
  return;
}



void FUN_0011022c(undefined8 param_1,undefined8 *param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]GxFingerPrint.c getHBRawData ",
                      "fingerprint_hal_dev_getHBRawData");
  device_getHBRawData(param_2);
  return;
}



void FUN_00110270(undefined8 param_1,undefined8 *param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]GxFingerPrint.c fingerprint_GetGscData ",
                      "fingerprint_hal_dev_getGscData");
  fnCa_GetGscData(param_2);
  return;
}



void FUN_001102bc(undefined8 param_1,undefined8 *param_2)

{
  device_getHBData(param_2);
  return;
}



void FUN_001102c4(undefined8 param_1,void **param_2,ulong param_3,undefined *param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  fnCa_Fido_Recognize(param_2,param_3 & 0xffffffff,param_4,param_5,param_6);
  return;
}



void device_cancel_waitfinger(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]device_cancel_waitfinger ","device_cancel_waitfinger"
                     );
  DAT_0012a8b0 = 1;
  return;
}



void FUN_001102e0(undefined8 param_1,undefined8 param_2)

{
  device_notify(param_2);
  return;
}



void FUN_001102e8(undefined8 param_1,undefined *param_2)

{
  device_getMode(param_2);
  return;
}



void FUN_001102f0(undefined8 param_1,int param_2)

{
  device_irq_control(param_2);
  return;
}



void FUN_001102f8(undefined8 param_1,int param_2)

{
  device_mp_pin(param_2);
  return;
}



void FUN_00110300(undefined8 param_1,int param_2)

{
  device_waitForFingerUp(param_2);
  return;
}



void FUN_00110308(undefined8 param_1,int param_2)

{
  device_waitForFinger(param_2);
  return;
}



void FUN_00110310(undefined8 param_1,ulong param_2,long param_3)

{
  device_action(param_2 & 0xffffffff,param_3);
  return;
}



void FUN_0011031c(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint irq disable.",
                      "fingerprint_hal_irq_disable");
  irq_disable();
  return;
}



void FUN_00110350(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint irq enable","fingerprint_hal_irq_enable")
  ;
  irq_enable();
  return;
}



undefined8 device_disable(void)

{
  int iVar1;
  
  g_state = 0;
  gf_delete_esd_timer();
  iVar1 = gf_delete_timer((timer_t *)&DAT_0012a008);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]delete doubleclick timer succssfully",
                        "device_disable");
  }
  iVar1 = gf_delete_timer((timer_t *)&DAT_0012a018);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]delete longpress timer succssfully",
                        "device_disable");
  }
  gf_handler_unregister();
  gf_close();
  DAT_0012a8b0 = 1;
  event_notify = 0;
  return 0;
}



void FUN_00110388(undefined8 param_1,void *param_2)

{
  device_getVersion(param_2);
  return;
}



void FUN_00110390(undefined8 param_1,byte param_2)

{
  device_setMode(param_2);
  return;
}



void FUN_00110398(undefined8 param_1,byte param_2)

{
  device_setMode(param_2);
  return;
}



void FUN_001103a0(void *param_1,int param_2,void *param_3,int *param_4)

{
  __android_log_print(3,"FingerGoodix","[%-20s]fingerprint_gen_auth_token_hmac()",
                      "fingerprint_gen_auth_token_hmac");
  fnCa_gen_auth_token_hmac(param_1,param_2,param_3,param_4);
  return;
}



undefined8 fnCa_get_key_from_keymaster(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]Error parameter!\n","fnCa_get_key_from_keymaster");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = getKeyFromKeymaster(param_1,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      __android_log_print(6,"FingerGoodix","[%-20s]get key failed! ret: %d",
                          "fnCa_get_key_from_keymaster");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



void FUN_00110408(void)

{
  fnCa_updateImageBase(0,0);
  return;
}



void FUN_00110414(undefined8 param_1,undefined4 param_2)

{
  fnCa_update_template(param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetHbdConfig(void)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_c = 0;
  uStack_10 = 0;
  lStack_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdConfig","fnCa_SetHbdConfig");
  iVar1 = gx_ta_send_command(0x38,&uStack_c,4,&uStack_10,4);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_SetHbdSwitch(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdSwitch","fnCa_SetHbdSwitch");
  iVar1 = gx_ta_send_command(0x37,&uStack_c,4,&uStack_10,4);
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_SetHbdSwitch data = %d.","fnCa_SetHbdSwitch",
                        uStack_10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



void FUN_00110424(undefined8 param_1,undefined4 *param_2)

{
  fnCa_GetHbdBase(param_2);
  return;
}



void FUN_0011042c(undefined8 param_1,undefined4 *param_2)

{
  fnCa_GetEnrollCnt(param_2);
  return;
}



void FUN_00110434(undefined8 param_1,undefined4 param_2)

{
  fnCa_SetEnrollCnt(param_2);
  return;
}



void FUN_0011043c(undefined8 param_1,int param_2,void *param_3)

{
  fnCa_mp_test(param_2,param_3);
  return;
}



void FUN_00110448(undefined8 param_1,undefined4 *param_2)

{
  fnCa_get_supportgsc_info(param_2);
  return;
}



void FUN_00110450(undefined8 param_1,undefined4 *param_2)

{
  fnca_get_max_enollnum(param_2);
  return;
}



void FUN_00110458(undefined8 param_1,undefined4 *param_2)

{
  fnCa_get_hardware_info(param_2);
  return;
}



void FUN_00110460(undefined8 param_1,void *param_2,int param_3)

{
  fnCa_del_bmp_template(param_2,param_3);
  return;
}



void FUN_0011046c(undefined8 param_1,uint *param_2,ulong param_3,ulong *param_4)

{
  fnCa_verify_bmp(param_2,param_3 & 0xffffffff,param_4);
  return;
}



void FUN_0011047c(undefined8 param_1,void *param_2,int param_3)

{
  fnCa_reg_save(param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_reg_from_bmp_cancel(void)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x21,&uStack_c,4,&uStack_10,4);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



void FUN_0011048c(undefined8 param_1,int *param_2,ulong param_3,undefined4 *param_4)

{
  fnCa_reg_from_bmp_in_enrollpic_test(param_2,param_3 & 0xffffffff,param_4);
  return;
}



void FUN_0011049c(undefined8 param_1,void *param_2,int param_3,undefined4 *param_4)

{
  fnCa_reg_from_bmp(param_2,param_3,param_4);
  return;
}



void FUN_001104ac(undefined8 param_1,void **param_2,uint *param_3,ulong *param_4,uint param_5)

{
  fnCa_GetBitmap(param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_DriverTest(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x11,&uStack_c,4,&uStack_10,4);
  uVar2 = uStack_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



void FUN_001104c4(void)

{
  fnCa_ali_invoke_command();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_LoadFpAlogParams(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0x10,(void *)0x0,0,&uStack_c,4);
  uVar2 = uStack_c;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



void FUN_001104e0(undefined8 param_1,void *param_2,uint param_3)

{
  fnCa_VerifyFpPassword(param_2,param_3);
  return;
}



void FUN_001104ec(undefined8 param_1,void *param_2,ulong param_3,void *param_4,uint param_5)

{
  fnCa_ChangeFpPassword(param_2,param_3 & 0xffffffff,param_4,param_5);
  return;
}



void FUN_00110500(undefined8 param_1,void *param_2,uint *param_3)

{
  fnCa_GetFpTemplateIdList(param_2,param_3);
  return;
}



void FUN_0011050c(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  fnCa_DelFpTemplates(param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CancelRecognize(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(0xb,&uStack_c,4,&uStack_10,4);
  DAT_0012a938 = 0;
  uVar2 = uStack_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



void FUN_0011051c(undefined8 param_1,void **param_2,ulong param_3,undefined *param_4,
                 undefined4 *param_5)

{
  fnCa_Recognize(param_2,param_3 & 0xffffffff,param_4,param_5);
  return;
}



int FUN_00110530(undefined8 param_1,undefined4 param_2,void *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = fnCa_ChangeFpNameById(param_2,param_3,param_4);
  return iVar1;
}



int FUN_00110540(undefined8 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = fnCa_GetFpNameById(param_2,param_3);
  return iVar1;
}



void FUN_00110550(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  fnCa_SaveRegisteredFp(param_2,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_CancelRegister(void)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(6,&uStack_c,4,&uStack_10,4);
  DAT_0012a938 = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(-(uint)(iVar1 != 0));
}



void FUN_00110564(undefined8 param_1,undefined8 *param_2)

{
  fnCa_Register(param_2);
  return;
}



undefined8 fnCa_SetModeCancel(void)

{
  return 0;
}



void FUN_00110570(undefined8 param_1,undefined4 *param_2)

{
  fnCa_GetMode(param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fnCa_Reset(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  uStack_10 = 0;
  uStack_c = 0;
  lStack_8 = ___stack_chk_guard;
  iVar1 = gx_ta_send_command(2,&uStack_c,0,&uStack_10,4);
  uVar2 = uStack_10;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



uint FUN_0011057c(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fnCa_Init(param_2,g_ta_sensor_info);
  return uVar1;
}



undefined8 FUN_0011058c(void *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    free(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_001105b0(void)

{
  undefined8 uVar1;
  
  if (g_ta_sensor_info._56_4_ == 0) {
    return 0;
  }
  uVar1 = fnCa_updateNavBase(0,0);
  return uVar1;
}



undefined8 FUN_001105d4(char *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  FILE *__s;
  
  if ((param_1 == (char *)0x0) || (param_2 == (void *)0x0)) {
    uVar1 = 0x3e9;
  }
  else {
    __s = fopen(param_1,"wb");
    if (__s != (FILE *)0x0) {
      fwrite(param_2,1,(ulong)param_3,__s);
      fflush(__s);
      fclose(__s);
      return 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_dump_image_to_bmp_file(char *param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  FILE *__s;
  undefined local_15;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 == (char *)0x0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar2 = 0x3e9;
  }
  else {
    uVar1 = param_3 + 3 & 0xfffffffc;
    DAT_0012a7d4 = uVar1 * param_4;
    DAT_0012a7ba = 0x436;
    DAT_0012a7b2 = DAT_0012a7d4 + 0x436;
    DAT_0012a7c0 = 0x28;
    DAT_0012a7c4 = param_3;
    DAT_0012a7c8 = param_4;
    __s = fopen(param_1,"wb");
    if (__s == (FILE *)0x0) {
      uVar2 = 0;
    }
    else {
      fwrite(&DAT_0012a7b0,1,2,__s);
      fwrite(&DAT_0012a7b2,1,4,__s);
      fwrite(&DAT_0012a7b6,1,2,__s);
      fwrite(&DAT_0012a7b8,1,2,__s);
      fwrite(&DAT_0012a7ba,1,4,__s);
      fwrite(&DAT_0012a7c0,1,0x28,__s);
      local_15 = 0;
      local_14 = 0;
      do {
        fwrite(&local_14,1,1,__s);
        fwrite(&local_14,1,1,__s);
        fwrite(&local_14,1,1,__s);
        fwrite(&local_15,1,1,__s);
        local_14 = local_14 + 1;
      } while (local_14 < 0x100);
      for (local_14 = param_4 + -1; -1 < local_14; local_14 = local_14 + -1) {
        fwrite((void *)(param_2 + (ulong)(param_3 * local_14)),1,(ulong)param_3,__s);
        if (param_3 < uVar1) {
          local_10[0] = 0;
          fwrite(local_10,1,(ulong)(uVar1 - param_3),__s);
        }
      }
      fflush(__s);
      fclose(__s);
      uVar2 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gf_dump_data_interface(long param_1,uint param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  tm *ptVar11;
  undefined8 uVar12;
  FILE *__s;
  size_t sVar13;
  undefined4 *puVar14;
  char *__format;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  time_t local_820;
  timeval tStack_818;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined4 local_7f0;
  char acStack_708 [256];
  char acStack_608 [256];
  char acStack_508 [256];
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(&local_808,0,0x100);
  memset(acStack_708,0,0x100);
  __android_log_print(3,"FingerGoodix","[%-20s][%s] enter","gf_dump_data_interface",
                      "gf_dump_data_interface");
  if ((0xd < param_2 || param_3 == 0) || (param_1 == 0)) {
    __android_log_print(6,"FingerGoodix","[%-20s][%s] bad parameter","gf_dump_data_interface",
                        "gf_dump_data_interface");
    uVar10 = 0x3e9;
    goto LAB_00110a20;
  }
  uVar3 = *(uint *)(param_1 + 0x173c4);
  iVar4 = *(int *)(param_1 + 0x173c8);
  uVar8 = iVar4 * uVar3;
  __android_log_print(3,"FingerGoodix","[%-20s]operation:%d, result_str:%s, width:%d, height:%d.",
                      "gf_dump_data_interface",param_2,param_3,uVar3,iVar4);
  local_820 = time((time_t *)0x0);
  memset(acStack_608,0,0x100);
  if (0x2520 < uVar8) {
    __android_log_print(6,"FingerGoodix","[%-20s]IMAGE_BUFFER_LEN is too small",
                        "gf_dump_data_interface");
    uVar10 = 0xffffffff;
    goto LAB_00110a20;
  }
  ptVar11 = localtime(&local_820);
  gettimeofday(&tStack_818,(__timezone_ptr_t)0x0);
  sprintf(acStack_608,"%04d-%02d-%02d-%02d-%02d-%02d-%06ld",ptVar11->tm_year + 0x76c,
          ptVar11->tm_mon + 1,ptVar11->tm_mday,ptVar11->tm_hour,ptVar11->tm_min,ptVar11->tm_sec,
          tStack_818.tv_usec);
  if (param_2 < 2) {
    if (param_2 == 1) {
      sprintf((char *)&local_808,"%s%u/","/data/gf_data/enroll/",*(uint *)(param_1 + 0x173b0));
    }
    else {
      if (param_2 == 8) goto LAB_00110ae4;
      local_808._0_1_ = '/';
      local_808._1_1_ = 'd';
      local_808._2_1_ = 'a';
      local_808._3_1_ = 't';
      local_808._4_1_ = 'a';
      local_808._5_1_ = '/';
      local_808._6_1_ = 'g';
      local_808._7_1_ = 'f';
      uStack_800._0_1_ = '_';
      uStack_800._1_1_ = 'd';
      uStack_800._2_1_ = 'a';
      uStack_800._3_1_ = 't';
      uStack_800._4_1_ = 'a';
      uStack_800._5_1_ = '/';
      uStack_800._6_1_ = 'a';
      uStack_800._7_1_ = 'u';
      local_7f8._0_1_ = 't';
      local_7f8._1_1_ = 'h';
      local_7f8._2_1_ = 'e';
      local_7f8._3_1_ = 'n';
      local_7f8._4_1_ = 't';
      local_7f8._5_1_ = 'i';
      local_7f8._6_1_ = 'c';
      local_7f8._7_1_ = 'a';
      local_7f0._0_1_ = 't';
      local_7f0._1_1_ = 'e';
      local_7f0._2_1_ = '/';
      local_7f0._3_1_ = '\0';
    }
LAB_00110b0c:
    iVar9 = fs_mkdirs(&local_808,0x1ed);
    if (iVar9 < 0) {
      uVar10 = 0;
      __android_log_print(6,"FingerGoodix","[%-20s][%s] make directory(%s) fail:%d",
                          "gf_dump_data_interface","gf_dump_data_interface",&local_808);
    }
    else {
      uVar7 = uVar8 * 2;
      __android_log_print(3,"FingerGoodix","[%-20s][%s] enter","gf_dump_base_frame",
                          "gf_dump_base_frame");
      memset(acStack_508,0,0x100);
      sprintf(acStack_508,"%s%s_rawdata.bin",(char *)&local_808,acStack_608);
      FUN_001105d4(acStack_508,(void *)(param_1 + 0x94dc),uVar7);
      sprintf(acStack_508,"%s%s_kr.bin",(char *)&local_808,acStack_608);
      FUN_001105d4(acStack_508,(void *)(param_1 + 0x5c),uVar7);
      sprintf(acStack_508,"%s%s_b.bin",(char *)&local_808,acStack_608);
      uVar12 = FUN_001105d4(acStack_508,(void *)(param_1 + 0x4a9c),uVar7);
      memset(acStack_408,0,0x400);
      sprintf(acStack_508,"%s%s_base_info.csv",(char *)&local_808,acStack_608);
      __s = fopen(acStack_508,"wb");
      uVar19 = (undefined4)((ulong)tStack_818.tv_usec >> 0x20);
      if (__s != (FILE *)0x0) {
        fwrite("algo version, ",1,0xe,__s);
        sVar13 = strlen((char *)(param_1 + 4));
        fwrite((char *)(param_1 + 4),1,sVar13,__s);
        fwrite("\n",1,1,__s);
        fwrite("sensor id, ",1,0xb,__s);
        pbVar17 = (byte *)(param_1 + 0x48);
        do {
          pbVar16 = pbVar17 + 1;
          sprintf(acStack_408,"0x%02X, ",(uint)*pbVar17);
          sVar13 = strlen(acStack_408);
          fwrite(acStack_408,1,sVar13,__s);
          pbVar17 = pbVar16;
        } while (pbVar16 != (byte *)(param_1 + 0x58));
        fwrite("\n",1,1,__s);
        fwrite("vendor id, ",1,0xb,__s);
        pbVar17 = (byte *)(param_1 + 0x44);
        do {
          pbVar16 = pbVar17 + 1;
          sprintf(acStack_408,"0x%02X, ",(uint)*pbVar17);
          sVar13 = strlen(acStack_408);
          fwrite(acStack_408,1,sVar13,__s);
          uVar19 = (undefined4)((ulong)tStack_818.tv_usec >> 0x20);
          pbVar17 = pbVar16;
        } while (pbVar16 != (byte *)(param_1 + 0x48));
        fwrite("\n",1,1,__s);
        fwrite("frame num, ",1,0xb,__s);
        sprintf(acStack_408,"%04d,",*(int *)(param_1 + 0x58));
        sVar13 = strlen(acStack_408);
        fwrite(acStack_408,1,sVar13,__s);
        fwrite("\n",1,1,__s);
        fflush(__s);
        fclose(__s);
      }
      __android_log_print(3,"FingerGoodix","[%-20s][%s] exit, err:%d","gf_dump_base_frame",
                          "gf_dump_base_frame",(int)uVar12);
      pvVar1 = (void *)(param_1 + 0x1295c);
      sprintf(acStack_708,"%s%s_%s_calires.bin",(char *)&local_808,acStack_608,(char *)param_3);
      FUN_001105d4(acStack_708,(void *)(param_1 + 0xdf1c),uVar7);
      pvVar2 = (void *)(param_1 + 0x14e7c);
      sprintf(acStack_708,"%s%s_%s_databmp.bin",(char *)&local_808,acStack_608,(char *)param_3);
      FUN_001105d4(acStack_708,pvVar1,uVar8);
      sprintf(acStack_708,"%s%s_%s_databmp.bmp",(char *)&local_808,acStack_608,(char *)param_3);
      gf_dump_image_to_bmp_file(acStack_708,(long)pvVar1,uVar3,iVar4);
      sprintf(acStack_708,"%s%s_%s_sitobmp.bin",(char *)&local_808,acStack_608,(char *)param_3);
      FUN_001105d4(acStack_708,pvVar2,uVar8);
      sprintf(acStack_708,"%s%s_%s_sitobmp.bmp",(char *)&local_808,acStack_608,(char *)param_3);
      gf_dump_image_to_bmp_file(acStack_708,(long)pvVar2,uVar3,iVar4);
      if (*(int *)(param_1 + 0x1739c) != 0) {
        pvVar1 = pvVar2;
      }
      if (param_2 == 1) {
        __format = "%s%s_%s_selectbmp_%d_%d_%d_%d_%u.bmp";
        uVar7 = *(uint *)(param_1 + 0x173a0);
        uVar5 = *(uint *)(param_1 + 0x173a4);
        uVar6 = *(uint *)(param_1 + 0x173ac);
        uVar15 = *(undefined4 *)(param_1 + 0x173a8);
        uVar18 = *(undefined4 *)(param_1 + 0x173b4);
LAB_00110f84:
        sprintf(acStack_708,__format,&local_808,acStack_608,param_3,(ulong)uVar7,(ulong)uVar5,
                (ulong)uVar6,uVar15,uVar19,uVar18);
      }
      else {
        if (param_2 != 8) {
          __format = "%s%s_%s_selectbmp_%d_%d_%d_%u_%d.bmp";
          uVar7 = *(uint *)(param_1 + 0x173a0);
          uVar5 = *(uint *)(param_1 + 0x173a4);
          uVar6 = *(uint *)(param_1 + 0x173b8);
          uVar15 = *(undefined4 *)(param_1 + 0x173bc);
          uVar18 = *(undefined4 *)(param_1 + 0x173c0);
          goto LAB_00110f84;
        }
        sprintf(acStack_708,"%s%s_%s_selectbmp_%d_%d.bmp",(char *)&local_808,acStack_608,
                (char *)param_3,*(int *)(param_1 + 0x173a0),*(int *)(param_1 + 0x173a4));
      }
      gf_dump_image_to_bmp_file(acStack_708,(long)pvVar1,uVar3,iVar4);
      puVar14 = (undefined4 *)strstr(acStack_708,".bmp");
      *puVar14 = 0x6e69622e;
      *(undefined *)(puVar14 + 1) = 0;
      uVar10 = FUN_001105d4(acStack_708,pvVar1,uVar8);
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  else {
    uVar10 = 0;
    if (param_2 == 8) {
LAB_00110ae4:
      local_808._0_1_ = '/';
      local_808._1_1_ = 'd';
      local_808._2_1_ = 'a';
      local_808._3_1_ = 't';
      local_808._4_1_ = 'a';
      local_808._5_1_ = '/';
      local_808._6_1_ = 'g';
      local_808._7_1_ = 'f';
      uStack_800._0_1_ = '_';
      uStack_800._1_1_ = 'd';
      uStack_800._2_1_ = 'a';
      uStack_800._3_1_ = 't';
      uStack_800._4_1_ = 'a';
      uStack_800._5_1_ = '/';
      uStack_800._6_1_ = 'f';
      uStack_800._7_1_ = 'r';
      local_7f8._0_7_ = 0x2f7261665f72;
      goto LAB_00110b0c;
    }
  }
  __android_log_print(3,"FingerGoodix","[%-20s][%s] exit","gf_dump_data_interface",
                      "gf_dump_data_interface");
LAB_00110a20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar10);
}


