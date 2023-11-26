typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
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

typedef union sem_t sem_t, *Psem_t;

union sem_t {
    char __size[32];
    long __align;
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

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

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

typedef union pthread_condattr_t pthread_condattr_t, *Ppthread_condattr_t;

union pthread_condattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef int pthread_once_t;

typedef union pthread_cond_t pthread_cond_t, *Ppthread_cond_t;

typedef struct _struct_16 _struct_16, *P_struct_16;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void * __mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

union pthread_cond_t {
    struct _struct_16 __data;
    char __size[48];
    longlong __align;
};

typedef ulong pthread_t;

typedef uint pthread_key_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef struct wp<android::FpService::Client> wp<android::FpService::Client>, *Pwp<android::FpService::Client>;

struct wp<android::FpService::Client> { // PlaceHolder Class Structure
};

typedef dword fpalgo_act_status;

typedef struct hw_auth_token_t hw_auth_token_t, *Phw_auth_token_t;

struct hw_auth_token_t { // PlaceHolder Structure
};

typedef dword fingerprint_chip_mode;

typedef dword Enroll_Verify_Status;

typedef struct __class_type_info __class_type_info, *P__class_type_info;

struct __class_type_info { // PlaceHolder Structure
};

typedef struct __foreign_exception __foreign_exception, *P__foreign_exception;

struct __foreign_exception { // PlaceHolder Structure
};

typedef struct __forced_unwind __forced_unwind, *P__forced_unwind;

struct __forced_unwind { // PlaceHolder Structure
};

typedef struct __si_class_type_info __si_class_type_info, *P__si_class_type_info;

struct __si_class_type_info { // PlaceHolder Structure
};

typedef struct __dyncast_result __dyncast_result, *P__dyncast_result;

struct __dyncast_result { // PlaceHolder Structure
};

typedef dword __sub_kind;

typedef struct __upcast_result __upcast_result, *P__upcast_result;

struct __upcast_result { // PlaceHolder Structure
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct String16 String16, *PString16;

struct String16 { // PlaceHolder Structure
};

typedef struct sp sp, *Psp;

struct sp { // PlaceHolder Structure
};

typedef struct wp wp, *Pwp;

struct wp { // PlaceHolder Structure
};

typedef struct BnInterface<android::IFingerPrint> BnInterface<android::IFingerPrint>, *PBnInterface<android::IFingerPrint>;

struct BnInterface<android::IFingerPrint> { // PlaceHolder Structure
};

typedef struct FpService FpService, *PFpService;

struct FpService { // PlaceHolder Structure
};

typedef struct Vector Vector, *PVector;

struct Vector { // PlaceHolder Structure
};

typedef struct IFingerPrintService IFingerPrintService, *PIFingerPrintService;

struct IFingerPrintService { // PlaceHolder Structure
};

typedef struct Parcel Parcel, *PParcel;

struct Parcel { // PlaceHolder Structure
};

typedef struct String8 String8, *PString8;

struct String8 { // PlaceHolder Structure
};

typedef struct BnFingerPrintService BnFingerPrintService, *PBnFingerPrintService;

struct BnFingerPrintService { // PlaceHolder Structure
};

typedef struct Mutex Mutex, *PMutex;

struct Mutex { // PlaceHolder Structure
};

typedef struct sp<android::FpService> sp<android::FpService>, *Psp<android::FpService>;

struct sp<android::FpService> { // PlaceHolder Structure
};

typedef struct sp<android::FpService::Client> sp<android::FpService::Client>, *Psp<android::FpService::Client>;

struct sp<android::FpService::Client> { // PlaceHolder Structure
};

typedef struct IFingerPrint IFingerPrint, *PIFingerPrint;

struct IFingerPrint { // PlaceHolder Structure
};

typedef struct RefBase RefBase, *PRefBase;

struct RefBase { // PlaceHolder Structure
};

typedef dword fpContext;

typedef struct BnInterface<android::IFingerPrintService> BnInterface<android::IFingerPrintService>, *PBnInterface<android::IFingerPrintService>;

struct BnInterface<android::IFingerPrintService> { // PlaceHolder Structure
};

typedef struct sp<android::IFingerPrintClient> sp<android::IFingerPrintClient>, *Psp<android::IFingerPrintClient>;

struct sp<android::IFingerPrintClient> { // PlaceHolder Structure
};

typedef struct BnFingerPrint BnFingerPrint, *PBnFingerPrint;

struct BnFingerPrint { // PlaceHolder Structure
};

typedef struct BBinder BBinder, *PBBinder;

struct BBinder { // PlaceHolder Structure
};

typedef struct Client Client, *PClient;

struct Client { // PlaceHolder Structure
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




void FUN_0010b020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::detachObject(void *param_1)

{
  detachObject(param_1);
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

void android::BBinder::unlinkToDeath(wp *param_1,void *param_2,uint param_3,wp *param_4)

{
  unlinkToDeath(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BnFingerPrint::onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
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



void __thiscall android::RefBase::~RefBase(RefBase *this)

{
  ~RefBase(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IBinder::checkSubclass(void *param_1)

{
  checkSubclass(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = pthread_key_create(__key,__destr_function);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::localBinder(void)

{
  localBinder();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::checkCallingPermission(String16 *param_1)

{
  checkCallingPermission(param_1);
  return;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::findObject(void *param_1)

{
  findObject(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = pthread_once(__once_control,__init_routine);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::isBinderAlive(void)

{
  isBinderAlive();
  return;
}



void android::BnFingerPrintService::onTransact(void)

{
  onTransact();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::dump(int param_1,Vector *param_2)

{
  dump(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(__cond);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IFingerPrint::getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::weakref_type::decWeak(void *param_1)

{
  decWeak(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = pthread_cond_init(__cond,__cond_attr);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IBinder::remoteBinder(void)

{
  remoteBinder();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::linkToDeath(sp *param_1,void *param_2,uint param_3)

{
  linkToDeath(param_1,param_2,param_3);
  return;
}



void __system_property_set(void)

{
  __system_property_set();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



void hw_get_module(void)

{
  hw_get_module();
  return;
}



void dl_iterate_phdr(void)

{
  dl_iterate_phdr();
  return;
}



void __android_log_buf_print(void)

{
  __android_log_buf_print();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IInterface::asBinder(sp *param_1)

{
  asBinder(param_1);
  return;
}



void __thiscall android::IFingerPrint::IFingerPrint(IFingerPrint *this)

{
  IFingerPrint(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::onLastWeakRef(void *param_1)

{
  onLastWeakRef(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void __thiscall android::BBinder::BBinder(BBinder *this)

{
  BBinder(this);
  return;
}



void __thiscall android::RefBase::RefBase(RefBase *this)

{
  RefBase(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(__key);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(__key,__pointer);
  return iVar1;
}



void strzcmp16(void)

{
  strzcmp16();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



void android::BnFingerPrint::onTransact(void)

{
  onTransact();
  return;
}



void __thiscall android::String8::~String8(String8 *this)

{
  ~String8(this);
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

void android::RefBase::decStrong(void *param_1)

{
  decStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::incStrong(void *param_1)

{
  incStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::attachObject
               (void *param_1,void *param_2,void *param_3,
               _func_void_void_ptr_void_ptr_void_ptr *param_4)

{
  attachObject(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
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

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(__key);
  return pvVar1;
}



void __thiscall android::String8::String8(String8 *this,String16 *param_1)

{
  String8(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IFingerPrintService::getInterfaceDescriptor(void)

{
  getInterfaceDescriptor();
  return;
}



void property_set(void)

{
  property_set();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = sem_init(__sem,__pshared,__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::String8::append(char *param_1)

{
  append(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::transact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  transact(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::createWeak(void *param_1)

{
  createWeak(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::onFirstRef(void)

{
  onFirstRef();
  return;
}



void __thiscall android::IFingerPrintService::IFingerPrintService(IFingerPrintService *this)

{
  IFingerPrintService(this);
  return;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sem_getvalue(sem_t *__sem,int *__sval)

{
  int iVar1;
  
  iVar1 = sem_getvalue(__sem,__sval);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BBinder::pingBinder(void)

{
  pingBinder();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IBinder::queryLocalInterface(String16 *param_1)

{
  queryLocalInterface(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __thiscall android::IFingerPrint::~IFingerPrint(IFingerPrint *this)

{
  ~IFingerPrint(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::BnFingerPrintService::onTransact
               (uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact(param_1,param_2,param_3,param_4);
  return;
}



void __thiscall android::String8::String8(String8 *this,char *param_1)

{
  String8(this,param_1);
  return;
}



void __thiscall android::IFingerPrintService::~IFingerPrintService(IFingerPrintService *this)

{
  ~IFingerPrintService(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::onLastStrongRef(void *param_1)

{
  onLastStrongRef(param_1);
  return;
}



void __thiscall android::BBinder::~BBinder(BBinder *this)

{
  ~BBinder(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void __thiscall android::String8::String8(String8 *this)

{
  String8(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __thiscall android::String16::~String16(String16 *this)

{
  ~String16(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::weakref_type::attemptIncStrong(void *param_1)

{
  attemptIncStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IBinder::localBinder(void)

{
  localBinder();
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



void __thiscall android::String16::String16(String16 *this,char *param_1)

{
  String16(this,param_1);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::onIncStrongAttempted(uint param_1,void *param_2)

{
  onIncStrongAttempted(param_1,param_2);
  return;
}



void entry(void)

{
  __cxa_finalize(&DAT_00143000);
  return;
}



void _INIT_0(void)

{
  pthread_mutex_init((pthread_mutex_t *)android::ProcessRawDataLock,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(android::Mutex::~Mutex,android::ProcessRawDataLock,&DAT_00143000);
  pthread_mutex_init((pthread_mutex_t *)android::ProcessRawDataLock_MP,(pthread_mutexattr_t *)0x0);
  __cxa_atexit(android::Mutex::~Mutex,android::ProcessRawDataLock_MP,&DAT_00143000);
  return;
}



void _INIT_1(void)

{
  DAT_001451f0 = 0;
  DAT_001451f8 = 0;
  DAT_00145200 = 0;
  DAT_00145208 = 0;
  DAT_00145210 = 0;
  return;
}



void _INIT_2(void)

{
  int iVar1;
  
  DAT_0015522c = 0;
  iVar1 = pthread_key_create(&DAT_00155228,FUN_00115308);
  DAT_0015522c = iVar1 == 0;
  __cxa_atexit(FUN_001152ec,&DAT_00155228,&DAT_00143000);
  return;
}



void FUN_0010b748(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



// android::FpService::getChipMode()

undefined4 __thiscall android::FpService::getChipMode(FpService *this)

{
  return *(undefined4 *)(this + 0x130);
}



// android::FpService::InitialHBAlgorithmBuffer()

undefined8 __thiscall android::FpService::InitialHBAlgorithmBuffer(FpService *this)

{
  (**(code **)(*(long *)(this + 0x1a0) + 0x290))(*(long *)(this + 0x1a0));
  return 0;
}



// android::FpService::getInfo(char*)

undefined8 android::FpService::getInfo(char *param_1)

{
  return 0;
}



// android::FpService::Client::loadAllFpData(void*)

undefined8 __thiscall android::FpService::Client::loadAllFpData(Client *this,void *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*(long *)(*(long *)(this + 0x80) + 0x1a0) + 0x2d8))
                      (*(long *)(*(long *)(this + 0x80) + 0x1a0));
  }
  return uVar1;
}



// android::BnInterface<android::IFingerPrint>::onAsBinder()

BnInterface<> * __thiscall android::BnInterface<>::onAsBinder(BnInterface<> *this)

{
  return this + 8;
}



// android::BnInterface<android::IFingerPrintService>::onAsBinder()

BnInterface<> * __thiscall android::BnInterface<>::onAsBinder(BnInterface<> *this)

{
  return this + 8;
}



// android::FpService::setChipMode(fingerprint_chip_mode)

undefined8 __thiscall android::FpService::setChipMode(FpService *this,fingerprint_chip_mode param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]setChipMode = %d ","setChipMode",param_1);
  (**(code **)(*(long *)(this + 0x1a0) + 0x130))(*(long *)(this + 0x1a0),param_1);
  *(fingerprint_chip_mode *)(this + 0x130) = param_1;
  return 0;
}



// android::FpService::enableIrq()

void __thiscall android::FpService::enableIrq(FpService *this)

{
  __android_log_print(3,"FingerGoodix","[%-20s]enableIrq","enableIrq");
  (**(code **)(*(long *)(this + 0x1a0) + 0x150))();
  return;
}



// android::FpService::disableIrq()

void __thiscall android::FpService::disableIrq(FpService *this)

{
  __android_log_print(3,"FingerGoodix","[%-20s]disableIrq","disableIrq");
  (**(code **)(*(long *)(this + 0x1a0) + 0x158))();
  return;
}



// android::FpService::setCurNotifyClientID(int)

undefined8 __thiscall android::FpService::setCurNotifyClientID(FpService *this,int param_1)

{
  undefined8 uVar1;
  
  if ((uint)param_1 < 3) {
    __android_log_print(3,"FingerGoodix","[%-20s]setCurNotifyClientID:%d","setCurNotifyClientID",
                        param_1);
    *(int *)(this + 0x2d8) = param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// android::FpService::Client::getInfo()

undefined1 * android::FpService::Client::getInfo(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::getInfo","getInfo");
  __android_log_print(3,"FingerGoodix","[%-20s]%s","getInfo",algoVersion);
  return algoVersion;
}



// android::FpService::Client::setMode(int)

undefined8 __thiscall android::FpService::Client::setMode(Client *this,int param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::setMode=%d ,but no longer support.return 0!",
                      "setMode",param_1);
  return 0;
}



// android::FpService::Client::requestPermission(char const*)

undefined8 __thiscall android::FpService::Client::requestPermission(Client *this,char *param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::requestPermission:%s","requestPermission",
                      param_1);
  return 0;
}



// android::FpService::Client::sendScreenState(int)

undefined8 android::FpService::Client::sendScreenState(int param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::sendScreenState","sendScreenState");
  return 0;
}



// android::FpService::Client::setPauseRegisterState(int)

undefined8 __thiscall android::FpService::Client::setPauseRegisterState(Client *this,int param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::setPauseRegisterState,state:%d",
                      "setPauseRegisterState",param_1);
  return 0;
}



// android::FpService::Client::registRollback()

undefined8 android::FpService::Client::registRollback(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::registRollback","registRollback");
  return 0;
}



// android::FpService::Client::resetRegist()

undefined8 android::FpService::Client::resetRegist(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]Client::resetRegist","resetRegist");
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::unRegist(int)

void __thiscall android::FpService::Client::unRegist(Client *this,int param_1)

{
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::unRegist","unRegist");
  local_10[0] = param_1;
  (**(code **)(*(long *)this + 200))(this,local_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::Client::delFpTemplates(unsigned int*, unsigned int)

undefined8 __thiscall
android::FpService::Client::delFpTemplates(Client *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::delFpTemplates,count:%d","delFpTemplates",
                      param_2);
  if (0 < (int)param_2) {
    do {
      puVar1 = param_1 + uVar3;
      uVar2 = uVar3 & 0xffffffff;
      uVar3 = uVar3 + 1;
      __android_log_print(3,"FingerGoodix","[%-20s]Client::delFpTemplates,position:%d,value:%d",
                          "delFpTemplates",uVar2,*puVar1);
    } while ((int)uVar3 < (int)param_2);
  }
  (**(code **)(*(long *)(this + 0x70) + 0xf8))(*(long *)(this + 0x70),param_1,param_2);
  return 0;
}



// android::FpService::Client::getFpTemplateIdList(unsigned int*, unsigned int*)

undefined4 __thiscall
android::FpService::Client::getFpTemplateIdList(Client *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::getFpTemplateIdList,pCount:%d",
                      "getFpTemplateIdList",*param_2);
  if (*param_2 != 0) {
    puVar4 = param_1;
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      __android_log_print(3,"FingerGoodix","[%-20s]Client::getFpTemplateIdList,position:%d,value:%d"
                          ,"getFpTemplateIdList",uVar3,*puVar4);
      puVar4 = puVar4 + 1;
      uVar3 = uVar1;
    } while (uVar1 < *param_2);
  }
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]Client::getFpTemplateIdList,mHardWareContext.device,%p",
                      "getFpTemplateIdList",*(undefined8 *)(this + 0x70));
  uVar2 = (**(code **)(*(long *)(this + 0x70) + 0x100))(*(long *)(this + 0x70),param_1,param_2);
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      __android_log_print(3,"FingerGoodix","[%-20s]Client::getFpTemplateIdList,position:%d,value:%d"
                          ,"getFpTemplateIdList",uVar3,*param_1);
      param_1 = param_1 + 1;
      uVar3 = uVar1;
    } while (uVar1 < *param_2);
  }
  return uVar2;
}



// android::FpService::Client::getFpTemplateList(unsigned int*, unsigned int*, char**)

int __thiscall
android::FpService::Client::getFpTemplateList
          (Client *this,uint *param_1,uint *param_2,char **param_3)

{
  int iVar1;
  long lVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::getFpTemplateList,count:%d",
                      "getFpTemplateList",*param_1);
  if ((param_2 == (uint *)0x0) || (param_3 == (char **)0x0)) {
    __android_log_print(3,"FingerGoodix","[%-20s]some of the params is NULL in getFpTemplateList",
                        "getFpTemplateList");
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*(long *)(this + 0x70) + 0x100))(*(long *)(this + 0x70),param_2,param_1);
    if (iVar1 != 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]failed to fnCa_GetFpTemplateIdList",
                          "getFpTemplateList");
      return iVar1;
    }
    lVar2 = 0;
    if (*param_1 != 0) {
      do {
        (**(code **)(*(long *)this + 0xf0))(this,param_2[lVar2],param_3[lVar2]);
        __android_log_print(3,"FingerGoodix","[%-20s]get id:%d,name:%s","getFpTemplateList",
                            param_2[lVar2],param_3[lVar2]);
        iVar1 = (int)lVar2;
        lVar2 = lVar2 + 1;
      } while (iVar1 + 1U < *param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



// android::FpService::Client::regist()

undefined8 __thiscall android::FpService::Client::regist(Client *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::Register","regist");
  plVar2 = *(long **)(this + 0x80);
  uVar1 = *(undefined4 *)(this + 0x90);
  *(undefined4 *)((long)plVar2 + 300) = 2;
  (**(code **)(*plVar2 + 0xa0))(plVar2,uVar1);
  (**(code **)(**(long **)(this + 0x80) + 0xa8))(*(long **)(this + 0x80));
  return 0;
}



// android::FpService::Client::cancelRegist()

undefined8 __thiscall android::FpService::Client::cancelRegist(Client *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::cancelRegist","cancelRegist");
  lVar3 = *(long *)(this + 0x80);
  iVar1 = *(int *)(this + 0x90);
  *(undefined4 *)(lVar3 + 300) = 0;
  if (*(int *)(lVar3 + 0x2d8) == iVar1) {
    (**(code **)(*(long *)(this + 0x70) + 200))(*(long *)(this + 0x70));
    plVar4 = *(long **)(this + 0x80);
    uVar2 = *(uint *)(plVar4 + 0xf);
    if (((uVar2 & 0xfffffffb) != 1) && (uVar2 != 8)) {
      if (uVar2 - 6 < 2) {
        lVar3 = *plVar4;
        uVar5 = 8;
      }
      else {
        if (1 < uVar2 - 2) {
          if (1 < uVar2 - 0xd) {
            return 0xffffffff;
          }
          (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
          *(undefined4 *)(*(long *)(this + 0x80) + 0x78) = 1;
          return 0;
        }
        lVar3 = *plVar4;
        uVar5 = 5;
      }
      (**(code **)(lVar3 + 0x98))(plVar4,uVar5);
      (**(code **)(*(long *)(this + 0x70) + 0x1a0))(*(long *)(this + 0x70));
      return 0;
    }
    __android_log_print(3,"FingerGoodix","[%-20s]############ already canceled!","cancelRegist");
    uVar5 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]false!current notify id:%d,clientID:%d",
                        "cancelRegist");
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// android::FpService::Client::cancelRecognize()

undefined8 __thiscall android::FpService::Client::cancelRecognize(Client *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::cancelRecognize %d","cancelRecognize",
                      *(undefined4 *)(*(long *)(this + 0x80) + 0x78));
  plVar3 = *(long **)(this + 0x80);
  iVar1 = *(int *)(this + 0x90);
  *(undefined4 *)((long)plVar3 + 300) = 0;
  if (*(int *)(plVar3 + 0x5b) == iVar1) {
    uVar2 = *(uint *)(plVar3 + 0xf);
    if (((uVar2 & 0xfffffffb) != 1) && (uVar2 != 8)) {
      if (uVar2 - 6 < 2) {
        lVar5 = *plVar3;
        uVar4 = 8;
      }
      else {
        if (1 < uVar2 - 2) {
          if (1 < uVar2 - 0xd) {
            return 0xffffffff;
          }
          (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
          *(undefined4 *)(*(long *)(this + 0x80) + 0x78) = 1;
          return 0;
        }
        lVar5 = *plVar3;
        uVar4 = 5;
      }
      (**(code **)(lVar5 + 0x98))(plVar3,uVar4);
      (**(code **)(*(long *)(this + 0x70) + 0x1a0))(*(long *)(this + 0x70));
      return 0;
    }
    __android_log_print(3,"FingerGoodix","[%-20s]############ already canceled!","cancelRecognize");
    uVar4 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]false!current notify id:%d,clientID:%d",
                        "cancelRecognize");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// android::FpService::Client::enableHbRetrieve()

undefined8 __thiscall android::FpService::Client::enableHbRetrieve(Client *this)

{
  long *plVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]FpService:::enableHbRetrieve ","enableHbRetrieve");
  (**(code **)(*(long *)this + 0xb0))(this);
  (**(code **)(**(long **)(this + 0x80) + 0xa0))
            (*(long **)(this + 0x80),*(undefined4 *)(this + 0x90));
  plVar1 = *(long **)(this + 0x80);
  *(undefined4 *)((long)plVar1 + 300) = 4;
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  return 0;
}



// android::FpService::Client::enableHbDebugRetrieve()

undefined8 __thiscall android::FpService::Client::enableHbDebugRetrieve(Client *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]FpService:::enableHbDebugRetrieve ",
                      "enableHbDebugRetrieve");
  plVar1 = *(long **)(this + 0x80);
  if (*(char *)((long)plVar1 + 0xd5) == '\0') {
    (**(code **)(*plVar1 + 0xa0))(plVar1,*(undefined4 *)(this + 0x90));
    plVar1 = *(long **)(this + 0x80);
    *(undefined4 *)((long)plVar1 + 300) = 5;
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// android::FpService::Client::disableHbRetrieve()

undefined8 __thiscall android::FpService::Client::disableHbRetrieve(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]FpService:::disableHbRetrieve ","disableHbRetrieve");
  (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
  (**(code **)(**(long **)(this + 0x80) + 0xa0))
            (*(long **)(this + 0x80),*(undefined4 *)(this + 0x90));
  if (*(int *)(*(long *)(this + 0x80) + 0x78) != 0xd) {
    return 0xffffffff;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]disableHbRetrieve is  FPALGO_ACT_GET_HBDATA",
                      "disableHbRetrieve");
  (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),1);
  iVar1 = (**(code **)(**(long **)(this + 0x80) + 0x88))(*(long **)(this + 0x80));
  if (iVar1 != 7) {
    return 0;
  }
  (**(code **)(**(long **)(this + 0x80) + 0x68))(*(long **)(this + 0x80),0);
  return 0;
}



// android::FpService::Client::disableDebugHbRetrieve()

undefined8 __thiscall android::FpService::Client::disableDebugHbRetrieve(Client *this)

{
  __android_log_print(3,"FingerGoodix","[%-20s]FpService:::disableDebugHbRetrieve ",
                      "disableDebugHbRetrieve");
  (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
  __android_log_print(3,"FingerGoodix","[%-20s]DisableDebugHbRetrieve: mService->mCurStatus ==%d",
                      "disableDebugHbRetrieve",*(undefined4 *)(*(long *)(this + 0x80) + 0x78));
  if (*(int *)(*(long *)(this + 0x80) + 0x78) == 0xe) {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]DisableDebugHbRetrieve is FPALGO_ACT_GET_DEBUG_HBDATA; do setStatus(FPALGO_ACT_IDLE)"
                        ,"disableDebugHbRetrieve");
    (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),1);
    return 0;
  }
  return 0xffffffff;
}



// android::FpService::Client::enableGsc(int)

void __thiscall android::FpService::Client::enableGsc(Client *this,int param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]FpService :: enableGsc flag = %d","enableGsc",param_1
                     );
  (**(code **)(*(long *)(*(long *)(this + 0x80) + 0x1a0) + 0x298))
            (*(long *)(*(long *)(this + 0x80) + 0x1a0),param_1);
  return;
}



// android::FpService::Client::setActiveGroup(int)

undefined8 __thiscall android::FpService::Client::setActiveGroup(Client *this,int param_1)

{
  undefined4 uVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Set the active group GROUP id = %d ,",
                      "setActiveGroup",param_1);
  uVar1 = *(undefined4 *)(this + 0x90);
  *(int *)(*(long *)(this + 0x80) + 0x20) = param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]Client[%d] set active group to %d","setActiveGroup",
                      uVar1,param_1);
  (**(code **)(*(long *)(this + 0x70) + 0xa0))(*(long *)(this + 0x70));
  (**(code **)(*(long *)(this + 0x70) + 0x2b8))(*(long *)(this + 0x70),param_1);
  return 0;
}



// android::FpService::Client::getIndexByfeatureId(int)

void __thiscall android::FpService::Client::getIndexByfeatureId(Client *this,int param_1)

{
  __android_log_print(3,"FingerGoodix","[%-20s]FpService :: getIndexByfeatureId featureID = %d",
                      "getIndexByfeatureId",param_1);
  (**(code **)(*(long *)(*(long *)(this + 0x80) + 0x1a0) + 0x2c0))
            (*(long *)(*(long *)(this + 0x80) + 0x1a0),param_1);
  return;
}



// android::FpService::Client::handleGenericNotify(int, int, int)

void __thiscall
android::FpService::Client::handleGenericNotify(Client *this,int param_1,int param_2,int param_3)

{
  __android_log_print(3,"FingerGoodix","[%-20s]handleGenericNotify,msgType:%d, ext1:%d, ext2:%d",
                      "handleGenericNotify",param_1,param_2,param_3);
  (**(code **)(**(long **)(this + 0x88) + 0x20))(*(long **)(this + 0x88),param_1,param_2,param_3);
  return;
}



// android::FpService::Client::handleNotifyData(int, int, char*)

void __thiscall
android::FpService::Client::handleNotifyData(Client *this,int param_1,int param_2,char *param_3)

{
  __android_log_print(3,"FingerGoodix","[%-20s]handleNotifyData clientID:%d","handleNotifyData",
                      *(undefined4 *)(this + 0x90));
  (**(code **)(**(long **)(this + 0x88) + 0x28))(*(long **)(this + 0x88),param_1,param_2,param_3);
  return;
}



// android::FpService::Client::handleNotifyEvent(unsigned char, unsigned char)

void __thiscall
android::FpService::Client::handleNotifyEvent(Client *this,uchar param_1,uchar param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]handleNotifyEvent clientID:%d","handleNotifyEvent",
                      *(undefined4 *)(this + 0x90));
  (**(code **)(**(long **)(this + 0x88) + 0x20))(*(long **)(this + 0x88),5,param_1,param_2);
  return;
}



// android::FpService::Client::recognize(hw_auth_token_t*)

undefined8 __thiscall android::FpService::Client::recognize(Client *this,hw_auth_token_t *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::recognize","recognize");
  (**(code **)(*(long *)(*(long *)(this + 0x80) + 0x1a0) + 0x1a0))
            (*(long *)(*(long *)(this + 0x80) + 0x1a0));
  if ((param_1 != (hw_auth_token_t *)0x0) && (*(int *)(param_1 + 0x19) == 0x2000000)) {
    __android_log_print(3,"FingerGoodix","[%-20s]HMAC_TOKEN: save auth token to client.mHmacToken\n"
                        ,"recognize");
    this[0x65] = (Client)0x0;
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x28) = uVar5;
    lVar3 = DAT_00143060;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x38) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x58) = uVar5;
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x40);
    this[100] = *(Client *)(param_1 + 0x44);
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]HMAC_TOKEN: recognize, dump hmac token, version:0x%x, authenticator_type:0x%x, op_id:0x%lx, authenticator_id:0x%lx, secure_user_id:0x%lx,mCurNotifyClientID:%d\n"
                        ,"recognize",this[0x20],*(undefined4 *)(this + 0x39),
                        *(undefined8 *)(this + 0x21),*(undefined8 *)(this + 0x31),
                        *(undefined8 *)(this + 0x29),*(undefined4 *)(lVar3 + 0x2d8));
  }
  lVar3 = *(long *)(this + 0x80);
  *(undefined4 *)(lVar3 + 0x4c) = 5;
  uVar2 = DAT_00143018;
  uVar5 = DAT_00143010;
  *(undefined8 *)(lVar3 + 0x44) = DAT_00143020;
  *(undefined *)(lVar3 + 0x1a8) = 0;
  *(undefined8 *)(lVar3 + 0x34) = uVar5;
  *(undefined8 *)(lVar3 + 0x3c) = uVar2;
  plVar4 = *(long **)(this + 0x80);
  uVar1 = *(undefined4 *)(this + 0x90);
  *(undefined4 *)((long)plVar4 + 300) = 1;
  (**(code **)(*plVar4 + 0xa0))(plVar4,uVar1);
  (**(code **)(**(long **)(this + 0x80) + 0xa8))(*(long **)(this + 0x80));
  return 0;
}



// android::FpService::Client::recognizeFido(hw_auth_token_t*, unsigned char*, int, unsigned char*,
// int)

undefined8 __thiscall
android::FpService::Client::recognizeFido
          (Client *this,hw_auth_token_t *param_1,uchar *param_2,int param_3,uchar *param_4,
          int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::recognizeFido. \n","recognizeFido");
  if ((param_1 != (hw_auth_token_t *)0x0) && (*(int *)(param_1 + 0x19) == 0x2000000)) {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]HMAC_TOKEN: recognize fido, save auth token to client.mHmacToken\n",
                        "recognizeFido");
    this[0x65] = (Client)0x0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x28) = uVar2;
    lVar3 = DAT_00143060;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x58) = uVar2;
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x40);
    this[100] = *(Client *)(param_1 + 0x44);
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]HMAC_TOKEN: recognizeFido, dump hmac token, version:0x%x, authenticator_type:0x%x, op_id:0x%lx, authenticator_id:0x%lx, secure_user_id:0x%lx,mCurNotifyClientID:%d\n"
                        ,"recognizeFido",this[0x20],*(undefined4 *)(this + 0x39),
                        *(undefined8 *)(this + 0x21),*(undefined8 *)(this + 0x31),
                        *(undefined8 *)(this + 0x29),*(undefined4 *)(lVar3 + 0x2d8));
  }
  lVar3 = *(long *)(this + 0x80);
  *(undefined4 *)(lVar3 + 0x4c) = 5;
  uVar1 = DAT_00143018;
  uVar2 = DAT_00143010;
  *(undefined8 *)(lVar3 + 0x44) = DAT_00143020;
  *(undefined4 *)(lVar3 + 300) = 1;
  *(undefined8 *)(lVar3 + 0x34) = uVar2;
  *(undefined8 *)(lVar3 + 0x3c) = uVar1;
  __android_log_print(3,"FingerGoodix","[%-20s]Set Fido Verify.\n","recognizeFido");
  lVar3 = *(long *)(this + 0x80);
  *(undefined *)(lVar3 + 0x1a8) = 1;
  if ((param_3 < 0x21) && (param_5 < 0x21)) {
    *(int *)(lVar3 + 0x1cc) = param_3;
    *(int *)(lVar3 + 0x1f0) = param_5;
    memcpy((void *)(lVar3 + 0x1ac),param_2,(long)param_3);
    memcpy((void *)(*(long *)(this + 0x80) + 0x1d0),param_4,(long)param_5);
    (**(code **)(*(long *)(this + 0x70) + 0xa8))(*(long *)(this + 0x70),0);
    (**(code **)(**(long **)(this + 0x80) + 0xa0))
              (*(long **)(this + 0x80),*(undefined4 *)(this + 0x90));
    (**(code **)(**(long **)(this + 0x80) + 0xa8))(*(long **)(this + 0x80));
    uVar2 = 0;
  }
  else {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]Client::recognizeFido: aaidbuf or finalchanllenge_buf overflow",
                        "recognizeFido");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// android::FpService::Client::recognizeWithRestrict(unsigned int*, unsigned int, unsigned int)

undefined8 __thiscall
android::FpService::Client::recognizeWithRestrict
          (Client *this,uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::recognizeWithRestrict,length:%d",
                      "recognizeWithRestrict",param_2);
  __android_log_print(3,"FingerGoodix","[%-20s]Client::recognize","recognizeWithRestrict");
  lVar2 = *(long *)(this + 0x80);
  *(undefined4 *)(lVar2 + 300) = 1;
  *(uint *)(lVar2 + 0x4c) = param_2;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x44) = 0;
  memcpy((void *)(*(long *)(this + 0x80) + 0x34),param_1,(ulong)param_2 << 2);
  plVar3 = *(long **)(this + 0x80);
  uVar1 = *(undefined4 *)(this + 0x90);
  *(uint *)(plVar3 + 6) = param_3;
  *(undefined *)(plVar3 + 0x35) = 0;
  (**(code **)(*plVar3 + 0xa0))(plVar3,uVar1);
  (**(code **)(**(long **)(this + 0x80) + 0xa8))(*(long **)(this + 0x80));
  return 0;
}



// android::FpService::setStatus(fpalgo_act_status)

undefined8 __thiscall android::FpService::setStatus(FpService *this,fpalgo_act_status param_1)

{
  pthread_mutex_t *__mutex;
  undefined8 uVar1;
  
  __mutex = (pthread_mutex_t *)(this + 0x50);
  pthread_mutex_lock(__mutex);
                    // try { // try from 0010cd24 to 0010cd27 has its CatchHandler @ 0010ce14
  __android_log_print(3,"FingerGoodix","[%-20s]mCurStatus = %d , nextStatus = %d","setStatus",
                      *(undefined4 *)(this + 0x78),param_1);
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *(fpalgo_act_status *)(this + 0x78) = param_1;
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 0;
    switch(*(undefined4 *)(this + 0x78)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      *(undefined4 *)(this + 0x78) = 2;
    }
    break;
  case 4:
    uVar1 = 0xffffffff;
    if (*(int *)(this + 0x78) == 3) {
      *(undefined4 *)(this + 0x78) = 4;
      pthread_mutex_unlock(__mutex);
      return 0xffffffff;
    }
    break;
  case 6:
    uVar1 = 0;
    switch(*(undefined4 *)(this + 0x78)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
      *(undefined4 *)(this + 0x78) = 6;
    }
  }
  pthread_mutex_unlock(__mutex);
  return uVar1;
}



// android::FpService::Client::enableKeyMode(int, int)

undefined8 __thiscall
android::FpService::Client::enableKeyMode(Client *this,int param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]enableKeyMode enable = %d , keyType = %d",
                      "enableKeyMode",param_1,param_2);
  lVar2 = *(long *)(this + 0x80);
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x7c));
  plVar1 = *(long **)(this + 0x80);
  if (param_1 == 0) {
    *(uint *)((long)plVar1 + 0xa4) = *(uint *)((long)plVar1 + 0xa4) & 0xfffffffe;
  }
  else {
    *(uint *)((long)plVar1 + 0xa4) = *(uint *)((long)plVar1 + 0xa4) | 1;
  }
                    // try { // try from 0010ce9c to 0010cebf has its CatchHandler @ 0010ceec
  (**(code **)(*plVar1 + 0x70))();
  __android_log_print(3,"FingerGoodix","[%-20s]EnableKeyMode : %d","enableKeyMode",
                      *(undefined4 *)(*(long *)(this + 0x80) + 0xa4));
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x7c));
  return 0;
}



// android::FpService::Client::notifyScreenChanged(int)

undefined8 __thiscall android::FpService::Client::notifyScreenChanged(Client *this,int param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  
  if (1 < (uint)param_1) {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]MSG_TYPE_COMMON_SCREEN_STATUS_CHANGE, error status=%d",
                        "notifyScreenChanged",param_1);
    return 0;
  }
  lVar1 = *(long *)(this + 0x80);
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0xa8));
                    // try { // try from 0010cf90 to 0010cfa7 has its CatchHandler @ 0010cfe0
  __android_log_print(3,"FingerGoodix","[%-20s]MSG_TYPE_COMMON_SCREEN_STATUS_CHANGE, status=%d",
                      "notifyScreenChanged",param_1);
  __mutex = (pthread_mutex_t *)(*(long *)(this + 0x80) + 0x104);
  *(int *)(*(long *)(this + 0x80) + 0xd0) = param_1;
  pthread_mutex_lock(__mutex);
                    // try { // try from 0010cfb8 to 0010cfbb has its CatchHandler @ 0010cff4
  (**(code **)(**(long **)(this + 0x80) + 0x70))(*(long **)(this + 0x80));
  pthread_mutex_unlock(__mutex);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0xa8));
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::RawDataProcessRequest()

void android::FpService::RawDataProcessRequest(void)

{
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]trigger rawdata signal sem!","RawDataProcessRequest")
  ;
  local_c = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]val1 == %d","RawDataProcessRequest",0);
  sem_getvalue((sem_t *)&DAT_00143068,&local_c);
  if (local_c == 0) {
    sem_post((sem_t *)&DAT_00143068);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



// android::Mutex::~Mutex()

int __thiscall android::Mutex::~Mutex(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}



// android::FpService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned
// int)

void android::FpService::onTransact(uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  if ((int)param_2 == 2) {
    getpid();
  }
  android::BnFingerPrintService::onTransact(param_1,param_2,param_3,param_4);
  return;
}



// non-virtual thunk to android::FpService::onTransact(unsigned int, android::Parcel const&,
// android::Parcel*, unsigned int)

void __thiscall
android::FpService::onTransact
          (FpService *this,uint param_1,Parcel *param_2,Parcel *param_3,uint param_4)

{
  onTransact((int)this - 8,(Parcel *)(ulong)param_1,param_2,(uint)param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::query()

void __thiscall android::FpService::Client::query(Client *this)

{
  int iVar1;
  undefined8 *__ptr;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::query","query");
  local_c = 5;
  __ptr = (undefined8 *)malloc(0x14);
  if (__ptr == (undefined8 *)0x0) {
    uVar3 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","[%-20s]Client:query fail to malloc memory","query");
  }
  else {
    lVar2 = *(long *)this;
    *__ptr = 0;
    __ptr[1] = 0;
    *(undefined4 *)(__ptr + 2) = 0;
    iVar1 = (**(code **)(lVar2 + 0xd0))(this,__ptr,&local_c);
    if (iVar1 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]after add count,query count:%d,queryResult:0x%x",
                          "query",local_c,0x50000);
      if (local_c == 0) {
        uVar3 = 0x50000;
      }
      else {
        uVar5 = 0;
        uVar3 = 0x50000;
        puVar4 = __ptr;
        do {
          uVar5 = uVar5 + 1;
          uVar3 = uVar3 | 1 << (ulong)(*(int *)puVar4 - 1U & 0x1f);
          __android_log_print(3,"FingerGoodix","[%-20s]add index:%d,queryResult:0x%x","query",
                              *(int *)puVar4,uVar3);
          puVar4 = (undefined8 *)((long)puVar4 + 4);
        } while (uVar5 < local_c);
      }
      __android_log_print(3,"FingerGoodix","[%-20s]after add index,query count:%d,queryResult:0x%x",
                          "query",local_c,uVar3);
    }
    else {
      uVar3 = 0;
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]failed to query!!!,getFpTemplateIdList result:0x%x","query",iVar1)
      ;
    }
    free(__ptr);
  }
  if (local_8 != ___stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::saveRegister(unsigned long, unsigned long*)

void __thiscall android::FpService::Client::saveRegister(Client *this,ulong param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *__ptr;
  long lVar4;
  code *pcVar5;
  
  lVar1 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]Client::saveRegister() secure_user_id = %ld,authenticate_id = %ld",
                      "saveRegister",param_1,*param_2);
  __ptr = (undefined8 *)malloc(0x80);
  if (__ptr == (undefined8 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]failed to malloc pFpName in saveRegister",
                        "saveRegister");
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(this + 0x70);
    pcVar5 = *(code **)(lVar4 + 0xd0);
    *__ptr = 0;
    __ptr[1] = 0;
    __ptr[2] = 0;
    __ptr[3] = 0;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[6] = 0;
    __ptr[7] = 0;
    __ptr[8] = 0;
    __ptr[9] = 0;
    __ptr[10] = 0;
    __ptr[0xb] = 0;
    __ptr[0xc] = 0;
    __ptr[0xd] = 0;
    __ptr[0xe] = 0;
    __ptr[0xf] = 0;
    iVar2 = (*pcVar5)(lVar4,param_1,param_2);
    free(__ptr);
    if (iVar2 == 0) {
      __android_log_print(3,"FingerGoodix","[%-20s]success to saveRegister(),index:%d",
                          "saveRegister",0);
      uVar3 = 0;
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]failed to saveRegister(),result:%d",
                          "saveRegister",iVar2);
      uVar3 = 0xffffffff;
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



// android::FpService::Client::modifyFpName(int, char const*)

undefined4 __thiscall
android::FpService::Client::modifyFpName(Client *this,int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *__dest;
  size_t sVar3;
  int iVar4;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::modifyFpName:%d","modifyFpName",param_1);
  __dest = (undefined8 *)malloc(0x80);
  if (__dest == (undefined8 *)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]failed to malloc pFpName in modifyFpName",
                        "modifyFpName");
    uVar2 = 0xffffffff;
  }
  else {
    *__dest = 0;
    __dest[1] = 0;
    __dest[2] = 0;
    __dest[3] = 0;
    __dest[4] = 0;
    __dest[5] = 0;
    __dest[6] = 0;
    __dest[7] = 0;
    __dest[8] = 0;
    __dest[9] = 0;
    __dest[10] = 0;
    __dest[0xb] = 0;
    __dest[0xc] = 0;
    __dest[0xd] = 0;
    __dest[0xe] = 0;
    __dest[0xf] = 0;
    if (param_2 == (char *)0x0) {
      iVar4 = 1;
      __android_log_print(3,"FingerGoodix","[%-20s]pName is NULL!!!","modifyFpName");
    }
    else {
      sVar3 = strlen(param_2);
      iVar1 = (int)sVar3;
      if (0x7f < iVar1) {
        __android_log_print(3,"FingerGoodix","[%-20s]modify fp name is too long,count is %d.",
                            "modifyFpName",sVar3 & 0xffffffff);
        return 0xffffffff;
      }
      iVar4 = iVar1 + 1;
      memcpy(__dest,param_2,(long)iVar1);
      __android_log_print(3,"FingerGoodix","[%-20s]modifyFpName is %s,pFpName is %s,length is %d",
                          "modifyFpName",param_2,__dest,sVar3 & 0xffffffff);
    }
    __android_log_print(3,"FingerGoodix","[%-20s]call ta in modifyFpName","modifyFpName");
    uVar2 = (**(code **)(*(long *)(this + 0x70) + 0xe0))
                      (*(long *)(this + 0x70),param_1,__dest,iVar4);
    free(__dest);
  }
  return uVar2;
}



// android::FpService::Client::setPasswd(char const*, char const*)

undefined4 __thiscall
android::FpService::Client::setPasswd(Client *this,char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::setPasswd,%s,%s","setPasswd",param_1,param_2)
  ;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 0010d690 to 0010d6e3 has its CatchHandler @ 0010d778
    iVar1 = (**(code **)(**(long **)(this + 0x80) + 0x88))(*(long **)(this + 0x80));
    if (iVar1 == 0) {
                    // try { // try from 0010d720 to 0010d773 has its CatchHandler @ 0010d778
      (**(code **)(*(long *)(this + 0x70) + 0x130))(*(long *)(this + 0x70),1);
      __android_log_print(3,"FingerGoodix","[%-20s]it is in MODE_IMAGE,set it to MODE_KEY",
                          "setPasswd");
    }
    lVar5 = *(long *)(this + 0x70);
    sVar3 = strlen(param_1);
    sVar4 = strlen(param_2);
    uVar2 = (**(code **)(lVar5 + 0x108))(lVar5,param_1,sVar3 & 0xffffffff,param_2,sVar4);
    iVar1 = (**(code **)(**(long **)(this + 0x80) + 0x88))(*(long **)(this + 0x80));
    if (iVar1 == 1) {
      (**(code **)(*(long *)(this + 0x70) + 0x130))(*(long *)(this + 0x70),0);
      __android_log_print(3,"FingerGoodix","[%-20s]set it back to MODE_IMAGE","setPasswd");
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
    return uVar2;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]old password or new password is NULL","setPasswd");
  return 0x85;
}



// android::FpService::Client::checkPasswd(char const*)

undefined4 __thiscall android::FpService::Client::checkPasswd(Client *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::checkPasswd :%s","checkPasswd",param_1);
  if (param_1 != (char *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 0010d7f8 to 0010d837 has its CatchHandler @ 0010d8f8
    iVar1 = (**(code **)(**(long **)(this + 0x80) + 0x88))(*(long **)(this + 0x80));
    if (iVar1 == 0) {
                    // try { // try from 0010d870 to 0010d88f has its CatchHandler @ 0010d8f8
      (**(code **)(*(long *)(this + 0x70) + 0x130))(*(long *)(this + 0x70),1);
      __android_log_print(3,"FingerGoodix","[%-20s]it is in MODE_IMAGE,set it to MODE_KEY",
                          "checkPasswd");
    }
    lVar4 = *(long *)(this + 0x70);
    sVar3 = strlen(param_1);
    uVar2 = (**(code **)(lVar4 + 0x110))(lVar4,param_1,sVar3);
    iVar1 = (**(code **)(**(long **)(this + 0x80) + 0x88))(*(long **)(this + 0x80));
    if (iVar1 == 1) {
                    // try { // try from 0010d8d4 to 0010d8f3 has its CatchHandler @ 0010d8f8
      (**(code **)(*(long *)(this + 0x70) + 0x130))(*(long *)(this + 0x70),0);
      __android_log_print(3,"FingerGoodix","[%-20s]set it back to MODE_IMAGE","checkPasswd");
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
    return uVar2;
  }
  __android_log_print(3,"FingerGoodix","[%-20s]passwd is null","checkPasswd");
  return 0x85;
}



// android::FpService::Client::enableNav(int, int, int)

undefined8 __thiscall
android::FpService::Client::enableNav(Client *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]enableNav enable = %d , keyType = %d , %d",
                      "enableNav",param_2,param_2,param_3);
  lVar1 = *(long *)(this + 0x80);
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x7c));
  *(uint *)(*(long *)(this + 0x80) + 0xa4) = *(uint *)(*(long *)(this + 0x80) + 0xa4) | 2;
                    // try { // try from 0010d980 to 0010d9bb has its CatchHandler @ 0010d9d8
  property_set("persist.fp.navigation",&DAT_00128468);
  (**(code **)(**(long **)(this + 0x80) + 0x70))(*(long **)(this + 0x80));
  __android_log_print(3,"FingerGoodix","[%-20s]enableNav : %d","enableNav",
                      *(undefined4 *)(*(long *)(this + 0x80) + 0xa4));
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x7c));
  return 0;
}



// android::FpService::Client::disableNav()

undefined8 __thiscall android::FpService::Client::disableNav(Client *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x7c));
  *(uint *)(*(long *)(this + 0x80) + 0xa4) = *(uint *)(*(long *)(this + 0x80) + 0xa4) & 0xfffffffd;
                    // try { // try from 0010da2c to 0010da6f has its CatchHandler @ 0010da88
  property_set("persist.fp.navigation",&DAT_00128488);
  (**(code **)(**(long **)(this + 0x80) + 0x70))(*(long **)(this + 0x80));
  __android_log_print(3,"FingerGoodix","[%-20s]disableNav : %d","disableNav",
                      *(undefined4 *)(*(long *)(this + 0x80) + 0xa4));
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x7c));
  return 0;
}



// android::BnInterface<android::IFingerPrint>::getInterfaceDescriptor() const

void android::BnInterface<>::getInterfaceDescriptor(void)

{
  android::IFingerPrint::getInterfaceDescriptor();
  return;
}



// non-virtual thunk to android::BnInterface<android::IFingerPrint>::getInterfaceDescriptor() const

void __thiscall android::BnInterface<>::getInterfaceDescriptor(BnInterface<> *this)

{
  getInterfaceDescriptor();
  return;
}



// android::BnInterface<android::IFingerPrintService>::getInterfaceDescriptor() const

void android::BnInterface<>::getInterfaceDescriptor(void)

{
  android::IFingerPrintService::getInterfaceDescriptor();
  return;
}



// non-virtual thunk to android::BnInterface<android::IFingerPrintService>::getInterfaceDescriptor()
// const

void __thiscall android::BnInterface<>::getInterfaceDescriptor(BnInterface<> *this)

{
  getInterfaceDescriptor();
  return;
}



// android::FpService::setDefaultMode()

undefined8 __thiscall android::FpService::setDefaultMode(FpService *this)

{
  uint uVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]setDefaultMode(), modeflag = %d","setDefaultMode",
                      *(undefined4 *)(this + 0xa4));
  if (this[0xd4] != (FpService)0x0) {
    uVar1 = *(uint *)(this + 0xa4);
    if ((uVar1 == 0) || (*(int *)(this + 0xd0) == 1)) {
      (**(code **)(*(long *)this + 0x68))(this,3);
      return 0;
    }
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 & 1) != 0) {
        (**(code **)(*(long *)this + 0x68))(this,1);
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)this + 0x68))(this,4);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::check(int)

void __thiscall android::FpService::check(FpService *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]finger print check,id is %d.","check",param_1);
  uVar2 = 0x85;
  if ((uint)param_1 < 2) {
    (**(code **)(*(long *)this + 0x48))(this);
    uVar2 = 0;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// android::FpService::getClientLockById(int)

FpService * __thiscall android::FpService::getClientLockById(FpService *this,int param_1)

{
  if ((uint)param_1 < 2) {
    return this + (long)param_1 * 0x28 + 0x250;
  }
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]Failed to getClientLockById,invalide fingerprint Id:%d",
                      "getClientLockById",param_1);
  return (FpService *)0x0;
}



// android::FpService::Client::driverTest()

undefined8 __thiscall android::FpService::Client::driverTest(Client *this)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::driverTest","driverTest");
  iVar1 = (**(code **)(*(long *)(this + 0x70) + 0x120))(*(long *)(this + 0x70));
  if (iVar1 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]fnCa_DriverTest run ok","driverTest");
  }
  return 0;
}



// android::FpService::Client::alipayTzInvokeCommand(unsigned int, void*, unsigned int, void*,
// unsigned int*)

undefined8 __thiscall
android::FpService::Client::alipayTzInvokeCommand
          (Client *this,uint param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  undefined8 uVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client[%d]::alipayTzInvokeCommand",
                      "alipayTzInvokeCommand",*(undefined4 *)(this + 0x90));
  if ((param_4 == (void *)0x0 || param_5 == (uint *)0x0) || (param_2 == (void *)0x0)) {
    __android_log_print(3,"FingerGoodix","[%-20s]some of the params is NULL in getFpTemplateList",
                        "alipayTzInvokeCommand");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*(long *)(this + 0x70) + 0x1a8))
                      (*(long *)(this + 0x70),param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::fillAuthTokenHmac(hw_auth_token_t*)

void __thiscall android::FpService::Client::fillAuthTokenHmac(Client *this,hw_auth_token_t *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x65] == (Client)0x0) {
    __android_log_print(3,"FingerGoodix","[%-20s]gen hmac, sid:0x%lx, uid:0x%lx, time=0x%lx",
                        "fillAuthTokenHmac",*(undefined8 *)(param_1 + 1),
                        *(undefined8 *)(param_1 + 9),*(undefined8 *)(param_1 + 0x1d));
    local_10 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    uVar1 = (**(code **)(*(long *)(this + 0x70) + 0x2d0))(param_1,0x45,&local_30);
    __android_log_print(3,"FingerGoodix","[%-20s]gen hmac, ret: %d, timestampAndHmacLen:%d.",
                        "fillAuthTokenHmac",uVar1,0x28);
    memcpy(param_1 + 0x1d,&local_30,0x28);
    __android_log_print(3,"FingerGoodix","[%-20s]gen hmac, token->timestamp=0x%016lx.",
                        "fillAuthTokenHmac",*(undefined8 *)(param_1 + 0x1d));
  }
  else {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]HMAC_TOKEN: fillAuthTokenHmac, dump hmac token, version:0x%x, authenticator_type:0x%x, op_id:0x%lx, authenticator_id:0x%lx, secure_user_id:0x%lx,mCurNotifyClientID:%d\n"
                        ,"fillAuthTokenHmac",this[0x20],*(undefined4 *)(this + 0x39),
                        *(undefined8 *)(this + 0x21),*(undefined8 *)(this + 0x31),
                        *(undefined8 *)(this + 0x29),*(undefined4 *)(DAT_00143060 + 0x2d8));
    uVar2 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar1 = 0;
    uVar2 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0x60);
    *(Client *)(param_1 + 0x44) = this[100];
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    this[100] = (Client)0x0;
    this[0x65] = (Client)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::getFpNameById(int, char*)

void __thiscall android::FpService::Client::getFpNameById(Client *this,int param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  
  lVar1 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::getFpNameById,%d","getFpNameById",param_1);
  iVar2 = (**(code **)(*(long *)(this + 0x70) + 0xd8))(*(long *)(this + 0x70),param_1,param_2);
  if (iVar2 == 0) {
    sVar3 = strlen(param_2);
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]success to fnCa_GetFpNameById,count:%d,name:%s,length:%d",
                        "getFpNameById",0x80,param_2,sVar3 & 0xffffffff);
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]failed to fnCa_GetFpNameById,free pFpName",
                        "getFpNameById");
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(iVar2);
}



// android::FpService::getClientByIdUnsafe(int)

undefined8 __thiscall android::FpService::getClientByIdUnsafe(FpService *this,int param_1)

{
  if ((uint)param_1 < 2) {
    return *(undefined8 *)(this + (long)param_1 * 0x10 + 0x1f8);
  }
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]Failed to getClientByIdUnsafe,invalide fingerprint Id:%d",
                      "getClientByIdUnsafe");
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::saveRegist(int)

void android::FpService::Client::saveRegist(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  lVar1 = ___stack_chk_guard;
  plVar3 = (long *)(ulong)(uint)param_1;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::saveRegist curStatus = %d","saveRegist",
                      *(undefined4 *)(plVar3[0x10] + 0x78));
  if (*(int *)(plVar3[0x10] + 0x78) == 4) {
    uVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,0);
    (**(code **)(*(long *)plVar3[0x10] + 0x98))((long *)plVar3[0x10],1);
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Client::saveRegist , Enroll not complete!",
                        "saveRegist");
    uVar2 = 0xffffffff;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// android::BnInterface<android::IFingerPrint>::queryLocalInterface(android::String16 const&)

void __thiscall android::BnInterface<>::queryLocalInterface(BnInterface<> *this,String16 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  BnInterface<> **in_x8;
  
  lVar4 = *(long *)param_1;
  if (lVar4 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = (*(ulong *)(lVar4 + -0x10) >> 1) - 1;
  }
  lVar3 = -1;
  if (IFingerPrint::descriptor != 0) {
    lVar3 = (*(ulong *)(IFingerPrint::descriptor + -0x10) >> 1) - 1;
  }
  iVar1 = strzcmp16(lVar4,lVar2,IFingerPrint::descriptor,lVar3);
  if (iVar1 == 0) {
    *in_x8 = this;
    if (this != (BnInterface<> *)0x0) {
      android::RefBase::incStrong(this + *(long *)(*(long *)this + -0x18));
    }
    return;
  }
  *in_x8 = (BnInterface<> *)0x0;
  return;
}



// non-virtual thunk to
// android::BnInterface<android::IFingerPrint>::queryLocalInterface(android::String16 const&)

void __thiscall android::BnInterface<>::queryLocalInterface(BnInterface<> *this,String16 *param_1)

{
  queryLocalInterface(this + -8,param_1);
  return;
}



// android::BnInterface<android::IFingerPrintService>::queryLocalInterface(android::String16 const&)

void __thiscall android::BnInterface<>::queryLocalInterface(BnInterface<> *this,String16 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  BnInterface<> **in_x8;
  
  lVar4 = *(long *)param_1;
  if (lVar4 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = (*(ulong *)(lVar4 + -0x10) >> 1) - 1;
  }
  lVar3 = -1;
  if (IFingerPrintService::descriptor != 0) {
    lVar3 = (*(ulong *)(IFingerPrintService::descriptor + -0x10) >> 1) - 1;
  }
  iVar1 = strzcmp16(lVar4,lVar2,IFingerPrintService::descriptor,lVar3);
  if (iVar1 == 0) {
    *in_x8 = this;
    if (this != (BnInterface<> *)0x0) {
      android::RefBase::incStrong(this + *(long *)(*(long *)this + -0x18));
    }
    return;
  }
  *in_x8 = (BnInterface<> *)0x0;
  return;
}



// non-virtual thunk to
// android::BnInterface<android::IFingerPrintService>::queryLocalInterface(android::String16 const&)

void __thiscall android::BnInterface<>::queryLocalInterface(BnInterface<> *this,String16 *param_1)

{
  queryLocalInterface(this + -8,param_1);
  return;
}



// android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  
  *(undefined8 *)this = 0x141868;
  *(undefined8 *)(this + 0x2e0) = 0x1419f0;
  *(undefined8 *)(this + 8) = 0x141930;
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService is ~FpService()","~FpService");
  __android_log_print(3,"FingerGoodix","[%-20s]but finger print is busy","~FpService");
  DAT_00143060 = 0;
  (**(code **)(*(long *)(this + 0x1a0) + 0xa0))(*(long *)(this + 0x1a0));
  (**(code **)(*(long *)(this + 0x1a0) + 0x90))(*(long *)(this + 0x1a0));
  *(undefined4 *)(this + 0x2c8) = 1;
  iVar2 = (**(code **)(*(long *)(this + 0x1a0) + 0x148))(*(long *)(this + 0x1a0));
  if (iVar2 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]success to disable device","~FpService");
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]failed to disable device","~FpService");
  }
  ppVar3 = (pthread_mutex_t *)(this + 0x2c8);
  __android_log_print(3,"FingerGoodix","[%-20s]FpService::~FpService(),fnCa_CloseSession",
                      "~FpService");
  do {
    ppVar3 = ppVar3 + -1;
    pthread_mutex_destroy(ppVar3);
  } while ((pthread_mutex_t *)(this + 0x250) != ppVar3);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x228));
  ppVar3 = (pthread_mutex_t *)(this + 0x228);
  while (ppVar1 = ppVar3, ppVar1 != (pthread_mutex_t *)(this + 0x1f8)) {
    ppVar3 = (pthread_mutex_t *)((long)ppVar1 + -0x10);
    if (ppVar3->__align != 0) {
      android::RefBase::weakref_type::decWeak(*(void **)((long)ppVar1 + -8));
    }
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x164));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x134));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x104));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xdc));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xa8));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x7c));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x50));
  *(undefined **)this = &DAT_00141518;
  *(undefined **)(this + 0x2e0) = &DAT_00141628;
  *(undefined ***)(this + 8) = &PTR_queryLocalInterface_00141568;
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrintService::~IFingerPrintService((IFingerPrintService *)this);
  android::RefBase::~RefBase((RefBase *)(this + 0x2e0));
  return;
}



// virtual thunk to android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  ~FpService(this + *(long *)(*(long *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  ~FpService(this + -8);
  return;
}



// android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  ~FpService(this);
  operator_delete(this);
  return;
}



// virtual thunk to android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  ~FpService(this + *(long *)(*(long *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  ~FpService(this + -8);
  return;
}



// android::FpService::tryInitPreprocessor()

void __thiscall android::FpService::tryInitPreprocessor(FpService *this)

{
  int iVar1;
  
  if ((this[500] == (FpService)0x0) &&
     (iVar1 = (**(code **)(*(long *)(this + 0x1a0) + 0x218))(*(long *)(this + 0x1a0)), iVar1 == 0))
  {
    this[500] = (FpService)0x1;
    return;
  }
  return;
}



// android::BnFingerPrintService::~BnFingerPrintService()

void __thiscall android::BnFingerPrintService::~BnFingerPrintService(BnFingerPrintService *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xc];
  *(long *)(this + 8) = in_x1[0xd];
  lVar1 = in_x1[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[10];
  *(long *)(this + 8) = in_x1[0xb];
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrintService::~IFingerPrintService((IFingerPrintService *)this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::FpService()

void __thiscall android::FpService::FpService(FpService *this)

{
  int iVar1;
  long *in_x1;
  long lVar2;
  code **ppcVar3;
  pthread_mutex_t *__mutex;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  android::IFingerPrintService::IFingerPrintService((IFingerPrintService *)this);
                    // try { // try from 0010e680 to 0010e683 has its CatchHandler @ 0010ecc8
  android::BBinder::BBinder((BBinder *)(this + 8));
  lVar2 = in_x1[2];
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[0xb];
  *(long *)(this + 8) = in_x1[0xc];
  lVar2 = in_x1[1];
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[0xd];
  *(long *)(this + 8) = in_x1[0xe];
  lVar2 = *in_x1;
  *(long *)this = lVar2;
  *(long *)(this + *(long *)(lVar2 + -0x18)) = in_x1[0xf];
  *(long *)(this + 8) = in_x1[0x10];
                    // try { // try from 0010e6e4 to 0010e6e7 has its CatchHandler @ 0010ed70
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010e6f4 to 0010e6f7 has its CatchHandler @ 0010ed68
  pthread_mutex_init((pthread_mutex_t *)(this + 0x7c),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010e704 to 0010e707 has its CatchHandler @ 0010ed60
  pthread_mutex_init((pthread_mutex_t *)(this + 0xa8),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010e714 to 0010e717 has its CatchHandler @ 0010ed58
  pthread_mutex_init((pthread_mutex_t *)(this + 0xdc),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010e724 to 0010e727 has its CatchHandler @ 0010ed50
  pthread_mutex_init((pthread_mutex_t *)(this + 0x104),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010e734 to 0010e737 has its CatchHandler @ 0010ed48
  pthread_cond_init((pthread_cond_t *)(this + 0x134),(pthread_condattr_t *)0x0);
                    // try { // try from 0010e744 to 0010e747 has its CatchHandler @ 0010ed40
  pthread_mutex_init((pthread_mutex_t *)(this + 0x164),(pthread_mutexattr_t *)0x0);
  this[500] = (FpService)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x218) = 0;
                    // try { // try from 0010e764 to 0010e767 has its CatchHandler @ 0010ec74
  pthread_mutex_init((pthread_mutex_t *)(this + 0x228),(pthread_mutexattr_t *)0x0);
  __mutex = (pthread_mutex_t *)(this + 0x250);
  lVar2 = 2;
  do {
                    // try { // try from 0010e77c to 0010e77f has its CatchHandler @ 0010ec9c
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    lVar2 = lVar2 + -1;
    __mutex = __mutex + 1;
  } while (lVar2 != -1);
                    // try { // try from 0010e7b0 to 0010ec6f has its CatchHandler @ 0010ed78
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService is constructing","FpService");
  *(undefined4 *)(this + 0x2d8) = 0;
  local_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_e0 = 0;
  sem_init((sem_t *)&DAT_00143068,0,0);
  iVar1 = hw_get_module("gxfingerprint",&local_e8);
  if (iVar1 == 0) {
    if (local_e8 != 0) {
      ppcVar3 = *(code ***)(local_e8 + 0x20);
      *(long *)(this + 0x198) = local_e8;
      iVar1 = (**ppcVar3)(local_e8,0,&local_e0);
      if (iVar1 == 0) {
        *(long *)(this + 0x1a0) = local_e0;
        DAT_00143060 = this;
        (**(code **)(local_e0 + 0x198))(local_e0,notifyClient);
        (**(code **)(*(long *)(this + 0x1a0) + 0x138))(*(long *)(this + 0x1a0),&local_d8);
        DAT_00143078 = local_18;
        __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService: chipVersion = %04x",
                            "FpService",local_18);
        if ((char)local_98 != '\0') {
          *(undefined4 *)(this + 0xd0) = 0;
          *(undefined4 *)(this + 0xa4) = 1;
          __android_log_print(3,"FingerGoodix","[%-20s]Finger Sensor Mode : %d","FpService");
          memset(algoVersion,0,0x100);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]********************************************************",
                              "FpService");
          __android_log_print(3,"FingerGoodix","[%-20s]       SoftWare(DB.L) : %x.%x.%x (%s %s)",
                              "FpService",1,0,5,"Jan 16 2018","14:39:46");
          local_10 = 0;
          local_c = 0;
          __system_property_get("sys.gxfp.lv",&local_10);
          iVar1 = strcmp((char *)&local_10,"1");
          if (iVar1 == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]      FIH Release version : v1.05.29-LV",
                                "FpService");
            __system_property_set("sys.gxfp.version","v1.05.29-LV");
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]      FIH Release version : v1.05.29-HV",
                                "FpService");
            __system_property_set("sys.gxfp.version","v1.05.29-HV");
          }
          __android_log_print(3,"FingerGoodix","[%-20s]           Develop By : DB.L Team",
                              "FpService");
          __android_log_print(3,"FingerGoodix","[%-20s]          Hal Version : %d","FpService",
                              *(undefined4 *)(local_e0 + 4));
          __android_log_print(3,"FingerGoodix","[%-20s]           TA Version : %s","FpService",
                              &local_d8);
          __android_log_print(3,"FingerGoodix","[%-20s]     Firmware Version : %s","FpService",
                              &local_98);
          __android_log_print(3,"FingerGoodix","[%-20s]    Algorithm Version : %s","FpService",
                              &local_58);
          __android_log_print(3,"FingerGoodix","[%-20s]         Chip Version : %04x","FpService",
                              local_18);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]********************************************************",
                              "FpService");
          sprintf(algoVersion,"SoftWare :%x.%x.%x %s %s,",1,0,5,"Jan 16 2018","14:39:46");
          sprintf(algoVersion,"%sTa version:%s,",algoVersion,&local_d8);
          sprintf(algoVersion,"%sFirmware version:%s,",algoVersion,&local_98);
          sprintf(algoVersion,"%sAlgorithm version:%s.",algoVersion,&local_58);
          iVar1 = (**(code **)(*(long *)(this + 0x1a0) + 0x218))(*(long *)(this + 0x1a0));
          __android_log_print(3,"FingerGoodix","[%-20s]preprocessor init ret = %d","FpService",iVar1
                             );
          this[500] = (FpService)(iVar1 == 0);
          (**(code **)(*(long *)(this + 0x1a0) + 0x220))(*(long *)(this + 0x1a0));
          *(undefined4 *)(this + 0xd8) = 2;
          pthread_create((pthread_t *)(this + 400),(pthread_attr_t *)0x0,RawDataProcessLoop,this);
          setStatus(this,1);
          goto LAB_0010eb84;
        }
        __android_log_print(6,"FingerGoodix","[%-20s]Get firmware version failed!!!","FpService");
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]Can\'t open fingerprint methods, error: %d",
                            "FpService",iVar1);
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
    __android_log_print(3,"FingerGoodix","[%-20s]No valid fingerprint module","FpService",0);
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Can\'t open fingerprint HW Module, error: %d",
                        "FpService",iVar1);
  }
LAB_0010eb84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::FpService()

void __thiscall android::FpService::FpService(FpService *this)

{
  int iVar1;
  code **ppcVar2;
  long lVar3;
  pthread_mutex_t *__mutex;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  android::RefBase::RefBase((RefBase *)(this + 0x2e0));
                    // try { // try from 0010ede8 to 0010edeb has its CatchHandler @ 0010f4ac
  android::IFingerPrintService::IFingerPrintService((IFingerPrintService *)this);
                    // try { // try from 0010edf8 to 0010edfb has its CatchHandler @ 0010f490
  android::BBinder::BBinder((BBinder *)(this + 8));
  *(undefined8 *)this = 0x141868;
  *(undefined8 *)(this + 0x2e0) = 0x1419f0;
  *(undefined8 *)(this + 8) = 0x141930;
                    // try { // try from 0010ee28 to 0010ee2b has its CatchHandler @ 0010f4cc
  pthread_mutex_init((pthread_mutex_t *)(this + 0x50),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010ee38 to 0010ee3b has its CatchHandler @ 0010f4c4
  pthread_mutex_init((pthread_mutex_t *)(this + 0x7c),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010ee48 to 0010ee4b has its CatchHandler @ 0010f4bc
  pthread_mutex_init((pthread_mutex_t *)(this + 0xa8),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010ee58 to 0010ee5b has its CatchHandler @ 0010f4b4
  pthread_mutex_init((pthread_mutex_t *)(this + 0xdc),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010ee68 to 0010ee6b has its CatchHandler @ 0010f404
  pthread_mutex_init((pthread_mutex_t *)(this + 0x104),(pthread_mutexattr_t *)0x0);
                    // try { // try from 0010ee78 to 0010ee7b has its CatchHandler @ 0010f3b8
  pthread_cond_init((pthread_cond_t *)(this + 0x134),(pthread_condattr_t *)0x0);
                    // try { // try from 0010ee88 to 0010ee8b has its CatchHandler @ 0010f4d4
  pthread_mutex_init((pthread_mutex_t *)(this + 0x164),(pthread_mutexattr_t *)0x0);
  this[500] = (FpService)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x218) = 0;
                    // try { // try from 0010eea8 to 0010eeab has its CatchHandler @ 0010f484
  pthread_mutex_init((pthread_mutex_t *)(this + 0x228),(pthread_mutexattr_t *)0x0);
  __mutex = (pthread_mutex_t *)(this + 0x250);
  lVar3 = 2;
  do {
                    // try { // try from 0010eec0 to 0010eec3 has its CatchHandler @ 0010f42c
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    lVar3 = lVar3 + -1;
    __mutex = __mutex + 1;
  } while (lVar3 != -1);
                    // try { // try from 0010eef4 to 0010f3b3 has its CatchHandler @ 0010f40c
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService is constructing","FpService");
  *(undefined4 *)(this + 0x2d8) = 0;
  local_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_e0 = 0;
  sem_init((sem_t *)&DAT_00143068,0,0);
  iVar1 = hw_get_module("gxfingerprint",&local_e8);
  if (iVar1 == 0) {
    if (local_e8 != 0) {
      ppcVar2 = *(code ***)(local_e8 + 0x20);
      *(long *)(this + 0x198) = local_e8;
      iVar1 = (**ppcVar2)(local_e8,0,&local_e0);
      if (iVar1 == 0) {
        *(long *)(this + 0x1a0) = local_e0;
        DAT_00143060 = this;
        (**(code **)(local_e0 + 0x198))(local_e0,notifyClient);
        (**(code **)(*(long *)(this + 0x1a0) + 0x138))(*(long *)(this + 0x1a0),&local_d8);
        DAT_00143078 = local_18;
        __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService: chipVersion = %04x",
                            "FpService",local_18);
        if ((char)local_98 != '\0') {
          *(undefined4 *)(this + 0xd0) = 0;
          *(undefined4 *)(this + 0xa4) = 1;
          __android_log_print(3,"FingerGoodix","[%-20s]Finger Sensor Mode : %d","FpService");
          memset(algoVersion,0,0x100);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]********************************************************",
                              "FpService");
          __android_log_print(3,"FingerGoodix","[%-20s]       SoftWare(DB.L) : %x.%x.%x (%s %s)",
                              "FpService",1,0,5,"Jan 16 2018","14:39:46");
          local_10 = 0;
          local_c = 0;
          __system_property_get("sys.gxfp.lv",&local_10);
          iVar1 = strcmp((char *)&local_10,"1");
          if (iVar1 == 0) {
            __android_log_print(3,"FingerGoodix","[%-20s]      FIH Release version : v1.05.29-LV",
                                "FpService");
            __system_property_set("sys.gxfp.version","v1.05.29-LV");
          }
          else {
            __android_log_print(3,"FingerGoodix","[%-20s]      FIH Release version : v1.05.29-HV",
                                "FpService");
            __system_property_set("sys.gxfp.version","v1.05.29-HV");
          }
          __android_log_print(3,"FingerGoodix","[%-20s]           Develop By : DB.L Team",
                              "FpService");
          __android_log_print(3,"FingerGoodix","[%-20s]          Hal Version : %d","FpService",
                              *(undefined4 *)(local_e0 + 4));
          __android_log_print(3,"FingerGoodix","[%-20s]           TA Version : %s","FpService",
                              &local_d8);
          __android_log_print(3,"FingerGoodix","[%-20s]     Firmware Version : %s","FpService",
                              &local_98);
          __android_log_print(3,"FingerGoodix","[%-20s]    Algorithm Version : %s","FpService",
                              &local_58);
          __android_log_print(3,"FingerGoodix","[%-20s]         Chip Version : %04x","FpService",
                              local_18);
          __android_log_print(3,"FingerGoodix",
                              "[%-20s]********************************************************",
                              "FpService");
          sprintf(algoVersion,"SoftWare :%x.%x.%x %s %s,",1,0,5,"Jan 16 2018","14:39:46");
          sprintf(algoVersion,"%sTa version:%s,",algoVersion,&local_d8);
          sprintf(algoVersion,"%sFirmware version:%s,",algoVersion,&local_98);
          sprintf(algoVersion,"%sAlgorithm version:%s.",algoVersion,&local_58);
          iVar1 = (**(code **)(*(long *)(this + 0x1a0) + 0x218))(*(long *)(this + 0x1a0));
          __android_log_print(3,"FingerGoodix","[%-20s]preprocessor init ret = %d","FpService",iVar1
                             );
          this[500] = (FpService)(iVar1 == 0);
          (**(code **)(*(long *)(this + 0x1a0) + 0x220))(*(long *)(this + 0x1a0));
          *(undefined4 *)(this + 0xd8) = 2;
          pthread_create((pthread_t *)(this + 400),(pthread_attr_t *)0x0,RawDataProcessLoop,this);
          setStatus(this,1);
          goto LAB_0010f2c8;
        }
        __android_log_print(6,"FingerGoodix","[%-20s]Get firmware version failed!!!","FpService");
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]Can\'t open fingerprint methods, error: %d",
                            "FpService",iVar1);
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
    __android_log_print(3,"FingerGoodix","[%-20s]No valid fingerprint module","FpService",0);
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]Can\'t open fingerprint HW Module, error: %d",
                        "FpService",iVar1);
  }
LAB_0010f2c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::FpService::~FpService()

void __thiscall android::FpService::~FpService(FpService *this)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long lVar3;
  long *in_x1;
  pthread_mutex_t *ppVar4;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[0xf];
  *(long *)(this + 8) = in_x1[0x10];
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService is ~FpService()","~FpService");
  __android_log_print(3,"FingerGoodix","[%-20s]but finger print is busy","~FpService");
  DAT_00143060 = 0;
  (**(code **)(*(long *)(this + 0x1a0) + 0xa0))(*(long *)(this + 0x1a0));
  (**(code **)(*(long *)(this + 0x1a0) + 0x90))(*(long *)(this + 0x1a0));
  *(undefined4 *)(this + 0x2c8) = 1;
  iVar2 = (**(code **)(*(long *)(this + 0x1a0) + 0x148))(*(long *)(this + 0x1a0));
  if (iVar2 == 0) {
    __android_log_print(3,"FingerGoodix","[%-20s]success to disable device","~FpService");
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]failed to disable device","~FpService");
  }
  ppVar4 = (pthread_mutex_t *)(this + 0x2c8);
  __android_log_print(3,"FingerGoodix","[%-20s]FpService::~FpService(),fnCa_CloseSession",
                      "~FpService");
  do {
    ppVar4 = ppVar4 + -1;
    pthread_mutex_destroy(ppVar4);
  } while ((pthread_mutex_t *)(this + 0x250) != ppVar4);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x228));
  ppVar4 = (pthread_mutex_t *)(this + 0x228);
  while (ppVar1 = ppVar4, ppVar1 != (pthread_mutex_t *)(this + 0x1f8)) {
    ppVar4 = (pthread_mutex_t *)((long)ppVar1 + -0x10);
    if (ppVar4->__align != 0) {
      android::RefBase::weakref_type::decWeak(*(void **)((long)ppVar1 + -8));
    }
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x164));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x134));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x104));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xdc));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xa8));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x7c));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x50));
  lVar3 = in_x1[1];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[0xd];
  *(long *)(this + 8) = in_x1[0xe];
  lVar3 = in_x1[2];
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[0xb];
  *(long *)(this + 8) = in_x1[0xc];
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrintService::~IFingerPrintService((IFingerPrintService *)this);
  return;
}



// android::FpService::setFingerPrintBusy(int)

void __thiscall android::FpService::setFingerPrintBusy(FpService *this,int param_1)

{
  *(undefined4 *)(this + ((long)param_1 + 0xb0) * 4 + 0xc) = 1;
  return;
}



// android::FpService::setFingerPrintFree(int)

void __thiscall android::FpService::setFingerPrintFree(FpService *this,int param_1)

{
  *(undefined4 *)(this + ((long)param_1 + 0xb0) * 4 + 0xc) = 0;
  return;
}



// android::imageEventCallback(unsigned char, unsigned char)

void android::imageEventCallback(uchar param_1,uchar param_2)

{
  __android_log_print(3,"FingerGoodix","[%-20s]imageEventCallback","imageEventCallback");
  return;
}



// android::BnFingerPrint::~BnFingerPrint()

void __thiscall android::BnFingerPrint::~BnFingerPrint(BnFingerPrint *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xc];
  *(long *)(this + 8) = in_x1[0xd];
  lVar1 = in_x1[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[10];
  *(long *)(this + 8) = in_x1[0xb];
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrint::~IFingerPrint((IFingerPrint *)this);
  return;
}



// android::FpService::Client::checkPid() const

undefined8 __thiscall android::FpService::Client::checkPid(Client *this)

{
  if (*(int *)(this + 0x94) != 0x7b) {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]attempt to use a locked fp from a different process (old pid %d, new pid %d)"
                        ,"checkPid",*(int *)(this + 0x94),0x7b);
    return 0x10;
  }
  return 0;
}



// android::FpService::Client::lock()

undefined4 __thiscall android::FpService::Client::lock(Client *this)

{
  undefined4 uVar1;
  
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService::lock (pid %d)",&DAT_00127440,0x7b
                     );
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 0010f850 to 0010f853 has its CatchHandler @ 0010f8b4
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  if (*(int *)(this + 0x94) == 0) {
    *(undefined4 *)(this + 0x94) = 0x7b;
    uVar1 = 0;
  }
  else {
                    // try { // try from 0010f88c to 0010f88f has its CatchHandler @ 0010f898
    uVar1 = checkPid(this);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  return uVar1;
}



// android::FpService::Client::unlock()

int __thiscall android::FpService::Client::unlock(Client *this)

{
  int iVar1;
  long *plVar2;
  
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService::unlock (pid %d)","unlock",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 0010f910 to 0010f913 has its CatchHandler @ 0010f9ac
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
                    // try { // try from 0010f918 to 0010f963 has its CatchHandler @ 0010f990
  iVar1 = checkPid(this);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x94) = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]clear mFpClient (pid %d)","unlock",0x7b);
    plVar2 = *(long **)(this + 0x88);
    if (plVar2 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
      *(undefined8 *)(this + 0x88) = 0;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  return iVar1;
}



// android::FpService::Client::reset2KeyMode()

undefined8 android::FpService::Client::reset2KeyMode(void)

{
  __android_log_print(3,"FingerGoodix","[%-20s]reset2KeyMode","reset2KeyMode");
  return 0;
}



// android::FpService::Client::disconnect()

undefined4 __thiscall android::FpService::Client::disconnect(Client *this)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  __android_log_print(3,"FingerGoodix","[%-20s]Client::disconnect E (pid %d)","disconnect",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 0010fa40 to 0010fa43 has its CatchHandler @ 0010fc14
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
                    // try { // try from 0010fa48 to 0010fb1b has its CatchHandler @ 0010fc28
  iVar1 = checkPid(this);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x94) < 1) {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]fp is unlocked (mClientPid = %d), don\'t tear down hardware",
                          "disconnect");
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = reset2KeyMode();
      if (iVar1 == 0) {
        __android_log_print(3,"FingerGoodix","[%-20s]success to reset2KeyMode","disconnect");
      }
      else {
                    // try { // try from 0010fb58 to 0010fc0f has its CatchHandler @ 0010fc28
        __android_log_print(3,"FingerGoodix","[%-20s]failed to reset2KeyMode","disconnect");
      }
      plVar2 = *(long **)(this + 0x80);
      if (*(int *)(this + 0x90) == *(int *)(plVar2 + 0x5b)) {
        iVar1 = *(int *)(plVar2 + 0xf);
        if (iVar1 - 2U < 2) {
          (**(code **)(*(long *)(this + 0x70) + 200))(*(long *)(this + 0x70));
          (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),5);
        }
        else if (iVar1 - 6U < 2) {
          (**(code **)(*(long *)(this + 0x70) + 0xf0))(*(long *)(this + 0x70));
          (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),8);
        }
        else if (iVar1 - 10U < 2) {
          (**(code **)(*plVar2 + 0x98))(plVar2,0xc);
        }
        (**(code **)(*(long *)(this + 0x70) + 0x1a0))(*(long *)(this + 0x70));
        (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
        (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),1);
        plVar2 = *(long **)(this + 0x80);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,this + 0x88);
      setFingerPrintFree(*(FpService **)(this + 0x80),*(int *)(this + 0x90));
      uVar3 = 0;
    }
  }
  else {
    __android_log_print(3,"FingerGoodix","[%-20s]different client - don\'t disconnect","disconnect")
    ;
    uVar3 = 0xffffffff;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  return uVar3;
}



// android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  long lVar1;
  long *plVar2;
  long *in_x1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xf];
  *(long *)(this + 8) = in_x1[0x10];
  __android_log_print(3,"FingerGoodix","[%-20s]Client::~Client X (pid %d)","~Client",0x7b);
  *(undefined4 *)(this + 0x94) = 0x7b;
  disconnect(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xc0));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x98));
  plVar2 = *(long **)(this + 0x88);
  if (plVar2 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
  }
  plVar2 = *(long **)(this + 0x80);
  if (plVar2 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
  }
  lVar1 = in_x1[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xd];
  *(long *)(this + 8) = in_x1[0xe];
  lVar1 = in_x1[2];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  *(long *)(this + 8) = in_x1[0xc];
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrint::~IFingerPrint((IFingerPrint *)this);
  return;
}



// android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  long *plVar1;
  
  *(undefined8 *)this = 0x142448;
  *(undefined8 *)(this + 0xe8) = 0x1426c8;
  *(undefined8 *)(this + 8) = 0x142608;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::~Client X (pid %d)","~Client",0x7b);
  *(undefined4 *)(this + 0x94) = 0x7b;
  disconnect(this);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xc0));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x98));
  plVar1 = *(long **)(this + 0x88);
  if (plVar1 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
  }
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
  }
  *(undefined **)this = &DAT_00141eb8;
  *(undefined **)(this + 0xe8) = &DAT_001420e8;
  *(undefined ***)(this + 8) = &PTR_queryLocalInterface_00142028;
  android::BBinder::~BBinder((BBinder *)(this + 8));
  android::IFingerPrint::~IFingerPrint((IFingerPrint *)this);
  android::RefBase::~RefBase((RefBase *)(this + 0xe8));
  return;
}



// virtual thunk to android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  ~Client(this + *(long *)(*(long *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  ~Client(this + -8);
  return;
}



// android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  ~Client(this);
  operator_delete(this);
  return;
}



// virtual thunk to android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  ~Client(this + *(long *)(*(long *)this + -0x18));
  return;
}



// non-virtual thunk to android::FpService::Client::~Client()

void __thiscall android::FpService::Client::~Client(Client *this)

{
  ~Client(this + -8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::RegisterDump(Enroll_Verify_Status)

void __thiscall android::FpService::RegisterDump(FpService *this,Enroll_Verify_Status param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]Enroll_Verify_Status = %d","RegisterDump",param_1);
  iVar2 = property_get_int32("goodix.fp.debug",0);
  __android_log_print(3,"FingerGoodix","[%-20s]Status = %d","RegisterDump",param_1);
  if (iVar2 != 1) goto LAB_0010ff50;
  uVar1 = local_40._4_4_;
  switch(param_1) {
  case 1:
    local_48[0] = 's';
    local_48[1] = 'u';
    local_48[2] = 'c';
    local_48[3] = 'c';
    local_48[4] = 'e';
    local_48[5] = 's';
    local_48[6] = 's';
    local_48[7] = '\0';
    break;
  default:
    sprintf(local_48,"no_data_status_%d",(ulong)param_1);
    goto LAB_0010ff50;
  case 3:
    local_38 = CONCAT62(local_38._2_6_,0x6c);
    local_48[0] = 'p';
    local_48[1] = 'r';
    local_48[2] = 'e';
    local_48[3] = 'p';
    local_48[4] = 'r';
    local_48[5] = 'o';
    local_48[6] = 'c';
    local_48[7] = 'e';
    local_40._0_1_ = 's';
    local_40._1_1_ = 's';
    local_40._2_1_ = 'o';
    local_40._3_1_ = 'r';
    local_40._4_1_ = '_';
    local_40._5_1_ = 'f';
    local_40._6_1_ = 'a';
    local_40._7_1_ = 'i';
    break;
  case 4:
    local_48[0] = 'b';
    local_48[1] = 'a';
    local_48[2] = 'd';
    local_48[3] = '_';
    local_48[4] = 'i';
    local_48[5] = 'm';
    local_48[6] = 'a';
    local_48[7] = 'g';
    local_40 = CONCAT62(local_40._2_6_,0x65);
    break;
  case 5:
    local_38 = CONCAT62(local_38._2_6_,0x6c);
    local_48[0] = 'd';
    local_48[1] = 'e';
    local_48[2] = 'f';
    local_48[3] = 'e';
    local_48[4] = 'c';
    local_48[5] = 't';
    local_48[6] = '_';
    local_48[7] = 'p';
    local_40._0_1_ = 'i';
    local_40._1_1_ = 'x';
    local_40._2_1_ = 'e';
    local_40._3_1_ = 'l';
    local_40._4_1_ = '_';
    local_40._5_1_ = 'f';
    local_40._6_1_ = 'a';
    local_40._7_1_ = 'i';
    break;
  case 6:
    pcVar3 = "defect_level_1";
    goto LAB_001100a4;
  case 7:
    pcVar3 = "defect_level_2";
LAB_001100a4:
    local_48 = *(char (*) [8])pcVar3;
    local_40 = CONCAT17(local_40._7_1_,*(undefined7 *)*(char (*) [8])((long)pcVar3 + 8));
    break;
  case 10:
    local_40._0_1_ = 'a';
    local_40._1_1_ = 'v';
    local_40._2_1_ = 'g';
    local_40._3_1_ = '_';
    local_40._4_1_ = 'b';
    local_40._5_1_ = 'a';
    local_40._6_1_ = 'd';
    local_40._7_1_ = '\0';
    local_48[0] = 'r';
    local_48[1] = 'a';
    local_48[2] = 'w';
    local_48[3] = 'd';
    local_48[4] = 'a';
    local_48[5] = 't';
    local_48[6] = 'a';
    local_48[7] = '_';
    break;
  case 0xb:
    local_48[0] = 'n';
    local_48[1] = 'o';
    local_48[2] = 't';
    local_48[3] = '_';
    local_48[4] = 'g';
    local_48[5] = 's';
    local_48[6] = 'c';
    local_48[7] = '\0';
    break;
  case 0xc:
    local_48[0] = 'd';
    local_48[1] = 'u';
    local_48[2] = 'p';
    local_48[3] = 'l';
    local_48[4] = 'i';
    local_48[5] = 'c';
    local_48[6] = 'a';
    local_48[7] = 't';
    local_40 = CONCAT62(local_40._2_6_,0x65);
    break;
  case 0xd:
    local_48[0] = 'o';
    local_48[1] = 'v';
    local_48[2] = 'e';
    local_48[3] = 'r';
    local_48[4] = 'l';
    local_48[5] = 'a';
    local_48[6] = 'y';
    local_48[7] = '\0';
    break;
  case 0xe:
    local_48[0] = 'o';
    local_48[1] = 'v';
    local_48[2] = 'e';
    local_48[3] = 'r';
    local_48[4] = 'l';
    local_48[5] = 'a';
    local_48[6] = 'y';
    local_48[7] = '_';
    local_40 = CONCAT44(uVar1,0x657270);
    break;
  case 0xf:
    local_48[0] = 'l';
    local_48[1] = 'o';
    local_48[2] = 'w';
    local_48[3] = '_';
    local_48[4] = 'c';
    local_48[5] = 'o';
    local_48[6] = 'v';
    local_48[7] = 'e';
    local_40 = CONCAT62(local_40._2_6_,0x72);
    break;
  case 0x10:
    local_48[0] = 'l';
    local_48[1] = 'o';
    local_48[2] = 'w';
    local_48[3] = '_';
    local_48[4] = 'q';
    local_48[5] = 'u';
    local_48[6] = 'a';
    local_48[7] = 'l';
    local_40 = CONCAT44(uVar1,0x797469);
    break;
  case 0x16:
    local_48[0] = 't';
    local_48[1] = 'o';
    local_48[2] = 'o';
    local_48[3] = '_';
    local_48[4] = 'f';
    local_48[5] = 'a';
    local_48[6] = 's';
    local_48[7] = 't';
    local_40 = local_40 & 0xffffffffffffff00;
  }
  (**(code **)(*(long *)(this + 0x1a0) + 0x2b0))(*(long *)(this + 0x1a0),local_48,1);
LAB_0010ff50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::RecognizeDump(Enroll_Verify_Status)

void __thiscall android::FpService::RecognizeDump(FpService *this,Enroll_Verify_Status param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  __android_log_print(3,"FingerGoodix","[%-20s]Enroll_Verify_Status = %d","RecognizeDump",param_1);
  iVar2 = property_get_int32("goodix.fp.debug",0);
  if (iVar2 == 1) {
    uVar1 = local_38._4_4_;
    switch(param_1) {
    case 0:
    case 1:
      local_48[0] = 's';
      local_48[1] = 'u';
      local_48[2] = 'c';
      local_48[3] = 'c';
      local_48[4] = 'e';
      local_48[5] = 's';
      local_48[6] = 's';
      local_48[7] = '\0';
      break;
    case 2:
      local_48[0] = 'v';
      local_48[1] = 'e';
      local_48[2] = 'r';
      local_48[3] = 'i';
      local_48[4] = 'f';
      local_48[5] = 'y';
      local_48[6] = '_';
      local_48[7] = 'f';
      local_40 = CONCAT44(local_40._4_4_,0x6c6961);
      break;
    case 3:
      local_38 = CONCAT62(local_38._2_6_,0x6c);
      local_48[0] = 'p';
      local_48[1] = 'r';
      local_48[2] = 'e';
      local_48[3] = 'p';
      local_48[4] = 'r';
      local_48[5] = 'o';
      local_48[6] = 'c';
      local_48[7] = 'e';
      local_40._0_1_ = 's';
      local_40._1_1_ = 's';
      local_40._2_1_ = 'o';
      local_40._3_1_ = 'r';
      local_40._4_1_ = '_';
      local_40._5_1_ = 'f';
      local_40._6_1_ = 'a';
      local_40._7_1_ = 'i';
      break;
    case 4:
      local_48[0] = 'b';
      local_48[1] = 'a';
      local_48[2] = 'd';
      local_48[3] = '_';
      local_48[4] = 'i';
      local_48[5] = 'a';
      local_48[6] = 'm';
      local_48[7] = 'g';
      local_40 = CONCAT62(local_40._2_6_,0x65);
      break;
    case 5:
      local_38 = CONCAT62(local_38._2_6_,0x6c);
      local_48[0] = 'd';
      local_48[1] = 'e';
      local_48[2] = 'f';
      local_48[3] = 'e';
      local_48[4] = 'c';
      local_48[5] = 't';
      local_48[6] = '_';
      local_48[7] = 'p';
      local_40._0_1_ = 'i';
      local_40._1_1_ = 'x';
      local_40._2_1_ = 'e';
      local_40._3_1_ = 'l';
      local_40._4_1_ = '_';
      local_40._5_1_ = 'f';
      local_40._6_1_ = 'a';
      local_40._7_1_ = 'i';
      break;
    case 6:
      local_38 = CONCAT44(uVar1,0x316c65);
      local_48[0] = 'd';
      local_48[1] = 'e';
      local_48[2] = 'f';
      local_48[3] = 'e';
      local_48[4] = 'c';
      local_48[5] = 't';
      local_48[6] = '_';
      local_48[7] = 'p';
      local_40._0_1_ = 'i';
      local_40._1_1_ = 'x';
      local_40._2_1_ = 'e';
      local_40._3_1_ = 'l';
      local_40._4_1_ = '_';
      local_40._5_1_ = 'l';
      local_40._6_1_ = 'e';
      local_40._7_1_ = 'v';
      break;
    case 7:
      local_38 = CONCAT44(uVar1,0x326c65);
      local_48[0] = 'd';
      local_48[1] = 'e';
      local_48[2] = 'f';
      local_48[3] = 'e';
      local_48[4] = 'c';
      local_48[5] = 't';
      local_48[6] = '_';
      local_48[7] = 'p';
      local_40._0_1_ = 'i';
      local_40._1_1_ = 'x';
      local_40._2_1_ = 'e';
      local_40._3_1_ = 'l';
      local_40._4_1_ = '_';
      local_40._5_1_ = 'l';
      local_40._6_1_ = 'e';
      local_40._7_1_ = 'v';
      break;
    default:
      sprintf(local_48,"no_data_status_%d",(ulong)param_1);
      goto LAB_001101bc;
    case 10:
      local_40._0_1_ = 'a';
      local_40._1_1_ = 'v';
      local_40._2_1_ = 'g';
      local_40._3_1_ = '_';
      local_40._4_1_ = 'b';
      local_40._5_1_ = 'a';
      local_40._6_1_ = 'd';
      local_40._7_1_ = '\0';
      local_48[0] = 'r';
      local_48[1] = 'a';
      local_48[2] = 'w';
      local_48[3] = 'd';
      local_48[4] = 'a';
      local_48[5] = 't';
      local_48[6] = 'a';
      local_48[7] = '_';
      break;
    case 0xb:
      local_48[0] = 'n';
      local_48[1] = 'o';
      local_48[2] = 't';
      local_48[3] = '_';
      local_48[4] = 'g';
      local_48[5] = 's';
      local_48[6] = 'c';
      local_48[7] = '\0';
      break;
    case 0x16:
      local_48[0] = 't';
      local_48[1] = 'o';
      local_48[2] = 'o';
      local_48[3] = '_';
      local_48[4] = 'f';
      local_48[5] = 'a';
      local_48[6] = 's';
      local_48[7] = 't';
      local_40 = local_40 & 0xffffffffffffff00;
    }
    (**(code **)(*(long *)(this + 0x1a0) + 0x2b0))(*(long *)(this + 0x1a0),local_48,0);
  }
LAB_001101bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



// android::wp<android::FpService::Client>::promote() const

void __thiscall android::wp<>::promote(wp<> *this)

{
  char cVar1;
  long lVar2;
  undefined8 *in_x8;
  
  lVar2 = *(long *)this;
  *in_x8 = 0;
                    // try { // try from 00110360 to 00110363 has its CatchHandler @ 00110384
  if ((lVar2 != 0) &&
     (cVar1 = android::RefBase::weakref_type::attemptIncStrong(*(void **)(this + 8)), cVar1 != '\0')
     ) {
    *in_x8 = *(undefined8 *)this;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::dump(int, android::Vector<android::String16> const&)

void __thiscall android::FpService::dump(FpService *this,int param_1,Vector *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  void *local_130;
  String16 aSStack_128 [8];
  long *local_120;
  long *local_118;
  long *local_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  android::String8::String8((String8 *)&local_130);
                    // try { // try from 00110400 to 00110403 has its CatchHandler @ 00110748
  android::String16::String16(aSStack_128,"android.permission.DUMP");
                    // try { // try from 00110408 to 0011040b has its CatchHandler @ 001107c0
  cVar3 = android::checkCallingPermission(aSStack_128);
  android::String16::~String16(aSStack_128);
  if (cVar3 == '\0') {
                    // try { // try from 00110438 to 00110507 has its CatchHandler @ 00110748
    snprintf(acStack_108,0x100,"Permission Denial: can\'t dump FpService from pid=%d, uid=%d\n",0x7b
             ,0x7b);
    android::String8::append((char *)&local_130);
    if (local_130 == (void *)0x0) {
      sVar8 = 0xffffffffffffffff;
    }
    else {
      sVar8 = *(long *)((long)local_130 + -0x10) - 1;
    }
    write(param_1,local_130,sVar8);
  }
  else {
    iVar11 = 0x32;
    do {
      iVar4 = pthread_mutex_trylock((pthread_mutex_t *)(this + 0x228));
      if (iVar4 == 0) {
        bVar2 = true;
        goto LAB_001104d4;
      }
      usleep(60000);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
                    // try { // try from 001106cc to 001106cf has its CatchHandler @ 00110748
    android::String8::String8((String8 *)&local_110,"FingerPrintService may be deadlocked\n");
    if (local_110 == (long *)0x0) {
      sVar8 = 0xffffffffffffffff;
    }
    else {
      sVar8 = local_110[-2] - 1;
    }
                    // try { // try from 001106e4 to 001106e7 has its CatchHandler @ 0011075c
    write(param_1,local_110,sVar8);
    bVar2 = false;
    android::String8::~String8((String8 *)&local_110);
LAB_001104d4:
    uVar13 = 0;
    bVar1 = false;
    while( true ) {
      wp<>::promote((wp<> *)(this + 0x1f8));
      if (local_110 != (long *)0x0) {
        local_120 = (long *)local_110[0x11];
        if (local_120 != (long *)0x0) {
                    // try { // try from 0011052c to 0011052f has its CatchHandler @ 001107d4
          android::RefBase::incStrong((void *)((long)local_120 + *(long *)(*local_120 + -0x18)));
        }
                    // try { // try from 00110538 to 0011053b has its CatchHandler @ 0011076c
        android::IInterface::asBinder((sp *)&local_120);
        sprintf(acStack_108,"Client[%d] (%p) PID: %d\n",uVar13,local_118,
                (ulong)*(uint *)((long)local_110 + 0x94));
        if (local_118 != (long *)0x0) {
          android::RefBase::decStrong((void *)((long)local_118 + *(long *)(*local_118 + -0x18)));
        }
        if (local_120 != (long *)0x0) {
          android::RefBase::decStrong((void *)((long)local_120 + *(long *)(*local_120 + -0x18)));
        }
                    // try { // try from 00110598 to 001105b3 has its CatchHandler @ 001107d4
        android::String8::append((char *)&local_130);
        if (local_130 == (void *)0x0) {
          sVar8 = 0xffffffffffffffff;
        }
        else {
          sVar8 = *(long *)((long)local_130 + -0x10) - 1;
        }
        write(param_1,local_130,sVar8);
        if (local_110 != (long *)0x0) {
          android::RefBase::decStrong((void *)((long)local_110 + *(long *)(*local_110 + -0x18)));
        }
        bVar1 = true;
      }
      if ((int)uVar13 != 0) break;
      uVar13 = 1;
    }
    if (!bVar1) {
      android::String8::append((char *)&local_130);
      if (local_130 == (void *)0x0) {
        sVar8 = 0xffffffffffffffff;
      }
      else {
        sVar8 = *(long *)((long)local_130 + -0x10) - 1;
      }
      write(param_1,local_130,sVar8);
    }
    if (bVar2) {
                    // try { // try from 001106fc to 0011072b has its CatchHandler @ 00110748
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x228));
    }
    iVar4 = *(int *)(param_2 + 0x10);
    lVar10 = 0;
    iVar11 = 0;
    while (iVar11 = iVar11 + 1, iVar11 < iVar4) {
      lVar12 = *(long *)(param_2 + 8);
                    // try { // try from 0011061c to 0011061f has its CatchHandler @ 00110748
      android::String16::String16((String16 *)&local_110,"-v");
      lVar12 = *(long *)(lVar12 + lVar10);
      if (lVar12 == 0) {
        lVar7 = -1;
      }
      else {
        lVar7 = (*(ulong *)(lVar12 + -0x10) >> 1) - 1;
      }
      lVar9 = -1;
      if (local_110 != (long *)0x0) {
        lVar9 = ((ulong)local_110[-2] >> 1) - 1;
      }
                    // try { // try from 0011064c to 0011064f has its CatchHandler @ 001107ac
      iVar5 = strzcmp16(lVar12,lVar7,local_110,lVar9);
      lVar10 = lVar10 + 8;
      android::String16::~String16((String16 *)&local_110);
      if (iVar5 == 0) {
                    // try { // try from 00110670 to 00110673 has its CatchHandler @ 00110748
        android::String8::String8
                  ((String8 *)&local_110,(String16 *)(*(long *)(param_2 + 8) + lVar10));
        uVar6 = atoi((char *)local_110);
        sprintf(acStack_108,"Set Log Level to %d",(ulong)uVar6);
                    // try { // try from 00110694 to 00110697 has its CatchHandler @ 001107d0
        android::String8::append((char *)&local_130);
        android::String8::~String8((String8 *)&local_110);
      }
    }
  }
  android::String8::~String8((String8 *)&local_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(0);
}



// non-virtual thunk to android::FpService::dump(int, android::Vector<android::String16> const&)

void __thiscall android::FpService::dump(FpService *this,int param_1,Vector *param_2)

{
  dump(this + -8,param_1,param_2);
  return;
}



// android::sp<android::FpService::Client>::TEMPNAMEPLACEHOLDERVALUE(android::sp<android::FpService::Client>
// const&)

sp<> * __thiscall android::sp<>::operator=(sp<> *this,sp *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)param_1;
  if (plVar2 != (long *)0x0) {
    android::RefBase::incStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
  }
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
  }
  *(long **)this = plVar2;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::notifyClient(int, int, int)

void android::notifyClient(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  long *local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]notifyClient,type:%d,msg:%d,ext:%d,clientID:%d",
                      "notifyClient",param_1,param_2,param_3,*(undefined4 *)(DAT_00143060 + 0x5b));
  local_18 = (long *)0x0;
  if (*(uint *)(DAT_00143060 + 0x5b) < 3) {
                    // try { // try from 001108e4 to 001108e7 has its CatchHandler @ 00110afc
    wp<>::promote((wp<> *)(DAT_00143060 + (long)(int)*(uint *)(DAT_00143060 + 0x5b) * 2 + 0x3f));
                    // try { // try from 001108f4 to 001108f7 has its CatchHandler @ 00110b24
    sp<>::operator=((sp<> *)&local_18,(sp *)&local_10);
    if (local_10 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_10 + *(long *)(*local_10 + -0x18)));
    }
  }
  else {
                    // try { // try from 001109b4 to 00110a0f has its CatchHandler @ 00110afc
    __android_log_print(6,"FingerGoodix","[%-20s]Invalid NotifyClientID","notifyClient");
  }
  if (local_18 == (long *)0x0) {
    __android_log_print(6,"FingerGoodix","[%-20s]client is null","notifyClient");
  }
  else {
    if (param_1 != 8) {
                    // try { // try from 00110934 to 0011097b has its CatchHandler @ 00110afc
      (**(code **)(*DAT_00143060 + 0x88))(DAT_00143060);
      iVar1 = (**(code **)(*DAT_00143060 + 0x88))(DAT_00143060);
      if ((iVar1 == 3) && (param_1 == 1)) {
                    // try { // try from 00110a78 to 00110af3 has its CatchHandler @ 00110afc
        (**(code **)(*local_18 + 0x188))(local_18,3,param_2,param_3);
      }
      (**(code **)(*local_18 + 0x188))(local_18,param_1,param_2,param_3);
      if (local_18 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
      }
      goto LAB_00110a2c;
    }
    if (param_2 == 0) {
      uVar3 = 2;
      pcVar2 = "SCREEN ON";
      *(undefined4 *)(DAT_00143060 + 0x1b) = 2;
    }
    else if (param_2 == 1) {
      uVar3 = 3;
      pcVar2 = "SCREEN OFF";
      *(undefined4 *)(DAT_00143060 + 0x1b) = 3;
    }
    else {
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]MSG_TYPE_COMMON_SCREEN_STATUS_CHANGE, error status=%d",
                          "notifyClient",param_2);
      pcVar2 = "ERROR STATUS";
      uVar3 = *(undefined4 *)(DAT_00143060 + 0x1b);
    }
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]Current screen status:%s,recognize retry times:%d\n","notifyClient",
                        pcVar2,uVar3);
    (**(code **)(*local_18 + 0x1a0))(local_18,param_2);
  }
  if (local_18 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
  }
LAB_00110a2c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::postData2Client(int, int, char*)

void android::postData2Client(int param_1,int param_2,char *param_3)

{
  long *local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]postData2Client,msgType:%d,length:%d,clientID:%d",
                      "postData2Client",param_1,param_2,*(undefined4 *)(DAT_00143060 + 0x2d8));
  local_18 = (long *)0x0;
  if (*(uint *)(DAT_00143060 + 0x2d8) < 3) {
                    // try { // try from 00110be8 to 00110beb has its CatchHandler @ 00110d30
    wp<>::promote((wp<> *)(DAT_00143060 + (long)(int)*(uint *)(DAT_00143060 + 0x2d8) * 0x10 + 0x1f8)
                 );
                    // try { // try from 00110bf8 to 00110bfb has its CatchHandler @ 00110cec
    sp<>::operator=((sp<> *)&local_18,(sp *)&local_10);
    if (local_10 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_10 + *(long *)(*local_10 + -0x18)));
    }
  }
  else {
                    // try { // try from 00110c9c to 00110cc7 has its CatchHandler @ 00110d30
    __android_log_print(6,"FingerGoodix","[%-20s]Invalid NotifyClientID","postData2Client");
  }
  if (local_18 == (long *)0x0) {
    __android_log_print(6,"FingerGoodix","[%-20s]client is null","postData2Client");
    if (local_18 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
    }
  }
  else {
                    // try { // try from 00110c34 to 00110c37 has its CatchHandler @ 00110d30
    (**(code **)(*local_18 + 400))(local_18,param_1,param_2,param_3);
    if (local_18 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::mp_test(int, int)

void __thiscall android::FpService::Client::mp_test(Client *this,int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_110;
  int local_10c;
  int local_ec;
  undefined4 local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService mp_test(): cmd = %d, timeout = %d"
                      ,"mp_test",param_1,param_2);
  memset(&local_110,0,0x108);
  if (param_1 == 9) {
    uVar2 = (**(code **)(*(long *)(this + 0x70) + 0x208))(*(long *)(this + 0x70),0,&local_110);
  }
  else if (param_1 == 10) {
    __android_log_print(3,"FingerGoodix","[%-20s]Johnny: SPI Test Start","mp_test");
    iVar1 = (**(code **)(*(long *)(this + 0x70) + 0x208))(*(long *)(this + 0x70),1,&local_110);
    local_110 = 0;
    postData2Client(0x1195,0x108,(char *)&local_110);
    if ((iVar1 == 0) && (local_10c == 1)) {
      __android_log_print(3,"FingerGoodix","[%-20s]service mp_test:selftest success.","mp_test");
      notifyClient(0x1194,0,0);
      __android_log_print(3,"FingerGoodix","[%-20s]Johnny: SPI Test Pass!","mp_test");
      uVar2 = 0;
    }
    else {
      __android_log_print(3,"FingerGoodix","[%-20s]service mp_test:selftest failed.","mp_test");
      notifyClient(0x1194,0,4);
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (param_1 == 0xe) {
      __android_log_print(3,"FingerGoodix","[%-20s]Johnny: Defect Detection Test Start","mp_test");
      local_68 = property_get_int32("itt.goodix.badpoint",0x23);
      (**(code **)(*(long *)(this + 0x70) + 0x188))(*(long *)(this + 0x70),0);
      iVar1 = (**(code **)(*(long *)(this + 0x70) + 0x208))(*(long *)(this + 0x70),5,&local_110);
      local_110 = 6;
      postData2Client(0x1195,0x108,(char *)&local_110);
      if ((iVar1 == 0) && (local_ec == 1)) {
        __android_log_print(3,"FingerGoodix","[%-20s]service mp_test:defect detection pass.",
                            "mp_test");
        notifyClient(0x1194,6,0);
        (**(code **)(*(long *)(this + 0x70) + 0x188))(*(long *)(this + 0x70),1);
        __android_log_print(3,"FingerGoodix","[%-20s]Johnny: OpenShort Test Pass!","mp_test");
        uVar2 = 0;
      }
      else {
        __android_log_print(3,"FingerGoodix","[%-20s]service mp_test:defect detection failed.",
                            "mp_test");
        notifyClient(0x1194,6,4);
        (**(code **)(*(long *)(this + 0x70) + 0x188))(*(long *)(this + 0x70),1);
        uVar2 = 0xffffffff;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::SendCmd(int, char*, int, char**, int*)

void __thiscall
android::FpService::Client::SendCmd
          (Client *this,int param_1,char *param_2,int param_3,char **param_4,int *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]FpService::Client::SendCmd cmd = %d.","SendCmd",
                      param_1);
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
    *param_4 = (char *)0x0;
  }
  switch(param_1) {
  case 0:
    plVar7 = *(long **)(this + 0x80);
    if (1 < *(int *)(plVar7 + 0xf) - 10U) goto LAB_001117f4;
    (**(code **)(*plVar7 + 0x98))(plVar7,0xc);
    (**(code **)(*(long *)(this + 0x70) + 0x1a0))(*(long *)(this + 0x70));
    (**(code **)(**(long **)(this + 0x80) + 0x98))(*(long **)(this + 0x80),1);
  case 0x24:
switchD_00111100_caseD_24:
    uVar1 = 0;
    break;
  case 1:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_GET_BITMAP:%d","SendCmd",
                        *(undefined4 *)(*(long *)(this + 0x80) + 0x78));
    plVar7 = *(long **)(this + 0x80);
    uVar1 = *(undefined4 *)(this + 0x90);
    *(undefined4 *)((long)plVar7 + 300) = 3;
    (**(code **)(*plVar7 + 0xa0))(plVar7,uVar1);
    (**(code **)(**(long **)(this + 0x80) + 0xa8))(*(long **)(this + 0x80));
    uVar1 = 0;
    break;
  case 2:
    puVar3 = (undefined8 *)malloc(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0x8dc);
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x1c0))(*(long *)(this + 0x70),param_2,param_3,puVar3);
    }
    goto LAB_0011172c;
  case 3:
    (**(code **)(*(long *)(this + 0x70) + 0x1e0))(*(long *)(this + 0x70));
    uVar1 = 0;
    break;
  case 4:
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0x900);
      uVar1 = 0;
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x1d0))(*(long *)(this + 0x70),param_2,param_3);
      uVar1 = 0;
    }
    break;
  case 5:
    puVar3 = (undefined8 *)malloc(0x18);
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0x911);
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x1d8))(*(long *)(this + 0x70),param_2,param_3,puVar3);
    }
    *param_4 = (char *)puVar3;
    uVar1 = 0;
    *param_5 = 0x18;
    break;
  case 6:
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0x939);
      uVar1 = 0;
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x1e8))(*(long *)(this + 0x70),param_2,param_3);
      uVar1 = 0;
    }
    break;
  default:
    __android_log_print(6,"FingerGoodix","[%-20s]SendCmd:command not find!","SendCmd");
    uVar1 = 0;
    break;
  case 8:
    pcVar2 = (char *)malloc(0xc);
    (**(code **)(*(long *)(this + 0x70) + 0x1f0))(*(long *)(this + 0x70),pcVar2);
    __android_log_print(3,"FingerGoodix","[%-20s]GET_HARDWARE_INFO. chip_version = 0x%04x","SendCmd"
                        ,*(undefined4 *)(pcVar2 + 8));
    *param_4 = pcVar2;
    *param_5 = 0xc;
    uVar1 = 0;
    *(undefined4 *)(pcVar2 + 8) = DAT_00143078;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x17:
  case 0x1e:
  case 0x1f:
  case 0x22:
  case 0x23:
  case 0x28:
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]FINGERPRINT_CMD_MP_TEST: (fingerprint_Cmd_t) cmd = %d","SendCmd",
                        param_1);
    pthread_mutex_lock((pthread_mutex_t *)ProcessRawDataLock_MP);
    if ((((param_1 - 9U < 2) || (param_1 == 0xe)) || (param_1 == 0x17)) ||
       ((param_1 == 0x28 || (param_1 - 0x22U < 2)))) {
                    // try { // try from 0011189c to 0011189f has its CatchHandler @ 001119ac
      (**(code **)(**(long **)(this + 0x80) + 0x68))(*(long **)(this + 0x80),1);
    }
    else if (param_1 == 0x10) {
                    // try { // try from 001119a0 to 001119a3 has its CatchHandler @ 001119ac
      (**(code **)(**(long **)(this + 0x80) + 0x70))(*(long **)(this + 0x80));
    }
    else {
                    // try { // try from 001114ec to 0011150b has its CatchHandler @ 001119ac
      (**(code **)(**(long **)(this + 0x80) + 0x68))(*(long **)(this + 0x80),0);
    }
    if ((param_3 < 1) || (param_2 == (char *)0x0)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = mp_test(this,param_1,*(int *)param_2);
    }
    pthread_mutex_unlock((pthread_mutex_t *)ProcessRawDataLock_MP);
    break;
  case 0x13:
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0xa26);
      uVar1 = 0;
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x228))(*(long *)(this + 0x70),*(undefined4 *)param_2);
      uVar1 = 0;
    }
    break;
  case 0x14:
    pcVar2 = (char *)malloc(4);
    (**(code **)(*(long *)(this + 0x70) + 0x230))(*(long *)(this + 0x70),pcVar2);
    *param_4 = pcVar2;
    uVar1 = 0;
    *param_5 = 4;
    break;
  case 0x18:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_NAVIGATION_ENABLE","SendCmd");
    (**(code **)(*(long *)this + 0x120))(this,0,0,0);
    uVar1 = 0;
    break;
  case 0x19:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_NAVIGATION_DISABLE","SendCmd");
    (**(code **)(*(long *)this + 0x128))(this);
    uVar1 = 0;
    break;
  case 0x1a:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_ENABLE","SendCmd");
    (**(code **)(*(long *)this + 0x110))(this);
    goto LAB_00111240;
  case 0x1b:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_DISABLE","SendCmd");
    (**(code **)(*(long *)this + 0x118))(this);
    goto LAB_00111240;
  case 0x1c:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_DEBUG_ENABLE","SendCmd"
                       );
    (**(code **)(*(long *)this + 0x160))(this);
    DAT_00143028 = *(undefined4 *)param_2;
    __android_log_print(3,"FingerGoodix","[%-20s]cmdPara GscHbdKey = %d","SendCmd",DAT_00143028);
    if (*(char *)(*(long *)(this + 0x80) + 0xd5) == '\0') {
      pcVar2 = "[%-20s]mService->bIsExitMp == false: do setCurNotifyClientID in HBD_DEBUG_ENABLE";
LAB_00111238:
      __android_log_print(3,"FingerGoodix",pcVar2,"SendCmd");
      goto LAB_00111240;
    }
    goto switchD_00111100_caseD_24;
  case 0x1d:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_DISABLE","SendCmd");
    (**(code **)(*(long *)this + 0x168))(this);
    uVar1 = 0;
    break;
  case 0x20:
    local_c = 0;
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_GET_BASE","SendCmd");
    (**(code **)(*(long *)(this + 0x70) + 0x260))(*(long *)(this + 0x70),&local_c);
LAB_00111240:
    (**(code **)(**(long **)(this + 0x80) + 0xa0))
              (*(long **)(this + 0x80),*(undefined4 *)(this + 0x90));
    uVar1 = 0;
    break;
  case 0x21:
    __android_log_print(3,"FingerGoodix","[%-20s]FINGERPRINT_CMD_MP_TEST_HBD_FLESH_TEST","SendCmd");
    (**(code **)(*(long *)(this + 0x70) + 0xa8))(*(long *)(this + 0x70),6);
    (**(code **)(*(long *)(this + 0x70) + 0x268))(*(long *)(this + 0x70));
    (**(code **)(*(long *)(this + 0x70) + 0x270))(*(long *)(this + 0x70));
    (**(code **)(*(long *)(this + 0x70) + 0xa8))(*(long *)(this + 0x70),7);
    DAT_00143028 = 0;
    if (*(char *)(*(long *)(this + 0x80) + 0xd5) == '\0') {
      pcVar2 = "[%-20s]mService->bIsExitMp == false: do setCurNotifyClientID in HBD_FLESH_TEST";
      goto LAB_00111238;
    }
    goto switchD_00111100_caseD_24;
  case 0x25:
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]@@@@---FINGERPRINT_CMD_MP_INIT_CHIP: set bIsExitMp = true; Do cancel"
                        ,"SendCmd");
    lVar5 = *(long *)(this + 0x70);
    pcVar6 = *(code **)(lVar5 + 0x1a0);
    *(undefined *)(*(long *)(this + 0x80) + 0xd5) = 1;
    (*pcVar6)(lVar5);
    (**(code **)(*(long *)(this + 0x70) + 0x288))(*(long *)(this + 0x70));
    uVar1 = 0;
    break;
  case 0x26:
    puVar3 = (undefined8 *)malloc(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    if (param_2 == (char *)0x0) {
      __android_log_print(3,"FingerGoodix","[%-20s]Error_%d:in_buffer is NULL.","SendCmd",0x8f0);
    }
    else {
      (**(code **)(*(long *)(this + 0x70) + 0x1c8))(*(long *)(this + 0x70),param_2,param_3,puVar3);
    }
LAB_0011172c:
    *param_4 = (char *)puVar3;
    uVar1 = 0;
    *param_5 = 0x10;
    break;
  case 0x27:
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]mService->bIsExitMp = false in FINGERPRINT_CMD_SET_EXITMP_FALSE; Do setCurNotifyClientID = %d; mNextOption=OPTION_DEFAULT"
                        ,"SendCmd",*(undefined4 *)(this + 0x90));
    plVar7 = *(long **)(this + 0x80);
    uVar1 = *(undefined4 *)(this + 0x90);
    *(undefined *)((long)plVar7 + 0xd5) = 0;
    *(undefined4 *)((long)plVar7 + 300) = 0;
    (**(code **)(*plVar7 + 0xa0))(plVar7,uVar1);
    uVar1 = 0;
    break;
  case 0x29:
    (**(code **)(**(long **)(this + 0x80) + 0x68))(*(long **)(this + 0x80),*(int *)param_2 != 0);
    uVar1 = 0;
    break;
  case 0x2a:
    (**(code **)(*(long *)this + 0x130))(this,1);
    uVar1 = 0;
    break;
  case 0x2b:
    (**(code **)(*(long *)this + 0x130))(this,0);
    uVar1 = 0;
    break;
  case 0x2c:
    puVar4 = (undefined4 *)malloc(4);
    (**(code **)(*(long *)(this + 0x70) + 0x200))(*(long *)(this + 0x70),puVar4);
    uVar1 = *puVar4;
    pcVar2 = "[%-20s]>>>>>>>>>>> GET_SUPPORTGSC_INFO. isSupportGsc = %d";
    goto LAB_00111778;
  case 0x2d:
    puVar4 = (undefined4 *)malloc(4);
    (**(code **)(*(long *)(this + 0x70) + 0x1f8))(*(long *)(this + 0x70),puVar4);
    uVar1 = *puVar4;
    pcVar2 = "[%-20s]>>>>>>>>>>> Get MaxEnrollNum = %d";
LAB_00111778:
    __android_log_print(3,"FingerGoodix",pcVar2,"SendCmd",uVar1);
    *param_4 = (char *)puVar4;
    uVar1 = 0;
    *param_5 = 4;
    break;
  case 100:
    if (param_3 == 4) {
      uVar1 = *(undefined4 *)param_2;
      __android_log_print(3,"FingerGoodix","[%-20s]Set active froup:%d","SendCmd",uVar1);
      (**(code **)(*(long *)this + 0x170))(this,uVar1);
      uVar1 = 0;
      break;
    }
LAB_001117f4:
    uVar1 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::RawDataProcessLoop(void*)

void android::RawDataProcessLoop(void *param_1)

{
  int iVar1;
  
                    // try { // try from 00111a28 to 00111a77 has its CatchHandler @ 00112cc0
  __android_log_print(3,"FingerGoodix","[%-20s]RawDataProcessLoop Enter!","RawDataProcessLoop");
  do {
    do {
      while( true ) {
        __android_log_print(3,"FingerGoodix","[%-20s]RDPL: while(1) begin","RawDataProcessLoop");
        pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x104));
                    // try { // try from 00111a8c to 00111aa7 has its CatchHandler @ 00112c90
        __android_log_print(3,"FingerGoodix","[%-20s]get lock,try set default mode.",
                            "RawDataProcessLoop");
                    // WARNING: Load size is inaccurate
        *(undefined *)((long)param_1 + 0xd4) = 1;
        (**(code **)(*param_1 + 0x70))(param_1);
        pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x104));
                    // try { // try from 00111ac4 to 00111daf has its CatchHandler @ 00112cc0
        __android_log_print(3,"FingerGoodix","[%-20s]RDPL: after setDefaulMode()",
                            "RawDataProcessLoop");
        iVar1 = sem_wait((sem_t *)&DAT_00143068);
        __android_log_print(3,"FingerGoodix","[%-20s]RDPL: after sem_wait()","RawDataProcessLoop");
        if (iVar1 == 0) break;
        __android_log_print(6,"FingerGoodix","[%-20s]Cann\'t wait sem!","RawDataProcessLoop");
      }
      *(undefined *)((long)param_1 + 0xd4) = 0;
      __android_log_print(3,"FingerGoodix","[%-20s]Got signal! (mCurStatus) = %d",
                          "RawDataProcessLoop",*(undefined4 *)((long)param_1 + 0x78));
      __android_log_print(3,"FingerGoodix","[%-20s]Got signal! (mNextOption) = %d",
                          "RawDataProcessLoop",*(undefined4 *)((long)param_1 + 300));
    } while (*(int *)((long)param_1 + 300) == 0);
    switch(*(int *)((long)param_1 + 300)) {
    case 1:
      iVar1 = 6;
      *(undefined4 *)((long)param_1 + 0x78) = 6;
      break;
    case 2:
      iVar1 = 2;
      *(undefined4 *)((long)param_1 + 0x78) = 2;
      break;
    case 3:
      iVar1 = 10;
      *(undefined4 *)((long)param_1 + 0x78) = 10;
      break;
    case 4:
      iVar1 = 0xd;
      *(undefined4 *)((long)param_1 + 0x78) = 0xd;
      break;
    case 5:
      iVar1 = 0xe;
      *(undefined4 *)((long)param_1 + 0x78) = 0xe;
      break;
    default:
      iVar1 = *(int *)((long)param_1 + 0x78);
    }
    *(undefined4 *)((long)param_1 + 300) = 0;
    while( true ) {
      if (iVar1 - 2U < 0xd) {
                    // WARNING: Could not recover jumptable at 0x00111bdc. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)(&UNK_00111be0 + (long)*(short *)(&DAT_00126f54 + (ulong)(iVar1 - 2U) * 2) * 4))()
        ;
        return;
      }
      __android_log_print(3,"FingerGoodix","[%-20s]Status error!current actStatus:%d",
                          "RawDataProcessLoop");
      if ((*(int *)((long)param_1 + 0x78) - 6U & 0xfffffffb) != 0) break;
      __android_log_print(3,"FingerGoodix","[%-20s] fpsrv->mCurStatus = %d : goto RAWDATALOOP",
                          "RawDataProcessLoop");
      iVar1 = *(int *)((long)param_1 + 0x78);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::removeClient(android::sp<android::IFingerPrintClient> const&)

void __thiscall android::FpService::removeClient(FpService *this,sp *param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  long *plVar2;
  long *this_00;
  int iVar3;
  long *local_38;
  long *local_30;
  long *local_28;
  long *local_20;
  long *local_18;
  long *local_10;
  long local_8;
  
  this_00 = (long *)(this + 0x1f8);
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  __mutex = (pthread_mutex_t *)(this + 0x228);
  __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService::removeClient,pid=%d",
                      "removeClient",0x7b);
  do {
    local_38 = (long *)0x0;
                    // try { // try from 00112e2c to 00112e2f has its CatchHandler @ 001130bc
    pthread_mutex_lock(__mutex);
    if (*this_00 == 0) {
                    // try { // try from 00112fe0 to 00112fe3 has its CatchHandler @ 0011317c
      __android_log_print(3,"FingerGoodix","[%-20s]mClient[%d] is unused","removeClient",iVar3);
LAB_00112fe4:
      pthread_mutex_unlock(__mutex);
      if (local_38 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_38 + *(long *)(*local_38 + -0x18)));
      }
    }
    else {
                    // try { // try from 00112e40 to 00112e43 has its CatchHandler @ 0011317c
      wp<>::promote((wp<> *)this_00);
                    // try { // try from 00112e4c to 00112e4f has its CatchHandler @ 00113158
      sp<>::operator=((sp<> *)&local_38,(sp *)&local_30);
      if (local_30 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_30 + *(long *)(*local_30 + -0x18)));
      }
      if (local_38 == (long *)0x0) {
        if (*this_00 != 0) {
                    // try { // try from 0011301c to 0011308b has its CatchHandler @ 0011317c
          android::RefBase::weakref_type::decWeak((void *)this_00[1]);
          *this_00 = 0;
        }
        __android_log_print(3,"FingerGoodix","[%-20s]mClient[%d] is null","removeClient",iVar3);
        goto LAB_00112fe4;
      }
      local_28 = *(long **)param_1;
      if (local_28 != (long *)0x0) {
                    // try { // try from 00112e94 to 00112e97 has its CatchHandler @ 0011317c
        android::RefBase::incStrong((void *)((long)local_28 + *(long *)(*local_28 + -0x18)));
      }
                    // try { // try from 00112ea0 to 00112ea3 has its CatchHandler @ 00113184
      android::IInterface::asBinder((sp *)&local_28);
      local_18 = (long *)local_38[0x11];
      if (local_18 != (long *)0x0) {
                    // try { // try from 00112ec4 to 00112ec7 has its CatchHandler @ 00113150
        android::RefBase::incStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
      }
                    // try { // try from 00112ed0 to 00112ed3 has its CatchHandler @ 001130e4
      android::IInterface::asBinder((sp *)&local_18);
      plVar2 = local_10;
      plVar1 = local_20;
      if (local_10 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_10 + *(long *)(*local_10 + -0x18)));
      }
      if (local_18 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
      }
      if (local_20 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_20 + *(long *)(*local_20 + -0x18)));
      }
      if (local_28 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_28 + *(long *)(*local_28 + -0x18)));
      }
      if (plVar1 == plVar2) {
        __android_log_print(3,"FingerGoodix","[%-20s]found fingerprint client,remove it now",
                            "removeClient");
        if (*(long *)(this + (long)iVar3 * 0x10 + 0x1f8) != 0) {
          android::RefBase::weakref_type::decWeak(*(void **)(this + (long)iVar3 * 0x10 + 0x200));
          *(undefined8 *)(this + (long)iVar3 * 0x10 + 0x1f8) = 0;
        }
        pthread_mutex_unlock(__mutex);
        if (local_38 != (long *)0x0) {
          android::RefBase::decStrong((void *)((long)local_38 + *(long *)(*local_38 + -0x18)));
        }
        goto LAB_00112f8c;
      }
      pthread_mutex_unlock(__mutex);
      if (local_38 != (long *)0x0) {
        android::RefBase::decStrong((void *)((long)local_38 + *(long *)(*local_38 + -0x18)));
      }
    }
    iVar3 = iVar3 + 1;
    this_00 = this_00 + 2;
    if (iVar3 == 3) {
LAB_00112f8c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
  } while( true );
}



// android::sp<android::FpService>::TEMPNAMEPLACEHOLDERVALUE(android::sp<android::FpService> const&)

sp<> * __thiscall android::sp<>::operator=(sp<> *this,sp *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)param_1;
  if (plVar2 != (long *)0x0) {
    android::RefBase::incStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
  }
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
  }
  *(long **)this = plVar2;
  return this;
}



// android::sp<android::IFingerPrintClient>::TEMPNAMEPLACEHOLDERVALUE(android::sp<android::IFingerPrintClient>
// const&)

sp<> * __thiscall android::sp<>::operator=(sp<> *this,sp *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)param_1;
  if (plVar2 != (long *)0x0) {
    android::RefBase::incStrong((void *)((long)plVar2 + *(long *)(*plVar2 + -0x18)));
  }
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    android::RefBase::decStrong((void *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
  }
  *(long **)this = plVar2;
  return this;
}



// android::FpService::Client::Client(android::sp<android::FpService> const&,
// android::sp<android::IFingerPrintClient> const&, android::fpContext, int, int)

void __thiscall
android::FpService::Client::Client
          (Client *this,sp *param_1,sp *param_2,fpContext param_3,int param_4,int param_5)

{
  long lVar1;
  int in_w6;
  undefined4 in_w7;
  
  android::IFingerPrint::IFingerPrint((IFingerPrint *)this);
                    // try { // try from 00113294 to 00113297 has its CatchHandler @ 001133dc
  android::BBinder::BBinder((BBinder *)(this + 8));
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)this = lVar1;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)this = lVar1;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x70);
  lVar1 = *(long *)param_1;
  *(long *)this = lVar1;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
                    // try { // try from 00113300 to 00113303 has its CatchHandler @ 00113464
  pthread_mutex_init((pthread_mutex_t *)(this + 0x98),(pthread_mutexattr_t *)0x0);
                    // try { // try from 00113310 to 00113313 has its CatchHandler @ 00113454
  pthread_mutex_init((pthread_mutex_t *)(this + 0xc0),(pthread_mutexattr_t *)0x0);
                    // try { // try from 00113340 to 001133bf has its CatchHandler @ 001133f4
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]FingerPrintService client(class:FingerPrint) is constructing,clientID = %d"
                      ,"Client",in_w6);
  sp<>::operator=((sp<> *)(this + 0x80),param_2);
  sp<>::operator=((sp<> *)(this + 0x88),(sp *)(ulong)param_3);
  *(ulong *)(this + 0x68) = (ulong)(uint)param_4;
  *(ulong *)(this + 0x70) = (ulong)(uint)param_5;
  *(undefined4 *)(this + 0x94) = in_w7;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x78] = (Client)0x0;
  *(int *)(this + 0x90) = in_w6;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (Client)0x0;
  this[0x65] = (Client)0x0;
  setFingerPrintBusy(*(FpService **)(this + 0x80),in_w6);
  __android_log_print(3,"FingerGoodix","[%-20s]Set finger print busy flag in client construct",
                      "Client");
  return;
}



// android::FpService::Client::Client(android::sp<android::FpService> const&,
// android::sp<android::IFingerPrintClient> const&, android::fpContext, int, int)

void __thiscall
android::FpService::Client::Client
          (Client *this,sp *param_1,sp *param_2,fpContext param_3,int param_4,int param_5)

{
  undefined4 in_w6;
  
  android::RefBase::RefBase((RefBase *)(this + 0xe8));
                    // try { // try from 001134c8 to 001134cb has its CatchHandler @ 001135ec
  android::IFingerPrint::IFingerPrint((IFingerPrint *)this);
                    // try { // try from 001134d8 to 001134db has its CatchHandler @ 00113680
  android::BBinder::BBinder((BBinder *)(this + 8));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)this = 0x142448;
  *(undefined8 *)(this + 0xe8) = 0x1426c8;
  *(undefined8 *)(this + 8) = 0x142608;
  *(undefined8 *)(this + 0x88) = 0;
                    // try { // try from 00113510 to 00113513 has its CatchHandler @ 00113670
  pthread_mutex_init((pthread_mutex_t *)(this + 0x98),(pthread_mutexattr_t *)0x0);
                    // try { // try from 00113520 to 00113523 has its CatchHandler @ 00113660
  pthread_mutex_init((pthread_mutex_t *)(this + 0xc0),(pthread_mutexattr_t *)0x0);
                    // try { // try from 00113550 to 001135cf has its CatchHandler @ 00113600
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]FingerPrintService client(class:FingerPrint) is constructing,clientID = %d"
                      ,"Client",param_5);
  sp<>::operator=((sp<> *)(this + 0x80),param_1);
  sp<>::operator=((sp<> *)(this + 0x88),param_2);
  *(ulong *)(this + 0x68) = (ulong)param_3;
  *(ulong *)(this + 0x70) = (ulong)(uint)param_4;
  *(undefined4 *)(this + 0x94) = in_w6;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x78] = (Client)0x0;
  *(int *)(this + 0x90) = param_5;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (Client)0x0;
  this[0x65] = (Client)0x0;
  setFingerPrintBusy(*(FpService **)(this + 0x80),param_5);
  __android_log_print(3,"FingerGoodix","[%-20s]Set finger print busy flag in client construct",
                      "Client");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::connect(android::sp<android::IFingerPrintClient> const&, int)

void __thiscall android::FpService::connect(FpService *this,sp *param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long **in_x8;
  long lVar4;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  long *local_20;
  long *local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix",
                      "[%-20s]finger print service is connecting,client id is %d,pid = %d","connect"
                      ,param_2,0x7b);
  local_40 = (long *)0x0;
  if (2 < (uint)param_2) {
                    // try { // try from 0011372c to 0011372f has its CatchHandler @ 00113b40
    __android_log_print(3,"FingerGoodix","[%-20s]Warning: Invalid clientId:%d","connect",param_2);
    *in_x8 = (long *)0x0;
    goto LAB_00113738;
  }
                    // try { // try from 00113790 to 00113793 has its CatchHandler @ 00113b40
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x228));
  lVar4 = (long)param_2;
  if (*(long *)(this + (lVar4 + 0x1f) * 0x10 + 8) == 0) {
LAB_00113918:
    local_10 = (long *)this;
    android::RefBase::incStrong(this + *(long *)(*(long *)this + -0x18));
    uVar2 = *(undefined8 *)(this + 0x198);
    uVar3 = *(undefined8 *)(this + 0x1a0);
                    // try { // try from 00113950 to 00113953 has its CatchHandler @ 00113b4c
    plVar1 = (long *)operator_new(0xf8);
                    // try { // try from 0011396c to 0011396f has its CatchHandler @ 00113b78
    Client::Client((Client *)plVar1,(sp *)&local_10,param_1,(fpContext)uVar2,(int)uVar3,param_2);
                    // try { // try from 00113980 to 0011399f has its CatchHandler @ 00113b4c
    android::RefBase::incStrong((Client *)((long)plVar1 + *(long *)(*plVar1 + -0x18)));
    if (local_40 != (long *)0x0) {
      android::RefBase::decStrong((Client *)((long)local_40 + *(long *)(*local_40 + -0x18)));
    }
    local_40 = plVar1;
    if ((local_10 == (long *)0x0) ||
       (android::RefBase::decStrong((FpService *)((long)local_10 + *(long *)(*local_10 + -0x18))),
       local_40 != (long *)0x0)) {
                    // try { // try from 001139d8 to 00113a23 has its CatchHandler @ 00113b88
      uVar2 = android::RefBase::createWeak
                        ((Client *)((long)local_40 + *(long *)(*local_40 + -0x18)));
    }
    else {
      uVar2 = 0;
    }
    plVar1 = local_40;
    if (*(long *)(this + lVar4 * 0x10 + 0x1f8) != 0) {
      android::RefBase::weakref_type::decWeak(*(void **)(this + lVar4 * 0x10 + 0x200));
    }
    *(long **)(this + lVar4 * 0x10 + 0x1f8) = plVar1;
    *(undefined8 *)(this + lVar4 * 0x10 + 0x200) = uVar2;
    *in_x8 = local_40;
  }
  else {
                    // try { // try from 001137bc to 001137bf has its CatchHandler @ 00113b88
    wp<>::promote((wp<> *)(this + (lVar4 + 0x1f) * 0x10 + 8));
                    // try { // try from 001137cc to 001137cf has its CatchHandler @ 00113b90
    sp<>::operator=((sp<> *)&local_40,(sp *)&local_38);
    if (local_38 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_38 + *(long *)(*local_38 + -0x18)));
    }
    if (local_40 == (long *)0x0) {
      if (*(long *)(this + lVar4 * 0x10 + 0x1f8) != 0) {
                    // try { // try from 00113a5c to 00113a97 has its CatchHandler @ 00113b88
        android::RefBase::weakref_type::decWeak(*(void **)(this + lVar4 * 0x10 + 0x200));
        *(undefined8 *)(this + lVar4 * 0x10 + 0x1f8) = 0;
      }
      __android_log_print(3,"FingerGoodix","[%-20s]FingerPrintService::connect client is unused.",
                          "connect");
      goto LAB_00113918;
    }
    local_30 = *(long **)param_1;
    if (local_30 != (long *)0x0) {
                    // try { // try from 0011381c to 0011381f has its CatchHandler @ 00113b88
      android::RefBase::incStrong((void *)((long)local_30 + *(long *)(*local_30 + -0x18)));
    }
                    // try { // try from 00113830 to 00113833 has its CatchHandler @ 00113b70
    android::IInterface::asBinder((sp *)&local_30);
    local_20 = (long *)local_40[0x11];
    if (local_20 != (long *)0x0) {
                    // try { // try from 0011385c to 0011385f has its CatchHandler @ 00113aac
      android::RefBase::incStrong((void *)((long)local_20 + *(long *)(*local_20 + -0x18)));
    }
                    // try { // try from 00113870 to 00113873 has its CatchHandler @ 00113b1c
    android::IInterface::asBinder((sp *)&local_20);
    plVar1 = local_28;
    if (local_18 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
    }
    if (local_20 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_20 + *(long *)(*local_20 + -0x18)));
    }
    if (local_28 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_28 + *(long *)(*local_28 + -0x18)));
    }
    if (local_30 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_30 + *(long *)(*local_30 + -0x18)));
    }
    if (plVar1 != local_18) {
                    // try { // try from 00113914 to 0011393f has its CatchHandler @ 00113b88
      __android_log_print(3,"FingerGoodix",
                          "[%-20s]FingerPrintService::connect X(pid %d),client is exist.","connect",
                          0x7b);
      goto LAB_00113918;
    }
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]FingerPrintService::connect X(pid %d) the same client","connect",
                        0x7b);
    *in_x8 = local_40;
  }
  if (local_40 != (long *)0x0) {
    android::RefBase::incStrong((Client *)((long)local_40 + *(long *)(*local_40 + -0x18)));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x228));
LAB_00113738:
  if (local_40 != (long *)0x0) {
    android::RefBase::decStrong((Client *)((long)local_40 + *(long *)(*local_40 + -0x18)));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// android::FpService::Client::connect(android::sp<android::IFingerPrintClient> const&)

void __thiscall android::FpService::Client::connect(Client *this,sp *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *local_28;
  long *local_20;
  long *local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"FingerGoodix","[%-20s]Client::connect (pid %d)","connect",0x7b);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc0));
                    // try { // try from 00113c24 to 00113c27 has its CatchHandler @ 00113e04
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  if ((*(int *)(this + 0x94) != 0) && (iVar2 = checkPid(this), iVar2 != 0)) {
    __android_log_print(3,"FingerGoodix",
                        "[%-20s]Tried to connect to a locked fp (old pid %d, new pid %d)","connect",
                        *(undefined4 *)(this + 0x94),0x7b);
    uVar3 = 0x10;
    goto LAB_00113d4c;
  }
  if (*(long *)(this + 0x88) == 0) {
LAB_00113d90:
    *(undefined4 *)(this + 0x94) = 0x7b;
                    // try { // try from 00113da0 to 00113df7 has its CatchHandler @ 00113e94
    sp<>::operator=((sp<> *)(this + 0x88),param_1);
    __android_log_print(3,"FingerGoodix","[%-20s]Client::connect X (pid %d)","connect",0x7b);
  }
  else {
    local_28 = *(long **)param_1;
    if (local_28 != (long *)0x0) {
                    // try { // try from 00113c58 to 00113c5b has its CatchHandler @ 00113e8c
      android::RefBase::incStrong((void *)((long)local_28 + *(long *)(*local_28 + -0x18)));
    }
                    // try { // try from 00113c6c to 00113c6f has its CatchHandler @ 00113e84
    android::IInterface::asBinder((sp *)&local_28);
    local_18 = *(long **)(this + 0x88);
    if (local_18 != (long *)0x0) {
                    // try { // try from 00113c90 to 00113c93 has its CatchHandler @ 00113e7c
      android::RefBase::incStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
    }
                    // try { // try from 00113ca4 to 00113ca7 has its CatchHandler @ 00113e18
    android::IInterface::asBinder((sp *)&local_18);
    plVar1 = local_20;
    if (local_10 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_10 + *(long *)(*local_10 + -0x18)));
    }
    if (local_18 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_18 + *(long *)(*local_18 + -0x18)));
    }
    if (local_20 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_20 + *(long *)(*local_20 + -0x18)));
    }
    if (local_28 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_28 + *(long *)(*local_28 + -0x18)));
    }
    if (plVar1 != local_10) goto LAB_00113d90;
                    // try { // try from 00113d44 to 00113d47 has its CatchHandler @ 00113e94
    __android_log_print(3,"FingerGoodix","[%-20s]Client::Connect to the same client","connect");
  }
  uVar3 = 0;
LAB_00113d4c:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xc0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(uVar3);
}



// operator delete(void*)

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}



void FUN_00113e9c(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar4 & 0x3f;
    uVar1 = (int)uVar4 + 7;
    uVar4 = (ulong)uVar1;
    uVar5 = uVar5 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar5 = -1L << (uVar4 & 0x3f) | uVar5;
  }
  *param_2 = uVar5;
  return;
}



ulong * FUN_00113edc(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *local_8;
  
  if (param_1 != 0x50) {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar4 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      local_8 = (ulong *)0x0;
      uVar5 = 0;
      puVar3 = param_3;
      do {
        puVar4 = (ulong *)((long)puVar3 + 1);
        bVar1 = *(byte *)puVar3;
        uVar2 = uVar5 & 0x3f;
        uVar5 = (ulong)((int)uVar5 + 7);
        local_8 = (ulong *)((ulong)local_8 | ((ulong)bVar1 & 0x7f) << uVar2);
        puVar3 = puVar4;
      } while ((char)bVar1 < '\0');
      break;
    case 2:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)*(ushort *)param_3;
      break;
    case 3:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      puVar4 = (ulong *)FUN_00113e9c(param_3,&local_8);
      break;
    case 10:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)*(short *)param_3;
      break;
    case 0xb:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)*(uint *)param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
    *param_4 = (ulong)local_8;
    return puVar4;
  }
  puVar4 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
  *param_4 = *puVar4;
  return puVar4 + 1;
}



undefined8 FUN_00113fec(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xff) {
    return 0;
  }
  bVar1 = param_1 & 0x70;
  if (bVar1 == 0x20) {
    uVar2 = _Unwind_GetTextRelBase(param_2);
    return uVar2;
  }
  if (bVar1 < 0x21) {
    if ((param_1 & 0x70) == 0) {
      return 0;
    }
    if (bVar1 == 0x10) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0x40) {
      uVar2 = _Unwind_GetRegionStart(param_2);
      return uVar2;
    }
    if (bVar1 == 0x50) {
      return 0;
    }
    if (bVar1 == 0x30) {
      uVar2 = _Unwind_GetDataRelBase(param_2);
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00114068(long param_1,char *param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = _Unwind_GetRegionStart();
  }
  *param_3 = uVar4;
  cVar2 = *param_2;
  if (cVar2 == -1) {
    param_3[1] = uVar4;
    pbVar6 = (byte *)(param_2 + 2);
    cVar2 = param_2[1];
    *(char *)(param_3 + 5) = cVar2;
  }
  else {
    uVar4 = FUN_00113fec(cVar2,param_1);
    pcVar5 = (char *)FUN_00113edc(cVar2,uVar4,param_2 + 1,param_3 + 1);
    pbVar6 = (byte *)(pcVar5 + 1);
    cVar2 = *pcVar5;
    *(char *)(param_3 + 5) = cVar2;
  }
  if (cVar2 == -1) {
    param_3[3] = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    pbVar7 = pbVar6;
    do {
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar7;
      uVar3 = uVar8 & 0x3f;
      uVar8 = (ulong)((int)uVar8 + 7);
      uVar9 = uVar9 | ((ulong)bVar1 & 0x7f) << uVar3;
      pbVar7 = pbVar6;
    } while ((char)bVar1 < '\0');
    param_3[3] = pbVar6 + uVar9;
  }
  uVar9 = 0;
  *(byte *)((long)param_3 + 0x29) = *pbVar6;
  uVar8 = 0;
  pbVar6 = pbVar6 + 1;
  do {
    pbVar7 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar3 = uVar8 & 0x3f;
    uVar8 = (ulong)((int)uVar8 + 7);
    uVar9 = uVar9 | ((ulong)bVar1 & 0x7f) << uVar3;
    pbVar6 = pbVar7;
  } while ((char)bVar1 < '\0');
  param_3[4] = pbVar7 + uVar9;
  return;
}



char FUN_00114174(long param_1,long *param_2,long **param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  long **pplVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long **local_8;
  byte *pbVar9;
  
  pbVar8 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  do {
    uVar6 = 0;
    uVar5 = 0;
    pbVar9 = pbVar8;
    do {
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulong)((int)uVar5 + 7);
      uVar6 = uVar6 | ((ulong)bVar1 & 0x7f) << uVar2;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) {
      return '\0';
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == 0xff) {
      lVar7 = 0;
    }
    else {
      switch(bVar1 & 7) {
      case 0:
      case 4:
        lVar7 = uVar6 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar7 = uVar6 * -2;
        break;
      case 3:
        lVar7 = uVar6 * -4;
      }
    }
    FUN_00113edc(bVar1,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + lVar7,&local_8);
    pplVar3 = local_8;
    local_8 = param_3;
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar4 != '\0') {
      local_8 = (long **)*local_8;
    }
    cVar4 = (*(code *)(*pplVar3)[4])(pplVar3,param_2,&local_8,1);
  } while (cVar4 == '\0');
  return cVar4;
}



undefined8
__gxx_personality_v0(int param_1,uint param_2,long param_3,ulong *param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  ulong **ppuVar3;
  undefined uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined **local_70;
  ulong **local_68;
  ulong local_60;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  ulong **local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  byte *local_10;
  byte local_8;
  undefined local_7;
  
  local_4c = 0;
  if (param_1 != 1) {
    return 3;
  }
  bVar1 = 1 < param_3 + 0xb8b1aabcbcd4d500U;
  if ((param_2 == 6) <= bVar1) {
    local_60 = _Unwind_GetLanguageSpecificData(param_5);
    if (local_60 == 0) {
      return 8;
    }
    pbVar9 = (byte *)FUN_00114068(param_5,local_60,&local_30);
    local_20 = FUN_00113fec(local_8,param_5);
    lVar13 = _Unwind_GetIPInfo(param_5,&local_4c);
    uVar17 = lVar13 - (ulong)(local_4c == 0);
    if (pbVar9 < local_10) {
      do {
        uVar4 = local_7;
        uVar10 = FUN_00113fec(local_7,0);
        uVar10 = FUN_00113edc(uVar4,uVar10,pbVar9,&local_48);
        uVar4 = local_7;
        uVar11 = FUN_00113fec(local_7,0);
        uVar10 = FUN_00113edc(uVar4,uVar11,uVar10,&local_40);
        uVar4 = local_7;
        uVar11 = FUN_00113fec(local_7,0);
        pbVar12 = (byte *)FUN_00113edc(uVar4,uVar11,uVar10,&local_38);
        uVar15 = 0;
        uVar8 = 0;
        do {
          pbVar9 = pbVar12 + 1;
          bVar5 = *pbVar12;
          uVar16 = uVar8 & 0x3f;
          uVar8 = (ulong)((int)uVar8 + 7);
          uVar15 = uVar15 | ((ulong)bVar5 & 0x7f) << uVar16;
          pbVar12 = pbVar9;
        } while ((char)bVar5 < '\0');
        uVar8 = CONCAT44(uStack_44,local_48) + local_30;
        if (uVar17 < uVar8) break;
        if (uVar17 < uVar8 + local_40) {
          if (local_38 == (ulong **)0x0) {
            return 8;
          }
          uVar17 = (long)local_38 + local_28;
          if (uVar15 == 0) {
            if (uVar17 == 0) {
              return 8;
            }
          }
          else {
            if (uVar17 == 0) {
              return 8;
            }
            local_10 = local_10 + (uVar15 - 1);
            if (local_10 != (byte *)0x0) {
              if ((param_2 >> 3 & 1) == 0) {
                if (bVar1) {
                  local_68 = (ulong **)0x0;
                  local_70 = &__cxxabiv1::__foreign_exception::typeinfo;
                }
                else {
                  local_68 = (ulong **)(param_4 + 4);
                  if ((*param_4 & 1) != 0) {
                    local_68 = (ulong **)param_4[-10];
                  }
                  local_70 = (undefined **)local_68[-0xe];
                }
              }
              else {
                local_68 = (ulong **)0x0;
                local_70 = &__cxxabiv1::__forced_unwind::typeinfo;
              }
              bVar2 = false;
              goto LAB_0011460c;
            }
          }
          iVar7 = 2;
          goto LAB_00114518;
        }
      } while (pbVar9 < local_10);
    }
    uVar17 = 0;
    iVar7 = 1;
LAB_00114518:
    local_68 = (ulong **)0x0;
    local_48 = 0;
    local_10 = (byte *)0x0;
    goto LAB_00114524;
  }
  local_60 = param_4[-3];
  uVar17 = param_4[-2];
  local_48 = *(int *)((long)param_4 + -0x24);
  if (uVar17 == 0) {
    if ((param_2 >> 3 & 1) != 0) {
                    // WARNING: Subroutine does not return
      std::terminate();
    }
LAB_0011434c:
    FUN_0011507c(param_4);
  }
  if ((param_2 >> 3 & 1) == 0) {
LAB_001143b8:
    if (local_48 < 0) {
      FUN_00114068(param_5,local_60,&local_30);
      local_20 = FUN_00113fec(local_8,param_5);
      uVar8 = FUN_00113fec(local_8,param_5);
      param_4[-2] = uVar8;
    }
    goto LAB_0011435c;
  }
  goto LAB_00114358;
LAB_0011460c:
  lVar13 = FUN_00113e9c(local_10,&local_48);
  FUN_00113e9c(lVar13,&local_40);
  uVar8 = CONCAT44(uStack_44,local_48);
  if (uVar8 == 0) {
    bVar2 = true;
  }
  else if ((long)uVar8 < 1) {
    if (bVar1 < (local_70 != (undefined **)0x0 && (param_2 & 8) == 0)) {
      bVar5 = FUN_00114174(&local_30,local_70,local_68);
      bVar5 = bVar5 ^ 1;
    }
    else {
      uVar16 = 0;
      uVar15 = 0;
      pbVar9 = (byte *)(local_18 + ~uVar8);
      do {
        bVar5 = *pbVar9;
        uVar8 = uVar15 & 0x3f;
        uVar15 = (ulong)((int)uVar15 + 7);
        uVar16 = uVar16 | ((ulong)bVar5 & 0x7f) << uVar8;
        pbVar9 = pbVar9 + 1;
      } while ((char)bVar5 < '\0');
      bVar5 = uVar16 == 0;
    }
    if (bVar5 != 0) {
LAB_00114770:
      iVar7 = 3;
      goto LAB_00114524;
    }
  }
  else {
    if (local_8 == 0xff) {
      lVar14 = 0;
    }
    else {
      switch(local_8 & 7) {
      case 0:
      case 4:
        lVar14 = uVar8 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar14 = uVar8 * -2;
        break;
      case 3:
        lVar14 = uVar8 * -4;
      }
    }
    FUN_00113edc(local_8,local_20,local_18 + lVar14,&local_38);
    ppuVar3 = local_38;
    if (local_38 == (ulong **)0x0) goto LAB_00114770;
    if (local_70 != (undefined **)0x0) {
      local_38 = local_68;
      cVar6 = (**(code **)(*local_70 + 0x10))(local_70);
      if (cVar6 != '\0') {
        local_38 = (ulong **)*local_38;
      }
      cVar6 = (*(code *)(*ppuVar3)[4])(ppuVar3,local_70,&local_38,1);
      if (cVar6 != '\0') {
        local_68 = local_38;
        goto LAB_00114770;
      }
    }
  }
  if (local_40 == 0) goto LAB_001147c4;
  local_10 = (byte *)(lVar13 + local_40);
  goto LAB_0011460c;
LAB_001147c4:
  if (!bVar2) {
    return 8;
  }
  local_48 = 0;
  iVar7 = 2;
LAB_00114524:
  if ((param_2 & 1) != 0) {
    if (iVar7 == 2) {
      return 8;
    }
    if (!bVar1) {
      param_4[-3] = local_60;
      *(int *)((long)param_4 + -0x24) = local_48;
      param_4[-4] = (ulong)local_10;
      param_4[-1] = (ulong)local_68;
      param_4[-2] = uVar17;
      return 6;
    }
    return 6;
  }
  if (((param_2 >> 3 & 1) == 0) && (!bVar1)) {
    if (iVar7 == 1) goto LAB_0011434c;
    goto LAB_001143b8;
  }
  if (iVar7 == 1) {
                    // WARNING: Subroutine does not return
    std::terminate();
  }
LAB_00114358:
  if (local_48 < 0) {
                    // try { // try from 001147ec to 001147ef has its CatchHandler @ 00114578
    lVar13 = std::unexpected();
    __cxa_begin_catch();
                    // WARNING: Subroutine does not return
    __cxxabiv1::__unexpected(*(_func_void **)(lVar13 + -0x40));
  }
LAB_0011435c:
  _Unwind_SetGR(param_5,0,param_4);
  _Unwind_SetGR(param_5,1,(long)local_48);
  _Unwind_SetIP(param_5,uVar17);
  return 7;
}



void __cxa_call_unexpected(long param_1)

{
  __cxa_begin_catch();
                    // WARNING: Subroutine does not return
                    // try { // try from 00114824 to 00114827 has its CatchHandler @ 00114828
  __cxxabiv1::__unexpected(*(_func_void **)(param_1 + -0x40));
}



// __cxxabiv1::__terminate(void (*)())

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    // try { // try from 001148e8 to 001148ef has its CatchHandler @ 001148f0
  (*param_1)();
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_terminate(void (*)())

undefined * std::set_terminate(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __cxxabiv1::__terminate_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__cxxabiv1::__terminate_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __cxxabiv1::__terminate_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_terminate()

undefined * std::get_terminate(void)

{
  return __cxxabiv1::__terminate_handler;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::terminate()

void std::terminate(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_terminate();
                    // WARNING: Subroutine does not return
  __cxxabiv1::__terminate(p_Var1);
}



// __cxxabiv1::__unexpected(void (*)())

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  std::terminate();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_unexpected(void (*)())

undefined * std::set_unexpected(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __cxxabiv1::__unexpected_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__cxxabiv1::__unexpected_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __cxxabiv1::__unexpected_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_unexpected()

undefined * std::get_unexpected(void)

{
  return __cxxabiv1::__unexpected_handler;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::unexpected()

void std::unexpected(void)

{
  _func_void *p_Var1;
  
  p_Var1 = (_func_void *)get_unexpected();
                    // WARNING: Subroutine does not return
  __cxxabiv1::__unexpected(p_Var1);
}



void FUN_001149a4(uint param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (1 < param_1) {
                    // WARNING: Subroutine does not return
    __cxxabiv1::__terminate(*(_func_void **)(param_2 + -0x38));
  }
  piVar4 = (int *)(param_2 + -0x60);
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))(param_2 + 0x20);
    }
    __cxa_free_exception(param_2 + 0x20);
    return;
  }
  return;
}



void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined4 *)(param_1 + -0x80) = 1;
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x18) = FUN_001149a4;
  _Unwind_RaiseException(param_1 + -0x20);
  __cxa_begin_catch(param_1 + -0x20);
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_rethrow(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = *(int *)(plVar1 + 1) + 1;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    _Unwind_Resume_or_Rethrow(lVar2 + 0x50);
    __cxa_begin_catch(lVar2 + 0x50);
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



// operator new(unsigned long)

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
    pvVar1 = malloc(param_1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = &PTR__bad_alloc_00142730;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar3,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}



void __cxa_pure_virtual(void)

{
  write(2,"pure virtual method called\n",0x1b);
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_deleted_virtual(void)

{
  write(2,"deleted virtual method called\n",0x1e);
                    // WARNING: Subroutine does not return
  std::terminate();
}



// std::bad_alloc::what() const

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = &PTR__bad_alloc_00142730;
  exception::~exception((exception *)this);
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  ~bad_alloc(this);
  operator_delete(this);
  return;
}



char * FUN_00114bf8(void)

{
  return "__gnu_cxx::__concurrence_lock_error";
}



char * FUN_00114c04(void)

{
  return "__gnu_cxx::__concurrence_unlock_error";
}



void FUN_00114c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00140590;
  std::exception::~exception((exception *)param_1);
  return;
}



void FUN_00114c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001405c0;
  std::exception::~exception((exception *)param_1);
  return;
}



void FUN_00114c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00140590;
  std::exception::~exception((exception *)param_1);
  operator_delete(param_1);
  return;
}



void FUN_00114c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001405c0;
  std::exception::~exception((exception *)param_1);
  operator_delete(param_1);
  return;
}



void FUN_00114c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR_FUN_00140590;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_00142750,FUN_00114c10);
}



void FUN_00114cc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR_FUN_001405c0;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_00142768,FUN_00114c20);
}



undefined8 * __cxa_allocate_exception(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long extraout_x1;
  ulong uVar5;
  
  puVar3 = (undefined8 *)malloc(param_1 + 0x80U);
  if (puVar3 != (undefined8 *)0x0) {
LAB_00114d14:
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    return puVar3 + 0x10;
  }
                    // try { // try from 00114d5c to 00114d5f has its CatchHandler @ 00114dd0
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001451f0);
  if (iVar2 == 0) {
    if (param_1 + 0x80U < 0x401) {
      uVar5 = 0;
      uVar4 = DAT_00155220;
      do {
        if ((uVar4 & 1) == 0) {
          DAT_00155220 = 1L << (uVar5 & 0x3f) | DAT_00155220;
          puVar3 = &DAT_00145220 + uVar5 * 0x80;
                    // try { // try from 00114dc4 to 00114dcf has its CatchHandler @ 00114de4
          iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001451f0);
          if (iVar2 == 0) goto LAB_00114d14;
          FUN_00114cc0();
                    // catch() { ... } // from try @ 00114d5c with catch @ 00114dd0
                    // catch() { ... } // from try @ 00114ddc with catch @ 00114dd0
          if (extraout_x1 != -1) {
                    // WARNING: Subroutine does not return
            _Unwind_Resume();
          }
          goto LAB_00114de0;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        uVar4 = uVar4 >> 1;
      } while (uVar1 != 0x40);
    }
                    // WARNING: Subroutine does not return
    std::terminate();
  }
                    // try { // try from 00114ddc to 00114ddf has its CatchHandler @ 00114dd0
  FUN_00114c90();
LAB_00114de0:
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected();
}



// WARNING: Removing unreachable block (ram,0x00114e74)

void __cxa_free_exception(undefined8 *param_1)

{
  int iVar1;
  long extraout_x1;
  long lVar2;
  long extraout_x1_00;
  
  if ((param_1 < &DAT_00145220) || ((undefined8 *)0x15521f < param_1)) {
    free(param_1 + -0x10);
    return;
  }
                    // try { // try from 00114e2c to 00114e2f has its CatchHandler @ 00114eac
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001451f0);
  if (iVar1 == 0) {
    DAT_00155220 = DAT_00155220 &
                   (1L << ((ulong)(param_1 + -0x28a44) >> 10 & 0x3f) ^ 0xffffffffffffffffU);
                    // try { // try from 00114e50 to 00114e9b has its CatchHandler @ 00114e9c
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001451f0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00114cc0();
    lVar2 = extraout_x1;
  }
  else {
                    // try { // try from 00114ea8 to 00114eab has its CatchHandler @ 00114eac
    FUN_00114c90();
    lVar2 = extraout_x1_00;
                    // catch() { ... } // from try @ 00114e2c with catch @ 00114eac
                    // catch() { ... } // from try @ 00114ea8 with catch @ 00114eac
  }
                    // catch() { ... } // from try @ 00114e50 with catch @ 00114e9c
  if (lVar2 == -1) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



undefined8 * __cxa_allocate_dependent_exception(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x1;
  
  puVar3 = (undefined8 *)malloc(0x70);
  if (puVar3 != (undefined8 *)0x0) {
LAB_00114ed0:
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    return puVar3;
  }
                    // try { // try from 00114f10 to 00114f13 has its CatchHandler @ 00114f94
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001451f0);
  if (iVar2 == 0) {
    uVar4 = 0;
    uVar5 = DAT_001435e0;
    while ((uVar5 & 1) != 0) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      uVar5 = uVar5 >> 1;
      if (uVar1 == 0x40) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
    }
    DAT_001435e0 = 1L << (uVar4 & 0x3f) | DAT_001435e0;
    puVar3 = &DAT_001435f0 + uVar4 * 0xe;
                    // try { // try from 00114f78 to 00114f83 has its CatchHandler @ 00114f88
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001451f0);
    if (iVar2 == 0) goto LAB_00114ed0;
    FUN_00114cc0();
  }
                    // try { // try from 00114f84 to 00114f87 has its CatchHandler @ 00114f94
  FUN_00114c90();
                    // catch() { ... } // from try @ 00114f78 with catch @ 00114f88
  if (extraout_x1 == -1) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Removing unreachable block (ram,0x0011503c)

void __cxa_free_dependent_exception(undefined8 *param_1)

{
  int iVar1;
  long extraout_x1;
  long lVar2;
  long extraout_x1_00;
  
  if ((param_1 < &DAT_001435f0) || ((undefined8 *)0x1451ef < param_1)) {
    free(param_1);
    return;
  }
                    // try { // try from 00114ff8 to 00114ffb has its CatchHandler @ 00115074
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_001451f0);
  if (iVar1 == 0) {
    DAT_001435e0 = DAT_001435e0 &
                   (1L << (SUB168(ZEXT416((int)param_1 - 0x1435f0U >> 4) *
                                  ZEXT816(0x2492492492492494),8) & 0x3f) ^ 0xffffffffffffffffU);
                    // try { // try from 0011501c to 00115063 has its CatchHandler @ 00115064
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001451f0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00114cc0();
    lVar2 = extraout_x1;
  }
  else {
                    // try { // try from 00115070 to 00115073 has its CatchHandler @ 00115074
    FUN_00114c90();
    lVar2 = extraout_x1_00;
                    // catch() { ... } // from try @ 00114ff8 with catch @ 00115074
                    // catch() { ... } // from try @ 00115070 with catch @ 00115074
  }
                    // catch() { ... } // from try @ 0011501c with catch @ 00115064
  if (lVar2 == -1) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



void FUN_0011507c(long *param_1)

{
  if ((param_1 != (long *)0x0) && (__cxa_begin_catch(), *param_1 + 0xb8b1aabcbcd4d500U < 2)) {
                    // WARNING: Subroutine does not return
    __cxxabiv1::__terminate((_func_void *)param_1[-7]);
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}



long __cxa_begin_catch(long *param_1)

{
  int iVar1;
  int iVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  
  pplVar3 = (long **)__cxa_get_globals();
  plVar5 = *pplVar3;
  plVar4 = param_1 + -10;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar2 = *(int *)(param_1 + -5);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar1 = *(int *)(pplVar3 + 1);
    *(int *)(param_1 + -5) = iVar2 + 1;
    *(int *)(pplVar3 + 1) = iVar1 + -1;
    if (plVar5 != plVar4) {
      param_1[-6] = (long)plVar5;
      *pplVar3 = plVar4;
    }
    return param_1[-1];
  }
  if (plVar5 == (long *)0x0) {
    *pplVar3 = plVar4;
    return 0;
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void __cxa_end_catch(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (1 < *(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      _Unwind_DeleteException(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
        _Unwind_DeleteException(lVar2 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::uncaught_exception()

bool std::uncaught_exception(void)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
  return *(int *)(lVar1 + 8) != 0;
}



// std::exception::~exception()

void __thiscall std::exception::~exception(exception *this)

{
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(undefined ***)this = &PTR__bad_exception_00142810;
  exception::~exception((exception *)this);
  return;
}



// std::exception::what() const

char * std::exception::what(void)

{
  return "std::exception";
}



// std::bad_exception::what() const

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}



// std::exception::~exception()

void __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  ~bad_exception(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  ~__forced_unwind(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return;
}



pthread_key_t * FUN_001152ec(pthread_key_t *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  pthread_key_t *ppVar2;
  
  if (param_1 == (pthread_key_t *)0x0) {
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1000,0x115308);
    ppVar2 = (pthread_key_t *)(*UNRECOVERED_JUMPTABLE)();
    return ppVar2;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return param_1;
  }
  uVar1 = pthread_key_delete(*param_1);
  return (pthread_key_t *)(ulong)uVar1;
}



void FUN_00115308(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    _Unwind_DeleteException(lVar1 + 0x50);
    lVar1 = lVar2;
  }
  free(param_1);
  return;
}



undefined * __cxa_get_globals_fast(void)

{
  undefined *puVar1;
  
  if (DAT_0015522c == '\0') {
    return &DAT_00155230;
  }
                    // try { // try from 00115380 to 00115383 has its CatchHandler @ 0011538c
  puVar1 = (undefined *)pthread_getspecific(DAT_00155228);
  return puVar1;
}



undefined8 * __cxa_get_globals(void)

{
  int iVar1;
  undefined8 *__pointer;
  
  if (DAT_0015522c == '\0') {
    __pointer = (undefined8 *)&DAT_00155230;
  }
  else {
                    // try { // try from 001153d4 to 001153fb has its CatchHandler @ 00115410
    __pointer = (undefined8 *)pthread_getspecific(DAT_00155228);
    if (__pointer == (undefined8 *)0x0) {
      __pointer = (undefined8 *)malloc(0x10);
      if ((__pointer == (undefined8 *)0x0) ||
         (iVar1 = pthread_setspecific(DAT_00155228,__pointer), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
        std::terminate();
      }
      *__pointer = 0;
      *(undefined4 *)(__pointer + 1) = 0;
    }
  }
  return __pointer;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::set_new_handler(void (*)())

_func_void * std::set_new_handler(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  _func_void *p_Var3;
  
  do {
    p_Var3 = DAT_00155240;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x155240,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00155240 = param_1;
    }
  } while (cVar1 != '\0');
  return p_Var3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::get_new_handler()

undefined8 std::get_new_handler(void)

{
  return DAT_00155240;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined ***)this = &PTR____si_class_type_info_001428c0;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  ~__si_class_type_info(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_3 + 8)) {
LAB_00115528:
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 8) = param_2;
    if (-1 < param_1) {
      uVar4 = 6;
      if (param_6 != (void *)((long)param_4 + param_1)) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_7 + 0x10) = uVar4;
      return 0;
    }
    uVar2 = 0;
    if (param_1 == -2) {
      *(undefined4 *)(param_7 + 0x10) = 1;
    }
  }
  else {
    cVar1 = *__s1;
    if (cVar1 != '*') {
      iVar3 = strcmp(__s1,*(char **)(param_3 + 8));
      if (iVar3 == 0) goto LAB_00115528;
    }
    if (param_4 == param_6) {
      if (__s1 == *(char **)(param_5 + 8)) {
LAB_001155c4:
        *(__sub_kind *)(param_7 + 0xc) = param_2;
        return 0;
      }
      if (cVar1 != '*') {
        iVar3 = strcmp(__s1,*(char **)(param_5 + 8));
        if (iVar3 == 0) goto LAB_001155c4;
      }
    }
    uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x38))
                      (*(long **)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



// __cxxabiv1::__si_class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *__s1;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_3 + 8)), iVar2 == 0)) {
      return 6;
    }
  }
  uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x40))
                    (*(long **)(this + 0x10),param_1,param_2,param_3,param_4);
  return uVar1;
}



// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

char __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x30))
                      (*(long **)(this + 0x10),param_1,param_2,param_3);
  }
  return cVar1;
}



void FUN_001156d0(void)

{
  return;
}



undefined8 FUN_001156d4(void)

{
  return 0;
}



undefined8 FUN_001156dc(void)

{
  return 0;
}



undefined8 FUN_001156e4(void)

{
  return 0;
}



void operator_delete(void *param_1)

{
  free(param_1);
  return;
}



bool FUN_001156f0(long param_1,long param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if (__s1 == *(char **)(param_2 + 8)) {
    return true;
  }
  if (*__s1 != '*') {
    iVar1 = strcmp(__s1,*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return false;
}



// WARNING: Removing unreachable block (ram,0x00115830)
// WARNING: Removing unreachable block (ram,0x001158c4)
// WARNING: Removing unreachable block (ram,0x00115844)
// __gnu_cxx::__verbose_terminate_handler()

void __gnu_cxx::__verbose_terminate_handler(void)

{
  long lVar1;
  char *pcVar2;
  char *__s;
  size_t __n;
  
  if (DAT_00155248 == '\0') {
    DAT_00155248 = '\x01';
    lVar1 = __cxa_current_exception_type();
    if (lVar1 != 0) {
      pcVar2 = *(char **)(lVar1 + 8);
      if (*pcVar2 == '*') {
        pcVar2 = pcVar2 + 1;
      }
      __s = (char *)__cxa_demangle(pcVar2,0,0);
      fwrite("terminate called after throwing an instance of \'",1,0x30,(FILE *)malloc);
      fputs(pcVar2,(FILE *)malloc);
      do {
        fwrite(&DAT_0012a628,1,2,(FILE *)malloc);
                    // try { // try from 001157f8 to 001157fb has its CatchHandler @ 0011583c
        __cxa_rethrow();
        fputs(__s,(FILE *)malloc);
      } while( true );
    }
    pcVar2 = "terminate called without an active exception\n";
    __n = 0x2d;
  }
  else {
    __n = 0x1d;
    pcVar2 = "terminate called recursively\n";
  }
  fwrite(pcVar2,1,__n,(FILE *)malloc);
                    // WARNING: Subroutine does not return
  abort();
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_18;
  uint local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  (**(code **)(*(long *)this + 0x30))(this,param_1,*param_2,&local_18);
  bVar1 = (local_10 & 6) == 6;
  if (bVar1) {
    *param_2 = local_18;
  }
  return bVar1;
}



// __cxxabiv1::__class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (param_4 != param_2) {
    uVar1 = 1;
  }
  return uVar1;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined ***)this = &PTR____class_type_info_00142950;
  FUN_001156d0();
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  operator_delete(this);
  return;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_001159c4;
    }
    return 0;
  }
LAB_001159c4:
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}



// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const

undefined __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  undefined uVar1;
  int iVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_1 + 8)), iVar2 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this,param_2);
  return uVar1;
}



// __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (param_4 == param_6) {
    if (__s1 == *(char **)(param_5 + 8)) {
LAB_00115b70:
      *(__sub_kind *)(param_7 + 0xc) = param_2;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_3 + 8)) {
        return 0;
      }
      goto LAB_00115b50;
    }
    iVar1 = strcmp(__s1,*(char **)(param_5 + 8));
    if (iVar1 == 0) goto LAB_00115b70;
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00115b50;
  }
  else {
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00115b50;
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00115b50:
  *(void **)param_7 = param_4;
  *(__sub_kind *)(param_7 + 8) = param_2;
  *(undefined4 *)(param_7 + 0x10) = 1;
  return 0;
}



long FUN_00115b94(long param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x4b:
  case 0x4c:
    if (param_3 == 0) {
      return 0;
    }
switchD_00115bc0_caseD_2a:
    if ((param_4 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 < *(int *)(param_1 + 0x2c))) {
LAB_00115bdc:
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = param_2;
        *(long *)(lVar1 + 8) = param_3;
        *(long *)(lVar1 + 0x10) = param_4;
        return lVar1;
      }
    }
LAB_00115ba4:
    return 0;
  default:
    goto LAB_00115ba4;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3b:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
  case 0x49:
  case 0x4a:
    if (param_3 == 0) {
      return 0;
    }
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x29:
  case 0x2e:
  case 0x2f:
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
    goto LAB_00115bdc;
  case 0x2a:
  case 0x30:
    goto switchD_00115bc0_caseD_2a;
  }
}



long FUN_00115c34(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    lVar1 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
    if ((lVar1 != 0 && param_2 != 0) && (param_3 != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0;
      *(long *)(lVar1 + 8) = param_2;
      *(int *)(lVar1 + 0x10) = param_3;
      return lVar1;
    }
  }
  return 0;
}



int ** FUN_00115c94(long param_1,int **param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int **ppiVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar4;
  ppiVar6 = param_2;
  do {
    if ((cVar2 == 'V') || (cVar2 == 'r')) {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      if (cVar2 != 'r') {
        if (cVar2 != 'V') goto LAB_00115cf8;
        uVar5 = 0x1d;
        if (param_3 == 0) {
          uVar5 = 0x1a;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
        goto LAB_00115d0c;
      }
      uVar5 = 0x1c;
      if (param_3 == 0) {
        uVar5 = 0x19;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
      piVar3 = (int *)FUN_00115b94(param_1,uVar5,0,0);
      *ppiVar6 = piVar3;
    }
    else {
      if (cVar2 != 'K') {
        if (((param_3 == 0) && (cVar2 == 'F')) && (param_2 != ppiVar6)) {
          do {
            piVar3 = *param_2;
            iVar1 = *piVar3;
            if (iVar1 == 0x1a) {
              *piVar3 = 0x1d;
            }
            else if (iVar1 == 0x1b) {
              *piVar3 = 0x1e;
            }
            else if (iVar1 == 0x19) {
              *piVar3 = 0x1c;
            }
            param_2 = (int **)(piVar3 + 2);
          } while (param_2 != ppiVar6);
        }
        return ppiVar6;
      }
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
LAB_00115cf8:
      uVar5 = 0x1e;
      if (param_3 == 0) {
        uVar5 = 0x1b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 6;
LAB_00115d0c:
      piVar3 = (int *)FUN_00115b94(param_1,uVar5,0,0);
      *ppiVar6 = piVar3;
    }
    if (piVar3 == (int *)0x0) {
      return (int **)0x0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    ppiVar6 = (int **)(piVar3 + 2);
    cVar2 = *pcVar4;
  } while( true );
}



long FUN_00115e44(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  if (pcVar7[1] != '\0') {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    bVar3 = pcVar7[1];
    uVar6 = (uint)bVar3;
    uVar14 = bVar3 - 0x30;
    if (((uVar14 & 0xff) < 10) || (bVar3 == 0x5f)) {
      if (bVar3 == 0x5f) {
        uVar4 = 0;
        goto LAB_00115f80;
      }
    }
    else if (0x19 < (byte)(bVar3 + 0xbf)) goto LAB_00115f10;
    uVar9 = 0;
    do {
      uVar4 = (uVar9 * 0x24 + uVar6) - 0x37;
      if ((uVar14 & 0xff) < 10) {
        uVar4 = (uVar9 * 0x24 + uVar6) - 0x30;
      }
      else if (0x19 < (uVar6 - 0x41 & 0xff)) {
        return 0;
      }
      uVar6 = 0;
      if (uVar4 < uVar9) {
        return 0;
      }
      pbVar12 = *(byte **)(param_1 + 0x18);
      if (*pbVar12 != 0) {
        *(byte **)(param_1 + 0x18) = pbVar12 + 1;
        uVar6 = (uint)*pbVar12;
        if (uVar6 == 0x5f) goto LAB_00115f7c;
      }
      uVar14 = uVar6 - 0x30;
      uVar9 = uVar4;
    } while( true );
  }
  uVar6 = 0;
LAB_00115f10:
  uVar14 = *(uint *)(param_1 + 0x10) >> 3 & 1;
  if (uVar14 < (param_2 != 0)) {
    uVar14 = (uint)((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2);
  }
  if (uVar6 == 0x74) {
    puVar8 = &UNK_00140a40;
  }
  else if (uVar6 == 0x61) {
    puVar8 = &UNK_00140a78;
  }
  else if (uVar6 == 0x62) {
    puVar8 = &UNK_00140ab0;
  }
  else if (uVar6 == 0x73) {
    puVar8 = &UNK_00140ae8;
  }
  else if (uVar6 == 0x69) {
    puVar8 = &UNK_00140b20;
  }
  else if (uVar6 == 0x6f) {
    puVar8 = &UNK_00140b58;
  }
  else {
    if (uVar6 != 100) {
      return 0;
    }
    puVar8 = &UNK_00140b90;
  }
  lVar5 = *(long *)(puVar8 + 0x28);
  if (lVar5 == 0) {
    iVar15 = *(int *)(param_1 + 0x2c);
    iVar10 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x28);
    iVar15 = *(int *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(puVar8 + 0x30);
    lVar17 = 0;
    if (iVar10 < iVar15) {
      lVar13 = (long)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0x28) = iVar10;
      lVar1 = *(long *)(param_1 + 0x20) + lVar13 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar13 * 0x18) = 0x18;
        *(long *)(lVar1 + 8) = lVar5;
        *(undefined4 *)(lVar1 + 0x10) = uVar2;
        lVar17 = lVar1;
      }
    }
    *(long *)(param_1 + 0x48) = lVar17;
  }
  if (uVar14 == 0) {
    uVar16 = *(undefined8 *)(puVar8 + 8);
    iVar11 = *(int *)(puVar8 + 0x10);
  }
  else {
    uVar16 = *(undefined8 *)(puVar8 + 0x18);
    iVar11 = *(int *)(puVar8 + 0x20);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
  if (iVar15 <= iVar10) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar10 + 1;
  lVar5 = *(long *)(param_1 + 0x20) + (long)iVar10 * 0x18;
  if (lVar5 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x18;
    *(undefined8 *)(lVar5 + 8) = uVar16;
    *(int *)(lVar5 + 0x10) = iVar11;
    return lVar5;
  }
  return 0;
LAB_00115f7c:
  uVar4 = uVar4 + 1;
LAB_00115f80:
  if (*(uint *)(param_1 + 0x38) <= uVar4) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return lVar5;
}



void FUN_00116104(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_3 == (undefined4 *)0x0) {
switchD_00116158_caseD_5:
    return;
  }
  do {
    switch(*param_3) {
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
switchD_00116158_caseD_1:
      piVar1 = *(int **)(param_3 + 2);
      break;
    case 4:
      *param_1 = *param_1 + 1;
      piVar1 = *(int **)(param_3 + 2);
      break;
    default:
      goto switchD_00116158_caseD_5;
    case 7:
    case 8:
    case 0x32:
      param_3 = *(undefined4 **)(param_3 + 4);
      goto joined_r0x00116178;
    case 0x23:
    case 0x24:
      piVar1 = *(int **)(param_3 + 2);
      if (*piVar1 == 5) {
        *param_2 = *param_2 + 1;
        goto switchD_00116158_caseD_1;
      }
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      param_3 = *(undefined4 **)(param_3 + 2);
      goto joined_r0x00116178;
    }
    FUN_00116104(param_1,param_2,piVar1);
    param_3 = *(undefined4 **)(param_3 + 4);
joined_r0x00116178:
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}



void FUN_001161d0(undefined *param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0xff) {
    *(long *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x100) = 1;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}



long FUN_00116248(byte **param_1)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  pbVar3 = *param_1;
  bVar5 = *pbVar3;
  bVar2 = bVar5 == 0x6e;
  if (bVar2) {
    *param_1 = pbVar3 + 1;
    uVar6 = 0xffffffffffffffff;
    bVar5 = pbVar3[1];
  }
  else {
    uVar6 = 0;
  }
  if ((byte)(bVar5 - 0x30) < 10) {
    pbVar3 = *param_1;
    uVar4 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      *param_1 = pbVar3;
      uVar1 = (ulong)bVar5;
      bVar5 = *pbVar3;
      uVar4 = (uVar4 * 10 + uVar1) - 0x30;
    } while ((byte)(bVar5 - 0x30) < 10);
  }
  else {
    uVar4 = 0;
  }
  return (uVar4 ^ uVar6) + (ulong)bVar2;
}



undefined8 FUN_001162d0(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  else {
    piVar3 = *(int **)(*(long *)(*(long *)(param_1 + 0x120) + 8) + 0x10);
    uVar2 = *param_2 & 0xffffffff;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0x2f)) {
      iVar4 = (int)*param_2;
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        do {
          piVar3 = *(int **)(piVar3 + 4);
          uVar1 = (int)uVar2 - 1;
          uVar2 = (ulong)uVar1;
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          if (*piVar3 != 0x2f) {
            return 0;
          }
        } while (uVar1 != 0);
      }
      return *(undefined8 *)(piVar3 + 2);
    }
  }
  return 0;
}



int * FUN_0011634c(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    do {
      switch(*param_2) {
      case 0:
      case 6:
      case 0x18:
      case 0x27:
      case 0x31:
      case 0x40:
      case 0x45:
      case 0x47:
      case 0x4a:
      case 0x4b:
        goto LAB_00116398;
      case 5:
        piVar1 = (int *)FUN_001162d0(param_1,param_2 + 2);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x2f)) {
          return piVar1;
        }
        goto LAB_00116398;
      case 7:
      case 8:
      case 0x32:
        goto switchD_001163b4_caseD_7;
      }
      piVar1 = (int *)FUN_0011634c(param_1,*(undefined8 *)(param_2 + 2));
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
switchD_001163b4_caseD_7:
      param_2 = *(undefined4 **)(param_2 + 4);
    } while (param_2 != (undefined4 *)0x0);
  }
LAB_00116398:
  return (int *)0x0;
}



void FUN_001163e4(void *param_1,size_t param_2,void **param_3)

{
  void *pvVar1;
  void *__size;
  
  __size = param_3[2];
  pvVar1 = (void *)((long)param_3[1] + param_2 + 1);
  if (__size < pvVar1) {
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    if ((__size != (void *)0x0) || (__size = (void *)0x2, (void *)0x2 < pvVar1)) {
      do {
        __size = (void *)((long)__size * 2);
      } while (__size < pvVar1);
    }
    pvVar1 = realloc(*param_3,(size_t)__size);
    if (pvVar1 == (void *)0x0) {
      free(*param_3);
      *param_3 = (void *)0x0;
      param_3[1] = (void *)0x0;
      param_3[2] = (void *)0x0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = pvVar1;
    param_3[2] = __size;
  }
  if (*(int *)(param_3 + 3) != 0) {
    return;
  }
  memcpy((void *)((long)*param_3 + (long)param_3[1]),param_1,param_2);
  *(undefined *)((long)*param_3 + param_2 + (long)param_3[1]) = 0;
  param_3[1] = (void *)((long)param_3[1] + param_2);
  return;
}



void FUN_001164d4(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(long *)(param_1 + 0x100);
    do {
      while (cVar2 = *param_2, lVar4 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = cVar2;
        param_1[0x108] = cVar2;
        lVar4 = 1;
        if (param_2 == pcVar1) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar4 + 1;
      param_2 = param_2 + 1;
      param_1[lVar4] = cVar2;
      param_1[0x108] = cVar2;
      lVar4 = lVar4 + 1;
    } while (param_2 != pcVar1);
  }
  return;
}



long FUN_00116588(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *__s1;
  
  lVar3 = (long)param_2;
  __s1 = *(void **)(param_1 + 0x18);
  if (lVar3 <= *(long *)(param_1 + 8) - (long)__s1) {
    *(long *)(param_1 + 0x18) = (long)__s1 + lVar3;
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) && (*(char *)((long)__s1 + lVar3) == '$')) {
      *(long *)(param_1 + 0x18) = (long)__s1 + lVar3 + 1;
    }
    if ((((9 < param_2) && (iVar2 = memcmp(__s1,"_GLOBAL_",8), iVar2 == 0)) &&
        ((cVar1 = *(char *)((long)__s1 + 8), cVar1 == '_' || cVar1 == '.' || (cVar1 == '$')))) &&
       (*(char *)((long)__s1 + 9) == 'N')) {
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + 0x16) - param_2;
      lVar3 = FUN_00115c34(param_1,"(anonymous namespace)",0x15);
      return lVar3;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x20) + (long)iVar2 * 0x18;
      if ((param_2 != 0 && __s1 != (void *)0x0) && (lVar3 != 0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0;
        *(void **)(lVar3 + 8) = __s1;
        *(int *)(lVar3 + 0x10) = param_2;
        return lVar3;
      }
    }
  }
  return 0;
}



void FUN_001166dc(char *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  size_t sVar4;
  char local_20 [32];
  
  sprintf(local_20,"%ld",param_2);
  sVar2 = strlen(local_20);
  if (sVar2 != 0) {
    sVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      while (cVar1 = local_20[sVar4], lVar3 == 0xff) {
        sVar4 = sVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = cVar1;
        param_1[0x108] = cVar1;
        lVar3 = 1;
        if (sVar4 == sVar2) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar3 + 1;
      sVar4 = sVar4 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar3 + 1;
    } while (sVar4 != sVar2);
  }
  return;
}



undefined8 FUN_001167a8(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  bVar2 = bVar1 == 0x6e;
  if (bVar2) {
    *(byte **)(param_1 + 0x18) = pbVar4 + 1;
    bVar1 = pbVar4[1];
  }
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    lVar5 = 0;
    do {
      pbVar4 = pbVar4 + 1;
      uVar6 = (ulong)bVar1;
      *(byte **)(param_1 + 0x18) = pbVar4;
      bVar1 = *pbVar4;
      lVar5 = lVar5 * 10 + uVar6 + -0x30;
    } while ((byte)(bVar1 - 0x30) < 10);
    if ((0 < lVar5) && (!bVar2)) {
      uVar3 = FUN_00116588();
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      return uVar3;
    }
  }
  return 0;
}



long FUN_00116850(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  if (bVar1 != 0x5f) {
    if ((bVar1 != 0x6e) && ((byte)(bVar1 - 0x30) < 10)) {
      lVar2 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        *(byte **)(param_1 + 0x18) = pbVar4;
        lVar3 = lVar2 * 10 + (ulong)bVar1;
        bVar1 = *pbVar4;
        lVar2 = lVar3 + -0x30;
      } while ((byte)(bVar1 - 0x30) < 10);
      lVar3 = lVar3 + -0x2f;
      if (bVar1 == 0x5f) goto LAB_001168cc;
    }
    return -1;
  }
  lVar3 = 0;
LAB_001168cc:
  *(byte **)(param_1 + 0x18) = pbVar4 + 1;
  return lVar3;
}



ulong FUN_001168dc(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  byte *pbVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*pcVar4 == '_') {
    pbVar6 = (byte *)(pcVar4 + 1);
    *(byte **)(param_1 + 0x18) = pbVar6;
    bVar2 = pcVar4[1];
    if (bVar2 == 0x6e) {
      pbVar6 = (byte *)(pcVar4 + 2);
      *(byte **)(param_1 + 0x18) = pbVar6;
      bVar2 = pcVar4[2];
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = true;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = false;
    }
    lVar5 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar1 = lVar5 * 10 + (ulong)bVar2;
      bVar2 = *pbVar6;
      lVar5 = lVar1 + -0x30;
    } while ((byte)(bVar2 - 0x30) < 10);
    if (bVar3) {
      return lVar1 - 0x31U >> 0x3f;
    }
  }
  return 1;
}



long FUN_00116980(long param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'T') {
    return 0;
  }
  pbVar6 = (byte *)(pcVar7 + 1);
  *(byte **)(param_1 + 0x18) = pbVar6;
  bVar2 = pcVar7[1];
  if (bVar2 == 0x5f) {
    lVar5 = 0;
  }
  else {
    if (bVar2 == 0x6e) {
      return 0;
    }
    if (9 < (byte)(bVar2 - 0x30)) {
      return 0;
    }
    lVar4 = 0;
    pbVar3 = (byte *)(pcVar7 + 2);
    do {
      pbVar6 = pbVar3;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar5 = lVar4 * 10 + (ulong)bVar2;
      bVar2 = *pbVar6;
      lVar4 = lVar5 + -0x30;
      pbVar3 = pbVar6 + 1;
    } while ((byte)(bVar2 - 0x30) < 10);
    lVar5 = lVar5 + -0x2f;
    if (bVar2 != 0x5f) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte **)(param_1 + 0x18) = pbVar6 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    lVar4 = *(long *)(param_1 + 0x20) + (long)iVar1 * 0x18;
    if (lVar4 != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 5;
      *(long *)(lVar4 + 8) = lVar5;
      return lVar4;
    }
  }
  return 0;
}



undefined8 FUN_00116a6c(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (*pbVar1 == 0) {
      return 0;
    }
    *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    param_2 = (uint)*pbVar1;
  }
  if (param_2 == 0x68) {
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar3;
    pcVar2 = pcVar3;
    if (cVar4 == 'n') {
      pcVar2 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar2;
      cVar4 = pcVar3[1];
    }
    if ((byte)(cVar4 - 0x30U) < 10) {
      do {
        pcVar2 = pcVar2 + 1;
        *(char **)(param_1 + 0x18) = pcVar2;
        cVar4 = *pcVar2;
      } while ((byte)(cVar4 - 0x30U) < 10);
      goto LAB_00116aec;
    }
  }
  else {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_00116248(param_1 + 0x18);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    FUN_00116248(param_1 + 0x18);
    pcVar2 = *(char **)(param_1 + 0x18);
  }
  cVar4 = *pcVar2;
LAB_00116aec:
  if (cVar4 != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  return 1;
}



long FUN_00116b58(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  char **ppcVar17;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  pcVar12 = *(char **)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  if (1 < (byte)(*pcVar12 + 0xb7U)) {
    return 0;
  }
  pcVar16 = pcVar12 + 1;
  *(char **)(param_1 + 0x18) = pcVar16;
  cVar3 = pcVar12[1];
  if (cVar3 == 'E') {
    *(char **)(param_1 + 0x18) = pcVar12 + 2;
    uVar14 = FUN_00115b94(param_1,0x2f,0,0);
    return uVar14;
  }
  plVar13 = &local_8;
  local_8 = 0;
LAB_00116bc8:
  switch(cVar3) {
  case 'I':
  case 'J':
    lVar5 = FUN_00116b58(param_1);
    break;
  default:
    lVar5 = FUN_00118798(param_1);
    break;
  case 'L':
    lVar5 = FUN_0011b338(param_1);
    break;
  case 'X':
    pcVar12 = pcVar16 + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(char **)(param_1 + 0x18) = pcVar12;
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar3 = pcVar16[1];
    if (cVar3 == 'L') {
      lVar5 = FUN_0011b338(param_1);
      pcVar12 = *(char **)(param_1 + 0x18);
    }
    else if (cVar3 == 'T') {
      lVar5 = FUN_00116980(param_1);
      pcVar12 = *(char **)(param_1 + 0x18);
    }
    else if (cVar3 == 's') {
      if (pcVar16[2] == 'r') {
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        uVar7 = FUN_00118798(param_1);
        uVar8 = FUN_0011a144(param_1);
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar10 = FUN_00116b58(param_1);
          uVar8 = FUN_00115b94(param_1,4,uVar8,uVar10);
        }
        lVar5 = FUN_00115b94(param_1,1,uVar7,uVar8);
        pcVar12 = *(char **)(param_1 + 0x18);
      }
      else {
        if (pcVar16[2] != 'p') goto LAB_00116cb4;
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        uVar7 = FUN_0011b4b0(param_1);
        lVar5 = FUN_00115b94(param_1,0x4a,uVar7,0);
        pcVar12 = *(char **)(param_1 + 0x18);
      }
    }
    else {
      if (cVar3 == 'f') {
        if (pcVar16[2] != 'p') goto LAB_00116cb4;
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        if (pcVar16[3] == 'T') {
          lVar15 = 0;
          *(char **)(param_1 + 0x18) = pcVar16 + 4;
        }
        else {
          iVar4 = FUN_00116850(param_1);
          lVar15 = (long)(iVar4 + 1);
          if (iVar4 + 1 == 0) {
            pcVar12 = *(char **)(param_1 + 0x18);
            goto LAB_00116dc0;
          }
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          lVar5 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
          if (lVar5 != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
            *(long *)(lVar5 + 8) = lVar15;
            pcVar12 = *(char **)(param_1 + 0x18);
            goto LAB_00116d60;
          }
        }
        goto switchD_0011701c_caseD_4;
      }
      if ((byte)(cVar3 - 0x30U) < 10) {
LAB_00116d40:
        lVar5 = FUN_0011a144(param_1);
        pcVar12 = *(char **)(param_1 + 0x18);
        if (lVar5 != 0) {
          if (*pcVar12 == 'I') {
            uVar7 = FUN_00116b58(param_1);
            lVar5 = FUN_00115b94(param_1,4,lVar5,uVar7);
            pcVar12 = *(char **)(param_1 + 0x18);
          }
          goto LAB_00116d60;
        }
      }
      else {
        if (cVar3 == 'o') {
          if (pcVar16[2] == 'n') {
            *(char **)(param_1 + 0x18) = pcVar16 + 3;
            goto LAB_00116d40;
          }
        }
        else if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar16[2] == 'l')) {
          uVar7 = 0;
          if (cVar3 == 't') {
            uVar7 = FUN_00118798(param_1);
            pcVar12 = *(char **)(param_1 + 0x18);
          }
          *(char **)(param_1 + 0x18) = pcVar12 + 2;
          uVar8 = FUN_00118044(param_1,0x45);
          lVar5 = FUN_00115b94(param_1,0x30,uVar7,uVar8);
          pcVar12 = *(char **)(param_1 + 0x18);
          goto LAB_00116d60;
        }
LAB_00116cb4:
        piVar6 = (int *)FUN_00119f50(param_1);
        if (piVar6 != (int *)0x0) {
          iVar4 = *piVar6;
          if (iVar4 == 0x31) {
            ppcVar17 = *(char ***)(piVar6 + 2);
            pcVar12 = *ppcVar17;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar17 + 2) + -2;
            iVar4 = strcmp(pcVar12,"st");
            if (iVar4 == 0) {
              uVar7 = FUN_00118798(param_1);
LAB_00117090:
              lVar5 = FUN_00115b94(param_1,0x36,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_00116d60;
            }
            switch(*(undefined4 *)((long)ppcVar17 + 0x14)) {
            case 0:
              goto switchD_0011701c_caseD_0;
            case 1:
              cVar3 = *pcVar12;
              if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
                if (**(char **)(param_1 + 0x18) != '_') {
                  uVar7 = FUN_0011b4b0(param_1);
                  uVar7 = FUN_00115b94(param_1,0x38,uVar7,uVar7);
                  goto LAB_00117090;
                }
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              }
              goto switchD_0011701c_caseD_1;
            case 2:
              goto switchD_00116ef4_caseD_2;
            case 3:
              goto switchD_00116ef4_caseD_3;
            }
          }
          else if (iVar4 == 0x32) {
            switch(piVar6[2]) {
            case 0:
switchD_0011701c_caseD_0:
              lVar5 = FUN_00115b94(param_1,0x35,piVar6,0);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_00116d60;
            case 1:
              goto switchD_0011701c_caseD_1;
            case 2:
              pcVar12 = (char *)0x0;
switchD_00116ef4_caseD_2:
              if (((**(char ***)(piVar6 + 2))[1] == 'c') &&
                 ((cVar3 = ***(char ***)(piVar6 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                  ((byte)(cVar3 + 0x9dU) < 2)))) {
                uVar7 = FUN_00118798(param_1);
              }
              else {
                uVar7 = FUN_0011b4b0(param_1);
              }
              iVar4 = strcmp(pcVar12,"cl");
              if (iVar4 == 0) {
                uVar8 = FUN_00118044(param_1,0x45);
              }
              else {
                iVar4 = strcmp(pcVar12,"dt");
                if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
                  uVar8 = FUN_0011a144(param_1);
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    uVar10 = FUN_00116b58(param_1);
                    uVar8 = FUN_00115b94(param_1,4,uVar8,uVar10);
                  }
                }
                else {
                  uVar8 = FUN_0011b4b0(param_1);
                }
              }
              uVar7 = FUN_00115b94(param_1,0x38,uVar7,uVar8);
              lVar5 = FUN_00115b94(param_1,0x37,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_00116d60;
            case 3:
              pcVar12 = (char *)0x0;
switchD_00116ef4_caseD_3:
              iVar4 = strcmp(pcVar12,"qu");
              if (iVar4 == 0) {
                local_18 = FUN_0011b4b0(param_1);
                pcVar12 = *(char **)(param_1 + 0x18);
                cVar3 = *pcVar12;
                if (cVar3 == 'L') {
                  piVar9 = (int *)FUN_0011b338(param_1);
                  pcVar12 = *(char **)(param_1 + 0x18);
                  cVar3 = *pcVar12;
LAB_00117350:
                  if (cVar3 == 'L') {
                    lVar5 = FUN_0011b338(param_1);
                  }
                  else if (cVar3 == 'T') {
                    lVar5 = FUN_00116980(param_1);
                  }
                  else if (cVar3 == 's') {
                    if (pcVar12[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      uVar7 = FUN_00118798(param_1);
                      uVar8 = FUN_0011a144(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar10 = FUN_00116b58(param_1);
                        uVar8 = FUN_00115b94(param_1,4,uVar8,uVar10);
                      }
                      lVar5 = FUN_00115b94(param_1,1,uVar7,uVar8);
                    }
                    else {
                      if (pcVar12[1] != 'p') goto LAB_001173a8;
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      uVar7 = FUN_0011b4b0(param_1);
                      lVar5 = FUN_00115b94(param_1,0x4a,uVar7,0);
                    }
                  }
                  else if (cVar3 == 'f') {
                    if (pcVar12[1] == 'p') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      if (pcVar12[2] == 'T') {
                        lVar15 = 0;
                        *(char **)(param_1 + 0x18) = pcVar12 + 3;
                      }
                      else {
                        iVar4 = FUN_00116850(param_1);
                        if (iVar4 + 1 == 0) goto LAB_00117808;
                        lVar15 = (long)(iVar4 + 1);
                      }
                      iVar4 = *(int *)(param_1 + 0x28);
                      lVar5 = 0;
                      if (iVar4 < *(int *)(param_1 + 0x2c)) {
                        *(int *)(param_1 + 0x28) = iVar4 + 1;
                        lVar5 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
                        if (lVar5 != 0) {
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                          *(long *)(lVar5 + 8) = lVar15;
                        }
                      }
                    }
                    else {
LAB_001173a8:
                      piVar11 = (int *)FUN_00119f50(param_1);
                      if (piVar11 == (int *)0x0) {
LAB_00117808:
                        lVar5 = 0;
                      }
                      else {
                        iVar4 = *piVar11;
                        if (iVar4 == 0x31) {
                          ppcVar17 = *(char ***)(piVar11 + 2);
                          pcVar12 = *ppcVar17;
                          *(int *)(param_1 + 0x50) =
                               *(int *)(param_1 + 0x50) + *(int *)(ppcVar17 + 2) + -2;
                          iVar4 = strcmp(pcVar12,"st");
                          if (iVar4 != 0) {
                            lVar5 = 0;
                            switch(*(undefined4 *)((long)ppcVar17 + 0x14)) {
                            case 0:
                              goto switchD_0011779c_caseD_0;
                            case 1:
                              goto switchD_00117804_caseD_1;
                            case 2:
                              goto switchD_00117804_caseD_2;
                            case 3:
                              goto switchD_00117804_caseD_3;
                            default:
                              goto switchD_0011779c_caseD_4;
                            }
                          }
                          uVar7 = FUN_00118798(param_1);
                        }
                        else {
                          if (iVar4 == 0x32) {
                            lVar5 = 0;
                            switch(piVar11[2]) {
                            case 0:
switchD_0011779c_caseD_0:
                              lVar5 = FUN_00115b94(param_1,0x35,piVar11,0);
                              break;
                            case 1:
                              goto switchD_0011779c_caseD_1;
                            case 2:
                              pcVar12 = (char *)0x0;
switchD_00117804_caseD_2:
                              if ((**(char ***)(piVar11 + 2))[1] == 'c') {
                                cVar3 = ***(char ***)(piVar11 + 2);
                                bVar2 = cVar3 + 0x8e;
                                if ((1 < bVar2) && (1 < (byte)(cVar3 + 0x9dU))) goto LAB_00117ac0;
                                local_20 = FUN_00118798(param_1,bVar2,pcVar12,0);
                              }
                              else {
LAB_00117ac0:
                                local_20 = FUN_0011b4b0(param_1);
                              }
                              iVar4 = strcmp(pcVar12,"cl");
                              if (iVar4 == 0) {
                                uVar7 = FUN_00118044(param_1,0x45);
                              }
                              else {
                                iVar4 = strcmp(pcVar12,"dt");
                                if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
                                  uVar7 = FUN_0011a144(param_1);
                                  if (**(char **)(param_1 + 0x18) == 'I') {
                                    uVar8 = FUN_00116b58(param_1);
                                    uVar7 = FUN_00115b94(param_1,4,uVar7,uVar8);
                                  }
                                }
                                else {
                                  uVar7 = FUN_0011b4b0(param_1);
                                }
                              }
                              uVar7 = FUN_00115b94(param_1,0x38,local_20,uVar7);
                              lVar5 = FUN_00115b94(param_1,0x37,piVar11,uVar7);
                              break;
                            case 3:
                              pcVar12 = (char *)0x0;
switchD_00117804_caseD_3:
                              iVar4 = strcmp(pcVar12,"qu");
                              if (iVar4 == 0) {
                                local_20 = FUN_0011b4b0(param_1);
                                local_28 = FUN_0011b4b0(param_1);
                                uVar7 = FUN_0011b4b0(param_1);
                              }
                              else {
                                if ((*pcVar12 != 'n') ||
                                   ((pcVar12[1] != 'a' && (pcVar12[1] != 'w')))) goto LAB_00117808;
                                local_20 = FUN_00118044(param_1,0x5f);
                                local_28 = FUN_00118798(param_1);
                                pcVar12 = *(char **)(param_1 + 0x18);
                                cVar3 = *pcVar12;
                                if (cVar3 != 'E') {
                                  if (cVar3 == 'p') {
                                    lVar5 = 0;
                                    if (pcVar12[1] == 'i') {
                                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                                      uVar7 = FUN_00118044(param_1,0x45);
                                      goto LAB_00117bf8;
                                    }
                                  }
                                  else {
                                    if (cVar3 != 'i') goto LAB_00117808;
                                    lVar5 = 0;
                                    if (pcVar12[1] == 'l') {
                                      uVar7 = FUN_0011b4b0(param_1);
                                      goto LAB_00117bf8;
                                    }
                                  }
                                  break;
                                }
                                uVar7 = 0;
                                *(char **)(param_1 + 0x18) = pcVar12 + 1;
                              }
LAB_00117bf8:
                              uVar7 = FUN_00115b94(param_1,0x3b,local_28,uVar7);
                              uVar7 = FUN_00115b94(param_1,0x3a,local_20,uVar7);
                              lVar5 = FUN_00115b94(param_1,0x39,piVar11,uVar7);
                            }
                            goto switchD_0011779c_caseD_4;
                          }
                          if (iVar4 != 0x33) goto LAB_00117808;
                          if (**(char **)(param_1 + 0x18) == '_') {
                            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                            uVar7 = FUN_00118044(param_1,0x45);
                            goto LAB_001173f0;
                          }
switchD_0011779c_caseD_1:
                          uVar7 = FUN_0011b4b0(param_1);
                        }
LAB_001173f0:
                        lVar5 = FUN_00115b94(param_1,0x36,piVar11,uVar7);
                      }
                    }
                  }
                  else {
                    if (9 < (byte)(cVar3 - 0x30U)) {
                      if (cVar3 != 'o') goto LAB_00117388;
                      if (pcVar12[1] != 'n') goto LAB_001173a8;
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    }
                    lVar5 = FUN_0011a144(param_1);
                    if ((lVar5 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
                      uVar7 = FUN_00116b58(param_1);
                      lVar5 = FUN_00115b94(param_1,4,lVar5,uVar7);
                    }
                  }
                }
                else {
                  if (cVar3 == 'T') {
                    piVar9 = (int *)FUN_00116980(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    goto LAB_00117350;
                  }
                  if (cVar3 == 's') {
                    if (pcVar12[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      piVar9 = (int *)FUN_00118798(param_1);
                      uVar7 = FUN_0011a144(param_1);
                      if (**(char **)(param_1 + 0x18) != 'I') {
                        piVar9 = (int *)FUN_00115b94(param_1,1,piVar9,uVar7);
                        pcVar12 = *(char **)(param_1 + 0x18);
                        cVar3 = *pcVar12;
                        goto LAB_00117350;
                      }
                      uVar8 = FUN_00116b58(param_1);
                      uVar7 = FUN_00115b94(param_1,4,uVar7,uVar8);
                      uVar8 = 1;
                      goto LAB_0011733c;
                    }
                    if (pcVar12[1] != 'p') goto LAB_001172ec;
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    piVar9 = (int *)FUN_0011b4b0(param_1);
                    uVar7 = 0x4a;
LAB_00117690:
                    piVar9 = (int *)FUN_00115b94(param_1,uVar7,piVar9,0);
LAB_0011769c:
                    pcVar12 = *(char **)(param_1 + 0x18);
LAB_001176a0:
                    cVar3 = *pcVar12;
                    goto LAB_00117350;
                  }
                  if (cVar3 == 'f') {
                    if (pcVar12[1] != 'p') goto LAB_001172ec;
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    if (pcVar12[2] == 'T') {
                      pcVar12 = pcVar12 + 3;
                      lVar5 = 0;
                      *(char **)(param_1 + 0x18) = pcVar12;
                    }
                    else {
                      iVar4 = FUN_00116850(param_1);
                      pcVar12 = *(char **)(param_1 + 0x18);
                      if (iVar4 + 1 == 0) {
LAB_001176ac:
                        piVar9 = (int *)0x0;
                        cVar3 = *pcVar12;
                        goto LAB_00117350;
                      }
                      lVar5 = (long)(iVar4 + 1);
                    }
                    iVar4 = *(int *)(param_1 + 0x28);
                    if (iVar4 < *(int *)(param_1 + 0x2c)) {
                      *(int *)(param_1 + 0x28) = iVar4 + 1;
                      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18);
                      if (piVar9 == (int *)0x0) goto LAB_001176a0;
                      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                      *(long *)(piVar9 + 2) = lVar5;
                      cVar3 = *pcVar12;
                    }
                    else {
                      cVar3 = *pcVar12;
                      piVar9 = (int *)0x0;
                    }
                    goto LAB_00117350;
                  }
                  if ((byte)(cVar3 - 0x30U) < 10) {
LAB_00117504:
                    piVar9 = (int *)FUN_0011a144(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    if ((piVar9 != (int *)0x0) && (cVar3 == 'I')) {
                      uVar7 = FUN_00116b58(param_1);
                      uVar8 = 4;
                      goto LAB_0011733c;
                    }
                    goto LAB_00117350;
                  }
                  if (cVar3 == 'o') {
                    if (pcVar12[1] == 'n') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      goto LAB_00117504;
                    }
                  }
                  else if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar12[1] == 'l')) {
                    uVar7 = 0;
                    if (cVar3 == 't') {
                      uVar7 = FUN_00118798(param_1);
                      pcVar12 = *(char **)(param_1 + 0x18);
                    }
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    uVar8 = FUN_00118044(param_1,0x45);
                    piVar9 = (int *)FUN_00115b94(param_1,0x30,uVar7,uVar8);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    goto LAB_00117350;
                  }
LAB_001172ec:
                  piVar9 = (int *)FUN_00119f50(param_1);
                  if (piVar9 == (int *)0x0) goto LAB_0011769c;
                  iVar4 = *piVar9;
                  if (iVar4 == 0x31) {
                    ppcVar17 = *(char ***)(piVar9 + 2);
                    pcVar12 = *ppcVar17;
                    *(int *)(param_1 + 0x50) =
                         *(int *)(param_1 + 0x50) + *(int *)(ppcVar17 + 2) + -2;
                    iVar4 = strcmp(pcVar12,"st");
                    if (iVar4 != 0) {
                      switch(*(undefined4 *)((long)ppcVar17 + 0x14)) {
                      case 0:
                        goto switchD_0011771c_caseD_0;
                      case 1:
                        goto switchD_00117888_caseD_1;
                      case 2:
                        goto switchD_00117888_caseD_2;
                      case 3:
                        goto switchD_00117888_caseD_3;
                      default:
                        goto switchD_0011771c_caseD_4;
                      }
                    }
                    uVar7 = FUN_00118798(param_1);
                    uVar8 = 0x36;
                    goto LAB_0011733c;
                  }
                  if (iVar4 != 0x32) {
                    if (iVar4 == 0x33) {
                      if (**(char **)(param_1 + 0x18) != '_') goto switchD_0011771c_caseD_1;
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar7 = FUN_00118044(param_1,0x45);
                      goto LAB_00117334;
                    }
switchD_0011771c_caseD_4:
                    pcVar12 = *(char **)(param_1 + 0x18);
                    goto LAB_001176ac;
                  }
                  switch(piVar9[2]) {
                  case 0:
switchD_0011771c_caseD_0:
                    uVar7 = 0x35;
                    goto LAB_00117690;
                  case 1:
                    goto switchD_0011771c_caseD_1;
                  case 2:
                    pcVar12 = (char *)0x0;
switchD_00117888_caseD_2:
                    if (((**(char ***)(piVar9 + 2))[1] == 'c') &&
                       ((cVar3 = ***(char ***)(piVar9 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                        ((byte)(cVar3 + 0x9dU) < 2)))) {
                      local_20 = FUN_00118798(param_1);
                    }
                    else {
                      local_20 = FUN_0011b4b0(param_1);
                    }
                    iVar4 = strcmp(pcVar12,"cl");
                    if (iVar4 == 0) {
                      uVar7 = FUN_00118044(param_1,0x45);
                    }
                    else {
                      iVar4 = strcmp(pcVar12,"dt");
                      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
                        uVar7 = FUN_0011a144(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar8 = FUN_00116b58(param_1);
                          uVar7 = FUN_00115b94(param_1,4,uVar7,uVar8);
                        }
                      }
                      else {
                        uVar7 = FUN_0011b4b0(param_1);
                      }
                    }
                    uVar7 = FUN_00115b94(param_1,0x38,local_20,uVar7);
                    uVar8 = 0x37;
                    goto LAB_0011733c;
                  case 3:
                    pcVar12 = (char *)0x0;
switchD_00117888_caseD_3:
                    iVar4 = strcmp(pcVar12,"qu");
                    if (iVar4 == 0) {
                      local_20 = FUN_0011b4b0(param_1);
                      uVar7 = FUN_0011b4b0(param_1);
                      uVar8 = FUN_0011b4b0(param_1);
LAB_00117a70:
                      uVar7 = FUN_00115b94(param_1,0x3b,uVar7,uVar8);
                      uVar7 = FUN_00115b94(param_1,0x3a,local_20,uVar7);
                      uVar8 = 0x39;
                      goto LAB_0011733c;
                    }
                    if ((*pcVar12 != 'n') || ((pcVar12[1] != 'a' && (pcVar12[1] != 'w'))))
                    goto switchD_0011771c_caseD_4;
                    local_20 = FUN_00118044(param_1,0x5f);
                    uVar7 = FUN_00118798(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    if (cVar3 == 'E') {
                      uVar8 = 0;
                      *(char **)(param_1 + 0x18) = pcVar12 + 1;
                      goto LAB_00117a70;
                    }
                    if (cVar3 == 'p') {
                      if (pcVar12[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar12 + 2;
                        uVar8 = FUN_00118044(param_1,0x45);
                        goto LAB_00117a70;
                      }
                    }
                    else {
                      if (cVar3 != 'i') {
                        piVar9 = (int *)0x0;
                        goto LAB_00117350;
                      }
                      if (pcVar12[1] == 'l') {
                        uVar8 = FUN_0011b4b0(param_1);
                        goto LAB_00117a70;
                      }
                    }
                    piVar9 = (int *)0x0;
LAB_00117388:
                    if (((cVar3 != 't') && (cVar3 != 'i')) || (pcVar12[1] != 'l'))
                    goto LAB_001173a8;
                    uVar7 = 0;
                    if (cVar3 == 't') {
                      uVar7 = FUN_00118798(param_1);
                    }
                    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
                    uVar8 = FUN_00118044(param_1,0x45);
                    lVar5 = FUN_00115b94(param_1,0x30,uVar7,uVar8);
                    break;
                  default:
                    goto switchD_0011771c_caseD_4;
                  }
                }
              }
              else {
                if ((*pcVar12 != 'n') || ((pcVar12[1] != 'a' && (pcVar12[1] != 'w')))) break;
                local_18 = FUN_00118044(param_1,0x5f);
                piVar9 = (int *)FUN_00118798(param_1);
                pcVar12 = *(char **)(param_1 + 0x18);
                cVar3 = *pcVar12;
                if (cVar3 != 'E') {
                  if (cVar3 == 'p') {
                    lVar5 = 0;
                    if (pcVar12[1] == 'i') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      lVar5 = FUN_00118044(param_1,0x45);
                      goto switchD_0011779c_caseD_4;
                    }
                  }
                  else {
                    lVar5 = 0;
                    if ((cVar3 == 'i') && (pcVar12[1] == 'l')) {
                      lVar5 = FUN_0011b4b0(param_1);
                      goto switchD_0011779c_caseD_4;
                    }
                  }
                  goto LAB_00116d60;
                }
                lVar5 = 0;
                *(char **)(param_1 + 0x18) = pcVar12 + 1;
              }
switchD_0011779c_caseD_4:
              uVar7 = FUN_00115b94(param_1,0x3b,piVar9,lVar5);
              uVar7 = FUN_00115b94(param_1,0x3a,local_18,uVar7);
              lVar5 = FUN_00115b94(param_1,0x39,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_00116d60;
            }
          }
          else if (iVar4 == 0x33) {
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar7 = FUN_00118044(param_1,0x45);
              goto LAB_00117090;
            }
switchD_0011701c_caseD_1:
            uVar7 = FUN_0011b4b0(param_1);
            goto LAB_00117090;
          }
        }
switchD_0011701c_caseD_4:
        pcVar12 = *(char **)(param_1 + 0x18);
      }
LAB_00116dc0:
      lVar5 = 0;
    }
LAB_00116d60:
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*pcVar12 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar12 + 1;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = FUN_00115b94(param_1,0x2f,lVar5,0);
  *plVar13 = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  pcVar16 = *(char **)(param_1 + 0x18);
  plVar13 = (long *)(lVar5 + 0x10);
  cVar3 = *pcVar16;
  if (cVar3 == 'E') {
    *(undefined8 *)(param_1 + 0x48) = uVar14;
    *(char **)(param_1 + 0x18) = pcVar16 + 1;
    return local_8;
  }
  goto LAB_00116bc8;
switchD_00117888_caseD_1:
  cVar3 = *pcVar12;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0011b4b0(param_1);
      uVar7 = FUN_00115b94(param_1,0x38,uVar7,uVar7);
      uVar8 = 0x36;
      goto LAB_0011733c;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_0011771c_caseD_1:
  uVar7 = FUN_0011b4b0(param_1);
LAB_00117334:
  uVar8 = 0x36;
LAB_0011733c:
  piVar9 = (int *)FUN_00115b94(param_1,uVar8,piVar9,uVar7);
  pcVar12 = *(char **)(param_1 + 0x18);
  cVar3 = *pcVar12;
  goto LAB_00117350;
switchD_00117804_caseD_1:
  cVar3 = *pcVar12;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
    cVar3 = **(char **)(param_1 + 0x18);
    if (cVar3 != '_') {
      uVar7 = FUN_0011b4b0(param_1,cVar3,pcVar12,0);
      uVar7 = FUN_00115b94(param_1,0x38,uVar7,uVar7);
      goto LAB_001173f0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_0011779c_caseD_1;
}



undefined8 FUN_00118044(long param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  char **ppcVar12;
  long local_8;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  plVar11 = &local_8;
  local_8 = 0;
  if (*pcVar10 == param_2) {
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
    uVar5 = FUN_00115b94(param_1,0x2e,0,0);
    return uVar5;
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = *pcVar10;
    if (cVar2 == 'L') {
      lVar6 = FUN_0011b338(param_1);
LAB_00118208:
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      if (cVar2 == 'T') {
        lVar6 = FUN_00116980(param_1);
        goto LAB_00118208;
      }
      if (cVar2 == 's') {
        if (pcVar10[1] == 'r') {
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          uVar5 = FUN_00118798(param_1);
          uVar8 = FUN_0011a144(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar9 = FUN_00116b58(param_1);
            uVar8 = FUN_00115b94(param_1,4,uVar8,uVar9);
          }
          lVar6 = FUN_00115b94(param_1,1,uVar5,uVar8);
        }
        else {
          if (pcVar10[1] != 'p') goto LAB_001180f8;
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          uVar5 = FUN_0011b4b0(param_1);
          lVar6 = FUN_00115b94(param_1,0x4a,uVar5,0);
        }
        goto LAB_00118208;
      }
      if (cVar2 == 'f') {
        if (pcVar10[1] != 'p') goto LAB_001180f8;
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        if (pcVar10[2] == 'T') {
          lVar7 = 0;
          *(char **)(param_1 + 0x18) = pcVar10 + 3;
        }
        else {
          iVar3 = FUN_00116850(param_1);
          if (iVar3 + 1 == 0) goto switchD_0011839c_caseD_4;
          lVar7 = (long)(iVar3 + 1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto switchD_0011839c_caseD_4;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar6 = *(long *)(param_1 + 0x20) + (long)iVar3 * 0x18;
        if (lVar6 == 0) goto switchD_0011839c_caseD_4;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
        *(long *)(lVar6 + 8) = lVar7;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          if (cVar2 == 'o') {
            if (pcVar10[1] == 'n') {
              *(char **)(param_1 + 0x18) = pcVar10 + 2;
              goto LAB_0011816c;
            }
          }
          else if (((cVar2 == 't') || (cVar2 == 'i')) && (pcVar10[1] == 'l')) {
            uVar5 = 0;
            if (cVar2 == 't') {
              uVar5 = FUN_00118798(param_1);
              pcVar10 = *(char **)(param_1 + 0x18);
            }
            *(char **)(param_1 + 0x18) = pcVar10 + 2;
            uVar8 = FUN_00118044(param_1,0x45);
            lVar6 = FUN_00115b94(param_1,0x30,uVar5,uVar8);
            goto LAB_00118208;
          }
LAB_001180f8:
          piVar4 = (int *)FUN_00119f50(param_1);
          if (piVar4 == (int *)0x0) goto switchD_0011839c_caseD_4;
          iVar3 = *piVar4;
          if (iVar3 == 0x31) {
            ppcVar12 = *(char ***)(piVar4 + 2);
            pcVar10 = *ppcVar12;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar12 + 2) + -2;
            iVar3 = strcmp(pcVar10,"st");
            if (iVar3 != 0) {
              switch(*(undefined4 *)((long)ppcVar12 + 0x14)) {
              case 0:
                goto switchD_0011839c_caseD_0;
              case 1:
                goto switchD_001183c4_caseD_1;
              case 2:
                goto switchD_001183c4_caseD_2;
              case 3:
                goto switchD_001183c4_caseD_3;
              default:
                goto switchD_0011839c_caseD_4;
              }
            }
            uVar5 = FUN_00118798(param_1);
          }
          else {
            if (iVar3 == 0x32) {
              switch(piVar4[2]) {
              case 0:
switchD_0011839c_caseD_0:
                lVar6 = FUN_00115b94(param_1,0x35,piVar4,0);
                goto LAB_00118208;
              case 1:
                goto switchD_0011839c_caseD_1;
              case 2:
                pcVar10 = (char *)0x0;
switchD_001183c4_caseD_2:
                if (((**(char ***)(piVar4 + 2))[1] == 'c') &&
                   ((cVar2 = ***(char ***)(piVar4 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                    ((byte)(cVar2 + 0x9dU) < 2)))) {
                  uVar5 = FUN_00118798(param_1);
                }
                else {
                  uVar5 = FUN_0011b4b0(param_1);
                }
                iVar3 = strcmp(pcVar10,"cl");
                if (iVar3 == 0) {
                  uVar8 = FUN_00118044(param_1,0x45);
                }
                else {
                  iVar3 = strcmp(pcVar10,"dt");
                  if ((iVar3 == 0) || (iVar3 = strcmp(pcVar10,"pt"), iVar3 == 0)) {
                    uVar8 = FUN_0011a144(param_1);
                    if (**(char **)(param_1 + 0x18) == 'I') {
                      uVar9 = FUN_00116b58(param_1);
                      uVar8 = FUN_00115b94(param_1,4,uVar8,uVar9);
                    }
                  }
                  else {
                    uVar8 = FUN_0011b4b0(param_1);
                  }
                }
                uVar5 = FUN_00115b94(param_1,0x38,uVar5,uVar8);
                lVar6 = FUN_00115b94(param_1,0x37,piVar4,uVar5);
                goto LAB_00118208;
              case 3:
                pcVar10 = (char *)0x0;
switchD_001183c4_caseD_3:
                iVar3 = strcmp(pcVar10,"qu");
                if (iVar3 == 0) {
                  uVar5 = FUN_0011b4b0(param_1);
                  uVar8 = FUN_0011b4b0(param_1);
                  uVar9 = FUN_0011b4b0(param_1);
                }
                else {
                  if ((*pcVar10 != 'n') || ((pcVar10[1] != 'a' && (pcVar10[1] != 'w'))))
                  goto switchD_0011839c_caseD_4;
                  uVar5 = FUN_00118044(param_1,0x5f);
                  uVar8 = FUN_00118798(param_1);
                  pcVar10 = *(char **)(param_1 + 0x18);
                  cVar2 = *pcVar10;
                  if (cVar2 == 'E') {
                    uVar9 = 0;
                    *(char **)(param_1 + 0x18) = pcVar10 + 1;
                  }
                  else if (cVar2 == 'p') {
                    if (pcVar10[1] != 'i') goto switchD_0011839c_caseD_4;
                    *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    uVar9 = FUN_00118044(param_1,0x45);
                  }
                  else {
                    if ((cVar2 != 'i') || (pcVar10[1] != 'l')) {
switchD_0011839c_caseD_4:
                      *(undefined4 *)(param_1 + 0x54) = uVar1;
                      return 0;
                    }
                    uVar9 = FUN_0011b4b0(param_1);
                  }
                }
                uVar8 = FUN_00115b94(param_1,0x3b,uVar8,uVar9);
                uVar5 = FUN_00115b94(param_1,0x3a,uVar5,uVar8);
                lVar6 = FUN_00115b94(param_1,0x39,piVar4,uVar5);
                goto LAB_00118208;
              default:
                goto switchD_0011839c_caseD_4;
              }
            }
            if (iVar3 != 0x33) goto switchD_0011839c_caseD_4;
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar5 = FUN_00118044(param_1,0x45);
              goto LAB_00118140;
            }
switchD_0011839c_caseD_1:
            uVar5 = FUN_0011b4b0(param_1);
          }
LAB_00118140:
          lVar6 = FUN_00115b94(param_1,0x36,piVar4,uVar5);
          goto LAB_00118208;
        }
LAB_0011816c:
        lVar6 = FUN_0011a144(param_1);
        if (lVar6 == 0) goto switchD_0011839c_caseD_4;
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar5 = FUN_00116b58(param_1);
          lVar6 = FUN_00115b94(param_1,4,lVar6,uVar5);
          goto LAB_00118208;
        }
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    lVar6 = FUN_00115b94(param_1,0x2e,lVar6,0);
    *plVar11 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    pcVar10 = *(char **)(param_1 + 0x18);
    plVar11 = (long *)(lVar6 + 0x10);
    if (*pcVar10 == param_2) {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      return local_8;
    }
  } while( true );
switchD_001183c4_caseD_1:
  cVar2 = *pcVar10;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar10[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar5 = FUN_0011b4b0(param_1);
      uVar5 = FUN_00115b94(param_1,0x38,uVar5,uVar5);
      goto LAB_00118140;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_0011839c_caseD_1;
}



int * FUN_00118798(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  char *pcVar24;
  int *local_8;
  
  pbVar22 = *(byte **)(param_1 + 0x18);
  bVar7 = *pbVar22;
  if ((bVar7 == 0x56 || bVar7 == 0x72) || (uVar9 = (uint)bVar7, uVar9 == 0x4b)) {
    ppiVar11 = (int **)FUN_00115c94(param_1,&local_8,0);
    if (ppiVar11 == (int **)0x0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar12 = (int *)FUN_0011bb18(param_1);
      *ppiVar11 = piVar12;
    }
    else {
      piVar12 = (int *)FUN_00118798();
      *ppiVar11 = piVar12;
    }
    if (piVar12 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar12 - 0x1fU < 2) {
      piVar20 = *(int **)(piVar12 + 2);
      *(int **)(piVar12 + 2) = local_8;
      local_8 = *ppiVar11;
      *ppiVar11 = piVar20;
    }
    if (local_8 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar10 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar10) {
      return (int *)0x0;
    }
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
    *(int *)(param_1 + 0x38) = iVar10 + 1;
    return local_8;
  }
  switch(uVar9) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x4e:
  case 0x5a:
    local_8 = (int *)FUN_0011a6c8(param_1);
    break;
  default:
    goto switchD_00118814_caseD_3a;
  case 0x41:
    pbVar21 = pbVar22 + 1;
    *(byte **)(param_1 + 0x18) = pbVar21;
    if (pbVar22[1] == 0x5f) {
      lVar14 = 0;
    }
    else {
      if ((byte)(pbVar22[1] - 0x30) < 10) {
        pbVar22 = pbVar22 + 2;
        do {
          pbVar23 = pbVar22;
          *(byte **)(param_1 + 0x18) = pbVar23;
          pbVar22 = pbVar23 + 1;
        } while ((byte)(*pbVar23 - 0x30) < 10);
        lVar14 = FUN_00115c34(param_1,pbVar21,(int)pbVar23 - (int)pbVar21);
joined_r0x00119270:
        if (lVar14 == 0) goto LAB_001189bc;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = 1;
        bVar7 = pbVar22[1];
        if (bVar7 == 0x4c) {
          lVar14 = FUN_0011b338(param_1);
LAB_0011926c:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto joined_r0x00119270;
        }
        if (bVar7 == 0x54) {
          lVar14 = FUN_00116980(param_1);
          goto LAB_0011926c;
        }
        if (bVar7 == 0x73) {
          if (pbVar22[2] == 0x72) {
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar13 = FUN_00118798(param_1);
            uVar17 = FUN_0011a144(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar18 = FUN_00116b58(param_1);
              uVar17 = FUN_00115b94(param_1,4,uVar17,uVar18);
              lVar14 = FUN_00115b94(param_1,1,uVar13,uVar17);
            }
            else {
              lVar14 = FUN_00115b94(param_1,1,uVar13,uVar17);
            }
          }
          else {
            if (pbVar22[2] != 0x70) goto LAB_00119210;
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar13 = FUN_0011b4b0(param_1);
            lVar14 = FUN_00115b94(param_1,0x4a,uVar13,0);
          }
          goto LAB_0011926c;
        }
        if (bVar7 != 0x66) {
          if ((byte)(bVar7 - 0x30) < 10) {
LAB_001192e4:
            lVar14 = FUN_0011a144(param_1);
            if (lVar14 != 0) {
              pbVar21 = *(byte **)(param_1 + 0x18);
              if (*pbVar21 != 0x49) {
                *(undefined4 *)(param_1 + 0x54) = uVar2;
                goto LAB_001189ac;
              }
              uVar13 = FUN_00116b58(param_1);
              lVar14 = FUN_00115b94(param_1,4,lVar14,uVar13);
              goto LAB_0011926c;
            }
          }
          else {
            if (bVar7 == 0x6f) {
              if (pbVar22[2] == 0x6e) {
                *(byte **)(param_1 + 0x18) = pbVar22 + 3;
                goto LAB_001192e4;
              }
            }
            else if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[2] == 0x6c)) {
              uVar13 = 0;
              if (bVar7 == 0x74) {
                uVar13 = FUN_00118798(param_1);
              }
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
              uVar17 = FUN_00118044(param_1,0x45);
              lVar14 = FUN_00115b94(param_1,0x30,uVar13,uVar17);
              goto LAB_0011926c;
            }
LAB_00119210:
            piVar12 = (int *)FUN_00119f50(param_1);
            if (piVar12 != (int *)0x0) {
              iVar10 = *piVar12;
              if (iVar10 == 0x31) {
                pcVar24 = **(char ***)(piVar12 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                iVar10 = strcmp(pcVar24,"st");
                if (iVar10 == 0) {
                  uVar13 = FUN_00118798(param_1);
LAB_00119258:
                  lVar14 = FUN_00115b94(param_1,0x36,piVar12,uVar13);
                  goto LAB_0011926c;
                }
                switch(*(undefined4 *)(*(long *)(piVar12 + 2) + 0x14)) {
                case 0:
                  goto switchD_001195a8_caseD_0;
                case 1:
                  cVar8 = *pcVar24;
                  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar24[1] == cVar8)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar13 = FUN_0011b4b0(param_1);
                      uVar13 = FUN_00115b94(param_1,0x38,uVar13,uVar13);
                      goto LAB_00119258;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_001195a8_caseD_1;
                case 2:
                  goto switchD_001197d4_caseD_2;
                case 3:
                  goto switchD_001197d4_caseD_3;
                }
              }
              else if (iVar10 == 0x32) {
                switch(piVar12[2]) {
                case 0:
switchD_001195a8_caseD_0:
                  lVar14 = FUN_00115b94(param_1,0x35,piVar12,0);
                  goto LAB_0011926c;
                case 1:
                  goto switchD_001195a8_caseD_1;
                case 2:
                  pcVar24 = (char *)0x0;
switchD_001197d4_caseD_2:
                  if (((**(char ***)(piVar12 + 2))[1] == 'c') &&
                     ((cVar8 = ***(char ***)(piVar12 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                      ((byte)(cVar8 + 0x9dU) < 2)))) {
                    uVar13 = FUN_00118798(param_1);
                  }
                  else {
                    uVar13 = FUN_0011b4b0(param_1);
                  }
                  iVar10 = strcmp(pcVar24,"cl");
                  if (iVar10 == 0) {
                    uVar17 = FUN_00118044(param_1,0x45);
                  }
                  else {
                    iVar10 = strcmp(pcVar24,"dt");
                    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar24,"pt"), iVar10 == 0)) {
                      uVar17 = FUN_0011a144(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar18 = FUN_00116b58(param_1);
                        uVar17 = FUN_00115b94(param_1,4,uVar17,uVar18);
                      }
                    }
                    else {
                      uVar17 = FUN_0011b4b0(param_1);
                    }
                  }
                  uVar13 = FUN_00115b94(param_1,0x38,uVar13,uVar17);
                  lVar14 = FUN_00115b94(param_1,0x37,piVar12,uVar13);
                  goto LAB_0011926c;
                case 3:
                  pcVar24 = (char *)0x0;
switchD_001197d4_caseD_3:
                  iVar10 = strcmp(pcVar24,"qu");
                  if (iVar10 == 0) {
                    uVar13 = FUN_0011b4b0(param_1);
                    uVar17 = FUN_0011b4b0(param_1);
                    uVar18 = FUN_0011b4b0(param_1);
LAB_00119650:
                    uVar17 = FUN_00115b94(param_1,0x3b,uVar17,uVar18);
                    uVar13 = FUN_00115b94(param_1,0x3a,uVar13,uVar17);
                    lVar14 = FUN_00115b94(param_1,0x39,piVar12,uVar13);
                    goto LAB_0011926c;
                  }
                  if ((*pcVar24 == 'n') && ((pcVar24[1] == 'a' || (pcVar24[1] == 'w')))) {
                    uVar13 = FUN_00118044(param_1,0x5f);
                    uVar17 = FUN_00118798(param_1);
                    pcVar24 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar24;
                    if (cVar8 == 'E') {
                      uVar18 = 0;
                      *(char **)(param_1 + 0x18) = pcVar24 + 1;
                      goto LAB_00119650;
                    }
                    if (cVar8 == 'p') {
                      if (pcVar24[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar24 + 2;
                        uVar18 = FUN_00118044(param_1,0x45);
                        goto LAB_00119650;
                      }
                    }
                    else if ((cVar8 == 'i') && (pcVar24[1] == 'l')) {
                      uVar18 = FUN_0011b4b0(param_1);
                      goto LAB_00119650;
                    }
                  }
                }
              }
              else if (iVar10 == 0x33) {
                if (**(char **)(param_1 + 0x18) == '_') {
                  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  uVar13 = FUN_00118044(param_1,0x45);
                  goto LAB_00119258;
                }
switchD_001195a8_caseD_1:
                uVar13 = FUN_0011b4b0(param_1);
                goto LAB_00119258;
              }
            }
          }
switchD_001195a8_caseD_4:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto LAB_001189bc;
        }
        if (pbVar22[2] != 0x70) goto LAB_00119210;
        *(byte **)(param_1 + 0x18) = pbVar22 + 3;
        if (pbVar22[3] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        }
        else {
          iVar10 = FUN_00116850(param_1);
          iVar10 = iVar10 + 1;
          if (iVar10 == 0) goto switchD_001195a8_caseD_4;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto switchD_001195a8_caseD_4;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        lVar14 = *(long *)(param_1 + 0x20) + (long)iVar6 * 0x18;
        if (lVar14 == 0) goto switchD_001195a8_caseD_4;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
        *(long *)(lVar14 + 8) = (long)iVar10;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
LAB_001189ac:
      if (*pbVar21 != 0x5f) goto LAB_001189bc;
    }
    *(byte **)(param_1 + 0x18) = pbVar21 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x2a,lVar14,uVar13);
    break;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x25,uVar13,0);
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    if (pbVar22[1] == 0) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0x18) = pbVar22 + 2;
    switch(pbVar22[1]) {
    case 0x46:
      iVar10 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar10) {
        uRam0000000000000000 = 0;
                    // WARNING: Treating indirect jump as call
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x1192d0);
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x2c;
      bVar1 = (byte)(pbVar22[2] - 0x30) < 10;
      *(ushort *)(local_8 + 4) = (ushort)bVar1;
      if (bVar1) {
        FUN_00116248(param_1 + 0x18);
      }
      piVar12 = local_8;
      uVar13 = FUN_00118798(param_1);
      *(undefined8 *)(piVar12 + 2) = uVar13;
      if (*(long *)(local_8 + 2) == 0) {
        return (int *)0x0;
      }
      FUN_00116248(param_1 + 0x18);
      pcVar24 = *(char **)(param_1 + 0x18);
      uVar19 = 0;
      if (*pcVar24 != '\0') {
        *(char **)(param_1 + 0x18) = pcVar24 + 1;
        uVar19 = (ushort)(*pcVar24 == 's');
      }
      *(ushort *)((long)local_8 + 0x12) = uVar19;
      return local_8;
    default:
      goto switchD_00118814_caseD_3a;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x54) = 1;
      bVar7 = pbVar22[2];
      if (bVar7 == 0x4c) {
        lVar14 = FUN_0011b338(param_1);
      }
      else if (bVar7 == 0x54) {
        lVar14 = FUN_00116980(param_1);
      }
      else if (bVar7 == 0x73) {
        if (pbVar22[3] == 0x72) {
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
          uVar13 = FUN_00118798(param_1);
          uVar17 = FUN_0011a144(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar18 = FUN_00116b58(param_1);
            uVar17 = FUN_00115b94(param_1,4,uVar17,uVar18);
            lVar14 = FUN_00115b94(param_1,1,uVar13,uVar17);
          }
          else {
            lVar14 = FUN_00115b94(param_1,1,uVar13,uVar17);
          }
        }
        else {
          if (pbVar22[3] != 0x70) goto LAB_00118ff4;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
          uVar13 = FUN_0011b4b0(param_1);
          lVar14 = FUN_00115b94(param_1,0x4a,uVar13,0);
        }
      }
      else if (bVar7 == 0x66) {
        if (pbVar22[3] != 0x70) goto LAB_00118ff4;
        *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        if (pbVar22[4] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 5;
        }
        else {
          iVar10 = FUN_00116850(param_1);
          iVar10 = iVar10 + 1;
          if (iVar10 == 0) goto LAB_00119864;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto LAB_00119864;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        lVar15 = *(long *)(param_1 + 0x20) + (long)iVar6 * 0x18;
        lVar14 = 0;
        if (lVar15 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
          *(long *)(lVar15 + 8) = (long)iVar10;
          lVar14 = lVar15;
        }
      }
      else {
        if ((byte)(bVar7 - 0x30) < 10) {
LAB_001193fc:
          lVar14 = FUN_0011a144(param_1);
          if (lVar14 != 0) {
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar13 = FUN_00116b58(param_1);
              lVar14 = FUN_00115b94(param_1,4,lVar14,uVar13);
            }
            goto switchD_00119a68_caseD_4;
          }
        }
        else {
          if (bVar7 == 0x6f) {
            if (pbVar22[3] == 0x6e) {
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              goto LAB_001193fc;
            }
          }
          else if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[3] == 0x6c)) {
            uVar13 = 0;
            if (bVar7 == 0x74) {
              uVar13 = FUN_00118798(param_1);
            }
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
            uVar17 = FUN_00118044(param_1,0x45);
            lVar14 = FUN_00115b94(param_1,0x30,uVar13,uVar17);
            goto switchD_00119a68_caseD_4;
          }
LAB_00118ff4:
          piVar12 = (int *)FUN_00119f50(param_1);
          if (piVar12 != (int *)0x0) {
            iVar10 = *piVar12;
            if (iVar10 == 0x31) {
              pcVar24 = **(char ***)(piVar12 + 2);
              *(int *)(param_1 + 0x50) =
                   *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
              iVar10 = strcmp(pcVar24,"st");
              if (iVar10 != 0) {
                lVar14 = 0;
                switch(*(undefined4 *)(*(long *)(piVar12 + 2) + 0x14)) {
                case 0:
                  goto switchD_00119a68_caseD_0;
                case 1:
                  goto switchD_00119850_caseD_1;
                case 2:
                  goto switchD_00119850_caseD_2;
                case 3:
                  goto switchD_00119850_caseD_3;
                default:
                  goto switchD_00119a68_caseD_4;
                }
              }
              uVar13 = FUN_00118798(param_1);
            }
            else {
              if (iVar10 == 0x32) {
                lVar14 = 0;
                switch(piVar12[2]) {
                case 0:
switchD_00119a68_caseD_0:
                  lVar14 = FUN_00115b94(param_1,0x35,piVar12,0);
                  break;
                case 1:
                  goto switchD_00119a68_caseD_1;
                case 2:
                  pcVar24 = (char *)0x0;
switchD_00119850_caseD_2:
                  if ((**(char ***)(piVar12 + 2))[1] == 'c') {
                    cVar8 = ***(char ***)(piVar12 + 2);
                    bVar7 = cVar8 + 0x8e;
                    if ((1 < bVar7) && (1 < (byte)(cVar8 + 0x9dU))) goto LAB_00119a98;
                    uVar13 = FUN_00118798(param_1,bVar7,0);
                  }
                  else {
LAB_00119a98:
                    uVar13 = FUN_0011b4b0(param_1);
                  }
                  iVar10 = strcmp(pcVar24,"cl");
                  if (iVar10 == 0) {
                    uVar17 = FUN_00118044(param_1,0x45);
                  }
                  else {
                    iVar10 = strcmp(pcVar24,"dt");
                    if ((iVar10 == 0) || (iVar10 = strcmp(pcVar24,"pt"), iVar10 == 0)) {
                      uVar17 = FUN_0011a144(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar18 = FUN_00116b58(param_1);
                        uVar17 = FUN_00115b94(param_1,4,uVar17,uVar18);
                      }
                    }
                    else {
                      uVar17 = FUN_0011b4b0(param_1);
                    }
                  }
                  uVar13 = FUN_00115b94(param_1,0x38,uVar13,uVar17);
                  lVar14 = FUN_00115b94(param_1,0x37,piVar12,uVar13);
                  break;
                case 3:
                  pcVar24 = (char *)0x0;
switchD_00119850_caseD_3:
                  iVar10 = strcmp(pcVar24,"qu");
                  if (iVar10 == 0) {
                    uVar13 = FUN_0011b4b0(param_1);
                    uVar17 = FUN_0011b4b0(param_1);
                    uVar18 = FUN_0011b4b0(param_1);
                  }
                  else {
                    if ((*pcVar24 != 'n') || ((pcVar24[1] != 'a' && (pcVar24[1] != 'w'))))
                    goto LAB_00119864;
                    uVar13 = FUN_00118044(param_1,0x5f);
                    uVar17 = FUN_00118798(param_1);
                    pcVar24 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar24;
                    if (cVar8 != 'E') {
                      if (cVar8 == 'p') {
                        if (pcVar24[1] == 'i') {
                          *(char **)(param_1 + 0x18) = pcVar24 + 2;
                          uVar18 = FUN_00118044(param_1,0x45);
                          goto LAB_00119c08;
                        }
                      }
                      else if ((cVar8 == 'i') && (pcVar24[1] == 'l')) {
                        uVar18 = FUN_0011b4b0(param_1);
                        goto LAB_00119c08;
                      }
                      goto LAB_00119864;
                    }
                    uVar18 = 0;
                    *(char **)(param_1 + 0x18) = pcVar24 + 1;
                  }
LAB_00119c08:
                  uVar17 = FUN_00115b94(param_1,0x3b,uVar17,uVar18);
                  uVar13 = FUN_00115b94(param_1,0x3a,uVar13,uVar17);
                  lVar14 = FUN_00115b94(param_1,0x39,piVar12,uVar13);
                }
                goto switchD_00119a68_caseD_4;
              }
              if (iVar10 != 0x33) goto LAB_00119864;
              if (**(char **)(param_1 + 0x18) == '_') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                uVar13 = FUN_00118044(param_1,0x45);
                goto LAB_0011903c;
              }
switchD_00119a68_caseD_1:
              uVar13 = FUN_0011b4b0(param_1);
            }
LAB_0011903c:
            lVar14 = FUN_00115b94(param_1,0x36,piVar12,uVar13);
            goto switchD_00119a68_caseD_4;
          }
        }
LAB_00119864:
        lVar14 = 0;
      }
switchD_00119a68_caseD_4:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      local_8 = (int *)FUN_00115b94(param_1,0x42,lVar14,0);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      pcVar24 = *(char **)(param_1 + 0x18);
      if (*pcVar24 == '\0') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar24 + 1;
      if (*pcVar24 != 'E') {
        return (int *)0x0;
      }
      goto LAB_001188fc;
    case 0x61:
      piVar12 = (int *)FUN_00115c34(param_1,&DAT_0012ab70,4);
      return piVar12;
    case 100:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal64_00140980;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar12;
        }
      }
      break;
    case 0x65:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal128_001409a0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 10;
          return piVar12;
        }
      }
      break;
    case 0x66:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decimal32_00140960;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar12;
        }
      }
      break;
    case 0x68:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_DAT_001409c0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          return piVar12;
        }
      }
      break;
    case 0x69:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_char32_t_00140a00;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar12;
        }
      }
      break;
    case 0x6e:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_decltype_nullptr__00140a20;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x11;
          return piVar12;
        }
      }
      break;
    case 0x70:
      uVar13 = FUN_00118798(param_1);
      local_8 = (int *)FUN_00115b94(param_1,0x4a,uVar13,0);
      goto LAB_001188f8;
    case 0x73:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
        if (piVar12 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
          *(undefined ***)(piVar12 + 2) = &PTR_s_char16_t_001409e0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar12;
        }
      }
      break;
    case 0x76:
      local_8 = (int *)FUN_0011bc48(param_1);
      goto LAB_001188f8;
    }
LAB_0011913c:
    local_8 = (int *)0x0;
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x11914c);
    piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)(uRam0000000000000008);
    return piVar12;
  case 0x46:
    local_8 = (int *)FUN_0011bb18(param_1);
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x26,uVar13,0);
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    lVar14 = FUN_00118798(param_1);
    if ((lVar14 == 0) || (lVar15 = FUN_00118798(param_1), lVar15 == 0)) {
LAB_001189bc:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_00115b94(param_1,0x2b,lVar14,lVar15);
    }
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x24,uVar13,0);
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x22,uVar13,0);
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x23,uVar13,0);
    break;
  case 0x53:
    bVar7 = pbVar22[1];
    if (((9 < (byte)(bVar7 - 0x30)) && (bVar7 != 0x5f)) && (0x19 < (byte)(bVar7 + 0xbf))) {
      local_8 = (int *)FUN_0011a6c8(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*local_8 == 0x18) {
        return local_8;
      }
      goto LAB_001188fc;
    }
    local_8 = (int *)FUN_00115e44(param_1,0);
    if (**(char **)(param_1 + 0x18) != 'I') {
      return local_8;
    }
LAB_00118ba4:
    piVar12 = local_8;
    uVar13 = FUN_00116b58(param_1);
    local_8 = (int *)FUN_00115b94(param_1,4,piVar12,uVar13);
    break;
  case 0x54:
    local_8 = (int *)FUN_00116980(param_1);
    pcVar24 = *(char **)(param_1 + 0x18);
    if (*pcVar24 == 'I') {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        goto LAB_00118ba4;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      uVar13 = FUN_00116b58(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        local_8 = (int *)FUN_00115b94(param_1,4,local_8,uVar13);
      }
      else {
        *(char **)(param_1 + 0x18) = pcVar24;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
    }
    break;
  case 0x55:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    local_8 = (int *)FUN_001167a8(param_1);
    uVar13 = FUN_00118798(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x21,uVar13,local_8);
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    iVar10 = *(int *)(param_1 + 0x28);
    uVar16 = -(ulong)(uVar9 - 0x61 >> 0x1f) & 0xffffffe000000000 | (ulong)(uVar9 - 0x61) << 5;
    if (iVar10 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18);
      if (piVar12 != (int *)0x0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x18) = 0x27;
        *(ulong *)(piVar12 + 2) = (long)&PTR_s_signed_char_00140620 + uVar16;
        iVar10 = *(int *)(&DAT_00140628 + uVar16);
        *(byte **)(param_1 + 0x18) = pbVar22 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar10;
        return piVar12;
      }
    }
    goto LAB_0011913c;
  case 0x75:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar13 = FUN_001167a8(param_1);
    local_8 = (int *)FUN_00115b94(param_1,0x28,uVar13,0);
  }
LAB_001188f8:
  if (local_8 != (int *)0x0) {
LAB_001188fc:
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = local_8;
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      return local_8;
    }
  }
switchD_00118814_caseD_3a:
  return (int *)0x0;
switchD_00119850_caseD_1:
  cVar8 = *pcVar24;
  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar24[1] == cVar8)) {
    cVar8 = **(char **)(param_1 + 0x18);
    if (cVar8 != '_') {
      uVar13 = FUN_0011b4b0(param_1,cVar8,0);
      uVar13 = FUN_00115b94(param_1,0x38,uVar13,uVar13);
      goto LAB_0011903c;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00119a68_caseD_1;
}



long FUN_00119e40(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long local_8;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  local_8 = 0;
  cVar1 = *pcVar3;
  if ((cVar1 != 'E' && cVar1 != '\0') && (plVar4 = &local_8, cVar1 != '.')) {
    while (((cVar1 != 'O' && (cVar1 != 'R')) || (pcVar3[1] != 'E'))) {
      lVar2 = FUN_00118798(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_00115b94(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      plVar4 = (long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 0x18);
      cVar1 = *pcVar3;
      if ((cVar1 == 'E' || cVar1 == '\0') || (cVar1 == '.')) break;
    }
    if (local_8 != 0) {
      if (*(long *)(local_8 + 0x10) != 0) {
        return local_8;
      }
      if (**(int **)(local_8 + 8) == 0x27) {
        lVar2 = *(long *)(*(int **)(local_8 + 8) + 2);
        if (*(int *)(lVar2 + 0x1c) == 9) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(lVar2 + 8);
          *(undefined8 *)(local_8 + 8) = 0;
          return local_8;
        }
        return local_8;
      }
      return local_8;
    }
  }
  return 0;
}



long FUN_00119f50(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  
  pbVar8 = *(byte **)(param_1 + 0x18);
  if (*pbVar8 == 0) {
    bVar12 = 0;
    bVar11 = 0;
  }
  else {
    *(byte **)(param_1 + 0x18) = pbVar8 + 1;
    bVar11 = *pbVar8;
    if (pbVar8[1] == 0) {
      bVar12 = 0;
    }
    else {
      *(byte **)(param_1 + 0x18) = pbVar8 + 2;
      bVar12 = pbVar8[1];
      if (bVar11 == 0x76) {
        uVar5 = bVar12 - 0x30;
        if ((uVar5 & 0xff) < 10) {
          lVar7 = FUN_001167a8();
          iVar9 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar9) {
            return 0;
          }
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          lVar2 = *(long *)(param_1 + 0x20) + (long)iVar9 * 0x18;
          if (lVar7 == 0) {
            return 0;
          }
          if (lVar2 == 0) {
            return 0;
          }
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 0x18) = 0x32;
          *(uint *)(lVar2 + 8) = uVar5;
          *(long *)(lVar2 + 0x10) = lVar7;
          return lVar2;
        }
      }
      else if ((bVar12 == 0x76) && (bVar11 == 99)) {
        uVar3 = *(undefined4 *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = (uint)(*(int *)(param_1 + 0x54) == 0);
        uVar6 = FUN_00118798();
        if (*(int *)(param_1 + 0x58) == 0) {
          lVar7 = FUN_00115b94(param_1,0x33,uVar6,0);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
        else {
          lVar7 = FUN_00115b94(param_1,0x34,uVar6,0);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
        return lVar7;
      }
    }
  }
  iVar10 = 0x3d;
  iVar9 = 0;
  do {
    iVar1 = iVar9 + (iVar10 - iVar9) / 2;
    bVar4 = *(&PTR_DAT_00140bc8)[(long)iVar1 * 3];
    if (bVar11 == bVar4) {
      bVar4 = (&PTR_DAT_00140bc8)[(long)iVar1 * 3][1];
      if (bVar12 == bVar4) {
        iVar9 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar9) {
          return 0;
        }
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        lVar7 = *(long *)(param_1 + 0x20) + (long)iVar9 * 0x18;
        if (lVar7 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 0x18) = 0x31;
          *(undefined ***)(lVar7 + 8) = &PTR_DAT_00140bc8 + (long)iVar1 * 3;
          return lVar7;
        }
        return 0;
      }
      if (bVar4 <= bVar12) goto LAB_00119fe8;
    }
    else if (bVar4 <= bVar11) {
LAB_00119fe8:
      iVar9 = iVar1 + 1;
      iVar1 = iVar10;
    }
    iVar10 = iVar1;
    if (iVar9 == iVar10) {
      return 0;
    }
  } while( true );
}



int * FUN_0011a144(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  byte *pbVar11;
  bool bVar12;
  int *local_8;
  
  pcVar8 = *(char **)(param_1 + 0x18);
  cVar10 = *pcVar8;
  if ((byte)(cVar10 - 0x30U) < 10) {
    local_8 = (int *)FUN_001167a8();
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar10 = *pcVar7;
    goto joined_r0x0011a29c;
  }
  if ((byte)(cVar10 + 0x9fU) < 0x1a) {
    local_8 = (int *)FUN_00119f50();
    if ((local_8 != (int *)0x0) && (*local_8 == 0x31)) {
      pcVar8 = **(char ***)(local_8 + 2);
      *(int *)(param_1 + 0x50) =
           *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(local_8 + 2) + 2) + 7;
      iVar3 = strcmp(pcVar8,"li");
      if (iVar3 == 0) {
        uVar4 = FUN_001167a8(param_1);
        local_8 = (int *)FUN_00115b94(param_1,0x36,local_8,uVar4);
      }
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar10 = *pcVar7;
    goto joined_r0x0011a29c;
  }
  if (1 < (byte)(cVar10 + 0xbdU)) {
    if (cVar10 == 'L') {
      *(char **)(param_1 + 0x18) = pcVar8 + 1;
      local_8 = (int *)FUN_001167a8();
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar3 = FUN_001168dc(param_1);
      if (iVar3 == 0) {
        return (int *)0x0;
      }
      cVar10 = **(char **)(param_1 + 0x18);
      pcVar7 = *(char **)(param_1 + 0x18);
      goto joined_r0x0011a29c;
    }
    if (cVar10 != 'U') {
      return (int *)0x0;
    }
    if (pcVar8[1] == 'l') {
      pcVar7 = pcVar8 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar10 = pcVar8[1];
      if (cVar10 == 'l') {
        *(char **)(param_1 + 0x18) = pcVar8 + 2;
        lVar6 = FUN_00119e40();
        pcVar7 = *(char **)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_0011a4d0;
        cVar10 = *pcVar7;
        if (cVar10 == 'E') {
          *(char **)(param_1 + 0x18) = pcVar7 + 1;
          if (pcVar7[1] == '_') {
            pcVar8 = pcVar7 + 2;
            iVar3 = 0;
            *(char **)(param_1 + 0x18) = pcVar8;
          }
          else {
            if (pcVar7[1] == 'n') {
              return (int *)0x0;
            }
            local_8 = (int *)0x0;
            iVar3 = FUN_00116248(param_1 + 0x18);
            pcVar7 = *(char **)(param_1 + 0x18);
            cVar10 = *pcVar7;
            if (cVar10 != '_') goto joined_r0x0011a29c;
            iVar3 = iVar3 + 1;
            pcVar8 = pcVar7 + 1;
            *(char **)(param_1 + 0x18) = pcVar8;
            if (iVar3 < 0) {
              cVar10 = pcVar7[1];
              pcVar7 = pcVar8;
              local_8 = (int *)0x0;
              goto joined_r0x0011a29c;
            }
          }
          iVar1 = *(int *)(param_1 + 0x28);
          if (iVar1 < *(int *)(param_1 + 0x2c)) {
            *(int *)(param_1 + 0x28) = iVar1 + 1;
            local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
            if (local_8 != (int *)0x0) {
              *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 0x45;
              *(long *)(local_8 + 2) = lVar6;
              local_8[4] = iVar3;
              iVar3 = *(int *)(param_1 + 0x38);
              if (iVar3 < *(int *)(param_1 + 0x3c)) goto LAB_0011a424;
            }
          }
          cVar10 = *pcVar8;
          local_8 = (int *)0x0;
          pcVar7 = pcVar8;
          goto joined_r0x0011a29c;
        }
      }
    }
    else {
      if (pcVar8[1] != 't') {
        return (int *)0x0;
      }
      pcVar7 = pcVar8 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar10 = pcVar8[1];
      if (cVar10 == 't') {
        *(char **)(param_1 + 0x18) = pcVar8 + 2;
        lVar6 = FUN_00116850();
        if ((-1 < lVar6) && (iVar3 = *(int *)(param_1 + 0x28), iVar3 < *(int *)(param_1 + 0x2c))) {
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18);
          if (local_8 != (int *)0x0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 0x47;
            *(long *)(local_8 + 2) = lVar6;
            iVar3 = *(int *)(param_1 + 0x38);
            if (iVar3 < *(int *)(param_1 + 0x3c)) {
LAB_0011a424:
              *(int **)(*(long *)(param_1 + 0x30) + (long)iVar3 * 8) = local_8;
              *(int *)(param_1 + 0x38) = iVar3 + 1;
              cVar10 = **(char **)(param_1 + 0x18);
              pcVar7 = *(char **)(param_1 + 0x18);
              goto joined_r0x0011a29c;
            }
          }
        }
        pcVar7 = *(char **)(param_1 + 0x18);
LAB_0011a4d0:
        cVar10 = *pcVar7;
        local_8 = (int *)0x0;
        goto joined_r0x0011a29c;
      }
    }
    local_8 = (int *)0x0;
    goto joined_r0x0011a29c;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if ((piVar5 == (int *)0x0) || ((*piVar5 != 0 && (*piVar5 != 0x18)))) {
    if (cVar10 == 'C') goto LAB_0011a614;
    if (cVar10 != 'D') {
      return (int *)0x0;
    }
LAB_0011a500:
    switch(pcVar8[1]) {
    case '0':
      iVar3 = 1;
      break;
    case '1':
      iVar3 = 2;
      break;
    case '2':
      iVar3 = 3;
      break;
    default:
switchD_0011a524_caseD_33:
      return (int *)0x0;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = pcVar8 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 8;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar10 = pcVar8[2];
        goto joined_r0x0011a29c;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + piVar5[4];
    cVar10 = *pcVar8;
    if (cVar10 != 'C') {
      if (cVar10 != 'D') {
        local_8 = (int *)0x0;
        pcVar7 = pcVar8;
        goto joined_r0x0011a29c;
      }
      goto LAB_0011a500;
    }
LAB_0011a614:
    switch(pcVar8[1]) {
    case '1':
      iVar3 = 1;
      break;
    case '2':
      iVar3 = 2;
      break;
    case '3':
      iVar3 = 3;
      break;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
      break;
    default:
      goto switchD_0011a524_caseD_33;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = pcVar8 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 7;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar10 = pcVar8[2];
        goto joined_r0x0011a29c;
      }
    }
  }
  pcVar7 = pcVar8 + 2;
  cVar10 = *pcVar7;
  local_8 = (int *)0x0;
joined_r0x0011a29c:
  if (cVar10 != 'B') {
    return local_8;
  }
  do {
    *(char **)(param_1 + 0x18) = pcVar7 + 1;
    bVar12 = false;
    bVar2 = pcVar7[1];
    if (bVar2 == 0x6e) {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      bVar12 = true;
      bVar2 = pcVar7[2];
      if ((byte)(bVar2 - 0x30) < 10) goto LAB_0011a1fc;
LAB_0011a2cc:
      uVar4 = 0;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) goto LAB_0011a2cc;
LAB_0011a1fc:
      pbVar11 = *(byte **)(param_1 + 0x18);
      lVar6 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        uVar9 = (ulong)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar11;
        bVar2 = *pbVar11;
        lVar6 = lVar6 * 10 + uVar9 + -0x30;
      } while ((byte)(bVar2 - 0x30) < 10);
      if ((lVar6 < 1) || (bVar12)) goto LAB_0011a2cc;
      uVar4 = FUN_00116588(param_1);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
    }
    local_8 = (int *)FUN_00115b94(param_1,0x4b,local_8,uVar4);
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 != 'B') {
      return local_8;
    }
  } while( true );
}



long FUN_0011a6c8(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  undefined *puVar12;
  char cVar13;
  long lVar14;
  long local_8;
  
  puVar12 = *(undefined **)(param_1 + 0x18);
  switch(*puVar12) {
  case 0x4e:
    *(undefined **)(param_1 + 0x18) = puVar12 + 1;
    plVar5 = (long *)FUN_00115c94(param_1,&local_8,1);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
    if (cVar13 == 'O') {
      if (cVar13 == 'R') goto LAB_0011ab24;
      uVar8 = 0x20;
      iVar1 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
      lVar3 = 0;
      if (cVar13 != 'R') {
        lVar14 = 0;
        goto LAB_0011a844;
      }
LAB_0011ab24:
      uVar8 = 0x1f;
      iVar1 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar1;
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    lVar14 = 0;
    lVar3 = FUN_00115b94(param_1,uVar8,0,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
LAB_0011a844:
    do {
      if (cVar13 == '\0') {
LAB_0011aacc:
        *plVar5 = 0;
        return 0;
      }
      pcVar9 = pcVar4;
      if (cVar13 == 'D') {
        if ((pcVar4[1] & 0xdfU) != 0x54) {
          lVar10 = FUN_0011a144(param_1);
          goto LAB_0011aab4;
        }
        lVar10 = FUN_00118798();
        goto LAB_0011aab4;
      }
      do {
        if ((((byte)(cVar13 - 0x30U) < 10) || ((byte)(cVar13 + 0x9fU) < 0x1a)) ||
           ((cVar13 == 'C' || cVar13 == 'U' || (cVar13 == 'L')))) {
          lVar10 = FUN_0011a144(param_1);
          if (lVar14 != 0) goto LAB_0011aa30;
LAB_0011aa44:
          if (cVar13 == 'S') goto LAB_0011aa80;
        }
        else {
          if (cVar13 == 'S') {
            lVar10 = FUN_00115e44(param_1,1);
            if (lVar14 != 0) {
LAB_0011aa30:
              uVar8 = 1;
LAB_0011aa34:
              lVar10 = FUN_00115b94(param_1,uVar8,lVar14,lVar10);
              goto LAB_0011aa44;
            }
            pcVar4 = *(char **)(param_1 + 0x18);
            cVar13 = *pcVar4;
            lVar14 = lVar10;
            goto LAB_0011a844;
          }
          if (cVar13 == 'I') {
            if (lVar14 != 0) {
              lVar10 = FUN_00116b58(param_1);
              uVar8 = 4;
              goto LAB_0011aa34;
            }
            goto LAB_0011aacc;
          }
          if (cVar13 != 'T') {
            if (cVar13 == 'E') {
              *plVar5 = lVar14;
              if (lVar14 == 0) {
                return 0;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 8) = local_8;
                local_8 = lVar3;
              }
              if (**(char **)(param_1 + 0x18) == 'E') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                return local_8;
              }
              return 0;
            }
            if ((cVar13 != 'M') || (lVar14 == 0)) goto LAB_0011aacc;
            pcVar4 = pcVar9 + 1;
            *(char **)(param_1 + 0x18) = pcVar4;
            cVar13 = pcVar9[1];
            goto LAB_0011a844;
          }
          lVar10 = FUN_00116980(param_1);
LAB_0011aab4:
          if (lVar14 != 0) goto LAB_0011aa30;
        }
        pcVar9 = *(char **)(param_1 + 0x18);
        cVar13 = *pcVar9;
        lVar14 = lVar10;
      } while (cVar13 == 'E');
      if ((lVar10 == 0) || (iVar1 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar1))
      goto LAB_0011aacc;
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar10;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
LAB_0011aa80:
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar13 = *pcVar4;
      lVar14 = lVar10;
    } while( true );
  default:
    lVar3 = FUN_0011a144(param_1);
    if (**(char **)(param_1 + 0x18) == 'I') {
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      uVar8 = FUN_00116b58(param_1);
      lVar3 = FUN_00115b94(param_1,4,lVar3,uVar8);
    }
    break;
  case 0x53:
    if (puVar12[1] == 't') {
      *(undefined **)(param_1 + 0x18) = puVar12 + 2;
      uVar8 = FUN_00115c34(param_1,&DAT_0012ab90,3);
      uVar7 = FUN_0011a144(param_1);
      lVar3 = FUN_00115b94(param_1,1,uVar8,uVar7);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
    }
    else {
      lVar3 = FUN_00115e44(param_1,0);
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
    }
    uVar8 = FUN_00116b58(param_1);
    lVar3 = FUN_00115b94(param_1,4,lVar3,uVar8);
    break;
  case 0x55:
    lVar3 = FUN_0011a144(param_1);
    return lVar3;
  case 0x5a:
    *(undefined **)(param_1 + 0x18) = puVar12 + 1;
    uVar8 = FUN_0011ac74(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    if (*pcVar4 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (pcVar4[1] == 's') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_001168dc(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar6 = (int *)FUN_00115c34(param_1,"string literal",0xe);
    }
    else if (pcVar4[1] == 'd') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_00116850(param_1);
      if (iVar1 < 0) {
        return 0;
      }
      piVar11 = (int *)FUN_0011a6c8(param_1);
      if ((((piVar11 != (int *)0x0) && (*piVar11 != 0x45)) && (*piVar11 != 0x47)) &&
         (iVar2 = FUN_001168dc(param_1), iVar2 == 0)) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x28);
      piVar6 = (int *)0x0;
      if (iVar2 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
        if (piVar6 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0x46;
          piVar6[4] = iVar1;
          *(int **)(piVar6 + 2) = piVar11;
        }
      }
    }
    else {
      piVar6 = (int *)FUN_0011a6c8(param_1);
      if (((piVar6 != (int *)0x0) && (*piVar6 != 0x45)) &&
         ((*piVar6 != 0x47 && (iVar1 = FUN_001168dc(param_1), iVar1 == 0)))) {
        return 0;
      }
    }
    lVar3 = FUN_00115b94(param_1,2,uVar8,piVar6);
    return lVar3;
  }
  return lVar3;
}



uint * FUN_0011ac74(long param_1,int param_2)

{
  uint **ppuVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  char *pcVar14;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  if ((*pcVar10 != 'T') && (*pcVar10 != 'G')) {
    puVar6 = (uint *)FUN_0011a6c8();
    if ((puVar6 != (uint *)0x0) && ((param_2 != 0 && ((*(uint *)(param_1 + 0x10) & 1) == 0)))) {
      for (; *puVar6 - 0x1c < 5; puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (*puVar6 == 2) {
        piVar8 = *(int **)(puVar6 + 4);
        iVar4 = *piVar8;
        while (iVar4 - 0x1cU < 5) {
          piVar8 = *(int **)(piVar8 + 2);
          iVar4 = *piVar8;
        }
        *(int **)(puVar6 + 4) = piVar8;
      }
      return puVar6;
    }
    cVar2 = **(char **)(param_1 + 0x18);
    if (cVar2 == 'E' || cVar2 == '\0') {
      return puVar6;
    }
    puVar12 = puVar6;
    if (puVar6 == (uint *)0x0) {
      return (uint *)0x0;
    }
    do {
      uVar5 = *puVar12;
      if (uVar5 == 4) {
        puVar12 = *(uint **)(puVar12 + 2);
        goto joined_r0x0011adbc;
      }
    } while (((3 < uVar5) && (uVar5 - 0x1c < 5)) &&
            (ppuVar1 = (uint **)(puVar12 + 2), puVar12 = *ppuVar1, *ppuVar1 != (uint *)0x0));
LAB_0011ad10:
    if (cVar2 == 'J') goto LAB_0011b260;
    lVar11 = 0;
    goto LAB_0011ae00;
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar4 + 0x14;
  if (*pcVar10 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
    if (pcVar10[1] == '\0') {
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar10 + 2;
    switch(pcVar10[1]) {
    case 'C':
      lVar11 = FUN_00118798(param_1);
      lVar7 = FUN_00116248(param_1 + 0x18);
      if (lVar7 < 0) {
        return (uint *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 0xb;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 5;
      break;
    default:
      return (uint *)0x0;
    case 'F':
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 0xe;
      lVar11 = 0;
      break;
    case 'H':
      puVar6 = (uint *)FUN_0011a6c8(param_1);
      uVar9 = 0x14;
      lVar11 = 0;
      break;
    case 'I':
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 0xc;
      lVar11 = 0;
      break;
    case 'J':
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 0x12;
      lVar11 = 0;
      break;
    case 'S':
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 0xd;
      lVar11 = 0;
      break;
    case 'T':
      *(int *)(param_1 + 0x50) = iVar4 + 10;
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 10;
      lVar11 = 0;
      break;
    case 'V':
      *(int *)(param_1 + 0x50) = iVar4 + 0xf;
      puVar6 = (uint *)FUN_00118798(param_1);
      uVar9 = 9;
      lVar11 = 0;
      break;
    case 'W':
      puVar6 = (uint *)FUN_0011a6c8(param_1);
      uVar9 = 0x15;
      lVar11 = 0;
      break;
    case 'c':
      iVar4 = FUN_00116a6c(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      iVar4 = FUN_00116a6c(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      puVar6 = (uint *)FUN_0011ac74(param_1,0);
      uVar9 = 0x11;
      lVar11 = 0;
      break;
    case 'h':
      iVar4 = FUN_00116a6c(param_1,0x68);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      puVar6 = (uint *)FUN_0011ac74(param_1,0);
      uVar9 = 0xf;
      lVar11 = 0;
      break;
    case 'v':
      iVar4 = FUN_00116a6c(param_1,0x76);
      if (iVar4 == 0) {
        return (uint *)0x0;
      }
      puVar6 = (uint *)FUN_0011ac74(param_1,0);
      uVar9 = 0x10;
      lVar11 = 0;
    }
    goto LAB_0011ae34;
  }
  if (*pcVar10 != 'G') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar10 + 1;
  if (pcVar10[1] == '\0') {
    return (uint *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar10 + 2;
  switch(pcVar10[1]) {
  case 'A':
    puVar6 = (uint *)FUN_0011ac74(param_1,0);
    uVar9 = 0x17;
    lVar11 = 0;
    break;
  default:
    return (uint *)0x0;
  case 'R':
    puVar6 = (uint *)FUN_0011a6c8(param_1);
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar4 + 1;
      lVar11 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
      if (lVar11 == 0) goto LAB_0011b31c;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 0x41;
      uVar9 = FUN_00116248(param_1 + 0x18);
      *(undefined8 *)(lVar11 + 8) = uVar9;
    }
    else {
LAB_0011b31c:
      lVar11 = 0;
    }
    uVar9 = 0x16;
    break;
  case 'T':
    if ((pcVar10[2] == '\0') || (*(char **)(param_1 + 0x18) = pcVar10 + 3, pcVar10[2] != 'n')) {
      puVar6 = (uint *)FUN_0011ac74(param_1,0);
      uVar9 = 0x48;
      lVar11 = 0;
    }
    else {
      puVar6 = (uint *)FUN_0011ac74(param_1,0);
      uVar9 = 0x49;
      lVar11 = 0;
    }
    break;
  case 'V':
    puVar6 = (uint *)FUN_0011a6c8(param_1);
    uVar9 = 0x13;
    lVar11 = 0;
    break;
  case 'r':
    lVar11 = FUN_00116248(param_1 + 0x18);
    if (lVar11 < 2) {
      return (uint *)0x0;
    }
    pcVar10 = *(char **)(param_1 + 0x18);
    if (*pcVar10 == '\0') {
      return (uint *)0x0;
    }
    pcVar14 = pcVar10 + 1;
    *(char **)(param_1 + 0x18) = pcVar14;
    if (*pcVar10 != '_') {
      return (uint *)0x0;
    }
    lVar11 = lVar11 + -1;
    puVar12 = (uint *)0x0;
    do {
      if (*pcVar14 == '\0') {
        return (uint *)0x0;
      }
      uVar13 = 0;
      if (*pcVar14 == '$') {
        bVar3 = pcVar14[1];
        uVar5 = (uint)bVar3;
        if (bVar3 == 0x53) {
          uVar5 = 0x2f;
        }
        else if (bVar3 == 0x5f) {
          uVar5 = 0x2e;
        }
        else if (bVar3 != 0x24) {
          return (uint *)0x0;
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar4) {
LAB_0011b324:
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
          return (uint *)0x0;
        }
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        puVar6 = (uint *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18);
        if (puVar6 == (uint *)0x0) goto LAB_0011b324;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 0x40;
        lVar7 = -2;
        puVar6[2] = uVar5;
        pcVar14 = (char *)(*(long *)(param_1 + 0x18) + 2);
        *(char **)(param_1 + 0x18) = pcVar14;
      }
      else {
        do {
          uVar13 = uVar13 + 1;
          if ((lVar11 <= (long)uVar13) || (pcVar14[uVar13] == '\0')) break;
        } while (pcVar14[uVar13] != '$');
        lVar7 = -uVar13;
        puVar6 = (uint *)FUN_00115c34(param_1,pcVar14,uVar13 & 0xffffffff);
        pcVar14 = (char *)(*(long *)(param_1 + 0x18) + uVar13);
        *(char **)(param_1 + 0x18) = pcVar14;
        if (puVar6 == (uint *)0x0) {
          return (uint *)0x0;
        }
      }
      lVar11 = lVar11 + lVar7;
      if ((puVar12 != (uint *)0x0) &&
         (puVar6 = (uint *)FUN_00115b94(param_1,0x3f,puVar12), puVar6 == (uint *)0x0)) {
        return (uint *)0x0;
      }
      puVar12 = puVar6;
    } while (0 < lVar11);
    uVar9 = 0x3e;
    lVar11 = 0;
  }
  goto LAB_0011ae34;
joined_r0x0011adbc:
  if (puVar12 == (uint *)0x0) goto LAB_0011ade8;
  uVar5 = *puVar12;
  if (8 < uVar5) {
    if (uVar5 == 0x34) goto LAB_0011ad10;
    goto LAB_0011ade8;
  }
  if (6 < uVar5) goto LAB_0011ad10;
  if (1 < uVar5 - 1) goto LAB_0011ade8;
  puVar12 = *(uint **)(puVar12 + 4);
  goto joined_r0x0011adbc;
LAB_0011ade8:
  if (cVar2 == 'J') {
LAB_0011b260:
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  lVar11 = FUN_00118798(param_1);
  if (lVar11 == 0) {
LAB_0011b314:
    lVar11 = 0;
  }
  else {
LAB_0011ae00:
    lVar7 = FUN_00119e40(param_1);
    if (lVar7 == 0) goto LAB_0011b314;
    lVar11 = FUN_00115b94(param_1,0x29,lVar11,lVar7);
  }
  uVar9 = 3;
LAB_0011ae34:
  puVar6 = (uint *)FUN_00115b94(param_1,uVar9,puVar6,lVar11);
  return puVar6;
}



undefined8 FUN_0011b338(long param_1)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'L') {
    return 0;
  }
  pcVar5 = pcVar7 + 1;
  *(char **)(param_1 + 0x18) = pcVar5;
  cVar1 = pcVar7[1];
  if (cVar1 == 'Z') {
    cVar4 = 'Z';
    if (cVar1 == '_') goto LAB_0011b460;
  }
  else {
    if (cVar1 != '_') {
      piVar2 = (int *)FUN_00118798();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if ((*piVar2 == 0x27) && (*(int *)(*(long *)(piVar2 + 2) + 0x1c) != 0)) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(*(long *)(piVar2 + 2) + 8);
      }
      pcVar5 = *(char **)(param_1 + 0x18);
      uVar8 = 0x3c;
      cVar1 = *pcVar5;
      pcVar7 = pcVar5;
      if (cVar1 == 'n') {
        pcVar7 = pcVar5 + 1;
        *(char **)(param_1 + 0x18) = pcVar7;
        uVar8 = 0x3d;
        cVar1 = pcVar5[1];
      }
      pcVar5 = pcVar7;
      if (cVar1 == 'E') {
        iVar6 = 0;
      }
      else {
        do {
          if (cVar1 == '\0') {
            return 0;
          }
          pcVar5 = pcVar5 + 1;
          *(char **)(param_1 + 0x18) = pcVar5;
          cVar1 = *pcVar5;
        } while (cVar1 != 'E');
        iVar6 = (int)pcVar5 - (int)pcVar7;
      }
      uVar3 = FUN_00115c34(param_1,pcVar7,iVar6);
      uVar8 = FUN_00115b94(param_1,uVar8,piVar2,uVar3);
      pcVar5 = *(char **)(param_1 + 0x18);
      cVar4 = *pcVar5;
      goto LAB_0011b410;
    }
LAB_0011b460:
    pcVar5 = pcVar7 + 2;
    *(char **)(param_1 + 0x18) = pcVar5;
    cVar4 = pcVar7[2];
  }
  uVar8 = 0;
  if (cVar4 == 'Z') {
    *(char **)(param_1 + 0x18) = pcVar5 + 1;
    uVar8 = FUN_0011ac74(param_1,0);
    pcVar5 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar5;
  }
LAB_0011b410:
  if (cVar4 != 'E') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar5 + 1;
  return uVar8;
}



int * FUN_0011b4b0(long param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  char **ppcVar9;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar7;
  if (cVar1 == 'L') {
    piVar3 = (int *)FUN_0011b338();
    return piVar3;
  }
  if (cVar1 == 'T') {
    piVar3 = (int *)FUN_00116980();
    return piVar3;
  }
  if (cVar1 == 's') {
    if (pcVar7[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      piVar3 = (int *)FUN_00118798();
      uVar4 = FUN_0011a144(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        uVar6 = FUN_00116b58(param_1);
        uVar4 = FUN_00115b94(param_1,4,uVar4,uVar6);
      }
      uVar6 = 1;
      goto LAB_0011b5a0;
    }
    if (pcVar7[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      piVar3 = (int *)FUN_0011b4b0();
      uVar6 = 0x4a;
      uVar4 = 0;
      goto LAB_0011b6dc;
    }
  }
  else if (cVar1 == 'f') {
    if (pcVar7[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      if (pcVar7[2] == 'T') {
        lVar8 = 0;
        *(char **)(param_1 + 0x18) = pcVar7 + 3;
      }
      else {
        iVar2 = FUN_00116850();
        lVar8 = (long)(iVar2 + 1);
        if (iVar2 + 1 == 0) {
          return (int *)0x0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar2) {
        return (int *)0x0;
      }
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      piVar3 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 6;
      *(long *)(piVar3 + 2) = lVar8;
      return piVar3;
    }
  }
  else {
    if ((byte)(cVar1 - 0x30U) < 10) {
LAB_0011b4fc:
      piVar3 = (int *)FUN_0011a144(param_1);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != 'I') {
        return piVar3;
      }
      uVar4 = FUN_00116b58(param_1);
      uVar6 = 4;
      goto LAB_0011b6dc;
    }
    if (cVar1 == 'o') {
      if (pcVar7[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar7 + 2;
        goto LAB_0011b4fc;
      }
    }
    else if (((cVar1 == 't') || (cVar1 == 'i')) && (pcVar7[1] == 'l')) {
      piVar3 = (int *)0x0;
      if (cVar1 == 't') {
        piVar3 = (int *)FUN_00118798(param_1);
        pcVar7 = *(char **)(param_1 + 0x18);
      }
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      uVar4 = FUN_00118044(param_1,0x45);
      uVar6 = 0x30;
      goto LAB_0011b6dc;
    }
  }
  piVar3 = (int *)FUN_00119f50(param_1);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = *piVar3;
  if (iVar2 == 0x31) {
    ppcVar9 = *(char ***)(piVar3 + 2);
    pcVar7 = *ppcVar9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar9 + 2) + -2;
    iVar2 = strcmp(pcVar7,"st");
    if (iVar2 != 0) {
      switch(*(undefined4 *)((long)ppcVar9 + 0x14)) {
      case 0:
        goto switchD_0011b744_caseD_0;
      case 1:
        goto switchD_0011b7c8_caseD_1;
      case 2:
        goto switchD_0011b7c8_caseD_2;
      case 3:
        goto switchD_0011b7c8_caseD_3;
      default:
        goto switchD_0011b744_caseD_4;
      }
    }
    uVar4 = FUN_00118798(param_1);
  }
  else {
    if (iVar2 == 0x32) {
      switch(piVar3[2]) {
      case 0:
switchD_0011b744_caseD_0:
        uVar6 = 0x35;
        uVar4 = 0;
LAB_0011b6dc:
        piVar3 = (int *)FUN_00115b94(param_1,uVar6,piVar3,uVar4);
        return piVar3;
      case 1:
        goto switchD_0011b744_caseD_1;
      case 2:
        pcVar7 = (char *)0x0;
switchD_0011b7c8_caseD_2:
        if (((**(char ***)(piVar3 + 2))[1] == 'c') &&
           ((cVar1 = ***(char ***)(piVar3 + 2), (byte)(cVar1 + 0x8eU) < 2 ||
            ((byte)(cVar1 + 0x9dU) < 2)))) {
          uVar4 = FUN_00118798(param_1);
        }
        else {
          uVar4 = FUN_0011b4b0(param_1);
        }
        iVar2 = strcmp(pcVar7,"cl");
        if (iVar2 == 0) {
          uVar6 = FUN_00118044(param_1,0x45);
        }
        else {
          iVar2 = strcmp(pcVar7,"dt");
          if ((iVar2 == 0) || (iVar2 = strcmp(pcVar7,"pt"), iVar2 == 0)) {
            uVar6 = FUN_0011a144(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar5 = FUN_00116b58(param_1);
              uVar6 = FUN_00115b94(param_1,4,uVar6,uVar5);
            }
          }
          else {
            uVar6 = FUN_0011b4b0(param_1);
          }
        }
        uVar4 = FUN_00115b94(param_1,0x38,uVar4,uVar6);
        uVar6 = 0x37;
        goto LAB_0011b5a0;
      case 3:
        pcVar7 = (char *)0x0;
switchD_0011b7c8_caseD_3:
        iVar2 = strcmp(pcVar7,"qu");
        if (iVar2 == 0) {
          uVar4 = FUN_0011b4b0(param_1);
          uVar6 = FUN_0011b4b0(param_1);
          uVar5 = FUN_0011b4b0(param_1);
        }
        else {
          if (*pcVar7 != 'n') {
            return (int *)0x0;
          }
          if ((pcVar7[1] != 'a') && (pcVar7[1] != 'w')) {
            return (int *)0x0;
          }
          uVar4 = FUN_00118044(param_1,0x5f);
          uVar6 = FUN_00118798(param_1);
          pcVar7 = *(char **)(param_1 + 0x18);
          cVar1 = *pcVar7;
          if (cVar1 == 'E') {
            uVar5 = 0;
            *(char **)(param_1 + 0x18) = pcVar7 + 1;
          }
          else if (cVar1 == 'p') {
            if (pcVar7[1] != 'i') {
              return (int *)0x0;
            }
            *(char **)(param_1 + 0x18) = pcVar7 + 2;
            uVar5 = FUN_00118044(param_1,0x45);
          }
          else {
            if ((cVar1 != 'i') || (pcVar7[1] != 'l')) {
switchD_0011b744_caseD_4:
              return (int *)0x0;
            }
            uVar5 = FUN_0011b4b0(param_1);
          }
        }
        uVar6 = FUN_00115b94(param_1,0x3b,uVar6,uVar5);
        uVar4 = FUN_00115b94(param_1,0x3a,uVar4,uVar6);
        uVar6 = 0x39;
        goto LAB_0011b5a0;
      default:
        goto switchD_0011b744_caseD_4;
      }
    }
    if (iVar2 != 0x33) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar4 = FUN_00118044(param_1,0x45);
      goto LAB_0011b594;
    }
switchD_0011b744_caseD_1:
    uVar4 = FUN_0011b4b0(param_1);
  }
LAB_0011b594:
  uVar6 = 0x36;
LAB_0011b5a0:
  piVar3 = (int *)FUN_00115b94(param_1,uVar6,piVar3,uVar4);
  return piVar3;
switchD_0011b7c8_caseD_1:
  cVar1 = *pcVar7;
  if (((cVar1 == 'm') || (cVar1 == 'p')) && (pcVar7[1] == cVar1)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar4 = FUN_0011b4b0(param_1);
      uVar4 = FUN_00115b94(param_1,0x38,uVar4,uVar4);
      goto LAB_0011b594;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_0011b744_caseD_1;
}



undefined8 FUN_0011bb18(long param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'F') {
    return 0;
  }
  pcVar1 = pcVar7 + 1;
  *(char **)(param_1 + 0x18) = pcVar1;
  cVar2 = pcVar7[1];
  if (cVar2 == 'Y') {
    pcVar1 = pcVar7 + 2;
    *(char **)(param_1 + 0x18) = pcVar1;
    cVar2 = pcVar7[2];
  }
  if (cVar2 == 'J') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
  }
  lVar4 = FUN_00118798();
  if ((lVar4 == 0) || (lVar5 = FUN_00119e40(param_1), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00115b94(param_1,0x29,lVar4,lVar5);
  }
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar7;
  if (cVar2 == 'O') {
    if (cVar2 == 'R') goto LAB_0011bc30;
    uVar8 = 0x20;
    iVar3 = *(int *)(param_1 + 0x50) + 3;
  }
  else {
    if (cVar2 != 'R') {
      if (cVar2 != 'E') {
        return 0;
      }
      goto LAB_0011bbb8;
    }
LAB_0011bc30:
    uVar8 = 0x1f;
    iVar3 = *(int *)(param_1 + 0x50) + 2;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  uVar6 = FUN_00115b94(param_1,uVar8,uVar6,0);
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'E') {
    return 0;
  }
LAB_0011bbb8:
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  return uVar6;
}


/*
Unable to decompile 'FUN_0011bc48'
Cause: 
Low-level Error: Could not finish collapsing block structure
*/


// WARNING: Type propagation algorithm not settling

void FUN_0011e37c(undefined *param_1,uint param_2,long *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long **pplVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  size_t sVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long ***ppplVar20;
  long *plVar21;
  long ***ppplVar22;
  int *piVar23;
  char **ppcVar24;
  long *plVar25;
  long ***ppplVar26;
  long **pplVar27;
  long ***ppplVar28;
  ulong uVar29;
  byte bVar30;
  int iVar31;
  undefined8 *puVar32;
  size_t sVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  undefined8 unaff_x22;
  ulong uVar37;
  undefined8 uVar38;
  ulong uVar39;
  undefined8 uVar40;
  long ***local_90;
  long *local_88;
  long **local_80;
  long *local_78;
  long *local_70;
  long ***local_68 [2];
  long *local_58;
  long *local_50;
  long ***local_48;
  long ****local_40;
  long *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long ***local_28;
  long *****local_20;
  long *local_18;
  ulong local_10;
  long ***local_8;
  
  if (param_3 == (long *)0x0) goto LAB_0011e3f8;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  iVar6 = *(int *)param_3;
  switch(iVar6) {
  case 0:
    if ((param_2 >> 2 & 1) == 0) {
      iVar6 = *(int *)(param_3 + 2);
      lVar10 = param_3[1];
      if ((long)iVar6 != 0) {
        lVar18 = 0;
        lVar12 = *(long *)(param_1 + 0x100);
        do {
          uVar3 = *(undefined *)(lVar10 + lVar18);
          if (lVar12 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar7 = 1;
            lVar12 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar7 = lVar12 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar7;
          lVar18 = lVar18 + 1;
          param_1[lVar12] = uVar3;
          param_1[0x108] = uVar3;
          lVar12 = lVar7;
        } while (iVar6 != lVar18);
      }
    }
    else {
      pbVar34 = (byte *)param_3[1];
      pbVar2 = pbVar34 + *(int *)(param_3 + 2);
      while (pbVar34 < pbVar2) {
        bVar30 = *pbVar34;
        if (((3 < (long)pbVar2 - (long)pbVar34) && (bVar30 == 0x5f)) &&
           ((pbVar34[1] == 0x5f &&
            ((bVar30 = 0x5f, pbVar34[2] == 0x55 && (pbVar35 = pbVar34 + 3, pbVar35 < pbVar2)))))) {
          uVar39 = 0;
          do {
            bVar30 = *pbVar35;
            uVar16 = (uint)bVar30;
            uVar36 = uVar16 - 0x30;
            if (9 < (uVar36 & 0xff)) {
              if ((uVar16 - 0x41 & 0xff) < 6) {
                uVar36 = uVar16 - 0x37;
              }
              else {
                if (5 < (uVar16 - 0x61 & 0xff)) {
                  if (((pbVar35 < pbVar2) && (bVar30 == 0x5f)) && (uVar39 < 0x100)) {
                    lVar10 = *(long *)(param_1 + 0x100);
                    if (lVar10 == 0xff) {
                      param_1[0xff] = 0;
                      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                      *(undefined8 *)(param_1 + 0x100) = 0;
                      lVar10 = 0;
                      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    }
                    *(long *)(param_1 + 0x100) = lVar10 + 1;
                    param_1[lVar10] = (char)uVar39;
                    param_1[0x108] = (char)uVar39;
                    goto LAB_00120a78;
                  }
                  break;
                }
                uVar36 = bVar30 - 0x57;
              }
            }
            pbVar35 = pbVar35 + 1;
            uVar39 = (long)(int)uVar36 + uVar39 * 0x10;
          } while (pbVar35 != pbVar2);
          bVar30 = 0x5f;
        }
        lVar10 = *(long *)(param_1 + 0x100);
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar18 = 1;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar18 = lVar10 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = bVar30;
        param_1[0x108] = bVar30;
        pbVar35 = pbVar34;
LAB_00120a78:
        pbVar34 = pbVar35 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if ((param_2 >> 2 & 1) == 0) {
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        *param_1 = 0x3a;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0011e4cc:
        lVar10 = lVar18 + 1;
      }
      else {
        lVar18 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = 0x3a;
        param_1[0x108] = 0x3a;
        if (lVar18 != 0xff) goto LAB_0011e4cc;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar18] = 0x3a;
      param_1[0x108] = 0x3a;
    }
    else {
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x2e;
      param_1[0x108] = 0x2e;
    }
    piVar9 = (int *)param_3[2];
    if (*piVar9 == 0x46) {
      FUN_001164d4(param_1,"{default arg#");
      FUN_001166dc(param_1,(long)(piVar9[4] + 1));
      FUN_001164d4(param_1,&DAT_0012aba8);
      piVar9 = *(int **)(piVar9 + 2);
    }
    FUN_0011e37c(param_1,param_2,piVar9);
    break;
  case 3:
    uVar38 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar21 = (long *)param_3[1];
    if (plVar21 != (long *)0x0) {
      iVar6 = *(int *)plVar21;
      ppplVar26 = *(long ****)(param_1 + 0x120);
      local_80 = (long **)0x0;
      *(long ****)(param_1 + 0x128) = &local_80;
      local_78 = plVar21;
      local_70._0_4_ = 0;
      local_68[0] = ppplVar26;
      if (iVar6 - 0x1cU < 5) {
        plVar21 = (long *)plVar21[1];
        if (plVar21 != (long *)0x0) {
          iVar6 = *(int *)plVar21;
          local_68[1] = &local_80;
          *(long *****)(param_1 + 0x128) = local_68 + 1;
          local_58 = plVar21;
          local_50._0_4_ = 0;
          local_48 = ppplVar26;
          if (4 < iVar6 - 0x1cU) {
            uVar39 = 2;
            goto LAB_001219e8;
          }
          plVar21 = (long *)plVar21[1];
          if (plVar21 != (long *)0x0) {
            iVar6 = *(int *)plVar21;
            local_40 = local_68 + 1;
            local_38 = plVar21;
            *(long ******)(param_1 + 0x128) = &local_40;
            local_30 = 0;
            local_28 = ppplVar26;
            if (4 < iVar6 - 0x1cU) {
              uVar39 = 3;
              goto LAB_001219e8;
            }
            plVar21 = (long *)plVar21[1];
            if (plVar21 != (long *)0x0) {
              iVar6 = *(int *)plVar21;
              local_20 = &local_40;
              local_18 = plVar21;
              *(long *****)(param_1 + 0x128) = &local_28 + 1;
              local_10 = local_10 & 0xffffffff00000000;
              local_8 = ppplVar26;
              if (4 < iVar6 - 0x1cU) {
                uVar39 = 4;
                goto LAB_001219e8;
              }
            }
          }
        }
      }
      else {
        uVar39 = 1;
LAB_001219e8:
        uVar37 = uVar39;
        if (iVar6 == 4) {
          *(long *****)(param_1 + 0x120) = &local_90;
          local_90 = ppplVar26;
          local_88 = plVar21;
LAB_00121b08:
          FUN_0011e37c(param_1,param_2,param_3[2]);
          if (*(int *)plVar21 == 4) {
            *(long ****)(param_1 + 0x120) = local_90;
          }
          iVar6 = (int)uVar37;
          uVar36 = iVar6 - 1;
          if (*(int *)(&local_70 + (ulong)uVar36 * 4) == 0) {
            FUN_001161d0(param_1,0x20);
            FUN_00121d88(param_1,param_2,(&local_78)[(ulong)uVar36 * 4]);
          }
          if (uVar36 != 0) {
            uVar36 = iVar6 - 2;
            if (*(int *)(&local_70 + (ulong)uVar36 * 4) == 0) {
              FUN_001161d0(param_1,0x20);
              FUN_00121d88(param_1,param_2,(&local_78)[(ulong)uVar36 * 4]);
            }
            if (uVar36 != 0) {
              uVar36 = iVar6 - 3;
              if (*(int *)(&local_70 + (ulong)uVar36 * 4) == 0) {
                FUN_001161d0(param_1,0x20);
                FUN_00121d88(param_1,param_2,(&local_78)[(ulong)uVar36 * 4]);
              }
              if ((uVar36 != 0) && ((int)local_70 == 0)) {
                FUN_001161d0(param_1,0x20);
                FUN_00121d88(param_1,param_2,local_78);
                *(undefined8 *)(param_1 + 0x128) = uVar38;
                return;
              }
            }
          }
          *(undefined8 *)(param_1 + 0x128) = uVar38;
          return;
        }
        if (iVar6 != 2) goto LAB_00121b08;
        plVar25 = (long *)plVar21[2];
        if (*(int *)plVar25 == 0x46) {
          plVar25 = (long *)plVar25[1];
        }
        if (4 < *(int *)plVar25 - 0x1cU) goto LAB_00121b08;
        iVar6 = (int)uVar39;
        if (iVar6 != 4) {
          uVar37 = (ulong)(iVar6 - 1);
          ppplVar28 = &local_80 + uVar39 * 4;
          *(long ****)(param_1 + 0x128) = ppplVar28;
          ppplVar22 = &local_80 + uVar37 * 4;
          uVar29 = (ulong)(iVar6 + 1U);
          plVar19 = (&local_78)[uVar37 * 4];
          *ppplVar28 = *ppplVar22;
          (&local_78)[uVar39 * 4] = plVar19;
          ppplVar20 = local_68[uVar37 * 4];
          (&local_70)[uVar39 * 4] = (&local_70)[uVar37 * 4];
          local_68[uVar39 * 4] = ppplVar20;
          (&local_80)[uVar39 * 4] = (long **)ppplVar22;
          (&local_78)[uVar37 * 4] = plVar25;
          *(undefined4 *)(&local_70 + uVar37 * 4) = 0;
          local_68[uVar37 * 4] = ppplVar26;
          plVar25 = (long *)plVar25[1];
          uVar37 = uVar29;
          if (4 < *(int *)plVar25 - 0x1cU) goto LAB_00121b08;
          if (iVar6 + 1U != 4) {
            uVar37 = (ulong)(iVar6 + 2U);
            ppplVar22 = &local_80 + uVar29 * 4;
            *(long ****)(param_1 + 0x128) = ppplVar22;
            plVar19 = (&local_78)[uVar39 * 4];
            *ppplVar22 = *ppplVar28;
            (&local_78)[uVar29 * 4] = plVar19;
            ppplVar22 = local_68[uVar39 * 4];
            (&local_70)[uVar29 * 4] = (&local_70)[uVar39 * 4];
            local_68[uVar29 * 4] = ppplVar22;
            (&local_80)[uVar29 * 4] = (long **)ppplVar28;
            (&local_78)[uVar39 * 4] = plVar25;
            *(undefined4 *)(&local_70 + uVar39 * 4) = 0;
            local_68[uVar39 * 4] = ppplVar26;
            plVar25 = (long *)plVar25[1];
            if (4 < *(int *)plVar25 - 0x1cU) goto LAB_00121b08;
            if (iVar6 + 2U != 4) {
              local_10 = CONCAT44(uStack_2c,local_30);
              local_18 = local_38;
              local_20 = &local_40;
              local_8 = local_28;
              *(long *****)(param_1 + 0x128) = &local_28 + 1;
              local_30 = 0;
              if (4 < *(int *)plVar25[1] - 0x1cU) {
                uVar37 = 4;
                local_38 = plVar25;
                local_28 = ppplVar26;
                goto LAB_00121b08;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 4:
    uVar38 = *(undefined8 *)(param_1 + 0x160);
    uVar40 = *(undefined8 *)(param_1 + 0x128);
    *(long **)(param_1 + 0x160) = param_3;
    *(undefined8 *)(param_1 + 0x128) = 0;
    piVar9 = (int *)param_3[1];
    if (((((param_2 >> 2 & 1) == 0) || (*piVar9 != 0)) || (piVar9[4] != 6)) ||
       (iVar6 = strncmp(*(char **)(piVar9 + 2),"JArray",6), iVar6 != 0)) {
      FUN_0011e37c(param_1,param_2,piVar9);
      if (param_1[0x108] == '<') {
        FUN_001161d0(param_1,0x20);
      }
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0011e37c(param_1,param_2,param_3[2]);
      if (param_1[0x108] == '>') {
        FUN_001161d0(param_1,0x20);
      }
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0011e37c(param_1,param_2,param_3[2]);
      FUN_001164d4(param_1,&DAT_0012abb8);
    }
    *(undefined8 *)(param_1 + 0x128) = uVar40;
    *(undefined8 *)(param_1 + 0x160) = uVar38;
    break;
  case 5:
    piVar9 = (int *)FUN_001162d0(param_1,param_3 + 1);
    if (piVar9 != (int *)0x0) {
      if (*piVar9 != 0x2f) {
LAB_0011f594:
        puVar32 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = *puVar32;
        FUN_0011e37c(param_1,param_2);
        *(undefined8 **)(param_1 + 0x120) = puVar32;
        return;
      }
      iVar6 = *(int *)(param_1 + 0x134);
      while (0 < iVar6) {
        piVar9 = *(int **)(piVar9 + 4);
        iVar6 = iVar6 + -1;
        if ((piVar9 == (int *)0x0) || (*piVar9 != 0x2f)) goto LAB_0011e3f8;
      }
      if ((iVar6 == 0) && (*(long *)(piVar9 + 2) != 0)) goto LAB_0011f594;
    }
    goto LAB_0011e3f8;
  case 6:
    lVar18 = param_3[1];
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar18 != 0) {
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x7b;
        lVar10 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x70;
LAB_00120470:
        lVar12 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar12;
        param_1[lVar10] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar12 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x72;
          lVar10 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x6d;
        }
        else {
LAB_0012048c:
          lVar7 = lVar12 + 1;
          *(long *)(param_1 + 0x100) = lVar7;
          param_1[lVar12] = 0x72;
          param_1[0x108] = 0x72;
          if (lVar7 != 0xff) goto LAB_001204a8;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x6d;
          lVar10 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar12 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar12;
        param_1[lVar10] = 0x7b;
        param_1[0x108] = 0x7b;
        if (lVar12 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x70;
          lVar12 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0012048c;
        }
        lVar10 = lVar10 + 2;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar12] = 0x70;
        param_1[0x108] = 0x70;
        if (lVar10 != 0xff) goto LAB_00120470;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar7 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x72;
LAB_001204a8:
        lVar10 = lVar7 + 1;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar7] = 0x6d;
        param_1[0x108] = 0x6d;
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar12 = 1;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_001204c8;
        }
      }
      lVar12 = lVar10 + 1;
LAB_001204c8:
      *(long *)(param_1 + 0x100) = lVar12;
      param_1[lVar10] = 0x23;
      param_1[0x108] = 0x23;
      sVar33 = 0;
      sprintf((char *)&local_80,"%ld",lVar18);
      sVar13 = strlen((char *)&local_80);
      lVar10 = *(long *)(param_1 + 0x100);
      lVar18 = lVar10;
      if (sVar13 != 0) {
        do {
          cVar4 = *(char *)((long)&local_80 + sVar33);
          if (lVar18 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar10 = 1;
            lVar18 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar10 = lVar18 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar10;
          sVar33 = sVar33 + 1;
          param_1[lVar18] = cVar4;
          param_1[0x108] = cVar4;
          lVar18 = lVar10;
        } while (sVar33 != sVar13);
      }
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x7d;
      param_1[0x108] = 0x7d;
      return;
    }
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x74;
      lVar10 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x68;
LAB_0011edf8:
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar18 != 0xff) goto LAB_0011ee14;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar10 = 1;
      lVar18 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x74;
      param_1[0x108] = 0x74;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x68;
        lVar18 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x69;
      }
      else {
        lVar10 = lVar10 + 2;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar18] = 0x68;
        param_1[0x108] = 0x68;
        if (lVar10 != 0xff) goto LAB_0011edf8;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar18 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0011ee14:
      lVar10 = lVar18 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar10;
    param_1[lVar18] = 0x73;
    param_1[0x108] = 0x73;
    break;
  case 7:
    FUN_0011e37c(param_1,param_2,param_3[2]);
    break;
  case 8:
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x7e;
    param_1[0x108] = 0x7e;
    FUN_0011e37c(param_1,param_2,param_3[2]);
    break;
  case 9:
    pcVar11 = "vtable for ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 10:
    pcVar11 = "VTT for ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0xb:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "construction vtable for "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x18);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar10 = 2;
      *param_1 = 0x2d;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_00120244:
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x6e;
      param_1[0x108] = 0x6e;
      if (lVar18 != 0xff) goto LAB_00120260;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar10 = 1;
      lVar18 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x2d;
      param_1[0x108] = 0x2d;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar18 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x6e;
      }
      else {
        lVar10 = lVar10 + 2;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar18] = 0x69;
        param_1[0x108] = 0x69;
        if (lVar10 != 0xff) goto LAB_00120244;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar18 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_00120260:
      lVar10 = lVar18 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar10;
    param_1[lVar18] = 0x2d;
    param_1[0x108] = 0x2d;
    FUN_0011e37c(param_1,param_2,param_3[2]);
    break;
  case 0xc:
    pcVar11 = "typeinfo for ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0xd:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "typeinfo name for "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x12);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0xe:
    pcVar11 = "typeinfo fn for ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0xf:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "non-virtual thunk to "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x15);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x10:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "virtual thunk to "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x11);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x11:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "covariant return thunk to "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x1a);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x12:
    pcVar11 = "java Class for ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x13:
    FUN_001164d4(param_1,"guard variable for ");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x14:
    FUN_001164d4(param_1,"TLS init function for ");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x15:
    FUN_001164d4(param_1,"TLS wrapper function for ");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x16:
    FUN_001164d4(param_1,"reference temporary #");
    FUN_0011e37c(param_1,param_2,param_3[2]);
    FUN_001164d4(param_1," for ");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x17:
    FUN_001164d4(param_1,"hidden alias for ");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x18:
    iVar6 = *(int *)(param_3 + 2);
    lVar10 = param_3[1];
    if ((long)iVar6 != 0) {
      lVar18 = 0;
      lVar12 = *(long *)(param_1 + 0x100);
      do {
        uVar3 = *(undefined *)(lVar10 + lVar18);
        if (lVar12 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar7 = 1;
          lVar12 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar7 = lVar12 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar7;
        lVar18 = lVar18 + 1;
        param_1[lVar12] = uVar3;
        param_1[0x108] = uVar3;
        lVar12 = lVar7;
      } while (iVar6 != lVar18);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_80 = *(long ***)(param_1 + 0x128);
    pplVar27 = local_80;
    if (local_80 == (long **)0x0) {
      local_80 = (long **)0x0;
      bVar5 = false;
    }
    else {
      do {
        if (*(int *)(pplVar27 + 2) == 0) {
          if (2 < *(int *)pplVar27[1] - 0x19U) break;
          if (iVar6 == *(int *)pplVar27[1]) {
            FUN_0011e37c(param_1,param_2,param_3[1]);
            return;
          }
        }
        pplVar27 = (long **)*pplVar27;
      } while (pplVar27 != (long **)0x0);
      bVar5 = false;
    }
    goto LAB_0011ec78;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
    local_80 = *(long ***)(param_1 + 0x128);
    bVar5 = false;
LAB_0011ec78:
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
LAB_0011ec94:
    lVar10 = local_78[1];
LAB_0011ec98:
    plVar21 = local_78;
    local_70._0_4_ = 0;
    FUN_0011e37c(param_1,param_2,lVar10);
    if ((int)local_70 == 0) {
      FUN_00121d88(param_1,param_2,plVar21);
    }
    *(long ***)(param_1 + 0x128) = local_80;
    if (bVar5) {
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
    }
    break;
  case 0x23:
  case 0x24:
    plVar21 = (long *)param_3[1];
    bVar5 = false;
    iVar6 = *(int *)plVar21;
    if (iVar6 == 5) {
      uVar36 = *(uint *)(param_1 + 0x148);
      pplVar27 = *(long ***)(param_1 + 0x140);
      if ((int)uVar36 < 1) {
LAB_00120740:
        if (*(int *)(param_1 + 0x14c) <= (int)uVar36) {
LAB_00121c6c:
          *(undefined4 *)(param_1 + 0x130) = 1;
          return;
        }
        uVar39 = -(ulong)(uVar36 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar36 << 4;
        plVar25 = *(long **)(param_1 + 0x120);
        *(uint *)(param_1 + 0x148) = uVar36 + 1;
        *(long **)((long)pplVar27 + uVar39) = plVar21;
        puVar32 = (undefined8 *)((long)pplVar27 + uVar39 + 8);
        if (plVar25 != (long *)0x0) {
          uVar36 = *(uint *)(param_1 + 0x158);
          iVar6 = *(int *)(param_1 + 0x15c);
          if ((int)uVar36 < iVar6) {
            uVar39 = -(ulong)(uVar36 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar36 << 4;
            puVar14 = puVar32;
            iVar31 = uVar36 + 1;
            do {
              iVar15 = iVar31;
              puVar32 = (undefined8 *)(*(long *)(param_1 + 0x150) + uVar39);
              puVar32[1] = plVar25[1];
              *puVar14 = puVar32;
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) {
                *(int *)(param_1 + 0x158) = iVar15;
                goto LAB_001207c4;
              }
              uVar39 = uVar39 + 0x10;
              puVar14 = puVar32;
              iVar31 = iVar15 + 1;
            } while (iVar15 + 1 != iVar6 + 1);
            *(int *)(param_1 + 0x158) = iVar15;
          }
          goto LAB_00121c6c;
        }
LAB_001207c4:
        *puVar32 = 0;
        bVar5 = false;
        plVar21 = (long *)FUN_001162d0(param_1,plVar21 + 1);
        if (plVar21 == (long *)0x0) goto LAB_0011e3f8;
LAB_00120984:
        iVar6 = *(int *)plVar21;
        if (iVar6 != 0x2f) goto LAB_0011ecd4;
        iVar6 = *(int *)(param_1 + 0x134);
        while (0 < iVar6) {
          plVar21 = (long *)plVar21[2];
          iVar6 = iVar6 + -1;
          if ((plVar21 == (long *)0x0) || (*(int *)plVar21 != 0x2f)) goto LAB_0011e3f0;
        }
        if ((iVar6 == 0) && (plVar21 = (long *)plVar21[1], plVar21 != (long *)0x0)) {
          iVar6 = *(int *)plVar21;
          goto LAB_0011ecd4;
        }
LAB_0011e3f0:
        if (!bVar5) goto LAB_0011e3f8;
      }
      else {
        pplVar8 = pplVar27;
        if (plVar21 != *pplVar27) {
          do {
            pplVar8 = pplVar8 + 2;
            if (pplVar8 == pplVar27 + ((ulong)(uVar36 - 1) + 1) * 2) goto LAB_00120740;
          } while (plVar21 != *pplVar8);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x120);
        *(long **)(param_1 + 0x120) = pplVar8[1];
        bVar5 = true;
        plVar21 = (long *)FUN_001162d0(param_1,plVar21 + 1);
        if (plVar21 != (long *)0x0) goto LAB_00120984;
      }
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
LAB_0011e3f8:
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_0011ecd4:
    if ((iVar6 == 0x23) || (*(int *)param_3 == iVar6)) {
      local_80 = *(long ***)(param_1 + 0x128);
      param_3 = plVar21;
      goto LAB_0011ec78;
    }
    if (iVar6 != 0x24) {
      local_80 = *(long ***)(param_1 + 0x128);
      goto LAB_0011ec78;
    }
    lVar10 = plVar21[1];
    local_80 = *(long ***)(param_1 + 0x128);
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
    if (lVar10 == 0) goto LAB_0011ec94;
    goto LAB_0011ec98;
  case 0x27:
    if ((param_2 >> 2 & 1) == 0) {
      lVar10 = (long)*(int *)((long *)param_3[1] + 1);
      lVar18 = *(long *)param_3[1];
      if (lVar10 != 0) {
        lVar12 = 0;
        lVar7 = *(long *)(param_1 + 0x100);
        do {
          uVar3 = *(undefined *)(lVar18 + lVar12);
          if (lVar7 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar17 = 1;
            lVar7 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar17 = lVar7 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar17;
          lVar12 = lVar12 + 1;
          param_1[lVar7] = uVar3;
          param_1[0x108] = uVar3;
          lVar7 = lVar17;
        } while (lVar10 != lVar12);
      }
    }
    else {
      lVar10 = (long)*(int *)(param_3[1] + 0x18);
      lVar18 = *(long *)(param_3[1] + 0x10);
      if (lVar10 != 0) {
        lVar12 = 0;
        lVar7 = *(long *)(param_1 + 0x100);
        do {
          uVar3 = *(undefined *)(lVar18 + lVar12);
          if (lVar7 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar17 = 1;
            lVar7 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar17 = lVar7 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar17;
          lVar12 = lVar12 + 1;
          param_1[lVar7] = uVar3;
          param_1[0x108] = uVar3;
          lVar7 = lVar17;
        } while (lVar10 != lVar12);
      }
    }
    break;
  case 0x28:
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x29:
    if ((param_2 >> 5 & 1) == 0) {
      if ((param_3[1] != 0) && ((param_2 >> 6 & 1) == 0)) {
        local_80 = *(long ***)(param_1 + 0x128);
        *(long ****)(param_1 + 0x128) = &local_80;
        local_68[0] = *(long ****)(param_1 + 0x120);
        local_70._0_4_ = 0;
        local_78 = param_3;
        FUN_0011e37c(param_1,param_2 & 0xffffff9f,param_3[1]);
        *(long ***)(param_1 + 0x128) = local_80;
        if ((int)local_70 != 0) {
          return;
        }
        FUN_001161d0(param_1,0x20);
      }
      FUN_00122be4(param_1,param_2 & 0xffffff9f,param_3 + 2,*(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_00122be4(param_1,param_2 & 0xffffff9f,param_3 + 2,*(undefined8 *)(param_1 + 0x128));
      if (param_3[1] != 0) {
        FUN_0011e37c(param_1,param_2 & 0xffffff9f);
      }
    }
    break;
  case 0x2a:
    pplVar27 = *(long ***)(param_1 + 0x128);
    local_68[0] = *(long ****)(param_1 + 0x120);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_70._0_4_ = 0;
    local_80 = pplVar27;
    if ((pplVar27 == (long **)0x0) || (2 < *(int *)pplVar27[1] - 0x19U)) {
      local_78 = param_3;
      FUN_0011e37c(param_1,param_2,param_3[2]);
      *(long ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
    }
    else {
      pplVar8 = pplVar27;
      ppplVar26 = &local_80;
      uVar39 = 1;
      do {
        ppplVar28 = ppplVar26;
        uVar37 = uVar39;
        if (*(int *)(pplVar8 + 2) == 0) {
          if (3 < (uint)uVar39) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return;
          }
          uVar37 = (ulong)((uint)uVar39 + 1);
          ppplVar28 = &local_80 + uVar39 * 4;
          plVar21 = pplVar8[1];
          *ppplVar28 = (long **)*pplVar8;
          (&local_78)[uVar39 * 4] = plVar21;
          ppplVar22 = (long ***)pplVar8[3];
          (&local_70)[uVar39 * 4] = pplVar8[2];
          local_68[uVar39 * 4] = ppplVar22;
          (&local_80)[uVar39 * 4] = (long **)ppplVar26;
          *(long ****)(param_1 + 0x128) = ppplVar28;
          *(undefined4 *)(pplVar8 + 2) = 1;
        }
        pplVar8 = (long **)*pplVar8;
      } while ((pplVar8 != (long **)0x0) &&
              (ppplVar26 = ppplVar28, uVar39 = uVar37, *(int *)pplVar8[1] - 0x19U < 3));
      local_78 = param_3;
      FUN_0011e37c(param_1,param_2,param_3[2]);
      *(long ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
      if ((int)uVar37 != 1) {
        do {
          uVar36 = (int)uVar37 - 1;
          uVar37 = (ulong)uVar36;
          FUN_00121d88(param_1,param_2,(&local_78)[uVar37 * 4]);
        } while (uVar36 != 1);
        pplVar27 = *(long ***)(param_1 + 0x128);
      }
    }
    FUN_0012291c(param_1,param_2,param_3 + 1,pplVar27);
    break;
  case 0x2b:
  case 0x2d:
    local_80 = *(long ***)(param_1 + 0x128);
    *(long ****)(param_1 + 0x128) = &local_80;
    local_68[0] = *(long ****)(param_1 + 0x120);
    local_70._0_4_ = 0;
    local_78 = param_3;
    FUN_0011e37c(param_1,param_2,param_3[2]);
    if ((int)local_70 == 0) {
      FUN_00121d88(param_1,param_2,param_3);
    }
    *(long ***)(param_1 + 0x128) = local_80;
    break;
  case 0x2c:
    if (*(short *)((long)param_3 + 0x12) != 0) {
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 2;
        *param_1 = 0x5f;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x53;
LAB_0012067c:
        lVar18 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x74;
          lVar10 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_001206b4;
        }
LAB_00120698:
        lVar10 = lVar18 + 1;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar18] = 0x74;
        param_1[0x108] = 0x74;
        if (lVar10 != 0xff) goto LAB_001206b4;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x53;
          lVar18 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_00120698;
        }
        lVar10 = lVar10 + 2;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar18] = 0x53;
        param_1[0x108] = 0x53;
        if (lVar10 != 0xff) goto LAB_0012067c;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar10 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x74;
LAB_001206b4:
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(undefined **)(param_3[1] + 8) == &UNK_00140720) {
      lVar10 = *(long *)(param_1 + 0x100);
    }
    else {
      FUN_0011e37c(param_1,param_2);
      lVar18 = *(long *)(param_1 + 0x100);
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar10 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar18] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(short *)(param_3 + 2) == 0) {
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 2;
        *param_1 = 0x5f;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x46;
LAB_00120398:
        lVar18 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = 0x72;
        param_1[0x108] = 0x72;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x61;
          lVar10 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 99;
        }
        else {
LAB_001203b4:
          lVar12 = lVar18 + 1;
          *(long *)(param_1 + 0x100) = lVar12;
          param_1[lVar18] = 0x61;
          param_1[0x108] = 0x61;
          if (lVar12 != 0xff) goto LAB_001203d0;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 99;
          lVar10 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar18 = lVar10 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar10] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x46;
          lVar18 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x72;
          goto LAB_001203b4;
        }
        lVar10 = lVar10 + 2;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar18] = 0x46;
        param_1[0x108] = 0x46;
        if (lVar10 != 0xff) goto LAB_00120398;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x72;
        lVar12 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x61;
LAB_001203d0:
        lVar10 = lVar12 + 1;
        *(long *)(param_1 + 0x100) = lVar10;
        param_1[lVar12] = 99;
        param_1[0x108] = 99;
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar18 = 1;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_001203f0;
        }
      }
      lVar18 = lVar10 + 1;
LAB_001203f0:
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x74;
      param_1[0x108] = 0x74;
      return;
    }
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar10 = 2;
      *param_1 = 0x5f;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x41;
LAB_0011f90c:
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 99;
      param_1[0x108] = 99;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 99;
        lVar10 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x75;
      }
      else {
LAB_0011f928:
        lVar12 = lVar18 + 1;
        *(long *)(param_1 + 0x100) = lVar12;
        param_1[lVar18] = 99;
        param_1[0x108] = 99;
        if (lVar12 != 0xff) goto LAB_0011f944;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x75;
        lVar10 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0011f960:
      lVar18 = lVar10 + 1;
    }
    else {
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x5f;
      param_1[0x108] = 0x5f;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x41;
        lVar18 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 99;
        goto LAB_0011f928;
      }
      lVar10 = lVar10 + 2;
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar18] = 0x41;
      param_1[0x108] = 0x41;
      if (lVar10 != 0xff) goto LAB_0011f90c;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar12 = 2;
      param_1[1] = 99;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0011f944:
      lVar10 = lVar12 + 1;
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar12] = 0x75;
      param_1[0x108] = 0x75;
      if (lVar10 != 0xff) goto LAB_0011f960;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x6d;
    param_1[0x108] = 0x6d;
    break;
  case 0x2e:
  case 0x2f:
    if (param_3[1] != 0) {
      FUN_0011e37c(param_1,param_2);
    }
    if (param_3[2] != 0) {
      uVar37 = *(ulong *)(param_1 + 0x100);
      uVar39 = uVar37;
      if (0xfd < uVar37) {
        param_1[uVar37] = 0;
        uVar39 = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar37,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      param_1[uVar39] = 0x2c;
      *(ulong *)(param_1 + 0x100) = uVar39 + 2;
      param_1[uVar39 + 1] = 0x20;
      param_1[0x108] = 0x20;
      lVar10 = *(long *)(param_1 + 0x138);
      FUN_0011e37c(param_1,param_2,param_3[2]);
      if ((*(long *)(param_1 + 0x138) == lVar10) && (*(long *)(param_1 + 0x100) == uVar39 + 2)) {
        *(ulong *)(param_1 + 0x100) = uVar39;
      }
    }
    break;
  case 0x30:
    lVar10 = param_3[2];
    if (param_3[1] != 0) {
      FUN_0011e37c(param_1,param_2);
    }
    lVar18 = *(long *)(param_1 + 0x100);
    if (lVar18 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar12 = 1;
      lVar18 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar12 = lVar18 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar12;
    param_1[lVar18] = 0x7b;
    param_1[0x108] = 0x7b;
    FUN_0011e37c(param_1,param_2,lVar10);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x31:
    lVar18 = param_3[1];
    pcVar11 = "operator";
    iVar6 = *(int *)(lVar18 + 0x10);
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar12;
    } while (pcVar11 != "");
    pcVar11 = *(char **)(lVar18 + 8);
    if ((byte)(*pcVar11 + 0x9fU) < 0x1a) {
      if (lVar12 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12 + 1;
      param_1[lVar12] = 0x20;
      param_1[0x108] = 0x20;
      pcVar11 = *(char **)(lVar18 + 8);
    }
    lVar10 = (long)iVar6;
    if (pcVar11[lVar10 + -1] == ' ') {
      lVar10 = (long)(iVar6 + -1);
    }
    if (lVar10 != 0) {
      pcVar1 = pcVar11 + lVar10;
      lVar10 = *(long *)(param_1 + 0x100);
      do {
        cVar4 = *pcVar11;
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar18 = 1;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar18 = lVar10 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar18;
        pcVar11 = pcVar11 + 1;
        param_1[lVar10] = cVar4;
        param_1[0x108] = cVar4;
        lVar10 = lVar18;
      } while (pcVar11 != pcVar1);
    }
    break;
  case 0x32:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 9);
    FUN_0011e37c(param_1,param_2,param_3[2]);
    break;
  default:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x34:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 9);
    if (*(long **)(param_1 + 0x160) != (long *)0x0) {
      local_80 = *(long ***)(param_1 + 0x120);
      *(long ****)(param_1 + 0x120) = &local_80;
      local_78 = *(long **)(param_1 + 0x160);
    }
    if (*(int *)param_3[1] == 4) {
      FUN_0011e37c(param_1,param_2,*(undefined8 *)((int *)param_3[1] + 2));
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long ***)(param_1 + 0x120) = local_80;
      }
      if (param_1[0x108] == '<') {
        lVar10 = *(long *)(param_1 + 0x100);
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar10 + 1;
        param_1[lVar10] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar10 + 1;
      param_1[lVar10] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3[1] + 0x10));
      if (param_1[0x108] == '>') {
        lVar10 = *(long *)(param_1 + 0x100);
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar10 + 1;
        param_1[lVar10] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar10 + 1;
      param_1[lVar10] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0011e37c(param_1,param_2);
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long ***)(param_1 + 0x120) = local_80;
      }
    }
    break;
  case 0x35:
    FUN_00122e94(param_1,param_2,param_3[1]);
    break;
  case 0x36:
    piVar23 = (int *)param_3[1];
    piVar9 = (int *)param_3[2];
    if (*piVar23 == 0x31) {
      pcVar11 = **(char ***)(piVar23 + 2);
      iVar6 = strcmp(pcVar11,"ad");
      if (iVar6 == 0) {
        iVar6 = *piVar9;
        if (iVar6 != 3) goto LAB_0012080c;
        if ((**(int **)(piVar9 + 2) == 1) && (**(int **)(piVar9 + 4) == 0x29)) {
          piVar9 = *(int **)(piVar9 + 2);
        }
      }
      else {
        iVar6 = *piVar9;
LAB_0012080c:
        if (iVar6 == 0x38) {
          FUN_00122f68(param_1,param_2,*(undefined8 *)(piVar9 + 2));
          FUN_00122e94(param_1,param_2,piVar23);
          return;
        }
      }
      FUN_00122e94(param_1,param_2,piVar23);
      iVar6 = strcmp(pcVar11,"gs");
      if (iVar6 == 0) {
        FUN_0011e37c(param_1,param_2,piVar9);
        return;
      }
      iVar6 = strcmp(pcVar11,"st");
      if (iVar6 == 0) {
        FUN_001161d0(param_1,0x28);
        FUN_0011e37c(param_1,param_2,piVar9);
        lVar10 = *(long *)(param_1 + 0x100);
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar10 + 1;
        param_1[lVar10] = 0x29;
        param_1[0x108] = 0x29;
        return;
      }
    }
    else if (*piVar23 == 0x33) {
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar10 + 1;
      param_1[lVar10] = 0x28;
      param_1[0x108] = 0x28;
      FUN_0011e37c(param_1,param_2,*(undefined8 *)(piVar23 + 2));
      FUN_001161d0(param_1,0x29);
    }
    else {
      FUN_00122e94(param_1,param_2,piVar23);
    }
    FUN_00122f68(param_1,param_2,piVar9);
    break;
  case 0x37:
    piVar9 = (int *)param_3[2];
    if (*piVar9 != 0x38) goto LAB_0011e3f8;
    ppcVar24 = *(char ***)((int *)param_3[1] + 2);
    pcVar11 = *ppcVar24;
    if ((pcVar11[1] == 'c') && (((byte)(*pcVar11 + 0x8eU) < 2 || ((byte)(*pcVar11 + 0x9dU) < 2)))) {
      FUN_00122e94(param_1,param_2);
      FUN_001161d0(param_1,0x3c);
      FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3[2] + 8));
      FUN_001164d4(param_1,&DAT_0012ae58);
      FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3[2] + 0x10));
      FUN_001161d0(param_1,0x29);
    }
    else {
      if ((*(int *)param_3[1] == 0x31) && ((*(int *)(ppcVar24 + 2) == 1 && (*ppcVar24[1] == '>'))))
      {
        FUN_001161d0(param_1,0x28);
        piVar9 = (int *)param_3[2];
        pcVar11 = **(char ***)(param_3[1] + 8);
      }
      iVar6 = strcmp(pcVar11,"cl");
      piVar9 = *(int **)(piVar9 + 2);
      if ((iVar6 == 0) && (*piVar9 == 3)) {
        if (**(int **)(piVar9 + 4) != 0x29) {
          *(undefined4 *)(param_1 + 0x130) = 1;
        }
        FUN_00122f68(param_1,param_2,*(undefined8 *)(piVar9 + 2));
      }
      else {
        FUN_00122f68(param_1,param_2);
      }
      lVar10 = param_3[1];
      pcVar11 = **(char ***)(lVar10 + 8);
      iVar6 = strcmp(pcVar11,"ix");
      if (iVar6 == 0) {
        FUN_001161d0(param_1,0x5b);
        FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3[2] + 0x10));
        FUN_001161d0(param_1,0x5d);
      }
      else {
        iVar6 = strcmp(pcVar11,"cl");
        if (iVar6 != 0) {
          FUN_00122e94(param_1,param_2,lVar10);
        }
        FUN_00122f68(param_1,param_2,*(undefined8 *)(param_3[2] + 0x10));
      }
      if (((*(int *)param_3[1] == 0x31) &&
          (lVar10 = *(long *)((int *)param_3[1] + 2), *(int *)(lVar10 + 0x10) == 1)) &&
         (**(char **)(lVar10 + 8) == '>')) {
        FUN_001161d0(param_1,0x29);
      }
    }
    break;
  case 0x38:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x39:
    piVar9 = (int *)param_3[2];
    if ((*piVar9 != 0x3a) || (piVar23 = *(int **)(piVar9 + 4), *piVar23 != 0x3b)) goto LAB_0011e3f8;
    lVar12 = param_3[1];
    lVar10 = *(long *)(piVar9 + 2);
    uVar38 = *(undefined8 *)(piVar23 + 2);
    lVar18 = *(long *)(piVar23 + 4);
    iVar6 = strcmp(**(char ***)(lVar12 + 8),"qu");
    if (iVar6 == 0) {
      FUN_00122f68(param_1,param_2);
      FUN_00122e94(param_1,param_2,lVar12);
      FUN_00122f68(param_1,param_2,uVar38);
      FUN_001164d4(param_1,&DAT_0012ad90);
      FUN_00122f68(param_1,param_2,lVar18);
    }
    else {
      FUN_001164d4(param_1,&DAT_0012ad98);
      if (*(long *)(lVar10 + 8) != 0) {
        FUN_00122f68(param_1,param_2);
        FUN_001161d0(param_1,0x20);
      }
      FUN_0011e37c(param_1,param_2,uVar38);
      if (lVar18 != 0) {
        FUN_00122f68(param_1,param_2,lVar18);
      }
    }
    break;
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3c:
  case 0x3d:
    uVar36 = 0;
    if ((*(int *)param_3[1] == 0x27) &&
       (uVar36 = *(uint *)(*(long *)((int *)param_3[1] + 2) + 0x1c), uVar36 != 0)) {
      if (uVar36 < 7) {
        if (*(int *)param_3[2] == 0) {
          if (iVar6 == 0x3d) {
            FUN_001161d0(param_1,0x2d);
          }
          FUN_0011e37c(param_1,param_2,param_3[2]);
          switch(uVar36) {
          case 2:
            FUN_001161d0(param_1,0x75);
            return;
          case 3:
            FUN_001161d0(param_1,0x6c);
            return;
          case 4:
            FUN_001164d4(param_1,&DAT_0012ada0);
            return;
          case 5:
            FUN_001164d4(param_1,"ll");
            return;
          case 6:
            FUN_001164d4(param_1,&DAT_0012ada8);
            return;
          default:
            return;
          }
        }
      }
      else if ((((uVar36 == 7) && (piVar9 = (int *)param_3[2], *piVar9 == 0)) && (piVar9[4] == 1))
              && (iVar6 == 0x3c)) {
        if (**(char **)(piVar9 + 2) == '0') {
          FUN_001164d4(param_1,"false");
          return;
        }
        if (**(char **)(piVar9 + 2) == '1') {
          FUN_001164d4(param_1,&DAT_0012adb8);
          return;
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x28;
    param_1[0x108] = 0x28;
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x29;
    param_1[0x108] = 0x29;
    if (*(int *)param_3 == 0x3d) {
      FUN_001161d0(param_1,0x2d);
    }
    if (uVar36 == 8) {
      FUN_001161d0(param_1,0x5b);
      FUN_0011e37c(param_1,param_2,param_3[2]);
      FUN_001161d0(param_1,0x5d);
    }
    else {
      FUN_0011e37c(param_1,param_2,param_3[2]);
    }
    break;
  case 0x3e:
    pcVar11 = "java resource ";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x3f:
    FUN_0011e37c(param_1,param_2,param_3[1]);
    FUN_0011e37c(param_1,param_2,param_3[2]);
    break;
  case 0x40:
    lVar10 = *(long *)(param_1 + 0x100);
    uVar3 = *(undefined *)(param_3 + 1);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = uVar3;
    param_1[0x108] = uVar3;
    break;
  case 0x41:
    sprintf((char *)&local_80,"%ld",param_3[1]);
    sVar33 = strlen((char *)&local_80);
    if (sVar33 != 0) {
      sVar13 = 0;
      lVar10 = *(long *)(param_1 + 0x100);
      do {
        cVar4 = *(char *)((long)&local_80 + sVar13);
        if (lVar10 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar18 = 1;
          lVar10 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar18 = lVar10 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar18;
        sVar13 = sVar13 + 1;
        param_1[lVar10] = cVar4;
        param_1[0x108] = cVar4;
        lVar10 = lVar18;
      } while (sVar13 != sVar33);
    }
    break;
  case 0x42:
    pcVar11 = "decltype (";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x29;
    param_1[0x108] = 0x29;
    break;
  case 0x43:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "global constructors keyed to "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x1d);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x44:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "global destructors keyed to "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x1c);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x45:
    pcVar11 = "{lambda(";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      *param_1 = 0x29;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_001200e4:
      lVar10 = lVar18 + 1;
    }
    else {
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x29;
      param_1[0x108] = 0x29;
      if (lVar18 != 0xff) goto LAB_001200e4;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar10 = 1;
      lVar18 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar10;
    param_1[lVar18] = 0x23;
    param_1[0x108] = 0x23;
    sVar33 = 0;
    sprintf((char *)&local_80,"%ld",(long)(*(int *)(param_3 + 2) + 1));
    sVar13 = strlen((char *)&local_80);
    lVar10 = *(long *)(param_1 + 0x100);
    lVar18 = lVar10;
    if (sVar13 != 0) {
      do {
        cVar4 = *(char *)((long)&local_80 + sVar33);
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar10 = 1;
          lVar18 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar10 = lVar18 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar10;
        sVar33 = sVar33 + 1;
        param_1[lVar18] = cVar4;
        param_1[0x108] = cVar4;
        lVar18 = lVar10;
      } while (sVar33 != sVar13);
    }
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x47:
    pcVar11 = "{unnamed type#";
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    sVar33 = 0;
    sprintf((char *)&local_80,"%ld",param_3[1] + 1);
    sVar13 = strlen((char *)&local_80);
    lVar10 = *(long *)(param_1 + 0x100);
    lVar18 = lVar10;
    if (sVar13 != 0) {
      do {
        cVar4 = *(char *)((long)&local_80 + sVar33);
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar10 = 1;
          lVar18 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar10 = lVar18 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar10;
        sVar33 = sVar33 + 1;
        param_1[lVar18] = cVar4;
        param_1[0x108] = cVar4;
        lVar18 = lVar10;
      } while (sVar33 != sVar13);
    }
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x48:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "transaction clone for "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x16);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x49:
    lVar10 = 0;
    lVar18 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "non-transaction clone for "[lVar10];
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar12 = 1;
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar12 = lVar18 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar12;
      lVar10 = lVar10 + 1;
      param_1[lVar18] = cVar4;
      param_1[0x108] = cVar4;
      lVar18 = lVar12;
    } while (lVar10 != 0x1a);
    FUN_0011e37c(param_1,param_2,param_3[1]);
    break;
  case 0x4a:
    iVar6 = 0;
    piVar9 = (int *)FUN_0011634c(param_1,param_3[1]);
    if (piVar9 == (int *)0x0) {
      FUN_00122f68(param_1,param_2,param_3[1]);
      FUN_001164d4(param_1,&DAT_0012ade0);
    }
    else {
      do {
        if ((*piVar9 != 0x2f) || (*(long *)(piVar9 + 2) == 0)) {
          lVar10 = param_3[1];
          if (iVar6 == 0) {
            return;
          }
          goto LAB_0011f38c;
        }
        piVar9 = *(int **)(piVar9 + 4);
        iVar6 = iVar6 + 1;
      } while (piVar9 != (int *)0x0);
      lVar10 = param_3[1];
LAB_0011f38c:
      iVar31 = 0;
      do {
        *(int *)(param_1 + 0x134) = iVar31;
        FUN_0011e37c(param_1,param_2,lVar10);
        if (iVar31 < iVar6 + -1) {
          lVar18 = *(long *)(param_1 + 0x100);
          if (lVar18 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = 0x2c;
            lVar12 = 1;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0011f3dc:
            lVar18 = lVar12 + 1;
          }
          else {
            lVar12 = lVar18 + 1;
            *(long *)(param_1 + 0x100) = lVar12;
            param_1[lVar18] = 0x2c;
            param_1[0x108] = 0x2c;
            if (lVar12 != 0xff) goto LAB_0011f3dc;
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar18 = 1;
            lVar12 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          *(long *)(param_1 + 0x100) = lVar18;
          param_1[lVar12] = 0x20;
          param_1[0x108] = 0x20;
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 != iVar6);
    }
    break;
  case 0x4b:
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x5b;
      lVar10 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x61;
LAB_0011f454:
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x62;
      param_1[0x108] = 0x62;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar10 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_0011f48c;
      }
LAB_0011f470:
      lVar10 = lVar18 + 1;
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar18] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar10 != 0xff) goto LAB_0011f48c;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar10] = 0x5b;
      param_1[0x108] = 0x5b;
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar18 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x62;
        goto LAB_0011f470;
      }
      lVar10 = lVar10 + 2;
      *(long *)(param_1 + 0x100) = lVar10;
      param_1[lVar18] = 0x61;
      param_1[0x108] = 0x61;
      if (lVar10 != 0xff) goto LAB_0011f454;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x62;
      lVar10 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0011f48c:
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x3a;
    param_1[0x108] = 0x3a;
    FUN_0011e37c(param_1,param_2,param_3[2]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x4c:
    pcVar11 = " [clone ";
    FUN_0011e37c(param_1,param_2,param_3[1]);
    lVar10 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar11;
      if (lVar10 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar10 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar10 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar11 = pcVar11 + 1;
      param_1[lVar10] = cVar4;
      param_1[0x108] = cVar4;
      lVar10 = lVar18;
    } while (pcVar11 != "");
    FUN_0011e37c(param_1,param_2,param_3[2]);
    lVar10 = *(long *)(param_1 + 0x100);
    if (lVar10 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar18 = 1;
      lVar10 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar18 = lVar10 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar18;
    param_1[lVar10] = 0x5d;
    param_1[0x108] = 0x5d;
  }
  return;
}



void FUN_00121d88(undefined *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  char *pcVar6;
  
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 2);
  default:
LAB_00121dc4:
    FUN_0011e37c(param_1,param_2,param_3);
    return;
  case 0x19:
  case 0x1c:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " restrict"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1a:
  case 0x1d:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = " volatile"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x20;
      lVar2 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 99;
LAB_00121f90:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x6f;
      param_1[0x108] = 0x6f;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        uVar5 = 0x74;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar3 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x73;
      }
      else {
LAB_00121fac:
        lVar2 = lVar3 + 1;
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x6e;
        param_1[0x108] = 0x6e;
        if (lVar2 != 0xff) goto LAB_00121fc8;
        uVar5 = 0x74;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x73;
        lVar3 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      goto LAB_001220ac;
    }
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar3 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x6f;
      goto LAB_00121fac;
    }
    lVar2 = lVar2 + 2;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 99;
    param_1[0x108] = 99;
    if (lVar2 != 0xff) goto LAB_00121f90;
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x6f;
    lVar2 = 2;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    param_1[1] = 0x6e;
LAB_00121fc8:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x73;
    param_1[0x108] = 0x73;
    uVar5 = 0x74;
    if (lVar3 != 0xff) goto LAB_001220ac;
    goto LAB_00121fe4;
  case 0x1f:
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_00122034;
  case 0x20:
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_00122084;
  case 0x21:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 4);
    goto LAB_00121dc4;
  case 0x22:
    if ((param_2 >> 2 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x2a;
      param_1[0x108] = 0x2a;
    }
    break;
  case 0x23:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_00122034:
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_00122084:
    if (lVar2 == 0xff) {
      uVar5 = 0x26;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      *param_1 = 0x26;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x26;
      param_1[0x108] = 0x26;
      uVar5 = 0x26;
      if (lVar3 == 0xff) {
LAB_00121fe4:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar3,*(undefined8 *)(param_1 + 0x118));
        lVar2 = 1;
        lVar3 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_001220b0;
      }
    }
LAB_001220ac:
    lVar2 = lVar3 + 1;
LAB_001220b0:
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = uVar5;
    param_1[0x108] = uVar5;
    return;
  case 0x25:
    pcVar6 = "complex ";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x26:
    pcVar6 = "imaginary ";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 2;
      *param_1 = 0x3a;
      param_1[1] = 0x3a;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00122298:
      lVar3 = lVar2 + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x3a;
        lVar2 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_00122298;
      }
      lVar2 = lVar2 + 2;
      *(long *)(param_1 + 0x100) = lVar2;
      param_1[lVar3] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar2 != 0xff) goto LAB_00122298;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x2d:
    pcVar6 = " __vector(";
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    FUN_0011e37c(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x29;
    param_1[0x108] = 0x29;
  }
  return;
}



void FUN_00122608(undefined *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (param_3 != (undefined8 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x130);
    while (iVar2 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        piVar5 = (int *)param_3[1];
        iVar2 = *piVar5;
        if ((param_4 != 0) || (4 < iVar2 - 0x1cU)) {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar8 = *(undefined8 *)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = param_3[3];
          if (iVar2 == 0x29) {
            FUN_00122be4(param_1,param_2,piVar5 + 4,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 0x2a) {
            FUN_0012291c(param_1,param_2,piVar5 + 2,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 2) {
            uVar6 = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x128) = 0;
            FUN_0011e37c(param_1,param_2,*(undefined8 *)(piVar5 + 2));
            *(undefined8 *)(param_1 + 0x128) = uVar6;
            lVar3 = *(long *)(param_1 + 0x100);
            if ((param_2 >> 2 & 1) != 0) {
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x2e;
              param_1[0x108] = 0x2e;
              goto LAB_0012279c;
            }
            if (lVar3 == 0xff) {
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar4 = 1;
              *param_1 = 0x3a;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00122770:
              lVar3 = lVar4 + 1;
            }
            else {
              lVar4 = lVar3 + 1;
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x3a;
              param_1[0x108] = 0x3a;
              if (lVar4 != 0xff) goto LAB_00122770;
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar3 = 1;
              lVar4 = 0;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
            }
            *(long *)(param_1 + 0x100) = lVar3;
            param_1[lVar4] = 0x3a;
            param_1[0x108] = 0x3a;
LAB_0012279c:
            piVar5 = *(int **)(param_3[1] + 0x10);
            iVar2 = *piVar5;
            if (iVar2 != 0x46) goto LAB_001227bc;
            pcVar7 = "{default arg#";
            lVar3 = *(long *)(param_1 + 0x100);
            do {
              cVar1 = *pcVar7;
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar4;
              pcVar7 = pcVar7 + 1;
              param_1[lVar3] = cVar1;
              param_1[0x108] = cVar1;
              lVar3 = lVar4;
            } while (pcVar7 != "");
            FUN_001166dc(param_1,(long)(piVar5[4] + 1));
            FUN_001164d4(param_1,&DAT_0012aba8);
            do {
              piVar5 = *(int **)(piVar5 + 2);
              iVar2 = *piVar5;
LAB_001227bc:
            } while (iVar2 - 0x1cU < 5);
            FUN_0011e37c(param_1,param_2,piVar5);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          FUN_00121d88(param_1,param_2);
          *(undefined8 *)(param_1 + 0x120) = uVar8;
        }
      }
      param_3 = (undefined8 *)*param_3;
      if (param_3 == (undefined8 *)0x0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x130);
    }
  }
  return;
}



void FUN_0012291c(undefined *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_4;
  if (param_4 != (long *)0x0) {
    do {
      if (*(int *)(plVar1 + 2) == 0) {
        if (*(int *)plVar1[1] == 0x2a) {
          FUN_00122608(param_1,param_2,param_4,0);
          lVar3 = *(long *)(param_1 + 0x100);
          goto joined_r0x00122a84;
        }
        lVar3 = *(long *)(param_1 + 0x100);
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          *param_1 = 0x20;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_00122a20:
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x100) = lVar2;
          param_1[lVar3] = 0x20;
          param_1[0x108] = 0x20;
          if (lVar2 != 0xff) goto LAB_00122a20;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar3 = 1;
          lVar2 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar3;
        param_1[lVar2] = 0x28;
        param_1[0x108] = 0x28;
        FUN_00122608(param_1,param_2,param_4,0);
        lVar3 = *(long *)(param_1 + 0x100);
        lVar2 = lVar3 + 1;
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          lVar3 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x29;
        param_1[0x108] = 0x29;
        goto LAB_00122968;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    FUN_00122608(param_1,param_2,param_4,0);
  }
  lVar2 = *(long *)(param_1 + 0x100);
LAB_00122968:
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    lVar3 = 1;
    lVar2 = 0;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  }
  else {
    lVar3 = lVar2 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar3;
  param_1[lVar2] = 0x20;
  param_1[0x108] = 0x20;
joined_r0x00122a84:
  if (lVar3 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x5b;
    param_1[0x108] = 0x5b;
    lVar2 = 1;
    lVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (lVar3 == 0) goto LAB_001229c0;
LAB_001229a8:
    FUN_0011e37c(param_1,param_2);
    lVar2 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar2 = lVar3 + 1;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x5b;
    param_1[0x108] = 0x5b;
    if (*param_3 != 0) goto LAB_001229a8;
  }
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    *param_1 = 0x5d;
    param_1[0x108] = 0x5d;
    return;
  }
LAB_001229c0:
  *(long *)(param_1 + 0x100) = lVar2 + 1;
  param_1[lVar2] = 0x5d;
  param_1[0x108] = 0x5d;
  return;
}



void FUN_00122be4(undefined *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != (long *)0x0) {
    iVar1 = *(int *)(param_4 + 2);
    plVar3 = param_4;
joined_r0x00122c10:
    if (iVar1 == 0) {
      switch(*(undefined4 *)plVar3[1]) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2b:
        bVar2 = param_1[0x108];
LAB_00122cf4:
        if (bVar2 == 0x20) goto LAB_00122d60;
        lVar5 = *(long *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar4 = 1;
          lVar5 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar4 = lVar5 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar4;
        param_1[lVar5] = 0x20;
        param_1[0x108] = 0x20;
        if (lVar4 != 0xff) goto LAB_00122d6c;
LAB_00122d24:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar4,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        break;
      default:
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) goto code_r0x00122c4c;
        goto LAB_00122c54;
      case 0x22:
      case 0x23:
      case 0x24:
        bVar2 = param_1[0x108];
        if ((bVar2 & 0xfd) != 0x28) goto LAB_00122cf4;
LAB_00122d60:
        lVar4 = *(long *)(param_1 + 0x100);
        if (lVar4 == 0xff) goto LAB_00122d24;
LAB_00122d6c:
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_00122608(param_1,param_2,param_4,0);
      lVar4 = *(long *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x29;
      param_1[0x108] = 0x29;
      goto joined_r0x00122c78;
    }
  }
LAB_00122c54:
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_00122608(param_1,param_2,param_4,0);
  lVar5 = *(long *)(param_1 + 0x100);
joined_r0x00122c78:
  if (lVar5 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x28;
    param_1[0x108] = 0x28;
    lVar4 = 1;
    lVar5 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (lVar5 != 0) goto LAB_00122c98;
  }
  else {
    lVar4 = lVar5 + 1;
    *(long *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = 0x28;
    param_1[0x108] = 0x28;
    if (*param_3 != 0) {
LAB_00122c98:
      FUN_0011e37c(param_1,param_2);
      lVar4 = *(long *)(param_1 + 0x100);
    }
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar5 = 1;
      lVar4 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      goto LAB_00122cb4;
    }
  }
  lVar5 = lVar4 + 1;
LAB_00122cb4:
  *(long *)(param_1 + 0x100) = lVar5;
  param_1[lVar4] = 0x29;
  param_1[0x108] = 0x29;
  FUN_00122608(param_1,param_2,param_4,1);
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  return;
code_r0x00122c4c:
  iVar1 = *(int *)(plVar3 + 2);
  goto joined_r0x00122c10;
}



void FUN_00122e94(undefined *param_1,undefined8 param_2,int *param_3)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*param_3 != 0x31) {
    FUN_0011e37c();
    return;
  }
  lVar4 = (long)*(int *)(*(long *)(param_3 + 2) + 0x10);
  lVar5 = *(long *)(*(long *)(param_3 + 2) + 8);
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      while (uVar1 = *(undefined *)(lVar5 + lVar3), lVar2 == 0xff) {
        lVar3 = lVar3 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *param_1 = uVar1;
        param_1[0x108] = uVar1;
        lVar2 = 1;
        if (lVar4 == lVar3) {
          return;
        }
      }
      *(long *)(param_1 + 0x100) = lVar2 + 1;
      lVar3 = lVar3 + 1;
      param_1[lVar2] = uVar1;
      param_1[0x108] = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}



void FUN_00122f68(long param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0x30 && 1 < uVar1) && (uVar1 != 6)) {
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x108) = 0x28;
    FUN_0011e37c(param_1,param_2,param_3);
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x29;
    *(undefined *)(param_1 + 0x108) = 0x29;
    return;
  }
  FUN_0011e37c(param_1);
  return;
}



bool FUN_00123070(char *param_1,code *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined auStack_230 [16];
  char *local_1c8;
  char *local_1c0;
  uint local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined *local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined auStack_168 [256];
  long local_68;
  undefined local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined4 local_20;
  uint local_1c;
  undefined *local_18;
  undefined4 local_10;
  uint local_c;
  undefined8 local_8;
  
  cVar7 = *param_1;
  if ((cVar7 == '_') && (param_1[1] == 'Z')) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    iVar8 = strncmp(param_1,"_GLOBAL_",8);
    if ((iVar8 == 0) && ((cVar2 = param_1[8], cVar2 == '_' || cVar2 == '.' || (cVar2 == '$')))) {
      cVar2 = param_1[9];
      if (((cVar2 == 'I') || (iVar9 = 0, cVar2 == 'D')) &&
         ((iVar9 = 0, param_1[10] == '_' && (iVar9 = 2, cVar2 != 'I')))) {
        iVar9 = 3;
      }
    }
  }
  sVar10 = strlen(param_1);
  local_18c = (int)sVar10;
  local_19c = local_18c << 1;
  local_1c0 = param_1 + sVar10;
  lVar3 = -((long)local_19c * 0x18 + 0x10);
  local_1a8 = &stack0xfffffffffffffde0 + lVar3;
  local_1b8 = 0x11;
  lVar4 = -((-(sVar10 >> 0x1f & 1) & 0xfffffff800000000 | (sVar10 & 0xffffffff) << 3) + 0x16 &
           0xfffffffffffffff0);
  local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1c8 = param_1;
  if (iVar9 == 1) {
    if (cVar7 != '_') {
      return false;
    }
    if (param_1[1] != 'Z') {
      return false;
    }
    local_1b0 = param_1 + 2;
    lVar12 = FUN_0011ac74(&local_1c8,1);
    if ((local_1b8 & 1) == 0) {
LAB_00123490:
      cVar7 = *local_1b0;
    }
    else {
      while (pcVar1 = local_1b0, cVar7 = *local_1b0, cVar7 == '.') {
        cVar7 = local_1b0[1];
        if (((byte)(cVar7 + 0x9fU) < 0x1a) || (cVar7 == '_')) {
          cVar7 = local_1b0[2];
          pcVar14 = local_1b0 + 2;
          if (0x19 < (byte)(cVar7 + 0x9fU)) goto LAB_00123484;
          do {
            do {
              pcVar14 = pcVar14 + 1;
              cVar7 = *pcVar14;
            } while ((byte)(cVar7 + 0x9fU) < 0x1a);
LAB_00123484:
          } while (cVar7 == '_');
        }
        else {
          if (9 < (byte)(cVar7 - 0x30U)) goto LAB_00123490;
          cVar7 = *local_1b0;
          pcVar14 = local_1b0;
        }
        while (cVar7 == '.') {
          while( true ) {
            if (9 < (byte)(pcVar14[1] - 0x30U)) goto LAB_00123414;
            cVar7 = pcVar14[2];
            pcVar14 = pcVar14 + 2;
            if (9 < (byte)(cVar7 - 0x30U)) break;
            do {
              pcVar14 = pcVar14 + 1;
            } while ((byte)(*pcVar14 - 0x30U) < 10);
            if (*pcVar14 != '.') goto LAB_00123414;
          }
        }
LAB_00123414:
        iVar8 = (int)local_1b0;
        local_1b0 = pcVar14;
        uVar11 = FUN_00115c34(&local_1c8,pcVar1,(int)pcVar14 - iVar8);
        lVar12 = FUN_00115b94(&local_1c8,0x4c,lVar12,uVar11);
      }
    }
  }
  else if (iVar9 == 0) {
    local_1b0 = param_1;
    local_1a8 = &stack0xfffffffffffffde0 + lVar3;
    local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
    lVar12 = FUN_00118798(&local_1c8);
    cVar7 = *local_1b0;
  }
  else {
    pcVar1 = param_1 + 0xb;
    uVar13 = 0x43;
    if (iVar9 != 2) {
      uVar13 = 0x44;
    }
    if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
      local_1b0 = param_1 + 0xd;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      uVar11 = FUN_0011ac74(&local_1c8,0);
    }
    else {
      local_1b0 = pcVar1;
      local_1a8 = &stack0xfffffffffffffde0 + lVar3;
      local_198 = &stack0xfffffffffffffde0 + lVar4 + lVar3;
      sVar10 = strlen(pcVar1);
      uVar11 = FUN_00115c34(&local_1c8,pcVar1,sVar10);
    }
    lVar12 = FUN_00115b94(&local_1c8,uVar13,uVar11,0);
    pcVar1 = local_1b0;
    sVar10 = strlen(local_1b0);
    local_1b0 = pcVar1 + sVar10;
    cVar7 = pcVar1[sVar10];
  }
  if ((cVar7 == '\0') && (lVar12 != 0)) {
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = (undefined *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (undefined *)0x0;
    local_10 = 0;
    local_c = 0;
    local_58 = param_2;
    local_50 = param_3;
    FUN_00116104(&local_c,&local_1c,lVar12);
    local_8 = 0;
    local_c = local_1c * local_c;
    lVar5 = -((-(ulong)(local_1c >> 0x1f) & 0xfffffff000000000 | (ulong)local_1c << 4) + 0x10);
    local_28 = &stack0xfffffffffffffde0 + lVar5 + lVar4 + lVar3;
    local_18 = &stack0xfffffffffffffde0 +
               ((lVar5 + lVar4 + lVar3) -
               ((-(ulong)(local_c >> 0x1f) & 0xfffffff000000000 | (ulong)local_c << 4) + 0x10));
    FUN_0011e37c(auStack_168,0x11,lVar12);
    uVar11 = local_50;
    pcVar6 = local_58;
    lVar3 = local_68;
    auStack_168[local_68] = 0;
    (*pcVar6)(auStack_168,lVar3,uVar11);
    return local_38 == 0;
  }
  return false;
}



char * __cxa_demangle(long param_1,char *param_2,ulong *param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  ulong uVar3;
  char *local_20;
  undefined8 local_18;
  ulong local_10;
  int local_8;
  
  if ((param_1 == 0) || ((param_2 != (char *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
    *param_4 = 0xfffffffd;
  }
  else {
    local_20 = (char *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    iVar1 = FUN_00123070(param_1,FUN_001163e4,&local_20);
    __src = local_20;
    if (iVar1 == 0) {
      free(local_20);
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
    }
    else {
      uVar3 = 1;
      if (local_8 == 0) {
        uVar3 = local_10;
      }
      if (local_20 != (char *)0x0) {
        if (param_2 == (char *)0x0) {
          if (param_3 != (ulong *)0x0) {
            *param_3 = uVar3;
          }
        }
        else {
          sVar2 = strlen(local_20);
          if (sVar2 < *param_3) {
            memcpy(param_2,__src,sVar2 + 1);
            free(__src);
            __src = param_2;
          }
          else {
            free(param_2);
            *param_3 = uVar3;
          }
        }
        if (param_4 == (undefined4 *)0x0) {
          return __src;
        }
        *param_4 = 0;
        return __src;
      }
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0x0;
      }
      if (uVar3 == 1) {
        *param_4 = 0xffffffff;
        return (char *)0x0;
      }
    }
    *param_4 = 0xfffffffe;
  }
  return (char *)0x0;
}



undefined4 __gcclibcxx_demangle_callback(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = FUN_00123070();
    uVar2 = 0xfffffffe;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



long __cxa_current_exception_type(void)

{
  long **pplVar1;
  long *plVar2;
  long lVar3;
  
  pplVar1 = (long **)__cxa_get_globals();
  plVar2 = *pplVar1;
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((plVar2[10] & 1U) != 0) {
      plVar2 = (long *)(*plVar2 + -0x70);
    }
    lVar3 = *plVar2;
  }
  return lVar3;
}



void FUN_0012367c(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_001236a4(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



ulong ** FUN_001236e4(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4)

{
  ulong **ppuVar1;
  ulong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong **)((long)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulong **)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulong **)FUN_0012367c(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(ulong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulong **)FUN_001236a4(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(long)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(long)(int)*(uint *)param_3;
    }
    if (local_8 != (ulong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong **)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong **)*local_8;
      }
    }
  }
  *param_4 = (ulong *)local_8;
  return ppuVar1;
}



void FUN_001237d4(void)

{
  DAT_00155250 = 8;
  DAT_00155251 = 8;
  DAT_00155252 = 8;
  DAT_00155253 = 8;
  DAT_00155254 = 8;
  DAT_00155255 = 8;
  DAT_00155256 = 8;
  DAT_00155257 = 8;
  DAT_00155258 = 8;
  DAT_00155259 = 8;
  DAT_0015525a = 8;
  DAT_0015525b = 8;
  DAT_0015525c = 8;
  DAT_0015525d = 8;
  DAT_0015525e = 8;
  DAT_0015525f = 8;
  DAT_00155260 = 8;
  DAT_00155261 = 8;
  DAT_00155262 = 8;
  DAT_00155263 = 8;
  DAT_00155264 = 8;
  DAT_00155265 = 8;
  DAT_00155266 = 8;
  DAT_00155267 = 8;
  DAT_00155268 = 8;
  DAT_00155269 = 8;
  DAT_0015526a = 8;
  DAT_0015526b = 8;
  DAT_0015526c = 8;
  DAT_0015526d = 8;
  DAT_0015526e = 8;
  DAT_0015526f = 8;
  DAT_00155290 = 8;
  DAT_00155291 = 8;
  DAT_00155292 = 8;
  DAT_00155293 = 8;
  DAT_00155294 = 8;
  DAT_00155295 = 8;
  DAT_00155296 = 8;
  DAT_00155297 = 8;
  DAT_00155298 = 8;
  DAT_00155299 = 8;
  DAT_0015529a = 8;
  DAT_0015529b = 8;
  DAT_0015529c = 8;
  DAT_0015529d = 8;
  DAT_0015529e = 8;
  DAT_0015529f = 8;
  DAT_001552a0 = 8;
  DAT_001552a1 = 8;
  DAT_001552a2 = 8;
  DAT_001552a3 = 8;
  DAT_001552a4 = 8;
  DAT_001552a5 = 8;
  DAT_001552a6 = 8;
  DAT_001552a7 = 8;
  DAT_001552a8 = 8;
  DAT_001552a9 = 8;
  DAT_001552aa = 8;
  DAT_001552ab = 8;
  DAT_001552ac = 8;
  DAT_001552ad = 8;
  DAT_001552ae = 8;
  DAT_001552af = 8;
  DAT_001552b0 = 8;
  return;
}



void FUN_001238e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_0015526f == '\b') {
    *param_3 = param_2;
    if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 * _Unwind_GetGR(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (long)param_2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_00155250)[param_2] != '\b') goto LAB_00123934;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_00123934:
                    // WARNING: Subroutine does not return
  abort();
}



long FUN_0012397c(long param_1,long param_2)

{
  void **__dest;
  void **__src;
  long lVar1;
  undefined auStack_8 [8];
  
  if ((((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) &&
     (*(long *)(param_2 + 0xf8) == 0)) {
    FUN_001238e8(param_2,*(undefined8 *)(param_2 + 0x310),auStack_8);
  }
  lVar1 = 0;
  while( true ) {
    __dest = *(void ***)(param_1 + lVar1 * 8);
    __src = *(void ***)(param_2 + lVar1 * 8);
    if (*(char *)(param_1 + lVar1 + 0x358) != '\0') break;
    if ((*(char *)(param_2 + lVar1 + 0x358) == '\0') || (__dest == (void **)0x0)) {
      if ((__dest != (void **)0x0 && __src != (void **)0x0) && (__src != __dest)) {
        memcpy(__dest,__src,(ulong)(byte)(&DAT_00155250)[lVar1]);
      }
    }
    else {
      if ((&DAT_00155250)[lVar1] != '\b') break;
      *__dest = __src;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x61) {
      if ((((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar1 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar1 = 0, *(long *)(param_1 + 0xf8) == 0)) {
        lVar1 = _Unwind_GetGR(param_2,0x1f);
        lVar1 = (lVar1 - *(long *)(param_1 + 0x310)) + *(long *)(param_2 + 0x350);
      }
      return lVar1;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 _Unwind_GetCFA(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



void _Unwind_SetGR(long param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_00123aa0:
                    // WARNING: Subroutine does not return
    abort();
  }
  if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_00155250)[param_2] != '\b') goto LAB_00123aa0;
    **(undefined8 **)(param_1 + (long)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (long)param_2 * 8) = param_3;
  }
  return;
}



undefined8 _Unwind_GetIP(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



undefined8 _Unwind_GetIPInfo(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}



void _Unwind_SetIP(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}



undefined8 _Unwind_GetLanguageSpecificData(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



undefined8 _Unwind_GetRegionStart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



undefined8 _Unwind_FindEnclosingFunction(long param_1)

{
  long lVar1;
  undefined auStack_18 [16];
  undefined8 local_8;
  
  lVar1 = _Unwind_Find_FDE(param_1 + -1,auStack_18);
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}



undefined8 _Unwind_GetDataRelBase(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



undefined8 _Unwind_GetTextRelBase(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



undefined8 FUN_00123b54(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = _Unwind_GetTextRelBase(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_00123bbc:
                    // WARNING: Subroutine does not return
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = _Unwind_GetRegionStart();
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = _Unwind_GetDataRelBase();
          return uVar2;
        }
        goto LAB_00123bbc;
      }
    }
  }
  return 0;
}



void FUN_00123bcc(byte *param_1,byte *param_2,long param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined *puVar4;
  byte *pbVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong local_18;
  long local_10;
  long local_8;
  
  *(undefined8 *)((long)param_4 + 0x620) = 0;
  puVar4 = &stack0xffffffffffffff70;
  puVar16 = (undefined *)0x0;
LAB_00123c14:
  while( true ) {
    while( true ) {
      pbVar5 = param_1;
      if ((param_2 <= pbVar5) ||
         (uVar12 = *(ulong *)((long)param_4 + 0x648),
         (ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <= uVar12)) {
        return;
      }
      bVar2 = *pbVar5;
      uVar10 = (ulong)bVar2;
      param_1 = pbVar5 + 1;
      bVar1 = bVar2 & 0xc0;
      if (bVar1 != 0x40) break;
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (uVar10 & 0x3f) * *(long *)((long)param_4 + 0x660);
    }
    if (bVar1 == 0x80) break;
    if (bVar1 != 0xc0) goto code_r0x00123c94;
    *(undefined4 *)((long)param_4 + (uVar10 & 0x3f) * 0x10 + 8) = 0;
  }
  local_18 = uVar10 & 0x3f;
  goto LAB_00123d34;
code_r0x00123c94:
  switch(bVar2) {
  case 0:
    goto LAB_00123c14;
  case 1:
    uVar3 = *(undefined *)((long)param_4 + 0x670);
    uVar8 = FUN_00123b54(uVar3,param_3);
    param_1 = (byte *)FUN_001236e4(uVar3,uVar8,param_1,&local_8);
    *(long *)((long)param_4 + 0x648) = local_8;
    goto LAB_00123c14;
  case 2:
    *(ulong *)((long)param_4 + 0x648) = uVar12 + (ulong)pbVar5[1] * *(long *)((long)param_4 + 0x660)
    ;
    param_1 = pbVar5 + 2;
    goto LAB_00123c14;
  case 3:
    *(ulong *)((long)param_4 + 0x648) =
         uVar12 + (ulong)*(ushort *)(pbVar5 + 1) * *(long *)((long)param_4 + 0x660);
    param_1 = pbVar5 + 3;
    goto LAB_00123c14;
  case 4:
    *(ulong *)((long)param_4 + 0x648) =
         uVar12 + (ulong)*(uint *)(pbVar5 + 1) * *(long *)((long)param_4 + 0x660);
    param_1 = pbVar5 + 5;
    goto LAB_00123c14;
  case 5:
    param_1 = (byte *)FUN_0012367c(param_1,&local_18);
LAB_00123d34:
    param_1 = (byte *)FUN_0012367c(param_1,&local_10);
    lVar11 = *(long *)((long)param_4 + 0x658);
    lVar9 = local_10;
    break;
  case 6:
  case 8:
    param_1 = (byte *)FUN_0012367c(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 0;
    }
    goto LAB_00123c14;
  case 7:
    param_1 = (byte *)FUN_0012367c(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 6;
    }
    goto LAB_00123c14;
  case 9:
    uVar8 = FUN_0012367c(param_1,&local_18);
    param_1 = (byte *)FUN_0012367c(uVar8,&local_8);
    if (0x61 < local_18) goto LAB_00123c14;
    lVar7 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar7 + 8) = 2;
    lVar9 = local_8;
    goto LAB_00124090;
  case 10:
    if (puVar16 == (undefined *)0x0) {
      puVar15 = puVar4 + -0x660;
      puVar4 = puVar4 + -0x660;
    }
    else {
      puVar15 = puVar4;
      puVar4 = puVar16;
      puVar16 = *(undefined **)(puVar16 + 0x620);
    }
    pvVar6 = memcpy(puVar4,param_4,0x648);
    *(void **)((long)param_4 + 0x620) = pvVar6;
    puVar4 = puVar15;
    goto LAB_00123c14;
  case 0xb:
    puVar15 = *(undefined **)((long)param_4 + 0x620);
    memcpy(param_4,puVar15,0x648);
    *(undefined **)(puVar15 + 0x620) = puVar16;
    puVar16 = puVar15;
    goto LAB_00123c14;
  case 0xc:
    uVar8 = FUN_0012367c(param_1,&local_10);
    *(long *)((long)param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_0012367c(uVar8,&local_10);
    *(long *)((long)param_4 + 0x628) = local_10;
    goto LAB_00123e78;
  case 0xd:
    param_1 = (byte *)FUN_0012367c(param_1,&local_10);
    *(long *)((long)param_4 + 0x630) = local_10;
LAB_00123e78:
    *(undefined4 *)((long)param_4 + 0x640) = 1;
    goto LAB_00123c14;
  case 0xe:
    param_1 = (byte *)FUN_0012367c(param_1,&local_10);
    lVar9 = local_10;
    goto LAB_00123f44;
  case 0xf:
    *(byte **)((long)param_4 + 0x638) = param_1;
    *(undefined4 *)((long)param_4 + 0x640) = 2;
    goto LAB_00123ff4;
  case 0x10:
    param_1 = (byte *)FUN_0012367c(param_1,&local_18);
    if (0x61 < local_18) goto LAB_00123ff4;
    uVar14 = 3;
    goto LAB_00123fec;
  case 0x11:
    uVar8 = FUN_0012367c(param_1,&local_18);
    param_1 = (byte *)FUN_001236a4(uVar8,&local_8);
    lVar11 = *(long *)((long)param_4 + 0x658);
    lVar9 = local_8;
    break;
  case 0x12:
    uVar8 = FUN_0012367c(param_1,&local_10);
    *(long *)((long)param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_001236a4(uVar8,&local_8);
    *(undefined4 *)((long)param_4 + 0x640) = 1;
    goto LAB_00123f38;
  case 0x13:
    param_1 = (byte *)FUN_001236a4(param_1,&local_8);
LAB_00123f38:
    lVar9 = local_8 * *(long *)((long)param_4 + 0x658);
LAB_00123f44:
    *(long *)((long)param_4 + 0x628) = lVar9;
    goto LAB_00123c14;
  case 0x14:
    uVar8 = FUN_0012367c(param_1,&local_18);
    param_1 = (byte *)FUN_0012367c(uVar8,&local_10);
    lVar11 = *(long *)((long)param_4 + 0x658);
    lVar9 = local_10;
    goto LAB_00123fa4;
  case 0x15:
    uVar8 = FUN_0012367c(param_1,&local_18);
    param_1 = (byte *)FUN_001236a4(uVar8,&local_8);
    lVar11 = *(long *)((long)param_4 + 0x658);
    lVar9 = local_8;
LAB_00123fa4:
    if (0x61 < local_18) goto LAB_00123c14;
    lVar7 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar7 + 8) = 4;
    lVar9 = lVar9 * lVar11;
    goto LAB_00124090;
  case 0x16:
    param_1 = (byte *)FUN_0012367c(param_1,&local_18);
    if (0x61 < local_18) goto LAB_00123ff4;
    uVar14 = 5;
LAB_00123fec:
    *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = uVar14;
    *(byte **)((long)param_4 + local_18 * 0x10) = param_1;
LAB_00123ff4:
    lVar9 = FUN_0012367c(param_1,&local_10);
    param_1 = (byte *)(lVar9 + local_10);
    goto LAB_00123c14;
  default:
    goto switchD_00123ca0_caseD_17;
  case 0x2d:
    lVar9 = 0x10;
    local_18 = 0x10;
    lVar7 = 0;
    plVar13 = (long *)((long)param_4 + 0x100);
    do {
      *(undefined4 *)(plVar13 + 1) = 1;
      lVar9 = lVar9 + 1;
      *plVar13 = lVar7;
      lVar7 = lVar7 + 8;
      plVar13 = plVar13 + 2;
    } while (lVar9 != 0x20);
    goto LAB_00123c14;
  case 0x2e:
    param_1 = (byte *)FUN_0012367c(param_1,&local_10);
    *(long *)(param_3 + 0x350) = local_10;
    goto LAB_00123c14;
  case 0x2f:
    uVar8 = FUN_0012367c(param_1,&local_18);
    param_1 = (byte *)FUN_0012367c(uVar8,&local_10);
    lVar9 = *(long *)((long)param_4 + 0x658);
    if (0x61 < local_18) goto LAB_00123c14;
    lVar7 = local_18 * 0x10;
    *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
    lVar9 = -(lVar9 * local_10);
    goto LAB_00124090;
  }
  if (0x61 < local_18) goto LAB_00123c14;
  lVar7 = local_18 * 0x10;
  *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
  lVar9 = lVar9 * lVar11;
LAB_00124090:
  *(long *)((long)param_4 + lVar7) = lVar9;
  goto LAB_00123c14;
switchD_00123ca0_caseD_17:
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 FUN_001240c4(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  ulong local_18;
  long local_10;
  long local_8;
  char *pcVar19;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar3 = (uint *)_Unwind_Find_FDE(*(long *)(param_1 + 0x318) +
                                    (-1 - (*(long *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328);
  if (puVar3 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar16 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar11 = lVar16 + 0x130;
    param_2[0xc5] = 0x130;
    lVar4 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar4;
      lVar4 = lVar4 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar4 != 0x100);
    for (piVar5 = (int *)(lVar16 + 0x250); *piVar5 != 0;
        piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1])) {
      if (*piVar5 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar15 = plVar7 + 2;
          *plVar7 = (long)piVar5 + ((-0x3f0 - lVar11) - (long)param_2) + (long)plVar7;
          plVar7 = plVar15;
        } while (plVar15 != param_2 + 0xc0);
      }
    }
    *(undefined *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar16 + 0x230) - lVar11;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar16 + 0x238) - lVar11;
    param_2[0xcd] = 0x60;
LAB_001244c0:
    uVar12 = 0;
  }
  else {
    puVar17 = (uint *)((long)puVar3 + (4 - (long)(int)puVar3[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar19 = (char *)((long)puVar17 + 9);
    sVar6 = strlen(pcVar19);
    plVar15 = (long *)(pcVar19 + sVar6 + 1);
    plVar7 = plVar15;
    if ((*(char *)((long)puVar17 + 9) == 'e') && (*(char *)((long)puVar17 + 10) == 'h')) {
      plVar7 = plVar15 + 1;
      pcVar19 = (char *)((long)puVar17 + 0xb);
      param_2[0xcf] = *plVar15;
    }
    if (*(byte *)(puVar17 + 2) < 4) {
LAB_0012429c:
      uVar12 = FUN_0012367c(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar8 = (byte *)FUN_001236a4(uVar12,&local_10);
      param_2[0xcb] = local_10;
      if (*(char *)(puVar17 + 2) == '\x01') {
        pbVar9 = pbVar8 + 1;
        uVar13 = (ulong)*pbVar8;
      }
      else {
        pbVar9 = (byte *)FUN_0012367c(pbVar8,&local_18);
        uVar13 = local_18;
      }
      param_2[0xcd] = uVar13;
      *(undefined *)((long)param_2 + 0x671) = 0xff;
      pbVar8 = (byte *)0x0;
      if (*pcVar19 == 'z') {
        pcVar19 = pcVar19 + 1;
        pbVar9 = (byte *)FUN_0012367c(pbVar9,&local_18);
        *(undefined *)((long)param_2 + 0x672) = 1;
        pbVar8 = pbVar9 + local_18;
      }
      while( true ) {
        pcVar18 = pcVar19 + 1;
        cVar2 = *pcVar19;
        if (cVar2 == '\0') break;
        pcVar19 = pcVar18;
        if (cVar2 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *pbVar9;
LAB_00124358:
          pbVar9 = pbVar9 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar9;
            goto LAB_00124358;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar9;
            uVar12 = FUN_00123b54(bVar1,param_1);
            pbVar9 = (byte *)FUN_001236e4(bVar1,uVar12,pbVar9 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            pbVar10 = pbVar8;
            if (cVar2 != 'S') goto LAB_001243c8;
            *(undefined *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      pbVar10 = pbVar9;
      if (pbVar8 != (byte *)0x0) {
        pbVar10 = pbVar8;
      }
LAB_001243c8:
      if (pbVar10 != (byte *)0x0) {
        FUN_00123bcc(pbVar10,(long)puVar17 + (ulong)*puVar17 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar14 = 0;
        }
        else {
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar14 = 8;
            break;
          default:
                    // WARNING: Subroutine does not return
            abort();
          case 2:
            iVar14 = 2;
            break;
          case 3:
            iVar14 = 4;
          }
        }
        lVar4 = 0;
        lVar11 = (long)puVar3 + (ulong)(uint)(iVar14 << 1) + 8;
        if (*(char *)((long)param_2 + 0x672) != '\0') {
          lVar11 = FUN_0012367c(lVar11,&local_8);
          lVar4 = lVar11 + local_8;
        }
        cVar2 = *(char *)((long)param_2 + 0x671);
        if (cVar2 != -1) {
          uVar12 = FUN_00123b54(cVar2,param_1);
          lVar11 = FUN_001236e4(cVar2,uVar12,lVar11,&local_8);
          *(long *)(param_1 + 800) = local_8;
        }
        if (lVar4 == 0) {
          lVar4 = lVar11;
        }
        FUN_00123bcc(lVar4,(long)puVar3 + (ulong)*puVar3 + 4,param_1,param_2);
        goto LAB_001244c0;
      }
    }
    else if ((*(char *)plVar7 == '\b') && (*(char *)((long)plVar7 + 1) == '\0')) {
      plVar7 = (long *)((long)plVar7 + 2);
      goto LAB_0012429c;
    }
    uVar12 = 3;
  }
  return uVar12;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

ulong * FUN_001244e8(byte *param_1,byte *param_2,undefined8 param_3,ulong *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  byte *pbVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  int local_220 [2];
  ulong *local_218;
  ulong local_210;
  ulong *local_208;
  ulong *local_200 [64];
  uint uVar14;
  
  local_200[0] = param_4;
  uVar12 = 1;
LAB_00124538:
  pbVar10 = param_1;
  if (param_2 <= pbVar10) {
    if (uVar12 != 0) {
      return local_200[(int)(uVar12 - 1)];
    }
switchD_001248f4_caseD_3:
                    // WARNING: Subroutine does not return
    abort();
  }
  bVar1 = *pbVar10;
  param_1 = pbVar10 + 1;
  uVar13 = (uint)bVar1;
  uVar14 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar14 == 0x10) {
        param_1 = (byte *)FUN_0012367c(param_1,&local_218);
        puVar5 = local_218;
      }
      else if (uVar14 < 0x11) {
        if (uVar14 == 10) {
          puVar5 = (ulong *)(ulong)*(ushort *)(pbVar10 + 1);
LAB_00124744:
          param_1 = pbVar10 + 3;
        }
        else if (uVar14 < 0xb) {
          if (uVar13 == 6) goto LAB_00124880;
          if (uVar13 < 7) {
            if (bVar1 != 3) goto switchD_001248f4_caseD_3;
            param_1 = pbVar10 + 9;
            puVar5 = *(ulong **)(pbVar10 + 1);
          }
          else {
            param_1 = pbVar10 + 2;
            if (uVar13 == 8) {
              puVar5 = (ulong *)(ulong)pbVar10[1];
            }
            else {
              if (uVar13 != 9) goto switchD_001248f4_caseD_3;
              puVar5 = (ulong *)(long)(char)pbVar10[1];
            }
          }
        }
        else {
          if (uVar14 == 0xd) {
            puVar5 = (ulong *)(long)*(int *)(pbVar10 + 1);
          }
          else {
            if (0xd < uVar14) {
              param_1 = pbVar10 + 9;
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                puVar5 = *(ulong **)(pbVar10 + 1);
                goto LAB_00124a58;
              }
              goto switchD_001248f4_caseD_3;
            }
            if (bVar1 == 0xb) {
              puVar5 = (ulong *)(long)*(short *)(pbVar10 + 1);
              goto LAB_00124744;
            }
            if (bVar1 != 0xc) goto switchD_001248f4_caseD_3;
            puVar5 = (ulong *)(ulong)*(uint *)(pbVar10 + 1);
          }
          param_1 = pbVar10 + 5;
        }
      }
      else if (uVar14 == 0x15) {
        local_210 = (ulong)pbVar10[1];
        param_1 = pbVar10 + 2;
        if ((long)(int)(uVar12 - 1) <= (long)local_210) goto switchD_001248f4_caseD_3;
        puVar5 = local_200[(long)(int)(uVar12 - 1) - local_210];
      }
      else {
        if (0x15 < uVar14) {
          if (uVar14 == 0x19) goto LAB_00124880;
          if (0x19 < uVar14) goto LAB_00124944;
          iVar4 = uVar12 - 1;
          iVar2 = uVar12 - 2;
          if (uVar14 == 0x16) {
            if ((int)uVar12 < 2) goto switchD_001248f4_caseD_3;
            puVar5 = local_200[iVar4];
            local_200[iVar4] = local_200[iVar2];
            local_200[iVar2] = puVar5;
          }
          else {
            if ((uVar14 != 0x17) || ((int)uVar12 < 3)) goto switchD_001248f4_caseD_3;
            puVar5 = local_200[iVar4];
            puVar11 = local_200[(int)(uVar12 - 3)];
            local_200[iVar4] = local_200[iVar2];
            local_200[iVar2] = puVar11;
            local_200[(int)(uVar12 - 3)] = puVar5;
          }
          goto LAB_00124538;
        }
        if (uVar14 == 0x12) {
          if (uVar12 == 0) goto switchD_001248f4_caseD_3;
          iVar4 = uVar12 - 1;
        }
        else {
          if (uVar14 < 0x12) {
            param_1 = (byte *)FUN_001236a4(param_1,&local_208);
            puVar5 = local_208;
            goto LAB_00124a58;
          }
          if (uVar14 == 0x13) {
            if (uVar12 == 0) goto switchD_001248f4_caseD_3;
            uVar12 = uVar12 - 1;
            goto LAB_00124538;
          }
          if ((uVar14 != 0x14) || ((int)uVar12 < 2)) goto switchD_001248f4_caseD_3;
          iVar4 = uVar12 - 2;
        }
        puVar5 = local_200[iVar4];
      }
    }
    else {
LAB_00124880:
      if (uVar12 == 0) goto switchD_001248f4_caseD_3;
      uVar12 = uVar12 - 1;
      ppuVar9 = (ulong **)local_200[(int)uVar12];
      if (uVar13 == 0x1f) {
        puVar5 = (ulong *)-(long)ppuVar9;
      }
      else if (uVar13 < 0x20) {
        if (uVar13 == 6) {
switchD_001248f4_caseD_8:
          puVar5 = *ppuVar9;
        }
        else {
          if (bVar1 != 0x19) goto switchD_001248f4_caseD_3;
          puVar5 = (ulong *)(((ulong)ppuVar9 ^ (long)ppuVar9 >> 0x3f) - ((long)ppuVar9 >> 0x3f));
        }
      }
      else if (uVar13 == 0x23) {
        param_1 = (byte *)FUN_0012367c(param_1,&local_218);
        puVar5 = (ulong *)((long)ppuVar9 + (long)local_218);
      }
      else if (uVar13 == 0x94) {
        param_1 = pbVar10 + 2;
        switch(pbVar10[1]) {
        case 1:
          puVar5 = (ulong *)(ulong)*(byte *)ppuVar9;
          break;
        case 2:
          puVar5 = (ulong *)(ulong)*(ushort *)ppuVar9;
          break;
        default:
          goto switchD_001248f4_caseD_3;
        case 4:
          puVar5 = (ulong *)(ulong)*(uint *)ppuVar9;
          break;
        case 8:
          goto switchD_001248f4_caseD_8;
        }
      }
      else {
        if (uVar13 != 0x20) goto switchD_001248f4_caseD_3;
        puVar5 = (ulong *)~(ulong)ppuVar9;
      }
    }
  }
  else if (uVar14 < 0x50) {
    if (0x2f < uVar13) {
      puVar5 = (ulong *)(ulong)(uVar13 - 0x30);
      goto LAB_00124a58;
    }
    if (0x27 < uVar13) {
      if (uVar14 < 0x2f) {
        if (0x28 < uVar14) goto LAB_00124944;
        if (uVar12 == 0) goto switchD_001248f4_caseD_3;
        uVar12 = uVar12 - 1;
        param_1 = pbVar10 + 3;
        if (local_200[(int)uVar12] != (ulong *)0x0) {
          param_1 = pbVar10 + 3 + *(short *)(pbVar10 + 1);
        }
      }
      else {
        param_1 = pbVar10 + (long)*(short *)(pbVar10 + 1) + 3;
      }
      goto LAB_00124538;
    }
    if ((uVar14 < 0x24) && (0x22 < uVar14)) goto LAB_00124880;
LAB_00124944:
    if ((int)uVar12 < 2) goto switchD_001248f4_caseD_3;
    uVar13 = uVar12 - 2;
    puVar8 = local_200[(int)uVar13];
    puVar11 = local_200[(int)(uVar12 - 1)];
    uVar12 = uVar13;
    switch(bVar1) {
    case 0x1a:
      puVar5 = (ulong *)((ulong)puVar11 & (ulong)puVar8);
      break;
    case 0x1b:
      puVar5 = (ulong *)0x0;
      if (puVar11 != (ulong *)0x0) {
        puVar5 = (ulong *)((long)puVar8 / (long)puVar11);
      }
      break;
    case 0x1c:
      puVar5 = (ulong *)((long)puVar8 - (long)puVar11);
      break;
    case 0x1d:
      uVar3 = 0;
      if (puVar11 != (ulong *)0x0) {
        uVar3 = (ulong)puVar8 / (ulong)puVar11;
      }
      puVar5 = (ulong *)((long)puVar8 - uVar3 * (long)puVar11);
      break;
    case 0x1e:
      puVar5 = (ulong *)((long)puVar11 * (long)puVar8);
      break;
    default:
      goto switchD_001248f4_caseD_3;
    case 0x21:
      puVar5 = (ulong *)((ulong)puVar11 | (ulong)puVar8);
      break;
    case 0x22:
      puVar5 = (ulong *)((long)puVar11 + (long)puVar8);
      break;
    case 0x24:
      puVar5 = (ulong *)((long)puVar8 << ((ulong)puVar11 & 0x3f));
      break;
    case 0x25:
      puVar5 = (ulong *)((ulong)puVar8 >> ((ulong)puVar11 & 0x3f));
      break;
    case 0x26:
      puVar5 = (ulong *)((long)puVar8 >> ((ulong)puVar11 & 0x3f));
      break;
    case 0x27:
      puVar5 = (ulong *)((ulong)puVar11 ^ (ulong)puVar8);
      break;
    case 0x29:
      puVar5 = (ulong *)(ulong)(puVar8 == puVar11);
      break;
    case 0x2a:
      puVar5 = (ulong *)(ulong)((long)puVar11 <= (long)puVar8);
      break;
    case 0x2b:
      puVar5 = (ulong *)(ulong)((long)puVar11 < (long)puVar8);
      break;
    case 0x2c:
      puVar5 = (ulong *)(ulong)((long)puVar8 <= (long)puVar11);
      break;
    case 0x2d:
      puVar5 = (ulong *)(ulong)((long)puVar8 < (long)puVar11);
      break;
    case 0x2e:
      puVar5 = (ulong *)(ulong)(puVar8 != puVar11);
    }
  }
  else {
    if (uVar14 != 0x90) {
      if (uVar14 < 0x91) {
        if (bVar1 < 0x70) {
          iVar4 = uVar13 - 0x50;
          goto LAB_001247ac;
        }
        param_1 = (byte *)FUN_001236a4(param_1,&local_210);
        lVar7 = _Unwind_GetGR(param_3,uVar14 - 0x70);
      }
      else {
        if (uVar14 == 0x94) goto LAB_00124880;
        if (0x94 < uVar14) {
          if (uVar14 != 0x96) {
            if (uVar14 == 0xf1) {
              bVar1 = pbVar10[1];
              uVar6 = FUN_00123b54(bVar1,param_3);
              param_1 = (byte *)FUN_001236e4(bVar1,uVar6,pbVar10 + 2,&local_208);
              puVar5 = local_208;
              goto LAB_00124a58;
            }
            goto switchD_001248f4_caseD_3;
          }
          goto LAB_00124538;
        }
        if (bVar1 != 0x92) goto switchD_001248f4_caseD_3;
        uVar6 = FUN_0012367c(param_1,local_220);
        param_1 = (byte *)FUN_001236a4(uVar6,&local_210);
        lVar7 = _Unwind_GetGR(param_3,local_220[0]);
      }
      puVar5 = (ulong *)(lVar7 + local_210);
      goto LAB_00124a58;
    }
    param_1 = (byte *)FUN_0012367c(param_1,local_220);
    iVar4 = local_220[0];
LAB_001247ac:
    puVar5 = (ulong *)_Unwind_GetGR(param_3,iVar4);
  }
LAB_00124a58:
  if (0x3f < uVar12) goto switchD_001248f4_caseD_3;
  local_200[(int)uVar12] = puVar5;
  uVar12 = uVar12 + 1;
  goto LAB_00124538;
}



void FUN_00124a9c(void *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined auStack_3d0 [8];
  long local_3c8;
  long alStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(alStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_001238e8(alStack_3c0,*(undefined8 *)((long)param_1 + 0x310),auStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined *)((long)param_1 + 0x377) = 0;
  }
  iVar2 = *(int *)(param_2 + 200);
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if (iVar2 == 1) {
    lVar3 = _Unwind_GetGR(alStack_3c0,*(undefined4 *)(param_2 + 0xc6));
    lVar3 = lVar3 + param_2[0xc5];
  }
  else {
    if (iVar2 != 2) {
LAB_00124be4:
                    // WARNING: Subroutine does not return
      abort();
    }
    lVar3 = FUN_0012367c(param_2[199],&local_3c8);
    lVar3 = FUN_001244e8(lVar3,lVar3 + local_3c8,alStack_3c0,0);
  }
  *(long *)((long)param_1 + 0x310) = lVar3;
  puVar6 = (undefined *)((long)param_1 + 0x358);
  lVar5 = 0;
  plVar7 = param_2;
  do {
    switch(*(undefined4 *)(plVar7 + 1)) {
    case 1:
      lVar4 = lVar3 + *plVar7;
      break;
    case 2:
      if (acStack_68[(int)*plVar7] != '\0') {
        lVar4 = _Unwind_GetGR(alStack_3c0);
        goto LAB_00124bd4;
      }
      lVar4 = alStack_3c0[(int)*plVar7];
      break;
    case 3:
      lVar4 = FUN_0012367c(*plVar7,&local_3c8);
      lVar4 = FUN_001244e8(lVar4,lVar4 + local_3c8,alStack_3c0,lVar3);
      break;
    case 4:
      lVar4 = lVar3 + *plVar7;
      goto LAB_00124bd4;
    case 5:
      lVar4 = FUN_0012367c(*plVar7,&local_3c8);
      lVar4 = FUN_001244e8(lVar4,lVar4 + local_3c8,alStack_3c0,lVar3);
LAB_00124bd4:
      if ((byte)(&DAT_00155250)[lVar5] < 9) {
        *puVar6 = 1;
        goto LAB_00124c54;
      }
      goto LAB_00124be4;
    default:
      goto switchD_00124bac_caseD_5;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar6 = 0;
    }
LAB_00124c54:
    *(long *)((long)param_1 + lVar5 * 8) = lVar4;
switchD_00124bac_caseD_5:
    lVar5 = lVar5 + 1;
    plVar7 = plVar7 + 2;
    puVar6 = puVar6 + 1;
    if (lVar5 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}



void FUN_00124ca8(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_x30;
  undefined auStack_688 [8];
  undefined auStack_680 [1576];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((long)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((long)param_1 + 0x340) = 0x4000000000000000;
  iVar1 = FUN_001240c4(param_1,auStack_680);
  if (iVar1 == 0) {
    iVar1 = pthread_once((pthread_once_t *)&DAT_001552b4,FUN_001237d4);
    if ((iVar1 != 0) && (DAT_00155250 == '\0')) {
      FUN_001237d4();
    }
    FUN_001238e8(param_1,param_2,auStack_688);
    local_58 = 0;
    local_40 = 1;
    local_50 = 0x1f;
    FUN_00124a9c(param_1,auStack_680);
    *(undefined8 *)((long)param_1 + 0x318) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_00124d84(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00124a9c();
  if (*(int *)(param_2 + *(long *)(param_2 + 0x668) * 0x10 + 8) == 6) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    uVar1 = _Unwind_GetGR(param_1);
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  return;
}



undefined8 FUN_00124dd0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined auStack_680 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_001240c4(param_2,auStack_680);
    lVar2 = _Unwind_GetCFA(param_2);
    uVar4 = 4;
    if (lVar2 + (*(long *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,uVar4 | 2,*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_00124d84(param_2,auStack_680);
  } while( true );
}



undefined4 FUN_00124e90(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined auStack_680 [1616];
  code *local_30;
  
  pcVar3 = (code *)param_1[2];
  uVar4 = param_1[3];
  while( true ) {
    iVar1 = FUN_001240c4(param_2,auStack_680);
    if ((iVar1 != 5) && (iVar1 != 0)) {
      return 2;
    }
    uVar5 = 10;
    if (iVar1 == 5) {
      uVar5 = 0x1a;
    }
    iVar2 = (*pcVar3)(1,uVar5,*param_1,param_1,param_2,uVar4);
    if (iVar2 != 0) break;
    if (iVar1 == 5) {
      return 5;
    }
    if (local_30 != (code *)0x0) {
      iVar1 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (iVar1 == 7) {
        return 7;
      }
      if (iVar1 != 8) {
        return 2;
      }
    }
    FUN_00124d84(param_2,auStack_680);
  }
  return 2;
}



long __frame_state_for(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined auStack_a40 [792];
  long local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  undefined8 local_680;
  undefined8 local_678 [196];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  local_728 = param_1 + 1;
  memset(auStack_a40,0,0x3c0);
  local_700 = 0x4000000000000000;
  iVar2 = FUN_001240c4(auStack_a40,&local_680);
  lVar5 = 0;
  if ((iVar2 == 0) && (local_40 != 2)) {
    puVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *(char *)puVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = puVar3[-1];
      }
      else {
        *puVar4 = 0;
      }
      puVar3 = puVar3 + 2;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar3 != &local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}



void FUN_00125070(void)

{
  return;
}



undefined  [16] _Unwind_RaiseException(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined auStack_e00 [960];
  undefined auStack_a40 [784];
  undefined8 local_730;
  undefined8 local_728;
  long local_700;
  undefined auStack_680 [1616];
  code *local_30;
  
  FUN_00124ca8(auStack_e00,&stack0x00000000);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    iVar2 = FUN_001240c4(auStack_a40,auStack_680);
    if ((iVar2 == 5) || (iVar2 != 0)) goto LAB_001251ac;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar3 = _Unwind_GetCFA(auStack_a40);
        param_1[3] = lVar3 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        iVar2 = FUN_00124dd0(param_1,auStack_a40);
        if (iVar2 == 7) {
          FUN_0012397c(auStack_e00,auStack_a40);
          FUN_00125070(local_730,local_728);
        }
LAB_001251ac:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_001251ac;
    }
    FUN_00124d84(auStack_a40,auStack_680);
  } while( true );
}



undefined  [16] _Unwind_ForcedUnwind(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined auStack_780 [960];
  undefined auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00124ca8(auStack_780,&stack0x00000000);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  iVar2 = FUN_00124e90(param_1,auStack_3c0);
  if (iVar2 == 7) {
    FUN_0012397c(auStack_780,auStack_3c0);
    FUN_00125070(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _Unwind_Resume(long param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined auStack_780 [960];
  undefined auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00124ca8(auStack_780,&stack0x00000000);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  if (*(long *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_00124dd0(param_1,auStack_3c0);
  }
  else {
    iVar2 = FUN_00124e90(param_1,auStack_3c0);
  }
  if (iVar2 != 7) {
                    // WARNING: Subroutine does not return
    abort();
  }
  FUN_0012397c(auStack_780,auStack_3c0);
  FUN_00125070(local_b0,local_a8);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _Unwind_Resume_or_Rethrow(long param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined auStack_780 [960];
  undefined auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    _Unwind_RaiseException();
  }
  else {
    FUN_00124ca8(auStack_780,&stack0x00000000);
    memcpy(auStack_3c0,auStack_780,0x3c0);
    iVar2 = FUN_00124e90(param_1,auStack_3c0);
    if (iVar2 != 7) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_0012397c(auStack_780,auStack_3c0);
    FUN_00125070(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



void _Unwind_DeleteException(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}



undefined8 _Unwind_Backtrace(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined auStack_a40 [960];
  undefined auStack_680 [1664];
  
  FUN_00124ca8(auStack_a40,&stack0x00000000);
  while (((iVar1 = FUN_001240c4(auStack_a40,auStack_680), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack_a40,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_00124d84(auStack_a40,auStack_680);
  }
  return 3;
}



void FUN_001255c8(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_001255f0(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



int FUN_00125630(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  if (*(ulong *)(param_3 + 8) < *(ulong *)(param_2 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_0012564c(undefined8 param_1,code *param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                         *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar6),*(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}



void FUN_0012570c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar7 = uVar6 >> 1;
  while( true ) {
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    if ((int)uVar3 < 0) break;
    FUN_0012564c(param_1,param_2,lVar2,uVar3,uVar6 & 0xffffffff);
  }
  lVar8 = 0;
  iVar5 = (int)uVar6 + -1;
  lVar1 = lVar2 + (long)iVar5 * 8;
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar8);
    *(undefined8 *)(lVar1 + lVar8) = uVar4;
    lVar8 = lVar8 + -8;
    FUN_0012564c(param_1,param_2,lVar2,0,iVar5);
  }
  return;
}



undefined8 FUN_001257c0(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch(param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}



undefined8 FUN_00125820(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



undefined8 FUN_00125880(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



ulong ** FUN_001258e0(byte param_1,ulong **param_2,ulong **param_3,ulong **param_4)

{
  ulong **ppuVar1;
  ulong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong **)((long)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulong **)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulong **)FUN_001255c8(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(ulong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(ulong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulong **)FUN_001255f0(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulong **)((long)param_3 + 2);
      local_8 = (ulong **)(long)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulong **)((long)param_3 + 4);
      local_8 = (ulong **)(long)(int)*(uint *)param_3;
    }
    if (local_8 != (ulong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong **)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong **)*local_8;
      }
    }
  }
  *param_4 = (ulong *)local_8;
  return ppuVar1;
}



int FUN_001259d0(long param_1,long param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = *(ushort *)(param_1 + 0x20) >> 3 & 0xff;
  uVar3 = FUN_00125820(uVar2,param_1);
  FUN_001258e0(uVar2,uVar3,param_2 + 8,&local_10);
  FUN_001258e0(*(ushort *)(param_1 + 0x20) >> 3,uVar3,param_3 + 8,&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



byte FUN_00125a60(long param_1)

{
  char cVar1;
  byte bVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  undefined auStack_18 [8];
  undefined auStack_10 [8];
  undefined auStack_8 [8];
  
  pcVar8 = (char *)(param_1 + 9);
  sVar3 = strlen(pcVar8);
  pcVar7 = pcVar8 + sVar3 + 1;
  if (3 < *(byte *)(param_1 + 8)) {
    if (pcVar8[sVar3 + 1] != '\b') {
      return 0xff;
    }
    if (pcVar7[1] != '\0') {
      return 0xff;
    }
    pcVar7 = pcVar7 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    uVar4 = FUN_001255c8(pcVar7,auStack_10);
    lVar5 = FUN_001255f0(uVar4,auStack_8);
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = FUN_001255c8(lVar5,auStack_10);
    }
    pbVar6 = (byte *)FUN_001255c8(lVar5,auStack_10);
    for (pcVar8 = (char *)(param_1 + 10); cVar1 = *pcVar8, cVar1 != 'R'; pcVar8 = pcVar8 + 1) {
      if (cVar1 == 'P') {
        pbVar6 = (byte *)FUN_001258e0(*pbVar6 & 0x7f,0,pbVar6 + 1,auStack_18);
      }
      else {
        if (cVar1 != 'L') goto LAB_00125ab8;
        pbVar6 = pbVar6 + 1;
      }
    }
    bVar2 = *pbVar6;
  }
  else {
LAB_00125ab8:
    bVar2 = 0;
  }
  return bVar2;
}



uint * FUN_00125b5c(long param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_10;
  ulong local_8;
  
  uVar1 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar2 = FUN_00125820(uVar1,param_1);
  lVar3 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar7 = lVar3;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar7 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar7 != lVar3)) {
        uVar4 = FUN_00125a60(lVar7);
        uVar1 = uVar4 & 0xffffffff;
        uVar2 = FUN_00125820(uVar4,param_1);
      }
      if ((uint)uVar1 == 0) {
        local_10 = *(ulong *)(param_2 + 2);
        local_8 = *(ulong *)(param_2 + 4);
        uVar4 = local_10;
      }
      else {
        uVar5 = FUN_001258e0(uVar1 & 0xff,uVar2,param_2 + 2,&local_10);
        FUN_001258e0((uint)uVar1 & 0xf,0,uVar5,&local_8);
        uVar4 = FUN_001257c0(uVar1 & 0xff);
        uVar6 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar6 = (1L << ((uVar4 & 7) << 3)) - 1;
        }
        uVar4 = uVar6 & local_10;
      }
      lVar3 = lVar7;
      if ((uVar4 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



void FUN_00125cbc(long param_1)

{
  FUN_00125a60((param_1 + 4) - (long)*(int *)(param_1 + 4));
  return;
}



undefined8 FUN_00125ccc(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  undefined uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar14 = (int *)param_1[2];
  uVar17 = *param_1;
  if ((param_2 < 0x30) || (*(int *)(param_3 + 5) == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_00143050) && (param_1[5] == DAT_001552c0)) {
      puVar18 = DAT_001552c8;
      puVar12 = (ulong *)0x0;
      puVar16 = (ulong *)0x0;
      while (puVar10 = puVar18, puVar10 != (ulong *)0x0) {
        if ((*puVar10 <= *param_3) && (*param_3 < puVar10[1])) {
          uVar17 = puVar10[2];
          piVar15 = (int *)puVar10[3];
          if (puVar10 != DAT_001552c8) {
            puVar16[5] = puVar10[5];
            puVar10[5] = (ulong)DAT_001552c8;
            DAT_001552c8 = puVar10;
          }
          goto LAB_00125ed8;
        }
        puVar12 = puVar10;
        if ((*puVar10 | puVar10[1]) == 0) break;
        puVar18 = (ulong *)puVar10[5];
        if (puVar18 != (ulong *)0x0) {
          puVar16 = puVar10;
        }
      }
      goto LAB_00125df4;
    }
    puVar11 = &DAT_00155300;
    DAT_00143050 = param_1[4];
    DAT_001552c0 = param_1[5];
    do {
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-1] = puVar11;
      puVar11 = puVar11 + 6;
    } while (puVar11 != (undefined8 *)0x155480);
    DAT_00155448 = 0;
    DAT_001552c8 = &DAT_001552d0;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar16 = (ulong *)0x0;
  puVar12 = (ulong *)0x0;
LAB_00125df4:
  uVar22 = (ulong)*(ushort *)(param_1 + 3);
  uVar13 = 0;
  uVar19 = 0;
  bVar5 = false;
  piVar20 = (int *)0x0;
  piVar15 = (int *)0x0;
  while (uVar22 = uVar22 - 1, uVar22 != 0xffffffffffffffff) {
    iVar4 = *piVar14;
    piVar21 = piVar15;
    if (iVar4 == 1) {
      uVar2 = uVar17 + *(long *)(piVar14 + 4);
      if ((uVar2 <= *param_3) && (*param_3 < uVar2 + *(long *)(piVar14 + 10))) {
        bVar5 = true;
        uVar13 = uVar2 + *(long *)(piVar14 + 10);
        uVar19 = uVar2;
      }
    }
    else {
      piVar21 = piVar14;
      if ((iVar4 != 0x6474e550) && (piVar21 = piVar15, iVar4 == 2)) {
        piVar20 = piVar14;
      }
    }
    piVar14 = piVar14 + 0xe;
    piVar15 = piVar21;
  }
  if (!bVar5) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar16 != (ulong *)0x0) && (puVar12 != (ulong *)0x0)) {
      puVar16[5] = puVar12[5];
      puVar12[5] = (ulong)DAT_001552c8;
      DAT_001552c8 = puVar12;
    }
    puVar12 = DAT_001552c8;
    DAT_001552c8[2] = uVar17;
    puVar12[3] = (ulong)piVar15;
    puVar12[4] = (ulong)piVar20;
    *puVar12 = uVar19;
    puVar12[1] = uVar13;
  }
LAB_00125ed8:
  if (piVar15 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar17 + *(long *)(piVar15 + 4);
  if (*(char *)(uVar17 + *(long *)(piVar15 + 4)) != '\x01') {
    return 1;
  }
  uVar7 = *(undefined *)(lVar1 + 1);
  uVar8 = FUN_00125880(uVar7,param_3);
  uVar8 = FUN_001258e0(uVar7,uVar8,lVar1 + 4,&local_40);
  cVar3 = *(char *)(lVar1 + 2);
  if ((cVar3 != -1) && (*(char *)(lVar1 + 3) == ';')) {
    uVar9 = FUN_00125880(cVar3,param_3);
    piVar14 = (int *)FUN_001258e0(cVar3,uVar9,uVar8,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulong)piVar14 & 3) == 0) {
      uVar17 = *param_3;
      if (uVar17 < (ulong)(lVar1 + *piVar14)) {
        return 1;
      }
      local_38 = local_38 - 1;
      if (uVar17 < (ulong)(lVar1 + piVar14[local_38 * 2])) {
        uVar13 = 0;
        uVar19 = local_38;
        do {
          uVar22 = uVar19;
          if (uVar22 <= uVar13) {
                    // WARNING: Subroutine does not return
            abort();
          }
          uVar2 = uVar22 + uVar13;
          local_38 = uVar2 >> 1;
          uVar19 = local_38;
        } while ((uVar17 < (ulong)(lVar1 + piVar14[uVar2 & 0xfffffffffffffffe])) ||
                (uVar13 = local_38 + 1, uVar19 = uVar22,
                (ulong)(lVar1 + piVar14[(uVar2 & 0xfffffffffffffffe) + 2]) <= uVar17));
      }
      uVar17 = lVar1 + piVar14[local_38 * 2 + 1];
      bVar6 = FUN_00125cbc(uVar17);
      uVar13 = FUN_001257c0(bVar6);
      FUN_001258e0(bVar6 & 0xf,0,uVar17 + (uVar13 & 0xffffffff) + 8,&local_30);
      iVar4 = piVar14[local_38 * 2];
      if (*param_3 < (ulong)(lVar1 + iVar4 + local_30)) {
        param_3[4] = uVar17;
      }
      param_3[3] = lVar1 + iVar4;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = 0;
  local_18 = local_40;
  uVar17 = FUN_00125b5c(&local_30,local_40,*param_3);
  param_3[4] = uVar17;
  if (uVar17 != 0) {
    uVar7 = FUN_00125cbc();
    uVar8 = FUN_00125880(uVar7,param_3);
    FUN_001258e0(uVar7,uVar8,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}



int FUN_001260ec(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = FUN_00125cbc(param_2);
  uVar3 = FUN_00125820(uVar2,param_1);
  FUN_001258e0(uVar2,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_00125cbc(param_3);
  uVar3 = FUN_00125820(uVar2,param_1);
  FUN_001258e0(uVar2,uVar3,param_3 + 8,&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}



long FUN_00126188(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_8;
  
  uVar8 = 0;
  uVar2 = 0;
  lVar7 = 0;
  lVar3 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
      lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]);
      if (lVar6 != lVar3) {
        uVar2 = FUN_00125a60(lVar6);
        if (uVar2 == 0xff) {
          return -1;
        }
        uVar8 = FUN_00125820((char)uVar2,param_1);
        uVar1 = *(ushort *)(param_1 + 4);
        lVar3 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else if ((uVar1 >> 3 & 0xff) != uVar2) {
          *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
        }
      }
      FUN_001258e0(uVar2 & 0xff,uVar8,param_2 + 2,&local_8);
      uVar4 = FUN_001257c0(uVar2 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar4 & 0xffffffff) < 8) {
        uVar5 = (1L << ((uVar4 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}



void FUN_001262e8(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong local_8;
  
  uVar1 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar2 = FUN_00125820(uVar1,param_1);
  lVar3 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar7 = lVar3;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar7 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar7 != lVar3)) {
        uVar4 = FUN_00125a60(lVar7);
        uVar1 = uVar4 & 0xffffffff;
        uVar2 = FUN_00125820(uVar4,param_1);
      }
      if ((int)uVar1 == 0) {
        uVar4 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_001258e0(uVar1 & 0xff,uVar2,param_3 + 2,&local_8);
        uVar5 = FUN_001257c0(uVar1 & 0xff);
        uVar4 = 0xffffffffffffffff;
        if ((uVar5 & 0xffffffff) < 8) {
          uVar4 = (1L << ((uVar5 & 7) << 3)) - 1;
        }
        uVar4 = uVar4 & local_8;
      }
      lVar3 = lVar7;
      if ((uVar4 != 0) && (lVar7 = *param_2, lVar7 != 0)) {
        lVar6 = *(long *)(lVar7 + 8);
        *(long *)(lVar7 + 8) = lVar6 + 1;
        *(uint **)(lVar7 + (lVar6 + 2) * 8) = param_3;
      }
    }
  }
  return;
}



long FUN_0012641c(ulong *param_1,ulong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong *puVar3;
  void *pvVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  size_t __size;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  code *pcVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong local_18;
  ulong *local_10;
  void *local_8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_00126448;
  uVar17 = (ulong)(*(uint *)(param_1 + 4) >> 0xb);
  if (uVar17 == 0) {
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      uVar17 = FUN_00126188(param_1,param_1[3]);
      if (uVar17 != 0xffffffffffffffff) goto LAB_001264c0;
LAB_00126480:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (ulong)&DAT_00155458;
    }
    else {
      for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
        lVar10 = FUN_00126188(param_1);
        if (lVar10 == -1) goto LAB_00126480;
        uVar17 = uVar17 + lVar10;
      }
LAB_001264c0:
      uVar6 = (uint)uVar17 & 0x1fffff;
      if (uVar6 == uVar17) {
        uVar6 = *(uint *)(param_1 + 4) & 0x7ff | uVar6 << 0xb;
      }
      else {
        uVar6 = *(uint *)(param_1 + 4) & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar6;
      if (uVar17 != 0) goto LAB_001264e8;
    }
  }
  else {
LAB_001264e8:
    __size = (uVar17 + 2) * 8;
    local_10 = (ulong *)malloc(__size);
    if (local_10 != (ulong *)0x0) {
      local_10[1] = 0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((long)local_8 + 8) = 0;
      }
      if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
        FUN_001262e8(param_1,&local_10,param_1[3]);
      }
      else {
        for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
          FUN_001262e8(param_1,&local_10);
        }
      }
      pvVar4 = local_8;
      puVar3 = local_10;
      if ((local_10 != (ulong *)0x0) && (local_10[1] != uVar17)) {
LAB_00126840:
                    // WARNING: Subroutine does not return
        abort();
      }
      if ((*(byte *)(param_1 + 4) >> 2 & 1) == 0) {
        if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
          pcVar16 = FUN_00125630;
        }
        else {
          pcVar16 = FUN_001259d0;
        }
      }
      else {
        pcVar16 = FUN_001260ec;
      }
      if (local_8 == (void *)0x0) {
        FUN_0012570c(param_1,pcVar16,local_10);
      }
      else {
        puVar18 = local_10 + 2;
        uVar20 = local_10[1];
        puVar14 = &DAT_00155450;
        puVar21 = puVar18;
        for (uVar13 = 0; uVar13 != uVar20; uVar13 = uVar13 + 1) {
          while ((puVar14 != &DAT_00155450 &&
                 (iVar7 = (*pcVar16)(param_1,*puVar21,*puVar14), iVar7 < 0))) {
            puVar15 = *(ulong **)((long)pvVar4 + (long)puVar14 + (0x10 - (long)puVar18));
            *(undefined8 *)((long)pvVar4 + (long)puVar14 + (0x10 - (long)puVar18)) = 0;
            puVar14 = puVar15;
          }
          *(ulong **)((long)pvVar4 + uVar13 * 8 + 0x10) = puVar14;
          puVar14 = puVar21;
          puVar21 = puVar21 + 1;
        }
        lVar10 = 0;
        uVar13 = 0;
        for (uVar11 = 0; uVar11 != uVar20; uVar11 = uVar11 + 1) {
          if (*(long *)((long)pvVar4 + uVar11 * 8 + 0x10) == 0) {
            lVar19 = lVar10 + 2;
            lVar10 = lVar10 + 1;
            *(ulong *)((long)pvVar4 + lVar19 * 8) = *puVar18;
          }
          else {
            lVar19 = uVar13 + 2;
            uVar13 = uVar13 + 1;
            puVar3[lVar19] = *puVar18;
          }
          puVar18 = puVar18 + 1;
        }
        puVar3[1] = uVar13;
        *(long *)((long)pvVar4 + 8) = lVar10;
        if (*(long *)((long)local_8 + 8) + local_10[1] != uVar17) goto LAB_00126840;
        FUN_0012570c(param_1,pcVar16);
        pvVar4 = local_8;
        puVar3 = local_10;
        lVar10 = *(long *)((long)local_8 + 8);
        if (lVar10 != 0) {
          uVar17 = local_10[1];
          lVar19 = lVar10 << 3;
          do {
            lVar10 = lVar10 + -1;
            uVar13 = *(ulong *)((long)pvVar4 + lVar19 + 8);
            puVar18 = puVar3 + uVar17;
            while (uVar17 != 0) {
              iVar7 = (*pcVar16)(param_1,puVar18[1],uVar13);
              if (iVar7 < 1) break;
              *(ulong *)((long)(puVar18 + -1) + lVar19 + 0x10) = puVar18[1];
              uVar17 = uVar17 - 1;
              puVar18 = puVar18 + -1;
            }
            lVar19 = lVar19 + -8;
            puVar3[uVar17 + lVar10 + 2] = uVar13;
          } while (lVar10 != 0);
          puVar3[1] = puVar3[1] + *(long *)((long)pvVar4 + 8);
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      param_1[3] = (ulong)local_10;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
LAB_00126448:
  bVar5 = *(byte *)(param_1 + 4);
  if ((bVar5 & 1) == 0) {
    if ((bVar5 >> 1 & 1) == 0) {
      lVar10 = FUN_00125b5c(param_1,param_1[3],param_2);
      return lVar10;
    }
    for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
      lVar10 = FUN_00125b5c(param_1,*plVar12,param_2);
      if (lVar10 != 0) {
        return lVar10;
      }
    }
  }
  else if ((bVar5 >> 2 & 1) == 0) {
    if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
      uVar17 = 0;
      uVar13 = *(ulong *)(param_1[3] + 8);
      while (uVar20 = uVar13, uVar17 < uVar20) {
        uVar13 = uVar20 + uVar17 >> 1;
        lVar10 = *(long *)(param_1[3] + (uVar13 + 2) * 8);
        if (*(ulong *)(lVar10 + 8) <= param_2) {
          if (param_2 < *(ulong *)(lVar10 + 8) + *(long *)(lVar10 + 0x10)) {
            return lVar10;
          }
          uVar17 = uVar13 + 1;
          uVar13 = uVar20;
        }
      }
    }
    else {
      uVar1 = *(ushort *)(param_1 + 4) >> 3;
      uVar2 = uVar1 & 0xff;
      uVar20 = param_1[3];
      uVar17 = 0;
      uVar8 = FUN_00125820(uVar2,param_1);
      uVar13 = *(ulong *)(uVar20 + 8);
      while (uVar11 = uVar13, uVar17 < uVar11) {
        uVar13 = uVar11 + uVar17 >> 1;
        lVar10 = *(long *)(uVar20 + (uVar13 + 2) * 8);
        uVar9 = FUN_001258e0(uVar2,uVar8,lVar10 + 8,&local_18);
        FUN_001258e0(uVar1 & 0xf,0,uVar9,&local_10);
        if (local_18 <= param_2) {
          if (param_2 < local_18 + (long)local_10) {
            return lVar10;
          }
          uVar17 = uVar13 + 1;
          uVar13 = uVar11;
        }
      }
    }
  }
  else {
    uVar20 = param_1[3];
    uVar17 = 0;
    uVar13 = *(ulong *)(uVar20 + 8);
    while (uVar11 = uVar13, uVar17 < uVar11) {
      uVar13 = uVar11 + uVar17 >> 1;
      lVar10 = *(long *)(uVar20 + (uVar13 + 2) * 8);
      bVar5 = FUN_00125cbc(lVar10);
      uVar8 = FUN_00125820(bVar5,param_1);
      uVar8 = FUN_001258e0(bVar5,uVar8,lVar10 + 8,&local_18);
      FUN_001258e0(bVar5 & 0xf,0,uVar8,&local_10);
      if (local_18 <= param_2) {
        if (param_2 < local_18 + (long)local_10) {
          return lVar10;
        }
        uVar17 = uVar13 + 1;
        uVar13 = uVar11;
      }
    }
  }
  return 0;
}



int * __register_frame_info_bases
                (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00155460);
    param_2[5] = DAT_00155488;
    DAT_00155488 = param_2;
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155460);
    return (int *)(ulong)uVar1;
  }
  return param_1;
}



void __register_frame_info(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_bases(param_1,param_2,0,0);
  return;
}



void __register_frame(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = malloc(0x30);
    __register_frame_info(param_1,pvVar1);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00126afc)

int __register_frame_info_table_bases
              (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00155460);
  param_2[5] = DAT_00155488;
  DAT_00155488 = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155460);
  return iVar1;
}



void __register_frame_info_table(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_table_bases(param_1,param_2,0,0);
  return;
}



void __register_frame_table(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x30);
  __register_frame_info_table(param_1,pvVar1);
  return;
}



long __deregister_frame_info_bases(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00155460);
  plVar1 = &DAT_00155488;
  for (lVar2 = DAT_00155488; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00126bd0;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_00155490;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00126bd0;
    }
    else if (**(int ***)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      break;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
LAB_00126c10:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155460);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00126bd0:
  *plVar1 = *(long *)(lVar2 + 0x28);
  goto LAB_00126c10;
}



long __deregister_frame_info(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00155460);
  plVar1 = &DAT_00155488;
  for (lVar2 = DAT_00155488; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00126bd0;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_00155490;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_00126bd0;
    }
    else if (**(int ***)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      break;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
LAB_00126c10:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155460);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_00126bd0:
  *plVar1 = *(long *)(lVar2 + 0x28);
  goto LAB_00126c10;
}



void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  if (*param_1 != 0) {
    __ptr = (void *)__deregister_frame_info();
    free(__ptr);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00126e0c)

long _Unwind_Find_FDE(ulong param_1,ulong *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong **ppuVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00155460);
  for (puVar7 = DAT_00155490; puVar7 != (ulong *)0x0; puVar7 = (ulong *)puVar7[5]) {
    if (*puVar7 <= param_1) {
      local_10 = FUN_0012641c(puVar7,param_1);
      if (local_10 != 0) goto LAB_00126d44;
      break;
    }
  }
  do {
    puVar7 = DAT_00155488;
    if (DAT_00155488 == (ulong *)0x0) {
      local_10 = 0;
      break;
    }
    DAT_00155488 = (ulong *)DAT_00155488[5];
    local_10 = FUN_0012641c(puVar7,param_1);
    ppuVar4 = &DAT_00155490;
    for (puVar6 = DAT_00155490; (puVar6 != (ulong *)0x0 && (*puVar7 <= *puVar6));
        puVar6 = (ulong *)puVar6[5]) {
      ppuVar4 = (ulong **)(puVar6 + 5);
    }
    puVar7[5] = (ulong)puVar6;
    *ppuVar4 = puVar7;
  } while (local_10 == 0);
LAB_00126d44:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155460);
  if (local_10 == 0) {
    local_8 = 1;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = param_1;
    iVar3 = dl_iterate_phdr(FUN_00125ccc,&local_30);
    if (iVar3 < 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = puVar7[1];
    bVar1 = *(byte *)(puVar7 + 4);
    param_2[1] = puVar7[2];
    uVar2 = *(ushort *)(puVar7 + 4) >> 3 & 0xff;
    if ((bVar1 >> 2 & 1) != 0) {
      uVar2 = FUN_00125cbc(local_10);
    }
    uVar5 = FUN_00125820(uVar2 & 0xff,puVar7);
    FUN_001258e0(uVar2 & 0xff,uVar5,local_10 + 8,&local_30);
  }
  param_2[2] = local_30;
  return local_10;
}


