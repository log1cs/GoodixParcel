typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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

typedef struct _IO_FILE FILE;

typedef void (* __sighandler_t)(int);

typedef struct IQfp IQfp, *PIQfp;

struct IQfp { // PlaceHolder Structure
};

typedef struct QfpTzStub QfpTzStub, *PQfpTzStub;

struct QfpTzStub { // PlaceHolder Structure
};

typedef struct QfpCommand QfpCommand, *PQfpCommand;

struct QfpCommand { // PlaceHolder Structure
};

typedef struct IQfpCommand IQfpCommand, *PIQfpCommand;

struct IQfpCommand { // PlaceHolder Structure
};

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef dword sp;

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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
    byte hash[16];
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct ElfNote_8_4 ElfNote_8_4, *PElfNote_8_4;

struct ElfNote_8_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8]; // Vendor name
    byte description[4]; // Blob value
};




void FUN_00100f40(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_init(void)

{
  __libc_init();
  return;
}



void __register_atfork(void)

{
  __register_atfork();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
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

void std::__1::basic_string<>::compare(ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  compare(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void logfile_init(bool param_1)

{
  logfile_init(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void logfile_shortfname(char *param_1)

{
  logfile_shortfname(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void logfile_print_i(char *param_1,...)

{
  logfile_print_i(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::IQfpService::isEnabled(void)

{
  isEnabled();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void __thiscall QfpTzStub::QfpTzStub(QfpTzStub *this)

{
  QfpTzStub(this);
  return;
}



void __thiscall QfpCommand::QfpCommand(QfpCommand *this,IQfp *param_1)

{
  QfpCommand(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::QfpService::instantiate(IQfpCommand *param_1)

{
  instantiate(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void QfpFtmClient::enable(IQfpCommand *param_1)

{
  enable(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::incStrong(void *param_1)

{
  incStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void QtiBiometricsFingerprint::getInstance(sp param_1)

{
  getInstance(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::RefBase::decStrong(void *param_1)

{
  decStrong(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void QtiExtendedFingerprint::getInstance(sp param_1)

{
  getInstance(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::hardware::configureRpcThreadpool(ulong param_1,bool param_2)

{
  configureRpcThreadpool(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::hardware::biometrics::fingerprint::V2_1::IBiometricsFingerprint::registerAsService
               (basic_string *param_1)

{
  registerAsService(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void vendor::qti::hardware::fingerprint::V1_0::IQtiExtendedFingerprint::registerAsService
               (basic_string *param_1)

{
  registerAsService(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void android::hardware::joinRpcThreadpool(void)

{
  joinRpcThreadpool();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void logfile_print_e(char *param_1,...)

{
  logfile_print_e(param_1);
  return;
}



void __thiscall QfpTzStub::~QfpTzStub(QfpTzStub *this)

{
  ~QfpTzStub(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void logfile_print_w(char *param_1,...)

{
  logfile_print_w(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pause(void)

{
  int iVar1;
  
  iVar1 = pause();
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__1::__basic_string_common<true>::__throw_length_error(void)

{
  __throw_length_error();
  return;
}



void _start(void)

{
  _start_main();
  return;
}



void _start_main(undefined8 param_1)

{
  qword *local_30;
  qword *pqStack_28;
  qword *local_20;
  
  pqStack_28 = &__INIT_ARRAY__;
  local_30 = &__PREINIT_ARRAY__;
  local_20 = &__FINI_ARRAY__;
  __libc_init(param_1,0,main,&local_30);
  __register_atfork();
  return;
}



int pthread_atfork(__prepare *__prepare,__parent *__parent,__child *__child)

{
  int iVar1;
  
  iVar1 = __register_atfork((int)__prepare,__parent,__child,&DAT_00120000);
  return iVar1;
}



// WARNING: Control flow encountered bad instruction data

undefined8 main(int param_1,long param_2)

{
  IQfpCommand *pIVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  FILE *__stream;
  uint uVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  void *local_c8;
  long *local_c0;
  void *local_b8;
  long *local_b0;
  QfpCommand aQStack_a8 [16];
  void *local_98;
  QfpCommand aQStack_90 [16];
  QfpTzStub aQStack_80 [8];
  byte local_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  void *local_68;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 < 2) {
    uVar8 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    goto LAB_00101278;
  }
  pcVar9 = *(char **)(param_2 + 8);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  sVar7 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar7) {
    std::__1::__basic_string_common<true>::__throw_length_error();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (sVar7 < 0x17) {
    pvVar10 = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_0010125c;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_60 = uVar11 | 1;
    local_58 = sVar7;
    local_50 = pvVar10;
LAB_0010125c:
    memcpy(pvVar10,pcVar9,sVar7);
  }
  *(undefined *)((long)pvVar10 + sVar7) = 0;
  uVar8 = (uint)(byte)local_60;
LAB_00101278:
  sVar7 = (ulong)(uVar8 >> 1);
  if ((uVar8 & 1) != 0) {
    sVar7 = local_58;
  }
  if (sVar7 == 4) {
    iVar6 = std::__1::basic_string<>::compare
                      ((ulong)&local_60,0,(char *)0xffffffffffffffff,(ulong)&DAT_001016f1);
    uVar8 = (uint)(byte)local_60;
    bVar3 = iVar6 == 0;
  }
  else {
    bVar3 = false;
  }
  sVar7 = (ulong)(uVar8 >> 1);
  if ((uVar8 & 1) != 0) {
    sVar7 = local_58;
  }
  if (sVar7 == 3) {
    iVar6 = std::__1::basic_string<>::compare
                      ((ulong)&local_60,0,(char *)0xffffffffffffffff,(ulong)&DAT_001016f6);
    bVar4 = iVar6 == 0;
  }
  else {
    bVar4 = false;
  }
  logfile_init(true);
  logfile_shortfname("main");
  pvVar10 = (void *)((ulong)&local_78 | 1);
  if ((local_78 & 1) != 0) {
    pvVar10 = local_68;
  }
  pcVar9 = "test mode";
  if (bVar3 == false) {
    pcVar9 = "";
  }
  logfile_print_i("%s: App build date: %s %s %s",pvVar10,"Sep 24 2018","05:22:58",pcVar9);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  bVar5 = android::IQfpService::isEnabled();
  if ((byte)(bVar4 | bVar3 | bVar5 & 1) == 0) {
    logfile_shortfname("main");
    pvVar10 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pvVar10 = local_68;
    }
    logfile_print_w("%s: fingerprint not enabled, suspending",pvVar10);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    pause();
  }
  else {
    signal(0xd,(__sighandler_t)0x1);
    __stream = fopen("/data/vendor/misc/qti_fp/qfp_log.txt","wb");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    QfpTzStub::QfpTzStub(aQStack_80);
    pIVar1 = (IQfpCommand *)aQStack_90;
    QfpCommand::QfpCommand(aQStack_90,(IQfp *)aQStack_80);
    if (bVar3 == false) {
      pIVar1 = (IQfpCommand *)0x0;
    }
    android::QfpService::instantiate(pIVar1);
    QfpCommand::QfpCommand(aQStack_a8,(IQfp *)((long)local_98 + 0x10));
    QfpFtmClient::enable((IQfpCommand *)aQStack_a8);
    local_b8 = local_98;
    if (local_98 != (void *)0x0) {
      android::RefBase::incStrong(local_98);
    }
    QtiBiometricsFingerprint::getInstance((sp)&local_b8);
    local_b0 = (long *)CONCAT71(uStack_77,local_78);
    local_78 = 0;
    uStack_77 = 0;
    if (local_b8 != (void *)0x0) {
      android::RefBase::decStrong(local_b8);
    }
    local_c8 = local_98;
    if (local_98 != (void *)0x0) {
      android::RefBase::incStrong(local_98);
    }
    QtiExtendedFingerprint::getInstance((sp)&local_c8);
    local_c0 = (long *)CONCAT71(uStack_77,local_78);
    local_78 = 0;
    uStack_77 = 0;
    if (local_c8 != (void *)0x0) {
      android::RefBase::decStrong(local_c8);
    }
    android::hardware::configureRpcThreadpool(1,true);
    if (local_b0 == (long *)0x0) {
      logfile_shortfname("main");
      pvVar10 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar10 = local_68;
      }
      logfile_print_e("%s:Can\'t create instance of QtiBiometricsFingerprint, nullptr",pvVar10);
    }
    else {
      uStack_6f = 0;
      local_68 = (void *)0x0;
      local_78 = 0xe;
      uStack_77 = 0x746c7561666564;
      uStack_70 = 0;
      android::hardware::biometrics::fingerprint::V2_1::IBiometricsFingerprint::registerAsService
                ((basic_string *)local_b0);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (local_c0 == (long *)0x0) {
      logfile_shortfname("main");
      pvVar10 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pvVar10 = local_68;
      }
      logfile_print_e("%s:Can\'t create instance of QtiExtendedFingerprint, nullptr",pvVar10);
    }
    else {
      uStack_6f = 0;
      local_68 = (void *)0x0;
      local_78 = 0xe;
      uStack_77 = 0x746c7561666564;
      uStack_70 = 0;
      vendor::qti::hardware::fingerprint::V1_0::IQtiExtendedFingerprint::registerAsService
                ((basic_string *)local_c0);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    logfile_shortfname("main");
    pvVar10 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pvVar10 = local_68;
    }
    logfile_print_i("%s: QfpService daemon now ready...",pvVar10);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    android::hardware::joinRpcThreadpool();
    QfpFtmClient::enable((IQfpCommand *)0x0);
    logfile_shortfname("main");
    pvVar10 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pvVar10 = local_68;
    }
    logfile_print_e("%s: exit",pvVar10);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (local_c0 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_c0 + *(long *)(*local_c0 + -0x18)));
    }
    if (local_b0 != (long *)0x0) {
      android::RefBase::decStrong((void *)((long)local_b0 + *(long *)(*local_b0 + -0x18)));
    }
    if (local_98 != (void *)0x0) {
      android::RefBase::decStrong(local_98);
    }
    QfpTzStub::~QfpTzStub(aQStack_80);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}


