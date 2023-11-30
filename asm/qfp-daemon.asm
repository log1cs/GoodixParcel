
WORKING/qfp-daemon:     file format elf64-littleaarch64


Disassembly of section .plt:

0000000000000f40 <__libc_init@plt-0x20>:
     f40:	a9bf7bf0 	stp	x16, x30, [sp, #-16]!
     f44:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     f48:	f9477e11 	ldr	x17, [x16, #3832]
     f4c:	913be210 	add	x16, x16, #0xef8
     f50:	d61f0220 	br	x17
     f54:	d503201f 	nop
     f58:	d503201f 	nop
     f5c:	d503201f 	nop

0000000000000f60 <__libc_init@plt>:
     f60:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     f64:	f9478211 	ldr	x17, [x16, #3840]
     f68:	913c0210 	add	x16, x16, #0xf00
     f6c:	d61f0220 	br	x17

0000000000000f70 <__register_atfork@plt>:
     f70:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     f74:	f9478611 	ldr	x17, [x16, #3848]
     f78:	913c2210 	add	x16, x16, #0xf08
     f7c:	d61f0220 	br	x17

0000000000000f80 <strlen@plt>:
     f80:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     f84:	f9478a11 	ldr	x17, [x16, #3856]
     f88:	913c4210 	add	x16, x16, #0xf10
     f8c:	d61f0220 	br	x17

0000000000000f90 <_Znwm@plt>:
     f90:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     f94:	f9478e11 	ldr	x17, [x16, #3864]
     f98:	913c6210 	add	x16, x16, #0xf18
     f9c:	d61f0220 	br	x17

0000000000000fa0 <memcpy@plt>:
     fa0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     fa4:	f9479211 	ldr	x17, [x16, #3872]
     fa8:	913c8210 	add	x16, x16, #0xf20
     fac:	d61f0220 	br	x17

0000000000000fb0 <_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm@plt>:
     fb0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     fb4:	f9479611 	ldr	x17, [x16, #3880]
     fb8:	913ca210 	add	x16, x16, #0xf28
     fbc:	d61f0220 	br	x17

0000000000000fc0 <_Z12logfile_initb@plt>:
     fc0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     fc4:	f9479a11 	ldr	x17, [x16, #3888]
     fc8:	913cc210 	add	x16, x16, #0xf30
     fcc:	d61f0220 	br	x17

0000000000000fd0 <_Z18logfile_shortfnamePKc@plt>:
     fd0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     fd4:	f9479e11 	ldr	x17, [x16, #3896]
     fd8:	913ce210 	add	x16, x16, #0xf38
     fdc:	d61f0220 	br	x17

0000000000000fe0 <_Z15logfile_print_iPKcz@plt>:
     fe0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     fe4:	f947a211 	ldr	x17, [x16, #3904]
     fe8:	913d0210 	add	x16, x16, #0xf40
     fec:	d61f0220 	br	x17

0000000000000ff0 <_ZdlPv@plt>:
     ff0:	f00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
     ff4:	f947a611 	ldr	x17, [x16, #3912]
     ff8:	913d2210 	add	x16, x16, #0xf48
     ffc:	d61f0220 	br	x17

0000000000001000 <_ZN7android11IQfpService9isEnabledEv@plt>:
    1000:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1004:	f947aa11 	ldr	x17, [x16, #3920]
    1008:	913d4210 	add	x16, x16, #0xf50
    100c:	d61f0220 	br	x17

0000000000001010 <signal@plt>:
    1010:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1014:	f947ae11 	ldr	x17, [x16, #3928]
    1018:	913d6210 	add	x16, x16, #0xf58
    101c:	d61f0220 	br	x17

0000000000001020 <fopen@plt>:
    1020:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1024:	f947b211 	ldr	x17, [x16, #3936]
    1028:	913d8210 	add	x16, x16, #0xf60
    102c:	d61f0220 	br	x17

0000000000001030 <fclose@plt>:
    1030:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1034:	f947b611 	ldr	x17, [x16, #3944]
    1038:	913da210 	add	x16, x16, #0xf68
    103c:	d61f0220 	br	x17

0000000000001040 <_ZN9QfpTzStubC1Ev@plt>:
    1040:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1044:	f947ba11 	ldr	x17, [x16, #3952]
    1048:	913dc210 	add	x16, x16, #0xf70
    104c:	d61f0220 	br	x17

0000000000001050 <_ZN10QfpCommandC1ER4IQfp@plt>:
    1050:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1054:	f947be11 	ldr	x17, [x16, #3960]
    1058:	913de210 	add	x16, x16, #0xf78
    105c:	d61f0220 	br	x17

0000000000001060 <_ZN7android10QfpService11instantiateEP11IQfpCommand@plt>:
    1060:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1064:	f947c211 	ldr	x17, [x16, #3968]
    1068:	913e0210 	add	x16, x16, #0xf80
    106c:	d61f0220 	br	x17

0000000000001070 <_ZN12QfpFtmClient6enableEP11IQfpCommand@plt>:
    1070:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1074:	f947c611 	ldr	x17, [x16, #3976]
    1078:	913e2210 	add	x16, x16, #0xf88
    107c:	d61f0220 	br	x17

0000000000001080 <_ZNK7android7RefBase9incStrongEPKv@plt>:
    1080:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1084:	f947ca11 	ldr	x17, [x16, #3984]
    1088:	913e4210 	add	x16, x16, #0xf90
    108c:	d61f0220 	br	x17

0000000000001090 <_ZN24QtiBiometricsFingerprint11getInstanceEN7android2spINS0_10QfpServiceEEE@plt>:
    1090:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1094:	f947ce11 	ldr	x17, [x16, #3992]
    1098:	913e6210 	add	x16, x16, #0xf98
    109c:	d61f0220 	br	x17

00000000000010a0 <_ZNK7android7RefBase9decStrongEPKv@plt>:
    10a0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10a4:	f947d211 	ldr	x17, [x16, #4000]
    10a8:	913e8210 	add	x16, x16, #0xfa0
    10ac:	d61f0220 	br	x17

00000000000010b0 <_ZN22QtiExtendedFingerprint11getInstanceEN7android2spINS0_11IQfpServiceEEE@plt>:
    10b0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10b4:	f947d611 	ldr	x17, [x16, #4008]
    10b8:	913ea210 	add	x16, x16, #0xfa8
    10bc:	d61f0220 	br	x17

00000000000010c0 <_ZN7android8hardware22configureRpcThreadpoolEmb@plt>:
    10c0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10c4:	f947da11 	ldr	x17, [x16, #4016]
    10c8:	913ec210 	add	x16, x16, #0xfb0
    10cc:	d61f0220 	br	x17

00000000000010d0 <_ZN7android8hardware10biometrics11fingerprint4V2_122IBiometricsFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE@plt>:
    10d0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10d4:	f947de11 	ldr	x17, [x16, #4024]
    10d8:	913ee210 	add	x16, x16, #0xfb8
    10dc:	d61f0220 	br	x17

00000000000010e0 <_ZN6vendor3qti8hardware11fingerprint4V1_023IQtiExtendedFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE@plt>:
    10e0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10e4:	f947e211 	ldr	x17, [x16, #4032]
    10e8:	913f0210 	add	x16, x16, #0xfc0
    10ec:	d61f0220 	br	x17

00000000000010f0 <_ZN7android8hardware17joinRpcThreadpoolEv@plt>:
    10f0:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    10f4:	f947e611 	ldr	x17, [x16, #4040]
    10f8:	913f2210 	add	x16, x16, #0xfc8
    10fc:	d61f0220 	br	x17

0000000000001100 <_Z15logfile_print_ePKcz@plt>:
    1100:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1104:	f947ea11 	ldr	x17, [x16, #4048]
    1108:	913f4210 	add	x16, x16, #0xfd0
    110c:	d61f0220 	br	x17

0000000000001110 <_ZN9QfpTzStubD1Ev@plt>:
    1110:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1114:	f947ee11 	ldr	x17, [x16, #4056]
    1118:	913f6210 	add	x16, x16, #0xfd8
    111c:	d61f0220 	br	x17

0000000000001120 <_Z15logfile_print_wPKcz@plt>:
    1120:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1124:	f947f211 	ldr	x17, [x16, #4064]
    1128:	913f8210 	add	x16, x16, #0xfe0
    112c:	d61f0220 	br	x17

0000000000001130 <pause@plt>:
    1130:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1134:	f947f611 	ldr	x17, [x16, #4072]
    1138:	913fa210 	add	x16, x16, #0xfe8
    113c:	d61f0220 	br	x17

0000000000001140 <__stack_chk_fail@plt>:
    1140:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1144:	f947fa11 	ldr	x17, [x16, #4080]
    1148:	913fc210 	add	x16, x16, #0xff0
    114c:	d61f0220 	br	x17

0000000000001150 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt>:
    1150:	d00000f0 	adrp	x16, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1154:	f947fe11 	ldr	x17, [x16, #4088]
    1158:	913fe210 	add	x16, x16, #0xff8
    115c:	d61f0220 	br	x17

Disassembly of section .text:

0000000000001160 <.text>:
    1160:	910003e0 	mov	x0, sp
    1164:	14000001 	b	1168 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x18>
    1168:	d100c3ff 	sub	sp, sp, #0x30
    116c:	a9027bfd 	stp	x29, x30, [sp, #32]
    1170:	910083fd 	add	x29, sp, #0x20
    1174:	d00000e8 	adrp	x8, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1178:	91302108 	add	x8, x8, #0xc08
    117c:	d00000e9 	adrp	x9, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1180:	91306129 	add	x9, x9, #0xc18
    1184:	d00000ea 	adrp	x10, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    1188:	9e670100 	fmov	d0, x8
    118c:	9130a14a 	add	x10, x10, #0xc28
    1190:	4e181d20 	mov	v0.d[1], x9
    1194:	3d8003e0 	str	q0, [sp]
    1198:	f9000bea 	str	x10, [sp, #16]
    119c:	d00000e2 	adrp	x2, 1f000 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1deb0>
    11a0:	f9477042 	ldr	x2, [x2, #3808]
    11a4:	910003e3 	mov	x3, sp
    11a8:	aa1f03e1 	mov	x1, xzr
    11ac:	97ffff6d 	bl	f60 <__libc_init@plt>
    11b0:	f00000e3 	adrp	x3, 20000 <__bss_start@@Base>
    11b4:	91000063 	add	x3, x3, #0x0
    11b8:	17ffff6e 	b	f70 <__register_atfork@plt>
    11bc:	d10343ff 	sub	sp, sp, #0xd0
    11c0:	f9004bf7 	str	x23, [sp, #144]
    11c4:	a90a57f6 	stp	x22, x21, [sp, #160]
    11c8:	a90b4ff4 	stp	x20, x19, [sp, #176]
    11cc:	a90c7bfd 	stp	x29, x30, [sp, #192]
    11d0:	910303fd 	add	x29, sp, #0xc0
    11d4:	d53bd057 	mrs	x23, tpidr_el0
    11d8:	f94016e8 	ldr	x8, [x23, #40]
    11dc:	7100081f 	cmp	w0, #0x2
    11e0:	f81c83a8 	stur	x8, [x29, #-56]
    11e4:	5400022b 	b.lt	1228 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0xd8>  // b.tstop
    11e8:	f9400433 	ldr	x19, [x1, #8]
    11ec:	a93b7fbf 	stp	xzr, xzr, [x29, #-80]
    11f0:	f81c03bf 	stur	xzr, [x29, #-64]
    11f4:	aa1303e0 	mov	x0, x19
    11f8:	97ffff62 	bl	f80 <strlen@plt>
    11fc:	aa0003f4 	mov	x20, x0
    1200:	b100429f 	cmn	x20, #0x10
    1204:	54002722 	b.cs	16e8 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x598>  // b.hs, b.nlast
    1208:	f1005e9f 	cmp	x20, #0x17
    120c:	54000182 	b.cs	123c <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0xec>  // b.hs, b.nlast
    1210:	d10143a9 	sub	x9, x29, #0x50
    1214:	531f7a88 	lsl	w8, w20, #1
    1218:	b2400135 	orr	x21, x9, #0x1
    121c:	381b03a8 	sturb	w8, [x29, #-80]
    1220:	b50001f4 	cbnz	x20, 125c <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x10c>
    1224:	14000012 	b	126c <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x11c>
    1228:	aa1f03e9 	mov	x9, xzr
    122c:	2a1f03e8 	mov	w8, wzr
    1230:	a93b7fbf 	stp	xzr, xzr, [x29, #-80]
    1234:	f81c03bf 	stur	xzr, [x29, #-64]
    1238:	14000010 	b	1278 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x128>
    123c:	91004288 	add	x8, x20, #0x10
    1240:	927ced16 	and	x22, x8, #0xfffffffffffffff0
    1244:	aa1603e0 	mov	x0, x22
    1248:	97ffff52 	bl	f90 <_Znwm@plt>
    124c:	aa0003f5 	mov	x21, x0
    1250:	b24002c8 	orr	x8, x22, #0x1
    1254:	a93bd7b4 	stp	x20, x21, [x29, #-72]
    1258:	f81b03a8 	stur	x8, [x29, #-80]
    125c:	aa1503e0 	mov	x0, x21
    1260:	aa1303e1 	mov	x1, x19
    1264:	aa1403e2 	mov	x2, x20
    1268:	97ffff4e 	bl	fa0 <memcpy@plt>
    126c:	38346abf 	strb	wzr, [x21, x20]
    1270:	385b03a8 	ldurb	w8, [x29, #-80]
    1274:	f85b83a9 	ldur	x9, [x29, #-72]
    1278:	53017d0a 	lsr	w10, w8, #1
    127c:	7200011f 	tst	w8, #0x1
    1280:	9a890149 	csel	x9, x10, x9, eq	// eq = none
    1284:	f100113f 	cmp	x9, #0x4
    1288:	54000181 	b.ne	12b8 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x168>  // b.any
    128c:	90000003 	adrp	x3, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1290:	911bc463 	add	x3, x3, #0x6f1
    1294:	d10143a0 	sub	x0, x29, #0x50
    1298:	92800002 	mov	x2, #0xffffffffffffffff    	// #-1
    129c:	321e03e4 	orr	w4, wzr, #0x4
    12a0:	aa1f03e1 	mov	x1, xzr
    12a4:	97ffff43 	bl	fb0 <_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm@plt>
    12a8:	385b03a8 	ldurb	w8, [x29, #-80]
    12ac:	7100001f 	cmp	w0, #0x0
    12b0:	1a9f17f3 	cset	w19, eq	// eq = none
    12b4:	14000002 	b	12bc <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x16c>
    12b8:	2a1f03f3 	mov	w19, wzr
    12bc:	f85b83a9 	ldur	x9, [x29, #-72]
    12c0:	53017d0a 	lsr	w10, w8, #1
    12c4:	7200011f 	tst	w8, #0x1
    12c8:	9a890148 	csel	x8, x10, x9, eq	// eq = none
    12cc:	f1000d1f 	cmp	x8, #0x3
    12d0:	54000161 	b.ne	12fc <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1ac>  // b.any
    12d4:	90000003 	adrp	x3, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    12d8:	911bd863 	add	x3, x3, #0x6f6
    12dc:	d10143a0 	sub	x0, x29, #0x50
    12e0:	92800002 	mov	x2, #0xffffffffffffffff    	// #-1
    12e4:	320007e4 	orr	w4, wzr, #0x3
    12e8:	aa1f03e1 	mov	x1, xzr
    12ec:	97ffff31 	bl	fb0 <_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm@plt>
    12f0:	7100001f 	cmp	w0, #0x0
    12f4:	1a9f17f4 	cset	w20, eq	// eq = none
    12f8:	14000002 	b	1300 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x1b0>
    12fc:	2a1f03f4 	mov	w20, wzr
    1300:	320003e0 	orr	w0, wzr, #0x1
    1304:	97ffff2f 	bl	fc0 <_Z12logfile_initb@plt>
    1308:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    130c:	911c5c00 	add	x0, x0, #0x717
    1310:	910163e8 	add	x8, sp, #0x58
    1314:	910163f5 	add	x21, sp, #0x58
    1318:	97ffff2e 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    131c:	394163e8 	ldrb	w8, [sp, #88]
    1320:	f94037e9 	ldr	x9, [sp, #104]
    1324:	b24002aa 	orr	x10, x21, #0x1
    1328:	9000000b 	adrp	x11, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    132c:	9000000c 	adrp	x12, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1330:	7200011f 	tst	w8, #0x1
    1334:	911bc16b 	add	x11, x11, #0x6f0
    1338:	911cc58c 	add	x12, x12, #0x731
    133c:	9a890141 	csel	x1, x10, x9, eq	// eq = none
    1340:	7100027f 	cmp	w19, #0x0
    1344:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1348:	90000002 	adrp	x2, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    134c:	90000003 	adrp	x3, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1350:	9a8b1184 	csel	x4, x12, x11, ne	// ne = any
    1354:	911be800 	add	x0, x0, #0x6fa
    1358:	911c7042 	add	x2, x2, #0x71c
    135c:	911ca063 	add	x3, x3, #0x728
    1360:	97ffff20 	bl	fe0 <_Z15logfile_print_iPKcz@plt>
    1364:	394163e8 	ldrb	w8, [sp, #88]
    1368:	36000068 	tbz	w8, #0, 1374 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x224>
    136c:	f94037e0 	ldr	x0, [sp, #104]
    1370:	97ffff20 	bl	ff0 <_ZdlPv@plt>
    1374:	97ffff23 	bl	1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1378:	2a000268 	orr	w8, w19, w0
    137c:	2a080288 	orr	w8, w20, w8
    1380:	36001308 	tbz	w8, #0, 15e0 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x490>
    1384:	528001a0 	mov	w0, #0xd                   	// #13
    1388:	320003e1 	orr	w1, wzr, #0x1
    138c:	97ffff21 	bl	1010 <signal@plt>
    1390:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1394:	90000001 	adrp	x1, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1398:	911d8c00 	add	x0, x0, #0x763
    139c:	911e2021 	add	x1, x1, #0x788
    13a0:	97ffff20 	bl	1020 <fopen@plt>
    13a4:	b4000040 	cbz	x0, 13ac <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x25c>
    13a8:	97ffff22 	bl	1030 <fclose@plt>
    13ac:	910143e0 	add	x0, sp, #0x50
    13b0:	97ffff24 	bl	1040 <_ZN9QfpTzStubC1Ev@plt>
    13b4:	910103e0 	add	x0, sp, #0x40
    13b8:	910143e1 	add	x1, sp, #0x50
    13bc:	910103f4 	add	x20, sp, #0x40
    13c0:	97ffff24 	bl	1050 <_ZN10QfpCommandC1ER4IQfp@plt>
    13c4:	7100027f 	cmp	w19, #0x0
    13c8:	9a9f1280 	csel	x0, x20, xzr, ne	// ne = any
    13cc:	9100e3e8 	add	x8, sp, #0x38
    13d0:	97ffff24 	bl	1060 <_ZN7android10QfpService11instantiateEP11IQfpCommand@plt>
    13d4:	f9401fe8 	ldr	x8, [sp, #56]
    13d8:	9100a3e0 	add	x0, sp, #0x28
    13dc:	91004101 	add	x1, x8, #0x10
    13e0:	97ffff1c 	bl	1050 <_ZN10QfpCommandC1ER4IQfp@plt>
    13e4:	9100a3e0 	add	x0, sp, #0x28
    13e8:	97ffff22 	bl	1070 <_ZN12QfpFtmClient6enableEP11IQfpCommand@plt>
    13ec:	f9401fe0 	ldr	x0, [sp, #56]
    13f0:	f9000fe0 	str	x0, [sp, #24]
    13f4:	b4000060 	cbz	x0, 1400 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x2b0>
    13f8:	910063e1 	add	x1, sp, #0x18
    13fc:	97ffff21 	bl	1080 <_ZNK7android7RefBase9incStrongEPKv@plt>
    1400:	910163e8 	add	x8, sp, #0x58
    1404:	910063e0 	add	x0, sp, #0x18
    1408:	97ffff22 	bl	1090 <_ZN24QtiBiometricsFingerprint11getInstanceEN7android2spINS0_10QfpServiceEEE@plt>
    140c:	f9402fe8 	ldr	x8, [sp, #88]
    1410:	f9400fe0 	ldr	x0, [sp, #24]
    1414:	f9002fff 	str	xzr, [sp, #88]
    1418:	f90013e8 	str	x8, [sp, #32]
    141c:	b4000060 	cbz	x0, 1428 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x2d8>
    1420:	910063e1 	add	x1, sp, #0x18
    1424:	97ffff1f 	bl	10a0 <_ZNK7android7RefBase9decStrongEPKv@plt>
    1428:	f9401fe0 	ldr	x0, [sp, #56]
    142c:	f90007e0 	str	x0, [sp, #8]
    1430:	b4000060 	cbz	x0, 143c <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x2ec>
    1434:	910023e1 	add	x1, sp, #0x8
    1438:	97ffff12 	bl	1080 <_ZNK7android7RefBase9incStrongEPKv@plt>
    143c:	910163e8 	add	x8, sp, #0x58
    1440:	910023e0 	add	x0, sp, #0x8
    1444:	97ffff1b 	bl	10b0 <_ZN22QtiExtendedFingerprint11getInstanceEN7android2spINS0_11IQfpServiceEEE@plt>
    1448:	f9402fe8 	ldr	x8, [sp, #88]
    144c:	f94007e0 	ldr	x0, [sp, #8]
    1450:	f9002fff 	str	xzr, [sp, #88]
    1454:	f9000be8 	str	x8, [sp, #16]
    1458:	b4000060 	cbz	x0, 1464 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x314>
    145c:	910023e1 	add	x1, sp, #0x8
    1460:	97ffff10 	bl	10a0 <_ZNK7android7RefBase9decStrongEPKv@plt>
    1464:	320003e0 	orr	w0, wzr, #0x1
    1468:	320003e1 	orr	w1, wzr, #0x1
    146c:	97ffff15 	bl	10c0 <_ZN7android8hardware22configureRpcThreadpoolEmb@plt>
    1470:	f94013e0 	ldr	x0, [sp, #32]
    1474:	b4000f80 	cbz	x0, 1664 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x514>
    1478:	d28cac89 	mov	x9, #0x6564                	// #25956
    147c:	f2ac2cc9 	movk	x9, #0x6166, lsl #16
    1480:	f2cd8ea9 	movk	x9, #0x6c75, lsl #32
    1484:	321f0be8 	orr	w8, wzr, #0xe
    1488:	f2e00e89 	movk	x9, #0x74, lsl #48
    148c:	910163e1 	add	x1, sp, #0x58
    1490:	a905ffff 	stp	xzr, xzr, [sp, #88]
    1494:	f90037ff 	str	xzr, [sp, #104]
    1498:	390163e8 	strb	w8, [sp, #88]
    149c:	f80593e9 	stur	x9, [sp, #89]
    14a0:	97ffff0c 	bl	10d0 <_ZN7android8hardware10biometrics11fingerprint4V2_122IBiometricsFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE@plt>
    14a4:	394163e8 	ldrb	w8, [sp, #88]
    14a8:	36000068 	tbz	w8, #0, 14b4 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x364>
    14ac:	f94037e0 	ldr	x0, [sp, #104]
    14b0:	97fffed0 	bl	ff0 <_ZdlPv@plt>
    14b4:	f9400be0 	ldr	x0, [sp, #16]
    14b8:	b4000f60 	cbz	x0, 16a4 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x554>
    14bc:	d28cac89 	mov	x9, #0x6564                	// #25956
    14c0:	f2ac2cc9 	movk	x9, #0x6166, lsl #16
    14c4:	f2cd8ea9 	movk	x9, #0x6c75, lsl #32
    14c8:	321f0be8 	orr	w8, wzr, #0xe
    14cc:	f2e00e89 	movk	x9, #0x74, lsl #48
    14d0:	910163e1 	add	x1, sp, #0x58
    14d4:	a905ffff 	stp	xzr, xzr, [sp, #88]
    14d8:	f90037ff 	str	xzr, [sp, #104]
    14dc:	390163e8 	strb	w8, [sp, #88]
    14e0:	f80593e9 	stur	x9, [sp, #89]
    14e4:	97fffeff 	bl	10e0 <_ZN6vendor3qti8hardware11fingerprint4V1_023IQtiExtendedFingerprint17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE@plt>
    14e8:	394163e8 	ldrb	w8, [sp, #88]
    14ec:	36000068 	tbz	w8, #0, 14f8 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x3a8>
    14f0:	f94037e0 	ldr	x0, [sp, #104]
    14f4:	97fffebf 	bl	ff0 <_ZdlPv@plt>
    14f8:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    14fc:	911c5c00 	add	x0, x0, #0x717
    1500:	910163e8 	add	x8, sp, #0x58
    1504:	910163f3 	add	x19, sp, #0x58
    1508:	97fffeb2 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    150c:	394163e8 	ldrb	w8, [sp, #88]
    1510:	f94037e9 	ldr	x9, [sp, #104]
    1514:	b2400273 	orr	x19, x19, #0x1
    1518:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    151c:	7200011f 	tst	w8, #0x1
    1520:	9a890261 	csel	x1, x19, x9, eq	// eq = none
    1524:	91203400 	add	x0, x0, #0x80d
    1528:	97fffeae 	bl	fe0 <_Z15logfile_print_iPKcz@plt>
    152c:	394163e8 	ldrb	w8, [sp, #88]
    1530:	36000068 	tbz	w8, #0, 153c <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x3ec>
    1534:	f94037e0 	ldr	x0, [sp, #104]
    1538:	97fffeae 	bl	ff0 <_ZdlPv@plt>
    153c:	97fffeed 	bl	10f0 <_ZN7android8hardware17joinRpcThreadpoolEv@plt>
    1540:	aa1f03e0 	mov	x0, xzr
    1544:	97fffecb 	bl	1070 <_ZN12QfpFtmClient6enableEP11IQfpCommand@plt>
    1548:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    154c:	911c5c00 	add	x0, x0, #0x717
    1550:	910163e8 	add	x8, sp, #0x58
    1554:	97fffe9f 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    1558:	394163e8 	ldrb	w8, [sp, #88]
    155c:	f94037e9 	ldr	x9, [sp, #104]
    1560:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1564:	9120c000 	add	x0, x0, #0x830
    1568:	7200011f 	tst	w8, #0x1
    156c:	9a890261 	csel	x1, x19, x9, eq	// eq = none
    1570:	97fffee4 	bl	1100 <_Z15logfile_print_ePKcz@plt>
    1574:	394163e8 	ldrb	w8, [sp, #88]
    1578:	36000068 	tbz	w8, #0, 1584 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x434>
    157c:	f94037e0 	ldr	x0, [sp, #104]
    1580:	97fffe9c 	bl	ff0 <_ZdlPv@plt>
    1584:	f9400be8 	ldr	x8, [sp, #16]
    1588:	b40000c8 	cbz	x8, 15a0 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x450>
    158c:	f9400109 	ldr	x9, [x8]
    1590:	910043e1 	add	x1, sp, #0x10
    1594:	f85e8129 	ldur	x9, [x9, #-24]
    1598:	8b090100 	add	x0, x8, x9
    159c:	97fffec1 	bl	10a0 <_ZNK7android7RefBase9decStrongEPKv@plt>
    15a0:	f94013e8 	ldr	x8, [sp, #32]
    15a4:	b40000c8 	cbz	x8, 15bc <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x46c>
    15a8:	f9400109 	ldr	x9, [x8]
    15ac:	910083e1 	add	x1, sp, #0x20
    15b0:	f85e8129 	ldur	x9, [x9, #-24]
    15b4:	8b090100 	add	x0, x8, x9
    15b8:	97fffeba 	bl	10a0 <_ZNK7android7RefBase9decStrongEPKv@plt>
    15bc:	f9401fe0 	ldr	x0, [sp, #56]
    15c0:	b4000060 	cbz	x0, 15cc <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x47c>
    15c4:	9100e3e1 	add	x1, sp, #0x38
    15c8:	97fffeb6 	bl	10a0 <_ZNK7android7RefBase9decStrongEPKv@plt>
    15cc:	910143e0 	add	x0, sp, #0x50
    15d0:	97fffed0 	bl	1110 <_ZN9QfpTzStubD1Ev@plt>
    15d4:	385b03a8 	ldurb	w8, [x29, #-80]
    15d8:	370002c8 	tbnz	w8, #0, 1630 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x4e0>
    15dc:	14000017 	b	1638 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x4e8>
    15e0:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    15e4:	911c5c00 	add	x0, x0, #0x717
    15e8:	910163e8 	add	x8, sp, #0x58
    15ec:	910163f3 	add	x19, sp, #0x58
    15f0:	97fffe78 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    15f4:	394163e8 	ldrb	w8, [sp, #88]
    15f8:	f94037e9 	ldr	x9, [sp, #104]
    15fc:	b240026a 	orr	x10, x19, #0x1
    1600:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1604:	7200011f 	tst	w8, #0x1
    1608:	9a890141 	csel	x1, x10, x9, eq	// eq = none
    160c:	911cec00 	add	x0, x0, #0x73b
    1610:	97fffec4 	bl	1120 <_Z15logfile_print_wPKcz@plt>
    1614:	394163e8 	ldrb	w8, [sp, #88]
    1618:	36000068 	tbz	w8, #0, 1624 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x4d4>
    161c:	f94037e0 	ldr	x0, [sp, #104]
    1620:	97fffe74 	bl	ff0 <_ZdlPv@plt>
    1624:	97fffec3 	bl	1130 <pause@plt>
    1628:	385b03a8 	ldurb	w8, [x29, #-80]
    162c:	36000068 	tbz	w8, #0, 1638 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x4e8>
    1630:	f85c03a0 	ldur	x0, [x29, #-64]
    1634:	97fffe6f 	bl	ff0 <_ZdlPv@plt>
    1638:	f94016e8 	ldr	x8, [x23, #40]
    163c:	f85c83a9 	ldur	x9, [x29, #-56]
    1640:	eb09011f 	cmp	x8, x9
    1644:	54000501 	b.ne	16e4 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x594>  // b.any
    1648:	a94c7bfd 	ldp	x29, x30, [sp, #192]
    164c:	a94b4ff4 	ldp	x20, x19, [sp, #176]
    1650:	a94a57f6 	ldp	x22, x21, [sp, #160]
    1654:	f9404bf7 	ldr	x23, [sp, #144]
    1658:	2a1f03e0 	mov	w0, wzr
    165c:	910343ff 	add	sp, sp, #0xd0
    1660:	d65f03c0 	ret
    1664:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1668:	911c5c00 	add	x0, x0, #0x717
    166c:	910163e8 	add	x8, sp, #0x58
    1670:	910163f3 	add	x19, sp, #0x58
    1674:	97fffe57 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    1678:	394163e8 	ldrb	w8, [sp, #88]
    167c:	f94037e9 	ldr	x9, [sp, #104]
    1680:	b240026a 	orr	x10, x19, #0x1
    1684:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    1688:	7200011f 	tst	w8, #0x1
    168c:	9a890141 	csel	x1, x10, x9, eq	// eq = none
    1690:	911e4c00 	add	x0, x0, #0x793
    1694:	97fffe9b 	bl	1100 <_Z15logfile_print_ePKcz@plt>
    1698:	394163e8 	ldrb	w8, [sp, #88]
    169c:	3707f088 	tbnz	w8, #0, 14ac <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x35c>
    16a0:	17ffff85 	b	14b4 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x364>
    16a4:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    16a8:	911c5c00 	add	x0, x0, #0x717
    16ac:	910163e8 	add	x8, sp, #0x58
    16b0:	910163f3 	add	x19, sp, #0x58
    16b4:	97fffe47 	bl	fd0 <_Z18logfile_shortfnamePKc@plt>
    16b8:	394163e8 	ldrb	w8, [sp, #88]
    16bc:	f94037e9 	ldr	x9, [sp, #104]
    16c0:	b240026a 	orr	x10, x19, #0x1
    16c4:	90000000 	adrp	x0, 1000 <_ZN7android11IQfpService9isEnabledEv@plt>
    16c8:	7200011f 	tst	w8, #0x1
    16cc:	9a890141 	csel	x1, x10, x9, eq	// eq = none
    16d0:	911f4400 	add	x0, x0, #0x7d1
    16d4:	97fffe8b 	bl	1100 <_Z15logfile_print_ePKcz@plt>
    16d8:	394163e8 	ldrb	w8, [sp, #88]
    16dc:	3707f0a8 	tbnz	w8, #0, 14f0 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x3a0>
    16e0:	17ffff86 	b	14f8 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt+0x3a8>
    16e4:	97fffe97 	bl	1140 <__stack_chk_fail@plt>
    16e8:	d10143a0 	sub	x0, x29, #0x50
    16ec:	97fffe99 	bl	1150 <_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv@plt>
