
WORKING/gxfingerprint.default.so:     file format elf64-littleaarch64


Disassembly of section .plt:

0000000000004170 <sem_wait@plt-0x20>:
    4170:	a9bf7bf0 	stp	x16, x30, [sp, #-16]!
    4174:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4178:	f946a211 	ldr	x17, [x16, #3392]
    417c:	91350210 	add	x16, x16, #0xd40
    4180:	d61f0220 	br	x17
    4184:	d503201f 	nop
    4188:	d503201f 	nop
    418c:	d503201f 	nop

0000000000004190 <sem_wait@plt>:
    4190:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4194:	f946a611 	ldr	x17, [x16, #3400]
    4198:	91352210 	add	x16, x16, #0xd48
    419c:	d61f0220 	br	x17

00000000000041a0 <pthread_create@plt>:
    41a0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41a4:	f946aa11 	ldr	x17, [x16, #3408]
    41a8:	91354210 	add	x16, x16, #0xd50
    41ac:	d61f0220 	br	x17

00000000000041b0 <open@plt>:
    41b0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41b4:	f946ae11 	ldr	x17, [x16, #3416]
    41b8:	91356210 	add	x16, x16, #0xd58
    41bc:	d61f0220 	br	x17

00000000000041c0 <sem_post@plt>:
    41c0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41c4:	f946b211 	ldr	x17, [x16, #3424]
    41c8:	91358210 	add	x16, x16, #0xd60
    41cc:	d61f0220 	br	x17

00000000000041d0 <pthread_mutex_trylock@plt>:
    41d0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41d4:	f946b611 	ldr	x17, [x16, #3432]
    41d8:	9135a210 	add	x16, x16, #0xd68
    41dc:	d61f0220 	br	x17

00000000000041e0 <__cxa_finalize@plt>:
    41e0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41e4:	f946ba11 	ldr	x17, [x16, #3440]
    41e8:	9135c210 	add	x16, x16, #0xd70
    41ec:	d61f0220 	br	x17

00000000000041f0 <timer_create@plt>:
    41f0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    41f4:	f946be11 	ldr	x17, [x16, #3448]
    41f8:	9135e210 	add	x16, x16, #0xd78
    41fc:	d61f0220 	br	x17

0000000000004200 <QSEECom_send_cmd@plt>:
    4200:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4204:	f946c211 	ldr	x17, [x16, #3456]
    4208:	91360210 	add	x16, x16, #0xd80
    420c:	d61f0220 	br	x17

0000000000004210 <__errno@plt>:
    4210:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4214:	f946c611 	ldr	x17, [x16, #3464]
    4218:	91362210 	add	x16, x16, #0xd88
    421c:	d61f0220 	br	x17

0000000000004220 <sem_timedwait@plt>:
    4220:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4224:	f946ca11 	ldr	x17, [x16, #3472]
    4228:	91364210 	add	x16, x16, #0xd90
    422c:	d61f0220 	br	x17

0000000000004230 <__system_property_set@plt>:
    4230:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4234:	f946ce11 	ldr	x17, [x16, #3480]
    4238:	91366210 	add	x16, x16, #0xd98
    423c:	d61f0220 	br	x17

0000000000004240 <getpid@plt>:
    4240:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4244:	f946d211 	ldr	x17, [x16, #3488]
    4248:	91368210 	add	x16, x16, #0xda0
    424c:	d61f0220 	br	x17

0000000000004250 <perror@plt>:
    4250:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4254:	f946d611 	ldr	x17, [x16, #3496]
    4258:	9136a210 	add	x16, x16, #0xda8
    425c:	d61f0220 	br	x17

0000000000004260 <__android_log_buf_print@plt>:
    4260:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4264:	f946da11 	ldr	x17, [x16, #3504]
    4268:	9136c210 	add	x16, x16, #0xdb0
    426c:	d61f0220 	br	x17

0000000000004270 <QSEECom_start_app@plt>:
    4270:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4274:	f946de11 	ldr	x17, [x16, #3512]
    4278:	9136e210 	add	x16, x16, #0xdb8
    427c:	d61f0220 	br	x17

0000000000004280 <timer_delete@plt>:
    4280:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4284:	f946e211 	ldr	x17, [x16, #3520]
    4288:	91370210 	add	x16, x16, #0xdc0
    428c:	d61f0220 	br	x17

0000000000004290 <time@plt>:
    4290:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4294:	f946e611 	ldr	x17, [x16, #3528]
    4298:	91372210 	add	x16, x16, #0xdc8
    429c:	d61f0220 	br	x17

00000000000042a0 <fclose@plt>:
    42a0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42a4:	f946ea11 	ldr	x17, [x16, #3536]
    42a8:	91374210 	add	x16, x16, #0xdd0
    42ac:	d61f0220 	br	x17

00000000000042b0 <fflush@plt>:
    42b0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42b4:	f946ee11 	ldr	x17, [x16, #3544]
    42b8:	91376210 	add	x16, x16, #0xdd8
    42bc:	d61f0220 	br	x17

00000000000042c0 <__stack_chk_fail@plt>:
    42c0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42c4:	f946f211 	ldr	x17, [x16, #3552]
    42c8:	91378210 	add	x16, x16, #0xde0
    42cc:	d61f0220 	br	x17

00000000000042d0 <gettimeofday@plt>:
    42d0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42d4:	f946f611 	ldr	x17, [x16, #3560]
    42d8:	9137a210 	add	x16, x16, #0xde8
    42dc:	d61f0220 	br	x17

00000000000042e0 <timer_settime@plt>:
    42e0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42e4:	f946fa11 	ldr	x17, [x16, #3568]
    42e8:	9137c210 	add	x16, x16, #0xdf0
    42ec:	d61f0220 	br	x17

00000000000042f0 <QSEECom_shutdown_app@plt>:
    42f0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    42f4:	f946fe11 	ldr	x17, [x16, #3576]
    42f8:	9137e210 	add	x16, x16, #0xdf8
    42fc:	d61f0220 	br	x17

0000000000004300 <ioctl@plt>:
    4300:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4304:	f9470211 	ldr	x17, [x16, #3584]
    4308:	91380210 	add	x16, x16, #0xe00
    430c:	d61f0220 	br	x17

0000000000004310 <QSEECom_scale_bus_bandwidth@plt>:
    4310:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4314:	f9470611 	ldr	x17, [x16, #3592]
    4318:	91382210 	add	x16, x16, #0xe08
    431c:	d61f0220 	br	x17

0000000000004320 <__android_log_print@plt>:
    4320:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4324:	f9470a11 	ldr	x17, [x16, #3600]
    4328:	91384210 	add	x16, x16, #0xe10
    432c:	d61f0220 	br	x17

0000000000004330 <sem_trywait@plt>:
    4330:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4334:	f9470e11 	ldr	x17, [x16, #3608]
    4338:	91386210 	add	x16, x16, #0xe18
    433c:	d61f0220 	br	x17

0000000000004340 <fs_mkdirs@plt>:
    4340:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4344:	f9471211 	ldr	x17, [x16, #3616]
    4348:	91388210 	add	x16, x16, #0xe20
    434c:	d61f0220 	br	x17

0000000000004350 <strcmp@plt>:
    4350:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4354:	f9471611 	ldr	x17, [x16, #3624]
    4358:	9138a210 	add	x16, x16, #0xe28
    435c:	d61f0220 	br	x17

0000000000004360 <sprintf@plt>:
    4360:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4364:	f9471a11 	ldr	x17, [x16, #3632]
    4368:	9138c210 	add	x16, x16, #0xe30
    436c:	d61f0220 	br	x17

0000000000004370 <sigaction@plt>:
    4370:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4374:	f9471e11 	ldr	x17, [x16, #3640]
    4378:	9138e210 	add	x16, x16, #0xe38
    437c:	d61f0220 	br	x17

0000000000004380 <pthread_mutex_lock@plt>:
    4380:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4384:	f9472211 	ldr	x17, [x16, #3648]
    4388:	91390210 	add	x16, x16, #0xe40
    438c:	d61f0220 	br	x17

0000000000004390 <mmap@plt>:
    4390:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4394:	f9472611 	ldr	x17, [x16, #3656]
    4398:	91392210 	add	x16, x16, #0xe48
    439c:	d61f0220 	br	x17

00000000000043a0 <sem_init@plt>:
    43a0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43a4:	f9472a11 	ldr	x17, [x16, #3664]
    43a8:	91394210 	add	x16, x16, #0xe50
    43ac:	d61f0220 	br	x17

00000000000043b0 <strstr@plt>:
    43b0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43b4:	f9472e11 	ldr	x17, [x16, #3672]
    43b8:	91396210 	add	x16, x16, #0xe58
    43bc:	d61f0220 	br	x17

00000000000043c0 <usleep@plt>:
    43c0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43c4:	f9473211 	ldr	x17, [x16, #3680]
    43c8:	91398210 	add	x16, x16, #0xe60
    43cc:	d61f0220 	br	x17

00000000000043d0 <strlen@plt>:
    43d0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43d4:	f9473611 	ldr	x17, [x16, #3688]
    43d8:	9139a210 	add	x16, x16, #0xe68
    43dc:	d61f0220 	br	x17

00000000000043e0 <QSEECom_send_modified_cmd@plt>:
    43e0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43e4:	f9473a11 	ldr	x17, [x16, #3696]
    43e8:	9139c210 	add	x16, x16, #0xe70
    43ec:	d61f0220 	br	x17

00000000000043f0 <close@plt>:
    43f0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    43f4:	f9473e11 	ldr	x17, [x16, #3704]
    43f8:	9139e210 	add	x16, x16, #0xe78
    43fc:	d61f0220 	br	x17

0000000000004400 <sem_getvalue@plt>:
    4400:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4404:	f9474211 	ldr	x17, [x16, #3712]
    4408:	913a0210 	add	x16, x16, #0xe80
    440c:	d61f0220 	br	x17

0000000000004410 <localtime@plt>:
    4410:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4414:	f9474611 	ldr	x17, [x16, #3720]
    4418:	913a2210 	add	x16, x16, #0xe88
    441c:	d61f0220 	br	x17

0000000000004420 <munmap@plt>:
    4420:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4424:	f9474a11 	ldr	x17, [x16, #3728]
    4428:	913a4210 	add	x16, x16, #0xe90
    442c:	d61f0220 	br	x17

0000000000004430 <malloc@plt>:
    4430:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4434:	f9474e11 	ldr	x17, [x16, #3736]
    4438:	913a6210 	add	x16, x16, #0xe98
    443c:	d61f0220 	br	x17

0000000000004440 <memcpy@plt>:
    4440:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4444:	f9475211 	ldr	x17, [x16, #3744]
    4448:	913a8210 	add	x16, x16, #0xea0
    444c:	d61f0220 	br	x17

0000000000004450 <memset@plt>:
    4450:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4454:	f9475611 	ldr	x17, [x16, #3752]
    4458:	913aa210 	add	x16, x16, #0xea8
    445c:	d61f0220 	br	x17

0000000000004460 <fopen@plt>:
    4460:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4464:	f9475a11 	ldr	x17, [x16, #3760]
    4468:	913ac210 	add	x16, x16, #0xeb0
    446c:	d61f0220 	br	x17

0000000000004470 <fwrite@plt>:
    4470:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4474:	f9475e11 	ldr	x17, [x16, #3768]
    4478:	913ae210 	add	x16, x16, #0xeb8
    447c:	d61f0220 	br	x17

0000000000004480 <fcntl@plt>:
    4480:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4484:	f9476211 	ldr	x17, [x16, #3776]
    4488:	913b0210 	add	x16, x16, #0xec0
    448c:	d61f0220 	br	x17

0000000000004490 <free@plt>:
    4490:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    4494:	f9476611 	ldr	x17, [x16, #3784]
    4498:	913b2210 	add	x16, x16, #0xec8
    449c:	d61f0220 	br	x17

00000000000044a0 <__system_property_get@plt>:
    44a0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    44a4:	f9476a11 	ldr	x17, [x16, #3792]
    44a8:	913b4210 	add	x16, x16, #0xed0
    44ac:	d61f0220 	br	x17

00000000000044b0 <property_get_int32@plt>:
    44b0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    44b4:	f9476e11 	ldr	x17, [x16, #3800]
    44b8:	913b6210 	add	x16, x16, #0xed8
    44bc:	d61f0220 	br	x17

00000000000044c0 <pthread_mutex_unlock@plt>:
    44c0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    44c4:	f9477211 	ldr	x17, [x16, #3808]
    44c8:	913b8210 	add	x16, x16, #0xee0
    44cc:	d61f0220 	br	x17

00000000000044d0 <__cxa_atexit@plt>:
    44d0:	b0000130 	adrp	x16, 29000 <gf_dump_data_interface@@Base+0x18760>
    44d4:	f9477611 	ldr	x17, [x16, #3816]
    44d8:	913ba210 	add	x16, x16, #0xee8
    44dc:	d61f0220 	br	x17

Disassembly of section .text:

00000000000044e0 <gf_open@@Base-0x3c>:
    44e0:	d0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    44e4:	91000000 	add	x0, x0, #0x0
    44e8:	17ffff3e 	b	41e0 <__cxa_finalize@plt>
    44ec:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    44f0:	910003fd 	mov	x29, sp
    44f4:	b4000040 	cbz	x0, 44fc <__cxa_atexit@plt+0x2c>
    44f8:	d63f0000 	blr	x0
    44fc:	a8c17bfd 	ldp	x29, x30, [sp], #16
    4500:	d65f03c0 	ret
    4504:	aa0003e1 	mov	x1, x0
    4508:	d0000122 	adrp	x2, 2a000 <gf_dump_data_interface@@Base+0x19760>
    450c:	90000000 	adrp	x0, 4000 <sem_wait@plt-0x190>
    4510:	91000042 	add	x2, x2, #0x0
    4514:	9113b000 	add	x0, x0, #0x4ec
    4518:	17ffffee 	b	44d0 <__cxa_atexit@plt>

000000000000451c <gf_open@@Base>:
    451c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    4520:	910003fd 	mov	x29, sp
    4524:	f9000bf3 	str	x19, [sp, #16]
    4528:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    452c:	f947be73 	ldr	x19, [x19, #3960]
    4530:	b9400264 	ldr	w4, [x19]
    4534:	35000304 	cbnz	w4, 4594 <gf_open@@Base+0x78>
    4538:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    453c:	52800041 	mov	w1, #0x2                   	// #2
    4540:	91034063 	add	x3, x3, #0xd0
    4544:	f90013a3 	str	x3, [x29, #32]
    4548:	91004064 	add	x4, x3, #0x10
    454c:	f90017a4 	str	x4, [x29, #40]
    4550:	aa0403e0 	mov	x0, x4
    4554:	97ffff17 	bl	41b0 <open@plt>
    4558:	2a0003e5 	mov	w5, w0
    455c:	b9000260 	str	w0, [x19]
    4560:	f94017a4 	ldr	x4, [x29, #40]
    4564:	f94013a3 	ldr	x3, [x29, #32]
    4568:	37f802a5 	tbnz	w5, #31, 45bc <gf_open@@Base+0xa0>
    456c:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4570:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4574:	52800060 	mov	w0, #0x3                   	// #3
    4578:	9109c021 	add	x1, x1, #0x270
    457c:	910b8042 	add	x2, x2, #0x2e0
    4580:	97ffff68 	bl	4320 <__android_log_print@plt>
    4584:	b9400260 	ldr	w0, [x19]
    4588:	f9400bf3 	ldr	x19, [sp, #16]
    458c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    4590:	d65f03c0 	ret
    4594:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4598:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    459c:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    45a0:	52800060 	mov	w0, #0x3                   	// #3
    45a4:	9109c021 	add	x1, x1, #0x270
    45a8:	910a0042 	add	x2, x2, #0x280
    45ac:	91034063 	add	x3, x3, #0xd0
    45b0:	97ffff5c 	bl	4320 <__android_log_print@plt>
    45b4:	128011e0 	mov	w0, #0xffffff70            	// #-144
    45b8:	17fffff4 	b	4588 <gf_open@@Base+0x6c>
    45bc:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    45c0:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    45c4:	9109c021 	add	x1, x1, #0x270
    45c8:	910ac042 	add	x2, x2, #0x2b0
    45cc:	52800060 	mov	w0, #0x3                   	// #3
    45d0:	97ffff54 	bl	4320 <__android_log_print@plt>
    45d4:	528000e0 	mov	w0, #0x7                   	// #7
    45d8:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    45dc:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    45e0:	2a0003e1 	mov	w1, w0
    45e4:	910b2042 	add	x2, x2, #0x2c8
    45e8:	910b6063 	add	x3, x3, #0x2d8
    45ec:	97ffff1d 	bl	4260 <__android_log_buf_print@plt>
    45f0:	12801000 	mov	w0, #0xffffff7f            	// #-129
    45f4:	17ffffe5 	b	4588 <gf_open@@Base+0x6c>

00000000000045f8 <gf_close@@Base>:
    45f8:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    45fc:	910003fd 	mov	x29, sp
    4600:	f9000bf3 	str	x19, [sp, #16]
    4604:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    4608:	f947be73 	ldr	x19, [x19, #3960]
    460c:	b9400264 	ldr	w4, [x19]
    4610:	35000184 	cbnz	w4, 4640 <gf_close@@Base+0x48>
    4614:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4618:	f9400bf3 	ldr	x19, [sp, #16]
    461c:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4620:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4624:	91034063 	add	x3, x3, #0xd0
    4628:	52800060 	mov	w0, #0x3                   	// #3
    462c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    4630:	9109c021 	add	x1, x1, #0x270
    4634:	910ce042 	add	x2, x2, #0x338
    4638:	91008063 	add	x3, x3, #0x20
    463c:	17ffff39 	b	4320 <__android_log_print@plt>
    4640:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4644:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4648:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    464c:	91034063 	add	x3, x3, #0xd0
    4650:	9109c021 	add	x1, x1, #0x270
    4654:	910c4042 	add	x2, x2, #0x310
    4658:	91008063 	add	x3, x3, #0x20
    465c:	52800060 	mov	w0, #0x3                   	// #3
    4660:	97ffff30 	bl	4320 <__android_log_print@plt>
    4664:	b9400260 	ldr	w0, [x19]
    4668:	97ffff62 	bl	43f0 <close@plt>
    466c:	b900027f 	str	wzr, [x19]
    4670:	f9400bf3 	ldr	x19, [sp, #16]
    4674:	a8c27bfd 	ldp	x29, x30, [sp], #32
    4678:	d65f03c0 	ret

000000000000467c <gf_handler_register@@Base>:
    467c:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    4680:	aa0003e4 	mov	x4, x0
    4684:	910003fd 	mov	x29, sp
    4688:	a90153f3 	stp	x19, x20, [sp, #16]
    468c:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    4690:	f90013f5 	str	x21, [sp, #32]
    4694:	f947c260 	ldr	x0, [x19, #3968]
    4698:	f9400000 	ldr	x0, [x0]
    469c:	f9002fa0 	str	x0, [x29, #88]
    46a0:	b4000464 	cbz	x4, 472c <gf_handler_register@@Base+0xb0>
    46a4:	9100e3a3 	add	x3, x29, #0x38
    46a8:	b0000134 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    46ac:	aa0303e1 	mov	x1, x3
    46b0:	d2800002 	mov	x2, #0x0                   	// #0
    46b4:	528003a0 	mov	w0, #0x1d                  	// #29
    46b8:	a9007c7f 	stp	xzr, xzr, [x3]
    46bc:	a9017c7f 	stp	xzr, xzr, [x3, #16]
    46c0:	f90023a4 	str	x4, [x29, #64]
    46c4:	97ffff2b 	bl	4370 <sigaction@plt>
    46c8:	f947be94 	ldr	x20, [x20, #3960]
    46cc:	b9400295 	ldr	w21, [x20]
    46d0:	97fffedc 	bl	4240 <getpid@plt>
    46d4:	52800101 	mov	w1, #0x8                   	// #8
    46d8:	2a0003e2 	mov	w2, w0
    46dc:	2a1503e0 	mov	w0, w21
    46e0:	97ffff68 	bl	4480 <fcntl@plt>
    46e4:	b9400294 	ldr	w20, [x20]
    46e8:	52800061 	mov	w1, #0x3                   	// #3
    46ec:	2a1403e0 	mov	w0, w20
    46f0:	97ffff64 	bl	4480 <fcntl@plt>
    46f4:	32130002 	orr	w2, w0, #0x2000
    46f8:	52800081 	mov	w1, #0x4                   	// #4
    46fc:	2a1403e0 	mov	w0, w20
    4700:	97ffff60 	bl	4480 <fcntl@plt>
    4704:	52800000 	mov	w0, #0x0                   	// #0
    4708:	f947c273 	ldr	x19, [x19, #3968]
    470c:	f9402fa2 	ldr	x2, [x29, #88]
    4710:	f9400261 	ldr	x1, [x19]
    4714:	eb01005f 	cmp	x2, x1
    4718:	54000201 	b.ne	4758 <gf_handler_register@@Base+0xdc>  // b.any
    471c:	a94153f3 	ldp	x19, x20, [sp, #16]
    4720:	f94013f5 	ldr	x21, [sp, #32]
    4724:	a8c67bfd 	ldp	x29, x30, [sp], #96
    4728:	d65f03c0 	ret
    472c:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4730:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4734:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4738:	91034063 	add	x3, x3, #0xd0
    473c:	52800060 	mov	w0, #0x3                   	// #3
    4740:	9109c021 	add	x1, x1, #0x270
    4744:	910d6042 	add	x2, x2, #0x358
    4748:	9100c063 	add	x3, x3, #0x30
    474c:	97fffef5 	bl	4320 <__android_log_print@plt>
    4750:	12801080 	mov	w0, #0xffffff7b            	// #-133
    4754:	17ffffed 	b	4708 <gf_handler_register@@Base+0x8c>
    4758:	97fffeda 	bl	42c0 <__stack_chk_fail@plt>

000000000000475c <gf_handler_unregister@@Base>:
    475c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    4760:	910003fd 	mov	x29, sp
    4764:	a90153f3 	stp	x19, x20, [sp, #16]
    4768:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    476c:	f947be73 	ldr	x19, [x19, #3960]
    4770:	b9400274 	ldr	w20, [x19]
    4774:	97fffeb3 	bl	4240 <getpid@plt>
    4778:	52800101 	mov	w1, #0x8                   	// #8
    477c:	2a0003e2 	mov	w2, w0
    4780:	2a1403e0 	mov	w0, w20
    4784:	97ffff3f 	bl	4480 <fcntl@plt>
    4788:	b9400273 	ldr	w19, [x19]
    478c:	52800061 	mov	w1, #0x3                   	// #3
    4790:	2a1303e0 	mov	w0, w19
    4794:	97ffff3b 	bl	4480 <fcntl@plt>
    4798:	12127802 	and	w2, w0, #0xffffdfff
    479c:	2a1303e0 	mov	w0, w19
    47a0:	52800081 	mov	w1, #0x4                   	// #4
    47a4:	a94153f3 	ldp	x19, x20, [sp, #16]
    47a8:	a8c27bfd 	ldp	x29, x30, [sp], #32
    47ac:	17ffff35 	b	4480 <fcntl@plt>

00000000000047b0 <gf_enable_irq@@Base>:
    47b0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    47b4:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    47b8:	52800024 	mov	w4, #0x1                   	// #1
    47bc:	910003fd 	mov	x29, sp
    47c0:	a90153f3 	stp	x19, x20, [sp, #16]
    47c4:	b0000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    47c8:	b0000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    47cc:	91034273 	add	x19, x19, #0xd0
    47d0:	f90013f5 	str	x21, [sp, #32]
    47d4:	9109c294 	add	x20, x20, #0x270
    47d8:	91014273 	add	x19, x19, #0x50
    47dc:	d0000135 	adrp	x21, 2a000 <gf_dump_data_interface@@Base+0x19760>
    47e0:	52800060 	mov	w0, #0x3                   	// #3
    47e4:	aa1403e1 	mov	x1, x20
    47e8:	910e0042 	add	x2, x2, #0x380
    47ec:	aa1303e3 	mov	x3, x19
    47f0:	391fa2a4 	strb	w4, [x21, #2024]
    47f4:	97fffecb 	bl	4320 <__android_log_print@plt>
    47f8:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    47fc:	f947bc00 	ldr	x0, [x0, #3960]
    4800:	b9400000 	ldr	w0, [x0]
    4804:	34000140 	cbz	w0, 482c <gf_enable_irq@@Base+0x7c>
    4808:	5288e021 	mov	w1, #0x4701                	// #18177
    480c:	97fffebd 	bl	4300 <ioctl@plt>
    4810:	52800001 	mov	w1, #0x0                   	// #0
    4814:	37f801e0 	tbnz	w0, #31, 4850 <gf_enable_irq@@Base+0xa0>
    4818:	2a0103e0 	mov	w0, w1
    481c:	f94013f5 	ldr	x21, [sp, #32]
    4820:	a94153f3 	ldp	x19, x20, [sp, #16]
    4824:	a8c37bfd 	ldp	x29, x30, [sp], #48
    4828:	d65f03c0 	ret
    482c:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4830:	aa1403e1 	mov	x1, x20
    4834:	52800060 	mov	w0, #0x3                   	// #3
    4838:	910e6042 	add	x2, x2, #0x398
    483c:	aa1303e3 	mov	x3, x19
    4840:	97fffeb8 	bl	4320 <__android_log_print@plt>
    4844:	391fa2bf 	strb	wzr, [x21, #2024]
    4848:	12801001 	mov	w1, #0xffffff7f            	// #-129
    484c:	17fffff3 	b	4818 <gf_enable_irq@@Base+0x68>
    4850:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4854:	aa1403e1 	mov	x1, x20
    4858:	52800060 	mov	w0, #0x3                   	// #3
    485c:	910f4042 	add	x2, x2, #0x3d0
    4860:	aa1303e3 	mov	x3, x19
    4864:	97fffeaf 	bl	4320 <__android_log_print@plt>
    4868:	391fa2bf 	strb	wzr, [x21, #2024]
    486c:	12800001 	mov	w1, #0xffffffff            	// #-1
    4870:	17ffffea 	b	4818 <gf_enable_irq@@Base+0x68>

0000000000004874 <gf_disable_irq@@Base>:
    4874:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    4878:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    487c:	52800060 	mov	w0, #0x3                   	// #3
    4880:	910003fd 	mov	x29, sp
    4884:	a90153f3 	stp	x19, x20, [sp, #16]
    4888:	b0000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    488c:	b0000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    4890:	91034273 	add	x19, x19, #0xd0
    4894:	f90013f5 	str	x21, [sp, #32]
    4898:	9109c294 	add	x20, x20, #0x270
    489c:	91018273 	add	x19, x19, #0x60
    48a0:	d0000135 	adrp	x21, 2a000 <gf_dump_data_interface@@Base+0x19760>
    48a4:	aa1403e1 	mov	x1, x20
    48a8:	910fe042 	add	x2, x2, #0x3f8
    48ac:	aa1303e3 	mov	x3, x19
    48b0:	391fa2bf 	strb	wzr, [x21, #2024]
    48b4:	97fffe9b 	bl	4320 <__android_log_print@plt>
    48b8:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    48bc:	f947bc00 	ldr	x0, [x0, #3960]
    48c0:	b9400000 	ldr	w0, [x0]
    48c4:	34000140 	cbz	w0, 48ec <gf_disable_irq@@Base+0x78>
    48c8:	5288e001 	mov	w1, #0x4700                	// #18176
    48cc:	97fffe8d 	bl	4300 <ioctl@plt>
    48d0:	52800001 	mov	w1, #0x0                   	// #0
    48d4:	37f80200 	tbnz	w0, #31, 4914 <gf_disable_irq@@Base+0xa0>
    48d8:	2a0103e0 	mov	w0, w1
    48dc:	f94013f5 	ldr	x21, [sp, #32]
    48e0:	a94153f3 	ldp	x19, x20, [sp, #16]
    48e4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    48e8:	d65f03c0 	ret
    48ec:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    48f0:	aa1403e1 	mov	x1, x20
    48f4:	52800060 	mov	w0, #0x3                   	// #3
    48f8:	910e6042 	add	x2, x2, #0x398
    48fc:	aa1303e3 	mov	x3, x19
    4900:	97fffe88 	bl	4320 <__android_log_print@plt>
    4904:	52800020 	mov	w0, #0x1                   	// #1
    4908:	12801001 	mov	w1, #0xffffff7f            	// #-129
    490c:	391fa2a0 	strb	w0, [x21, #2024]
    4910:	17fffff2 	b	48d8 <gf_disable_irq@@Base+0x64>
    4914:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4918:	aa1403e1 	mov	x1, x20
    491c:	52800060 	mov	w0, #0x3                   	// #3
    4920:	91104042 	add	x2, x2, #0x410
    4924:	aa1303e3 	mov	x3, x19
    4928:	97fffe7e 	bl	4320 <__android_log_print@plt>
    492c:	52800020 	mov	w0, #0x1                   	// #1
    4930:	12800001 	mov	w1, #0xffffffff            	// #-1
    4934:	391fa2a0 	strb	w0, [x21, #2024]
    4938:	17ffffe8 	b	48d8 <gf_disable_irq@@Base+0x64>

000000000000493c <gf_irq_is_enabled@@Base>:
    493c:	d0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    4940:	395fa000 	ldrb	w0, [x0, #2024]
    4944:	d65f03c0 	ret

0000000000004948 <gf_hw_reset@@Base>:
    4948:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    494c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    4950:	910003fd 	mov	x29, sp
    4954:	f947bc00 	ldr	x0, [x0, #3960]
    4958:	b9400000 	ldr	w0, [x0]
    495c:	34000100 	cbz	w0, 497c <gf_hw_reset@@Base+0x34>
    4960:	5288e061 	mov	w1, #0x4703                	// #18179
    4964:	97fffe67 	bl	4300 <ioctl@plt>
    4968:	52800001 	mov	w1, #0x0                   	// #0
    496c:	37f801e0 	tbnz	w0, #31, 49a8 <gf_hw_reset@@Base+0x60>
    4970:	2a0103e0 	mov	w0, w1
    4974:	a8c17bfd 	ldp	x29, x30, [sp], #16
    4978:	d65f03c0 	ret
    497c:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4980:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4984:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4988:	91034063 	add	x3, x3, #0xd0
    498c:	9109c021 	add	x1, x1, #0x270
    4990:	52800060 	mov	w0, #0x3                   	// #3
    4994:	910e6042 	add	x2, x2, #0x398
    4998:	9101c063 	add	x3, x3, #0x70
    499c:	97fffe61 	bl	4320 <__android_log_print@plt>
    49a0:	12801001 	mov	w1, #0xffffff7f            	// #-129
    49a4:	17fffff3 	b	4970 <gf_hw_reset@@Base+0x28>
    49a8:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    49ac:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    49b0:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    49b4:	91034063 	add	x3, x3, #0xd0
    49b8:	9109c021 	add	x1, x1, #0x270
    49bc:	52800060 	mov	w0, #0x3                   	// #3
    49c0:	91110042 	add	x2, x2, #0x440
    49c4:	9101c063 	add	x3, x3, #0x70
    49c8:	97fffe56 	bl	4320 <__android_log_print@plt>
    49cc:	12800001 	mov	w1, #0xffffffff            	// #-1
    49d0:	17ffffe8 	b	4970 <gf_hw_reset@@Base+0x28>

00000000000049d4 <gf_cool_boot@@Base>:
    49d4:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    49d8:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    49dc:	910003fd 	mov	x29, sp
    49e0:	f947bc00 	ldr	x0, [x0, #3960]
    49e4:	b9400000 	ldr	w0, [x0]
    49e8:	34000100 	cbz	w0, 4a08 <gf_cool_boot@@Base+0x34>
    49ec:	5288e081 	mov	w1, #0x4704                	// #18180
    49f0:	97fffe44 	bl	4300 <ioctl@plt>
    49f4:	52800001 	mov	w1, #0x0                   	// #0
    49f8:	37f801e0 	tbnz	w0, #31, 4a34 <gf_cool_boot@@Base+0x60>
    49fc:	2a0103e0 	mov	w0, w1
    4a00:	a8c17bfd 	ldp	x29, x30, [sp], #16
    4a04:	d65f03c0 	ret
    4a08:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4a0c:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4a10:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4a14:	91034063 	add	x3, x3, #0xd0
    4a18:	9109c021 	add	x1, x1, #0x270
    4a1c:	52800060 	mov	w0, #0x3                   	// #3
    4a20:	910e6042 	add	x2, x2, #0x398
    4a24:	91020063 	add	x3, x3, #0x80
    4a28:	97fffe3e 	bl	4320 <__android_log_print@plt>
    4a2c:	12801001 	mov	w1, #0xffffff7f            	// #-129
    4a30:	17fffff3 	b	49fc <gf_cool_boot@@Base+0x28>
    4a34:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4a38:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4a3c:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4a40:	91034063 	add	x3, x3, #0xd0
    4a44:	9109c021 	add	x1, x1, #0x270
    4a48:	52800060 	mov	w0, #0x3                   	// #3
    4a4c:	9111a042 	add	x2, x2, #0x468
    4a50:	91020063 	add	x3, x3, #0x80
    4a54:	97fffe33 	bl	4320 <__android_log_print@plt>
    4a58:	12800001 	mov	w1, #0xffffffff            	// #-1
    4a5c:	17ffffe8 	b	49fc <gf_cool_boot@@Base+0x28>

0000000000004a60 <gf_set_speed@@Base>:
    4a60:	52800000 	mov	w0, #0x0                   	// #0
    4a64:	d65f03c0 	ret

0000000000004a68 <gf_read_pm_fb@@Base>:
    4a68:	aa0003e2 	mov	x2, x0
    4a6c:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    4a70:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    4a74:	910003fd 	mov	x29, sp
    4a78:	f947bc00 	ldr	x0, [x0, #3960]
    4a7c:	b9400000 	ldr	w0, [x0]
    4a80:	34000100 	cbz	w0, 4aa0 <gf_read_pm_fb@@Base+0x38>
    4a84:	5288e101 	mov	w1, #0x4708                	// #18184
    4a88:	97fffe1e 	bl	4300 <ioctl@plt>
    4a8c:	52800001 	mov	w1, #0x0                   	// #0
    4a90:	37f801e0 	tbnz	w0, #31, 4acc <gf_read_pm_fb@@Base+0x64>
    4a94:	2a0103e0 	mov	w0, w1
    4a98:	a8c17bfd 	ldp	x29, x30, [sp], #16
    4a9c:	d65f03c0 	ret
    4aa0:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4aa4:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4aa8:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4aac:	91034063 	add	x3, x3, #0xd0
    4ab0:	9109c021 	add	x1, x1, #0x270
    4ab4:	52800060 	mov	w0, #0x3                   	// #3
    4ab8:	910e6042 	add	x2, x2, #0x398
    4abc:	91024063 	add	x3, x3, #0x90
    4ac0:	97fffe18 	bl	4320 <__android_log_print@plt>
    4ac4:	12801001 	mov	w1, #0xffffff7f            	// #-129
    4ac8:	17fffff3 	b	4a94 <gf_read_pm_fb@@Base+0x2c>
    4acc:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4ad0:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4ad4:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4ad8:	91034063 	add	x3, x3, #0xd0
    4adc:	9109c021 	add	x1, x1, #0x270
    4ae0:	52800060 	mov	w0, #0x3                   	// #3
    4ae4:	91124042 	add	x2, x2, #0x490
    4ae8:	91024063 	add	x3, x3, #0x90
    4aec:	97fffe0d 	bl	4320 <__android_log_print@plt>
    4af0:	12800001 	mov	w1, #0xffffffff            	// #-1
    4af4:	17ffffe8 	b	4a94 <gf_read_pm_fb@@Base+0x2c>

0000000000004af8 <gf_send_key@@Base>:
    4af8:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    4afc:	910003fd 	mov	x29, sp
    4b00:	a90153f3 	stp	x19, x20, [sp, #16]
    4b04:	f90013f5 	str	x21, [sp, #32]
    4b08:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    4b0c:	2a0003f5 	mov	w21, w0
    4b10:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    4b14:	2a0103f4 	mov	w20, w1
    4b18:	f9001bbf 	str	xzr, [x29, #48]
    4b1c:	f947c261 	ldr	x1, [x19, #3968]
    4b20:	f947bc00 	ldr	x0, [x0, #3960]
    4b24:	f9400021 	ldr	x1, [x1]
    4b28:	b9400000 	ldr	w0, [x0]
    4b2c:	f9001fa1 	str	x1, [x29, #56]
    4b30:	34000260 	cbz	w0, 4b7c <gf_send_key@@Base+0x84>
    4b34:	5288e0a1 	mov	w1, #0x4705                	// #18181
    4b38:	9100c3a2 	add	x2, x29, #0x30
    4b3c:	72a80101 	movk	w1, #0x4008, lsl #16
    4b40:	b90033b5 	str	w21, [x29, #48]
    4b44:	b90037b4 	str	w20, [x29, #52]
    4b48:	97fffdee 	bl	4300 <ioctl@plt>
    4b4c:	52800001 	mov	w1, #0x0                   	// #0
    4b50:	37f802c0 	tbnz	w0, #31, 4ba8 <gf_send_key@@Base+0xb0>
    4b54:	f947c273 	ldr	x19, [x19, #3968]
    4b58:	2a0103e0 	mov	w0, w1
    4b5c:	f9401fa2 	ldr	x2, [x29, #56]
    4b60:	f9400261 	ldr	x1, [x19]
    4b64:	eb01005f 	cmp	x2, x1
    4b68:	540003a1 	b.ne	4bdc <gf_send_key@@Base+0xe4>  // b.any
    4b6c:	a94153f3 	ldp	x19, x20, [sp, #16]
    4b70:	f94013f5 	ldr	x21, [sp, #32]
    4b74:	a8c47bfd 	ldp	x29, x30, [sp], #64
    4b78:	d65f03c0 	ret
    4b7c:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4b80:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4b84:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4b88:	91034063 	add	x3, x3, #0xd0
    4b8c:	9109c021 	add	x1, x1, #0x270
    4b90:	52800060 	mov	w0, #0x3                   	// #3
    4b94:	910e6042 	add	x2, x2, #0x398
    4b98:	91028063 	add	x3, x3, #0xa0
    4b9c:	97fffde1 	bl	4320 <__android_log_print@plt>
    4ba0:	12801001 	mov	w1, #0xffffff7f            	// #-129
    4ba4:	17ffffec 	b	4b54 <gf_send_key@@Base+0x5c>
    4ba8:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4bac:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4bb0:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4bb4:	91034063 	add	x3, x3, #0xd0
    4bb8:	9109c021 	add	x1, x1, #0x270
    4bbc:	52800060 	mov	w0, #0x3                   	// #3
    4bc0:	9112c042 	add	x2, x2, #0x4b0
    4bc4:	91028063 	add	x3, x3, #0xa0
    4bc8:	2a1503e4 	mov	w4, w21
    4bcc:	2a1403e5 	mov	w5, w20
    4bd0:	97fffdd4 	bl	4320 <__android_log_print@plt>
    4bd4:	12800001 	mov	w1, #0xffffffff            	// #-1
    4bd8:	17ffffdf 	b	4b54 <gf_send_key@@Base+0x5c>
    4bdc:	97fffdb9 	bl	42c0 <__stack_chk_fail@plt>

0000000000004be0 <gf_reset_sensor@@Base>:
    4be0:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    4be4:	910003fd 	mov	x29, sp
    4be8:	a9025bf5 	stp	x21, x22, [sp, #32]
    4bec:	b0000135 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    4bf0:	f90023f9 	str	x25, [sp, #64]
    4bf4:	a90153f3 	stp	x19, x20, [sp, #16]
    4bf8:	2a0003f3 	mov	w19, w0
    4bfc:	b0000076 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    4c00:	f947c2a0 	ldr	x0, [x21, #3968]
    4c04:	b0000134 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    4c08:	a90363f7 	stp	x23, x24, [sp, #48]
    4c0c:	b0000078 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    4c10:	910163b9 	add	x25, x29, #0x58
    4c14:	f9400000 	ldr	x0, [x0]
    4c18:	f90037a0 	str	x0, [x29, #104]
    4c1c:	97ffff48 	bl	493c <gf_irq_is_enabled@@Base>
    4c20:	2a0003f7 	mov	w23, w0
    4c24:	910342c3 	add	x3, x22, #0xd0
    4c28:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4c2c:	9109c301 	add	x1, x24, #0x270
    4c30:	91138042 	add	x2, x2, #0x4e0
    4c34:	91030063 	add	x3, x3, #0xc0
    4c38:	2a1703e4 	mov	w4, w23
    4c3c:	52800060 	mov	w0, #0x3                   	// #3
    4c40:	97fffdb8 	bl	4320 <__android_log_print@plt>
    4c44:	97ffff0c 	bl	4874 <gf_disable_irq@@Base>
    4c48:	52986a00 	mov	w0, #0xc350                	// #50000
    4c4c:	97fffddd 	bl	43c0 <usleep@plt>
    4c50:	f947f280 	ldr	x0, [x20, #4064]
    4c54:	b900001f 	str	wzr, [x0]
    4c58:	94001aa4 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4c5c:	97ffff3b 	bl	4948 <gf_hw_reset@@Base>
    4c60:	14000004 	b	4c70 <gf_reset_sensor@@Base+0x90>
    4c64:	51000673 	sub	w19, w19, #0x1
    4c68:	3100067f 	cmn	w19, #0x1
    4c6c:	54000220 	b.eq	4cb0 <gf_reset_sensor@@Base+0xd0>  // b.none
    4c70:	5284e200 	mov	w0, #0x2710                	// #10000
    4c74:	97fffdd3 	bl	43c0 <usleep@plt>
    4c78:	aa1903e0 	mov	x0, x25
    4c7c:	940003c0 	bl	5b7c <gf_secspi_read_status@@Base>
    4c80:	39400721 	ldrb	w1, [x25, #1]
    4c84:	11008020 	add	w0, w1, #0x20
    4c88:	53001c00 	uxtb	w0, w0
    4c8c:	7100041f 	cmp	w0, #0x1
    4c90:	540002c9 	b.ls	4ce8 <gf_reset_sensor@@Base+0x108>  // b.plast
    4c94:	7103903f 	cmp	w1, #0xe4
    4c98:	54000280 	b.eq	4ce8 <gf_reset_sensor@@Base+0x108>  // b.none
    4c9c:	34fffe41 	cbz	w1, 4c64 <gf_reset_sensor@@Base+0x84>
    4ca0:	94001a92 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4ca4:	51000673 	sub	w19, w19, #0x1
    4ca8:	3100067f 	cmn	w19, #0x1
    4cac:	54fffe21 	b.ne	4c70 <gf_reset_sensor@@Base+0x90>  // b.any
    4cb0:	94001a8e 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4cb4:	910342c3 	add	x3, x22, #0xd0
    4cb8:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4cbc:	52800060 	mov	w0, #0x3                   	// #3
    4cc0:	9109c301 	add	x1, x24, #0x270
    4cc4:	9114c042 	add	x2, x2, #0x530
    4cc8:	91030063 	add	x3, x3, #0xc0
    4ccc:	97fffd95 	bl	4320 <__android_log_print@plt>
    4cd0:	f947f294 	ldr	x20, [x20, #4064]
    4cd4:	710006ff 	cmp	w23, #0x1
    4cd8:	b900029f 	str	wzr, [x20]
    4cdc:	54000241 	b.ne	4d24 <gf_reset_sensor@@Base+0x144>  // b.any
    4ce0:	97fffeb4 	bl	47b0 <gf_enable_irq@@Base>
    4ce4:	14000010 	b	4d24 <gf_reset_sensor@@Base+0x144>
    4ce8:	910342c3 	add	x3, x22, #0xd0
    4cec:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4cf0:	9109c301 	add	x1, x24, #0x270
    4cf4:	91144042 	add	x2, x2, #0x510
    4cf8:	91030063 	add	x3, x3, #0xc0
    4cfc:	52800060 	mov	w0, #0x3                   	// #3
    4d00:	97fffd88 	bl	4320 <__android_log_print@plt>
    4d04:	94001a79 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4d08:	6b1f027f 	cmp	w19, wzr
    4d0c:	52800013 	mov	w19, #0x0                   	// #0
    4d10:	54fffd2d 	b.le	4cb4 <gf_reset_sensor@@Base+0xd4>
    4d14:	f947f294 	ldr	x20, [x20, #4064]
    4d18:	710006ff 	cmp	w23, #0x1
    4d1c:	b900029f 	str	wzr, [x20]
    4d20:	54fffe00 	b.eq	4ce0 <gf_reset_sensor@@Base+0x100>  // b.none
    4d24:	f947c2b5 	ldr	x21, [x21, #3968]
    4d28:	2a1303e0 	mov	w0, w19
    4d2c:	f94037b4 	ldr	x20, [x29, #104]
    4d30:	f94002a1 	ldr	x1, [x21]
    4d34:	eb01029f 	cmp	x20, x1
    4d38:	540000e1 	b.ne	4d54 <gf_reset_sensor@@Base+0x174>  // b.any
    4d3c:	a94153f3 	ldp	x19, x20, [sp, #16]
    4d40:	a9425bf5 	ldp	x21, x22, [sp, #32]
    4d44:	a94363f7 	ldp	x23, x24, [sp, #48]
    4d48:	f94023f9 	ldr	x25, [sp, #64]
    4d4c:	a8c77bfd 	ldp	x29, x30, [sp], #112
    4d50:	d65f03c0 	ret
    4d54:	97fffd5b 	bl	42c0 <__stack_chk_fail@plt>

0000000000004d58 <gf_fw_update@@Base>:
    4d58:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    4d5c:	12800000 	mov	w0, #0xffffffff            	// #-1
    4d60:	910003fd 	mov	x29, sp
    4d64:	a90153f3 	stp	x19, x20, [sp, #16]
    4d68:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    4d6c:	39009ba0 	strb	w0, [x29, #38]
    4d70:	39009fa0 	strb	w0, [x29, #39]
    4d74:	f947c260 	ldr	x0, [x19, #3968]
    4d78:	f9400000 	ldr	x0, [x0]
    4d7c:	f90017a0 	str	x0, [x29, #40]
    4d80:	97fffeef 	bl	493c <gf_irq_is_enabled@@Base>
    4d84:	7100041f 	cmp	w0, #0x1
    4d88:	2a0003f4 	mov	w20, w0
    4d8c:	54000320 	b.eq	4df0 <gf_fw_update@@Base+0x98>  // b.none
    4d90:	94001a56 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4d94:	52817700 	mov	w0, #0xbb8                 	// #3000
    4d98:	97fffd8a 	bl	43c0 <usleep@plt>
    4d9c:	9100c3a0 	add	x0, x29, #0x30
    4da0:	52800021 	mov	w1, #0x1                   	// #1
    4da4:	381f6c01 	strb	w1, [x0, #-10]!
    4da8:	94001b92 	bl	bbf0 <fnCa_FWUpdate@@Base>
    4dac:	97fffee7 	bl	4948 <gf_hw_reset@@Base>
    4db0:	9100c3a0 	add	x0, x29, #0x30
    4db4:	52800041 	mov	w1, #0x2                   	// #2
    4db8:	381f7c01 	strb	w1, [x0, #-9]!
    4dbc:	94001b8d 	bl	bbf0 <fnCa_FWUpdate@@Base>
    4dc0:	f947c273 	ldr	x19, [x19, #3968]
    4dc4:	f94017a2 	ldr	x2, [x29, #40]
    4dc8:	39409fa3 	ldrb	w3, [x29, #39]
    4dcc:	39409ba0 	ldrb	w0, [x29, #38]
    4dd0:	f9400261 	ldr	x1, [x19]
    4dd4:	2a000060 	orr	w0, w3, w0
    4dd8:	eb01005f 	cmp	x2, x1
    4ddc:	53001c00 	uxtb	w0, w0
    4de0:	54000241 	b.ne	4e28 <gf_fw_update@@Base+0xd0>  // b.any
    4de4:	a94153f3 	ldp	x19, x20, [sp, #16]
    4de8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    4dec:	d65f03c0 	ret
    4df0:	97fffea1 	bl	4874 <gf_disable_irq@@Base>
    4df4:	94001a3d 	bl	b6e8 <fnCa_CleanStatus@@Base>
    4df8:	52817700 	mov	w0, #0xbb8                 	// #3000
    4dfc:	97fffd71 	bl	43c0 <usleep@plt>
    4e00:	9100c3a0 	add	x0, x29, #0x30
    4e04:	381f6c14 	strb	w20, [x0, #-10]!
    4e08:	94001b7a 	bl	bbf0 <fnCa_FWUpdate@@Base>
    4e0c:	97fffecf 	bl	4948 <gf_hw_reset@@Base>
    4e10:	9100c3a0 	add	x0, x29, #0x30
    4e14:	52800041 	mov	w1, #0x2                   	// #2
    4e18:	381f7c01 	strb	w1, [x0, #-9]!
    4e1c:	94001b75 	bl	bbf0 <fnCa_FWUpdate@@Base>
    4e20:	97fffe64 	bl	47b0 <gf_enable_irq@@Base>
    4e24:	17ffffe7 	b	4dc0 <gf_fw_update@@Base+0x68>
    4e28:	97fffd26 	bl	42c0 <__stack_chk_fail@plt>

0000000000004e2c <restart_sensor@@Base>:
    4e2c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    4e30:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4e34:	52800060 	mov	w0, #0x3                   	// #3
    4e38:	910003fd 	mov	x29, sp
    4e3c:	a90153f3 	stp	x19, x20, [sp, #16]
    4e40:	b0000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    4e44:	f90013f5 	str	x21, [sp, #32]
    4e48:	91034283 	add	x3, x20, #0xd0
    4e4c:	b0000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    4e50:	9109c2a1 	add	x1, x21, #0x270
    4e54:	91154042 	add	x2, x2, #0x550
    4e58:	91034063 	add	x3, x3, #0xd0
    4e5c:	52800153 	mov	w19, #0xa                   	// #10
    4e60:	97fffd30 	bl	4320 <__android_log_print@plt>
    4e64:	97fffe84 	bl	4874 <gf_disable_irq@@Base>
    4e68:	97ffffbc 	bl	4d58 <gf_fw_update@@Base>
    4e6c:	5290d401 	mov	w1, #0x86a0                	// #34464
    4e70:	72a00021 	movk	w1, #0x1, lsl #16
    4e74:	34000260 	cbz	w0, 4ec0 <restart_sensor@@Base+0x94>
    4e78:	51000673 	sub	w19, w19, #0x1
    4e7c:	2a0103e0 	mov	w0, w1
    4e80:	53001e73 	uxtb	w19, w19
    4e84:	97fffd4f 	bl	43c0 <usleep@plt>
    4e88:	35ffff13 	cbnz	w19, 4e68 <restart_sensor@@Base+0x3c>
    4e8c:	91034283 	add	x3, x20, #0xd0
    4e90:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4e94:	9109c2a1 	add	x1, x21, #0x270
    4e98:	91164042 	add	x2, x2, #0x590
    4e9c:	91034063 	add	x3, x3, #0xd0
    4ea0:	52800060 	mov	w0, #0x3                   	// #3
    4ea4:	97fffd1f 	bl	4320 <__android_log_print@plt>
    4ea8:	97fffe42 	bl	47b0 <gf_enable_irq@@Base>
    4eac:	12800000 	mov	w0, #0xffffffff            	// #-1
    4eb0:	a94153f3 	ldp	x19, x20, [sp, #16]
    4eb4:	f94013f5 	ldr	x21, [sp, #32]
    4eb8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    4ebc:	d65f03c0 	ret
    4ec0:	9400025a 	bl	5828 <mutex_get_lock@@Base>
    4ec4:	b0000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    4ec8:	f9477c00 	ldr	x0, [x0, #3832]
    4ecc:	b9400000 	ldr	w0, [x0]
    4ed0:	940017c3 	bl	addc <fnCa_SetMode@@Base>
    4ed4:	2a0003f3 	mov	w19, w0
    4ed8:	94000262 	bl	5860 <mutex_get_unlock@@Base>
    4edc:	3100067f 	cmn	w19, #0x1
    4ee0:	54000140 	b.eq	4f08 <restart_sensor@@Base+0xdc>  // b.none
    4ee4:	52800000 	mov	w0, #0x0                   	// #0
    4ee8:	9400290e 	bl	f320 <fnCa_controlSampling@@Base>
    4eec:	2a0003f3 	mov	w19, w0
    4ef0:	97fffe30 	bl	47b0 <gf_enable_irq@@Base>
    4ef4:	f94013f5 	ldr	x21, [sp, #32]
    4ef8:	2a1303e0 	mov	w0, w19
    4efc:	a94153f3 	ldp	x19, x20, [sp, #16]
    4f00:	a8c37bfd 	ldp	x29, x30, [sp], #48
    4f04:	d65f03c0 	ret
    4f08:	91034283 	add	x3, x20, #0xd0
    4f0c:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4f10:	9109c2a1 	add	x1, x21, #0x270
    4f14:	9115c042 	add	x2, x2, #0x570
    4f18:	91034063 	add	x3, x3, #0xd0
    4f1c:	52800060 	mov	w0, #0x3                   	// #3
    4f20:	97fffd00 	bl	4320 <__android_log_print@plt>
    4f24:	97fffe23 	bl	47b0 <gf_enable_irq@@Base>
    4f28:	2a1303e0 	mov	w0, w19
    4f2c:	17ffffe1 	b	4eb0 <restart_sensor@@Base+0x84>

0000000000004f30 <gf_create_timer@@Base>:
    4f30:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    4f34:	aa0003e2 	mov	x2, x0
    4f38:	52800000 	mov	w0, #0x0                   	// #0
    4f3c:	910003fd 	mov	x29, sp
    4f40:	9100a3a3 	add	x3, x29, #0x28
    4f44:	a90153f3 	stp	x19, x20, [sp, #16]
    4f48:	b0000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    4f4c:	a9017c7f 	stp	xzr, xzr, [x3, #16]
    4f50:	f9001fa1 	str	x1, [x29, #56]
    4f54:	aa0303e1 	mov	x1, x3
    4f58:	f947c264 	ldr	x4, [x19, #3968]
    4f5c:	a9007c7f 	stp	xzr, xzr, [x3]
    4f60:	a9027c7f 	stp	xzr, xzr, [x3, #32]
    4f64:	a9037c7f 	stp	xzr, xzr, [x3, #48]
    4f68:	f9400083 	ldr	x3, [x4]
    4f6c:	f90037a3 	str	x3, [x29, #104]
    4f70:	52801e03 	mov	w3, #0xf0                  	// #240
    4f74:	b9002ba3 	str	w3, [x29, #40]
    4f78:	52800043 	mov	w3, #0x2                   	// #2
    4f7c:	b90037a3 	str	w3, [x29, #52]
    4f80:	97fffc9c 	bl	41f0 <timer_create@plt>
    4f84:	3100041f 	cmn	w0, #0x1
    4f88:	2a0003f4 	mov	w20, w0
    4f8c:	54000280 	b.eq	4fdc <gf_create_timer@@Base+0xac>  // b.none
    4f90:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4f94:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4f98:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4f9c:	91034063 	add	x3, x3, #0xd0
    4fa0:	52800060 	mov	w0, #0x3                   	// #3
    4fa4:	9109c021 	add	x1, x1, #0x270
    4fa8:	91174042 	add	x2, x2, #0x5d0
    4fac:	91038063 	add	x3, x3, #0xe0
    4fb0:	52800014 	mov	w20, #0x0                   	// #0
    4fb4:	97fffcdb 	bl	4320 <__android_log_print@plt>
    4fb8:	f947c273 	ldr	x19, [x19, #3968]
    4fbc:	2a1403e0 	mov	w0, w20
    4fc0:	f94037a2 	ldr	x2, [x29, #104]
    4fc4:	f9400261 	ldr	x1, [x19]
    4fc8:	eb01005f 	cmp	x2, x1
    4fcc:	540001c1 	b.ne	5004 <gf_create_timer@@Base+0xd4>  // b.any
    4fd0:	a94153f3 	ldp	x19, x20, [sp, #16]
    4fd4:	a8c77bfd 	ldp	x29, x30, [sp], #112
    4fd8:	d65f03c0 	ret
    4fdc:	b0000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    4fe0:	b0000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    4fe4:	b0000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    4fe8:	91034063 	add	x3, x3, #0xd0
    4fec:	9109c021 	add	x1, x1, #0x270
    4ff0:	9116c042 	add	x2, x2, #0x5b0
    4ff4:	91038063 	add	x3, x3, #0xe0
    4ff8:	52800060 	mov	w0, #0x3                   	// #3
    4ffc:	97fffcc9 	bl	4320 <__android_log_print@plt>
    5000:	17ffffee 	b	4fb8 <gf_create_timer@@Base+0x88>
    5004:	97fffcaf 	bl	42c0 <__stack_chk_fail@plt>

0000000000005008 <gf_active_timer@@Base>:
    5008:	52884806 	mov	w6, #0x4240                	// #16960
    500c:	d2929667 	mov	x7, #0x94b3                	// #38067
    5010:	72a001e6 	movk	w6, #0xf, lsl #16
    5014:	f2a4dac7 	movk	x7, #0x26d6, lsl #16
    5018:	f2c17d07 	movk	x7, #0xbe8, lsl #32
    501c:	5288480a 	mov	w10, #0x4240                	// #16960
    5020:	1b067c42 	mul	w2, w2, w6
    5024:	f2e225c7 	movk	x7, #0x112e, lsl #48
    5028:	72a001ea 	movk	w10, #0xf, lsl #16
    502c:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    5030:	93407c42 	sxtw	x2, w2
    5034:	d2929665 	mov	x5, #0x94b3                	// #38067
    5038:	910003fd 	mov	x29, sp
    503c:	9b477c49 	smulh	x9, x2, x7
    5040:	1b0a7c84 	mul	w4, w4, w10
    5044:	937ffc4b 	asr	x11, x2, #63
    5048:	d2929666 	mov	x6, #0x94b3                	// #38067
    504c:	a90153f3 	stp	x19, x20, [sp, #16]
    5050:	d299400c 	mov	x12, #0xca00                	// #51712
    5054:	935afd33 	asr	x19, x9, #26
    5058:	f2a4dac5 	movk	x5, #0x26d6, lsl #16
    505c:	cb0b0267 	sub	x7, x19, x11
    5060:	f2a7734c 	movk	x12, #0x3b9a, lsl #16
    5064:	aa0603f4 	mov	x20, x6
    5068:	d2869b68 	mov	x8, #0x34db                	// #13531
    506c:	f2c17d05 	movk	x5, #0xbe8, lsl #32
    5070:	93407c8a 	sxtw	x10, w4
    5074:	f2e225c5 	movk	x5, #0x112e, lsl #48
    5078:	f2baf6c8 	movk	x8, #0xd7b6, lsl #16
    507c:	f2a4dac6 	movk	x6, #0x26d6, lsl #16
    5080:	f2a4dad4 	movk	x20, #0x26d6, lsl #16
    5084:	f2dbd048 	movk	x8, #0xde82, lsl #32
    5088:	9b0c88e7 	msub	x7, x7, x12, x2
    508c:	f2c17d06 	movk	x6, #0xbe8, lsl #32
    5090:	f2c17d14 	movk	x20, #0xbe8, lsl #32
    5094:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    5098:	f2e225d4 	movk	x20, #0x112e, lsl #48
    509c:	9b457d49 	smulh	x9, x10, x5
    50a0:	f2e86368 	movk	x8, #0x431b, lsl #48
    50a4:	f2e225c6 	movk	x6, #0x112e, lsl #48
    50a8:	937ffd44 	asr	x4, x10, #63
    50ac:	f947c26c 	ldr	x12, [x19, #3968]
    50b0:	9b487ce8 	smulh	x8, x7, x8
    50b4:	9b467d46 	smulh	x6, x10, x6
    50b8:	9b547c42 	smulh	x2, x2, x20
    50bc:	935afd29 	asr	x9, x9, #26
    50c0:	d299400d 	mov	x13, #0xca00                	// #51712
    50c4:	a9025bf5 	stp	x21, x22, [sp, #32]
    50c8:	cb040129 	sub	x9, x9, x4
    50cc:	f2a7734d 	movk	x13, #0x3b9a, lsl #16
    50d0:	90000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    50d4:	9352fd05 	asr	x5, x8, #18
    50d8:	90000076 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    50dc:	935afcc8 	asr	x8, x6, #26
    50e0:	910342b5 	add	x21, x21, #0xd0
    50e4:	935afc46 	asr	x6, x2, #26
    50e8:	cb0b00c6 	sub	x6, x6, x11
    50ec:	9109c2d6 	add	x22, x22, #0x270
    50f0:	f940018b 	ldr	x11, [x12]
    50f4:	9103c2b5 	add	x21, x21, #0xf0
    50f8:	9b0da92a 	msub	x10, x9, x13, x10
    50fc:	8b21c0c6 	add	x6, x6, w1, sxtw
    5100:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5104:	aa0003f4 	mov	x20, x0
    5108:	cb040108 	sub	x8, x8, x4
    510c:	cb87fca5 	sub	x5, x5, x7, asr #63
    5110:	8b23c108 	add	x8, x8, w3, sxtw
    5114:	52800060 	mov	w0, #0x3                   	// #3
    5118:	aa1603e1 	mov	x1, x22
    511c:	9117e042 	add	x2, x2, #0x5f8
    5120:	aa1503e3 	mov	x3, x21
    5124:	2a0603e4 	mov	w4, w6
    5128:	a90363f7 	stp	x23, x24, [sp, #48]
    512c:	f90037ab 	str	x11, [x29, #104]
    5130:	f9002baa 	str	x10, [x29, #80]
    5134:	f90027a8 	str	x8, [x29, #72]
    5138:	f90033a7 	str	x7, [x29, #96]
    513c:	f9002fa6 	str	x6, [x29, #88]
    5140:	97fffc78 	bl	4320 <__android_log_print@plt>
    5144:	f9400280 	ldr	x0, [x20]
    5148:	b40004e0 	cbz	x0, 51e4 <gf_active_timer@@Base+0x1dc>
    514c:	b0000137 	adrp	x23, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5150:	911fa2f7 	add	x23, x23, #0x7e8
    5154:	910022f7 	add	x23, x23, #0x8
    5158:	aa1703e0 	mov	x0, x23
    515c:	97fffc89 	bl	4380 <pthread_mutex_lock@plt>
    5160:	f9400280 	ldr	x0, [x20]
    5164:	52800001 	mov	w1, #0x0                   	// #0
    5168:	910123a2 	add	x2, x29, #0x48
    516c:	d2800003 	mov	x3, #0x0                   	// #0
    5170:	97fffc5c 	bl	42e0 <timer_settime@plt>
    5174:	3100041f 	cmn	w0, #0x1
    5178:	2a0003f8 	mov	w24, w0
    517c:	540001e0 	b.eq	51b8 <gf_active_timer@@Base+0x1b0>  // b.none
    5180:	aa1703e0 	mov	x0, x23
    5184:	52800018 	mov	w24, #0x0                   	// #0
    5188:	97fffcce 	bl	44c0 <pthread_mutex_unlock@plt>
    518c:	f947c273 	ldr	x19, [x19, #3968]
    5190:	2a1803e0 	mov	w0, w24
    5194:	f94037a2 	ldr	x2, [x29, #104]
    5198:	f9400261 	ldr	x1, [x19]
    519c:	eb01005f 	cmp	x2, x1
    51a0:	54000321 	b.ne	5204 <gf_active_timer@@Base+0x1fc>  // b.any
    51a4:	a94153f3 	ldp	x19, x20, [sp, #16]
    51a8:	a9425bf5 	ldp	x21, x22, [sp, #32]
    51ac:	a94363f7 	ldp	x23, x24, [sp, #48]
    51b0:	a8c77bfd 	ldp	x29, x30, [sp], #112
    51b4:	d65f03c0 	ret
    51b8:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    51bc:	aa1603e1 	mov	x1, x22
    51c0:	91186042 	add	x2, x2, #0x618
    51c4:	aa1503e3 	mov	x3, x21
    51c8:	52800060 	mov	w0, #0x3                   	// #3
    51cc:	97fffc55 	bl	4320 <__android_log_print@plt>
    51d0:	f9400280 	ldr	x0, [x20]
    51d4:	97fffc2b 	bl	4280 <timer_delete@plt>
    51d8:	aa1703e0 	mov	x0, x23
    51dc:	97fffcb9 	bl	44c0 <pthread_mutex_unlock@plt>
    51e0:	17ffffeb 	b	518c <gf_active_timer@@Base+0x184>
    51e4:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    51e8:	aa1603e1 	mov	x1, x22
    51ec:	9118e042 	add	x2, x2, #0x638
    51f0:	aa1503e3 	mov	x3, x21
    51f4:	52800060 	mov	w0, #0x3                   	// #3
    51f8:	12800018 	mov	w24, #0xffffffff            	// #-1
    51fc:	97fffc49 	bl	4320 <__android_log_print@plt>
    5200:	17ffffe3 	b	518c <gf_active_timer@@Base+0x184>
    5204:	97fffc2f 	bl	42c0 <__stack_chk_fail@plt>

0000000000005208 <gf_delete_timer@@Base>:
    5208:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    520c:	910003fd 	mov	x29, sp
    5210:	f9400001 	ldr	x1, [x0]
    5214:	a90153f3 	stp	x19, x20, [sp, #16]
    5218:	b4000221 	cbz	x1, 525c <gf_delete_timer@@Base+0x54>
    521c:	b0000133 	adrp	x19, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5220:	aa0003f4 	mov	x20, x0
    5224:	911fa273 	add	x19, x19, #0x7e8
    5228:	91002273 	add	x19, x19, #0x8
    522c:	aa1303e0 	mov	x0, x19
    5230:	97fffc54 	bl	4380 <pthread_mutex_lock@plt>
    5234:	f9400280 	ldr	x0, [x20]
    5238:	97fffc12 	bl	4280 <timer_delete@plt>
    523c:	2a0003f4 	mov	w20, w0
    5240:	aa1303e0 	mov	x0, x19
    5244:	35000174 	cbnz	w20, 5270 <gf_delete_timer@@Base+0x68>
    5248:	97fffc9e 	bl	44c0 <pthread_mutex_unlock@plt>
    524c:	2a1403e0 	mov	w0, w20
    5250:	a94153f3 	ldp	x19, x20, [sp, #16]
    5254:	a8c27bfd 	ldp	x29, x30, [sp], #32
    5258:	d65f03c0 	ret
    525c:	52800014 	mov	w20, #0x0                   	// #0
    5260:	2a1403e0 	mov	w0, w20
    5264:	a94153f3 	ldp	x19, x20, [sp, #16]
    5268:	a8c27bfd 	ldp	x29, x30, [sp], #32
    526c:	d65f03c0 	ret
    5270:	97fffc94 	bl	44c0 <pthread_mutex_unlock@plt>
    5274:	12800014 	mov	w20, #0xffffffff            	// #-1
    5278:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    527c:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5280:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5284:	91034063 	add	x3, x3, #0xd0
    5288:	9109c021 	add	x1, x1, #0x270
    528c:	9119a042 	add	x2, x2, #0x668
    5290:	91040063 	add	x3, x3, #0x100
    5294:	52800060 	mov	w0, #0x3                   	// #3
    5298:	97fffc22 	bl	4320 <__android_log_print@plt>
    529c:	17ffffec 	b	524c <gf_delete_timer@@Base+0x44>

00000000000052a0 <gf_delete_esd_timer@@Base>:
    52a0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    52a4:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    52a8:	52800060 	mov	w0, #0x3                   	// #3
    52ac:	910003fd 	mov	x29, sp
    52b0:	a90153f3 	stp	x19, x20, [sp, #16]
    52b4:	90000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    52b8:	911a2042 	add	x2, x2, #0x688
    52bc:	a9025bf5 	stp	x21, x22, [sp, #32]
    52c0:	91034273 	add	x19, x19, #0xd0
    52c4:	90000076 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    52c8:	9109c2d6 	add	x22, x22, #0x270
    52cc:	91044273 	add	x19, x19, #0x110
    52d0:	aa1603e1 	mov	x1, x22
    52d4:	aa1303e3 	mov	x3, x19
    52d8:	b0000135 	adrp	x21, 2a000 <gf_dump_data_interface@@Base+0x19760>
    52dc:	90000134 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    52e0:	97fffc10 	bl	4320 <__android_log_print@plt>
    52e4:	911fa2a0 	add	x0, x21, #0x7e8
    52e8:	9100c000 	add	x0, x0, #0x30
    52ec:	97fffc25 	bl	4380 <pthread_mutex_lock@plt>
    52f0:	f947b280 	ldr	x0, [x20, #3936]
    52f4:	f9400000 	ldr	x0, [x0]
    52f8:	b4000060 	cbz	x0, 5304 <gf_delete_esd_timer@@Base+0x64>
    52fc:	97fffbe1 	bl	4280 <timer_delete@plt>
    5300:	34000120 	cbz	w0, 5324 <gf_delete_esd_timer@@Base+0x84>
    5304:	f947b294 	ldr	x20, [x20, #3936]
    5308:	911fa2a0 	add	x0, x21, #0x7e8
    530c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    5310:	9100c000 	add	x0, x0, #0x30
    5314:	f900029f 	str	xzr, [x20]
    5318:	a94153f3 	ldp	x19, x20, [sp, #16]
    531c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    5320:	17fffc68 	b	44c0 <pthread_mutex_unlock@plt>
    5324:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5328:	aa1603e1 	mov	x1, x22
    532c:	aa1303e3 	mov	x3, x19
    5330:	911a8042 	add	x2, x2, #0x6a0
    5334:	52800060 	mov	w0, #0x3                   	// #3
    5338:	97fffbfa 	bl	4320 <__android_log_print@plt>
    533c:	f947b294 	ldr	x20, [x20, #3936]
    5340:	911fa2a0 	add	x0, x21, #0x7e8
    5344:	a9425bf5 	ldp	x21, x22, [sp, #32]
    5348:	f900029f 	str	xzr, [x20]
    534c:	9100c000 	add	x0, x0, #0x30
    5350:	a94153f3 	ldp	x19, x20, [sp, #16]
    5354:	a8c37bfd 	ldp	x29, x30, [sp], #48
    5358:	17fffc5a 	b	44c0 <pthread_mutex_unlock@plt>

000000000000535c <loop_thread@@Base>:
    535c:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    5360:	910003fd 	mov	x29, sp
    5364:	a90153f3 	stp	x19, x20, [sp, #16]
    5368:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    536c:	b0000134 	adrp	x20, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5370:	a9025bf5 	stp	x21, x22, [sp, #32]
    5374:	a90363f7 	stp	x23, x24, [sp, #48]
    5378:	f947c260 	ldr	x0, [x19, #3968]
    537c:	39011fbf 	strb	wzr, [x29, #71]
    5380:	f9400000 	ldr	x0, [x0]
    5384:	f90027a0 	str	x0, [x29, #72]
    5388:	9400019b 	bl	59f4 <mutex_get_lock_esd@@Base>
    538c:	911fa280 	add	x0, x20, #0x7e8
    5390:	91016000 	add	x0, x0, #0x58
    5394:	97fffb8f 	bl	41d0 <pthread_mutex_trylock@plt>
    5398:	35000260 	cbnz	w0, 53e4 <loop_thread@@Base+0x88>
    539c:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    53a0:	f947b400 	ldr	x0, [x0, #3944]
    53a4:	39400000 	ldrb	w0, [x0]
    53a8:	7100041f 	cmp	w0, #0x1
    53ac:	54000160 	b.eq	53d8 <loop_thread@@Base+0x7c>  // b.none
    53b0:	90000135 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    53b4:	f9477ea0 	ldr	x0, [x21, #3832]
    53b8:	b9400000 	ldr	w0, [x0]
    53bc:	121d7800 	and	w0, w0, #0xfffffffb
    53c0:	7100081f 	cmp	w0, #0x2
    53c4:	540000a0 	b.eq	53d8 <loop_thread@@Base+0x7c>  // b.none
    53c8:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    53cc:	f9479000 	ldr	x0, [x0, #3872]
    53d0:	b9400000 	ldr	w0, [x0]
    53d4:	340001e0 	cbz	w0, 5410 <loop_thread@@Base+0xb4>
    53d8:	911fa280 	add	x0, x20, #0x7e8
    53dc:	91016000 	add	x0, x0, #0x58
    53e0:	97fffc38 	bl	44c0 <pthread_mutex_unlock@plt>
    53e4:	94000187 	bl	5a00 <mutex_get_unlock_esd@@Base>
    53e8:	f947c273 	ldr	x19, [x19, #3968]
    53ec:	f94027a1 	ldr	x1, [x29, #72]
    53f0:	f9400260 	ldr	x0, [x19]
    53f4:	eb00003f 	cmp	x1, x0
    53f8:	54000621 	b.ne	54bc <loop_thread@@Base+0x160>  // b.any
    53fc:	a94153f3 	ldp	x19, x20, [sp, #16]
    5400:	a9425bf5 	ldp	x21, x22, [sp, #32]
    5404:	a94363f7 	ldp	x23, x24, [sp, #48]
    5408:	a8c57bfd 	ldp	x29, x30, [sp], #80
    540c:	d65f03c0 	ret
    5410:	91011fb6 	add	x22, x29, #0x47
    5414:	aa1603e0 	mov	x0, x22
    5418:	9400199a 	bl	ba80 <fnCa_ESDCheck@@Base>
    541c:	39411fa0 	ldrb	w0, [x29, #71]
    5420:	34fffdc0 	cbz	w0, 53d8 <loop_thread@@Base+0x7c>
    5424:	5290d400 	mov	w0, #0x86a0                	// #34464
    5428:	90000077 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    542c:	72a00020 	movk	w0, #0x1, lsl #16
    5430:	90000078 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    5434:	910342f7 	add	x23, x23, #0xd0
    5438:	9109c318 	add	x24, x24, #0x270
    543c:	97fffbe1 	bl	43c0 <usleep@plt>
    5440:	9104c2f7 	add	x23, x23, #0x130
    5444:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5448:	aa1803e1 	mov	x1, x24
    544c:	911b0042 	add	x2, x2, #0x6c0
    5450:	aa1703e3 	mov	x3, x23
    5454:	52800060 	mov	w0, #0x3                   	// #3
    5458:	97fffbb2 	bl	4320 <__android_log_print@plt>
    545c:	aa1603e0 	mov	x0, x22
    5460:	94001988 	bl	ba80 <fnCa_ESDCheck@@Base>
    5464:	39411fa0 	ldrb	w0, [x29, #71]
    5468:	34fffb80 	cbz	w0, 53d8 <loop_thread@@Base+0x7c>
    546c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5470:	52800060 	mov	w0, #0x3                   	// #3
    5474:	aa1803e1 	mov	x1, x24
    5478:	911b8042 	add	x2, x2, #0x6e0
    547c:	aa1703e3 	mov	x3, x23
    5480:	52800156 	mov	w22, #0xa                   	// #10
    5484:	97fffba7 	bl	4320 <__android_log_print@plt>
    5488:	97fffe34 	bl	4d58 <gf_fw_update@@Base>
    548c:	34000100 	cbz	w0, 54ac <loop_thread@@Base+0x150>
    5490:	510006d6 	sub	w22, w22, #0x1
    5494:	5290d400 	mov	w0, #0x86a0                	// #34464
    5498:	72a00020 	movk	w0, #0x1, lsl #16
    549c:	53001ed6 	uxtb	w22, w22
    54a0:	97fffbc8 	bl	43c0 <usleep@plt>
    54a4:	35ffff36 	cbnz	w22, 5488 <loop_thread@@Base+0x12c>
    54a8:	97ffff7e 	bl	52a0 <gf_delete_esd_timer@@Base>
    54ac:	f9477eb5 	ldr	x21, [x21, #3832]
    54b0:	b94002a0 	ldr	w0, [x21]
    54b4:	9400164a 	bl	addc <fnCa_SetMode@@Base>
    54b8:	17ffffc8 	b	53d8 <loop_thread@@Base+0x7c>
    54bc:	97fffb81 	bl	42c0 <__stack_chk_fail@plt>

00000000000054c0 <gf_create_esd_timer@@Base>:
    54c0:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    54c4:	90000122 	adrp	x2, 29000 <gf_dump_data_interface@@Base+0x18760>
    54c8:	910003fd 	mov	x29, sp
    54cc:	9100a3a1 	add	x1, x29, #0x28
    54d0:	a90153f3 	stp	x19, x20, [sp, #16]
    54d4:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    54d8:	a9007c3f 	stp	xzr, xzr, [x1]
    54dc:	a9017c3f 	stp	xzr, xzr, [x1, #16]
    54e0:	f947c260 	ldr	x0, [x19, #3968]
    54e4:	a9027c3f 	stp	xzr, xzr, [x1, #32]
    54e8:	f947b042 	ldr	x2, [x2, #3936]
    54ec:	f9400003 	ldr	x3, [x0]
    54f0:	a9037c3f 	stp	xzr, xzr, [x1, #48]
    54f4:	f9400040 	ldr	x0, [x2]
    54f8:	f90037a3 	str	x3, [x29, #104]
    54fc:	b50002e0 	cbnz	x0, 5558 <gf_create_esd_timer@@Base+0x98>
    5500:	90000123 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    5504:	52801fe4 	mov	w4, #0xff                  	// #255
    5508:	52800000 	mov	w0, #0x0                   	// #0
    550c:	b9002ba4 	str	w4, [x29, #40]
    5510:	52800044 	mov	w4, #0x2                   	// #2
    5514:	b90037a4 	str	w4, [x29, #52]
    5518:	f9478063 	ldr	x3, [x3, #3840]
    551c:	f9001fa3 	str	x3, [x29, #56]
    5520:	97fffb34 	bl	41f0 <timer_create@plt>
    5524:	3100041f 	cmn	w0, #0x1
    5528:	2a0003f4 	mov	w20, w0
    552c:	540002c0 	b.eq	5584 <gf_create_esd_timer@@Base+0xc4>  // b.none
    5530:	52800014 	mov	w20, #0x0                   	// #0
    5534:	f947c273 	ldr	x19, [x19, #3968]
    5538:	2a1403e0 	mov	w0, w20
    553c:	f94037a2 	ldr	x2, [x29, #104]
    5540:	f9400261 	ldr	x1, [x19]
    5544:	eb01005f 	cmp	x2, x1
    5548:	54000261 	b.ne	5594 <gf_create_esd_timer@@Base+0xd4>  // b.any
    554c:	a94153f3 	ldp	x19, x20, [sp, #16]
    5550:	a8c77bfd 	ldp	x29, x30, [sp], #112
    5554:	d65f03c0 	ret
    5558:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    555c:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5560:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5564:	91034063 	add	x3, x3, #0xd0
    5568:	9109c021 	add	x1, x1, #0x270
    556c:	911c2042 	add	x2, x2, #0x708
    5570:	91050063 	add	x3, x3, #0x140
    5574:	52800060 	mov	w0, #0x3                   	// #3
    5578:	12800014 	mov	w20, #0xffffffff            	// #-1
    557c:	97fffb69 	bl	4320 <__android_log_print@plt>
    5580:	17ffffed 	b	5534 <gf_create_esd_timer@@Base+0x74>
    5584:	90000060 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    5588:	911cc000 	add	x0, x0, #0x730
    558c:	97fffb31 	bl	4250 <perror@plt>
    5590:	17ffffe9 	b	5534 <gf_create_esd_timer@@Base+0x74>
    5594:	97fffb4b 	bl	42c0 <__stack_chk_fail@plt>

0000000000005598 <gf_active_esd_timer@@Base>:
    5598:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    559c:	d2800144 	mov	x4, #0xa                   	// #10
    55a0:	52800001 	mov	w1, #0x0                   	// #0
    55a4:	910003fd 	mov	x29, sp
    55a8:	a90153f3 	stp	x19, x20, [sp, #16]
    55ac:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    55b0:	90000134 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    55b4:	9100a3a2 	add	x2, x29, #0x28
    55b8:	d2800003 	mov	x3, #0x0                   	// #0
    55bc:	f90017a4 	str	x4, [x29, #40]
    55c0:	f947b294 	ldr	x20, [x20, #3936]
    55c4:	f947c265 	ldr	x5, [x19, #3968]
    55c8:	f9001bbf 	str	xzr, [x29, #48]
    55cc:	f9400280 	ldr	x0, [x20]
    55d0:	f94000a5 	ldr	x5, [x5]
    55d4:	f90027a5 	str	x5, [x29, #72]
    55d8:	f9001fa4 	str	x4, [x29, #56]
    55dc:	f90023bf 	str	xzr, [x29, #64]
    55e0:	97fffb40 	bl	42e0 <timer_settime@plt>
    55e4:	3100041f 	cmn	w0, #0x1
    55e8:	54000120 	b.eq	560c <gf_active_esd_timer@@Base+0x74>  // b.none
    55ec:	f947c273 	ldr	x19, [x19, #3968]
    55f0:	f94027a1 	ldr	x1, [x29, #72]
    55f4:	f9400260 	ldr	x0, [x19]
    55f8:	eb00003f 	cmp	x1, x0
    55fc:	54000141 	b.ne	5624 <gf_active_esd_timer@@Base+0x8c>  // b.any
    5600:	a94153f3 	ldp	x19, x20, [sp, #16]
    5604:	a8c57bfd 	ldp	x29, x30, [sp], #80
    5608:	d65f03c0 	ret
    560c:	90000060 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    5610:	911d2000 	add	x0, x0, #0x748
    5614:	97fffb0f 	bl	4250 <perror@plt>
    5618:	f9400280 	ldr	x0, [x20]
    561c:	97fffb19 	bl	4280 <timer_delete@plt>
    5620:	17fffff3 	b	55ec <gf_active_esd_timer@@Base+0x54>
    5624:	97fffb27 	bl	42c0 <__stack_chk_fail@plt>

0000000000005628 <gf_init_esd_timer@@Base>:
    5628:	a9b57bfd 	stp	x29, x30, [sp, #-176]!
    562c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5630:	52800060 	mov	w0, #0x3                   	// #3
    5634:	910003fd 	mov	x29, sp
    5638:	a9025bf5 	stp	x21, x22, [sp, #32]
    563c:	90000136 	adrp	x22, 29000 <gf_dump_data_interface@@Base+0x18760>
    5640:	911d8042 	add	x2, x2, #0x760
    5644:	a90153f3 	stp	x19, x20, [sp, #16]
    5648:	90000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    564c:	b0000134 	adrp	x20, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5650:	f947c2c4 	ldr	x4, [x22, #3968]
    5654:	91034273 	add	x19, x19, #0xd0
    5658:	a90363f7 	stp	x23, x24, [sp, #48]
    565c:	90000077 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    5660:	91058273 	add	x19, x19, #0x160
    5664:	f9400084 	ldr	x4, [x4]
    5668:	9109c2f7 	add	x23, x23, #0x270
    566c:	aa1703e1 	mov	x1, x23
    5670:	aa1303e3 	mov	x3, x19
    5674:	911fa294 	add	x20, x20, #0x7e8
    5678:	9101a3b5 	add	x21, x29, #0x68
    567c:	f90057a4 	str	x4, [x29, #168]
    5680:	9100c294 	add	x20, x20, #0x30
    5684:	97fffb27 	bl	4320 <__android_log_print@plt>
    5688:	90000138 	adrp	x24, 29000 <gf_dump_data_interface@@Base+0x18760>
    568c:	d2800141 	mov	x1, #0xa                   	// #10
    5690:	aa1403e0 	mov	x0, x20
    5694:	f90027a1 	str	x1, [x29, #72]
    5698:	f9002bbf 	str	xzr, [x29, #80]
    569c:	f9002fa1 	str	x1, [x29, #88]
    56a0:	f90033bf 	str	xzr, [x29, #96]
    56a4:	a9007ebf 	stp	xzr, xzr, [x21]
    56a8:	a9017ebf 	stp	xzr, xzr, [x21, #16]
    56ac:	a9027ebf 	stp	xzr, xzr, [x21, #32]
    56b0:	a9037ebf 	stp	xzr, xzr, [x21, #48]
    56b4:	97fffb33 	bl	4380 <pthread_mutex_lock@plt>
    56b8:	f947b318 	ldr	x24, [x24, #3936]
    56bc:	f9400300 	ldr	x0, [x24]
    56c0:	b4000220 	cbz	x0, 5704 <gf_init_esd_timer@@Base+0xdc>
    56c4:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    56c8:	aa1703e1 	mov	x1, x23
    56cc:	911c2042 	add	x2, x2, #0x708
    56d0:	aa1303e3 	mov	x3, x19
    56d4:	52800060 	mov	w0, #0x3                   	// #3
    56d8:	97fffb12 	bl	4320 <__android_log_print@plt>
    56dc:	f947c2d6 	ldr	x22, [x22, #3968]
    56e0:	f94057a1 	ldr	x1, [x29, #168]
    56e4:	f94002c0 	ldr	x0, [x22]
    56e8:	eb00003f 	cmp	x1, x0
    56ec:	540005a1 	b.ne	57a0 <gf_init_esd_timer@@Base+0x178>  // b.any
    56f0:	a94153f3 	ldp	x19, x20, [sp, #16]
    56f4:	a9425bf5 	ldp	x21, x22, [sp, #32]
    56f8:	a94363f7 	ldp	x23, x24, [sp, #48]
    56fc:	a8cb7bfd 	ldp	x29, x30, [sp], #176
    5700:	d65f03c0 	ret
    5704:	90000123 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    5708:	52801fe4 	mov	w4, #0xff                  	// #255
    570c:	52800000 	mov	w0, #0x0                   	// #0
    5710:	b9006ba4 	str	w4, [x29, #104]
    5714:	aa1503e1 	mov	x1, x21
    5718:	52800044 	mov	w4, #0x2                   	// #2
    571c:	f9478063 	ldr	x3, [x3, #3840]
    5720:	aa1803e2 	mov	x2, x24
    5724:	b90077a4 	str	w4, [x29, #116]
    5728:	f9003fa3 	str	x3, [x29, #120]
    572c:	97fffab1 	bl	41f0 <timer_create@plt>
    5730:	3100041f 	cmn	w0, #0x1
    5734:	54000220 	b.eq	5778 <gf_init_esd_timer@@Base+0x150>  // b.none
    5738:	f9400300 	ldr	x0, [x24]
    573c:	52800001 	mov	w1, #0x0                   	// #0
    5740:	910123a2 	add	x2, x29, #0x48
    5744:	d2800003 	mov	x3, #0x0                   	// #0
    5748:	97fffae6 	bl	42e0 <timer_settime@plt>
    574c:	3100041f 	cmn	w0, #0x1
    5750:	540001c0 	b.eq	5788 <gf_init_esd_timer@@Base+0x160>  // b.none
    5754:	aa1403e0 	mov	x0, x20
    5758:	97fffb5a 	bl	44c0 <pthread_mutex_unlock@plt>
    575c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5760:	aa1703e1 	mov	x1, x23
    5764:	91174042 	add	x2, x2, #0x5d0
    5768:	aa1303e3 	mov	x3, x19
    576c:	52800060 	mov	w0, #0x3                   	// #3
    5770:	97fffaec 	bl	4320 <__android_log_print@plt>
    5774:	17ffffda 	b	56dc <gf_init_esd_timer@@Base+0xb4>
    5778:	90000060 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    577c:	911cc000 	add	x0, x0, #0x730
    5780:	97fffab4 	bl	4250 <perror@plt>
    5784:	17ffffd6 	b	56dc <gf_init_esd_timer@@Base+0xb4>
    5788:	90000060 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    578c:	911d2000 	add	x0, x0, #0x748
    5790:	97fffab0 	bl	4250 <perror@plt>
    5794:	f9400300 	ldr	x0, [x24]
    5798:	97fffaba 	bl	4280 <timer_delete@plt>
    579c:	17ffffd0 	b	56dc <gf_init_esd_timer@@Base+0xb4>
    57a0:	97fffac8 	bl	42c0 <__stack_chk_fail@plt>

00000000000057a4 <gf_excute_esd_timer@@Base>:
    57a4:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    57a8:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    57ac:	52800060 	mov	w0, #0x3                   	// #3
    57b0:	910003fd 	mov	x29, sp
    57b4:	a90153f3 	stp	x19, x20, [sp, #16]
    57b8:	90000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    57bc:	90000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    57c0:	91034273 	add	x19, x19, #0xd0
    57c4:	9109c294 	add	x20, x20, #0x270
    57c8:	91060273 	add	x19, x19, #0x180
    57cc:	aa1403e1 	mov	x1, x20
    57d0:	aa1303e3 	mov	x3, x19
    57d4:	911e0042 	add	x2, x2, #0x780
    57d8:	97fffad2 	bl	4320 <__android_log_print@plt>
    57dc:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    57e0:	aa1403e1 	mov	x1, x20
    57e4:	aa1303e3 	mov	x3, x19
    57e8:	911e8042 	add	x2, x2, #0x7a0
    57ec:	52800060 	mov	w0, #0x3                   	// #3
    57f0:	97fffacc 	bl	4320 <__android_log_print@plt>
    57f4:	d2800000 	mov	x0, #0x0                   	// #0
    57f8:	97fffed9 	bl	535c <loop_thread@@Base>
    57fc:	a94153f3 	ldp	x19, x20, [sp, #16]
    5800:	a8c27bfd 	ldp	x29, x30, [sp], #32
    5804:	d65f03c0 	ret

0000000000005808 <gf_esd_mutex_lock@@Base>:
    5808:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    580c:	911fa000 	add	x0, x0, #0x7e8
    5810:	91016000 	add	x0, x0, #0x58
    5814:	17fffadb 	b	4380 <pthread_mutex_lock@plt>

0000000000005818 <gf_esd_mutex_unlock@@Base>:
    5818:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    581c:	911fa000 	add	x0, x0, #0x7e8
    5820:	91016000 	add	x0, x0, #0x58
    5824:	17fffb27 	b	44c0 <pthread_mutex_unlock@plt>

0000000000005828 <mutex_get_lock@@Base>:
    5828:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    582c:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5830:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5834:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5838:	910003fd 	mov	x29, sp
    583c:	9109c021 	add	x1, x1, #0x270
    5840:	912f0042 	add	x2, x2, #0xbc0
    5844:	91200063 	add	x3, x3, #0x800
    5848:	52800060 	mov	w0, #0x3                   	// #3
    584c:	97fffab5 	bl	4320 <__android_log_print@plt>
    5850:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5854:	a8c17bfd 	ldp	x29, x30, [sp], #16
    5858:	9121e000 	add	x0, x0, #0x878
    585c:	17fffac9 	b	4380 <pthread_mutex_lock@plt>

0000000000005860 <mutex_get_unlock@@Base>:
    5860:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    5864:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5868:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    586c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5870:	91200063 	add	x3, x3, #0x800
    5874:	910003fd 	mov	x29, sp
    5878:	9109c021 	add	x1, x1, #0x270
    587c:	912f6042 	add	x2, x2, #0xbd8
    5880:	91004063 	add	x3, x3, #0x10
    5884:	52800060 	mov	w0, #0x3                   	// #3
    5888:	97fffaa6 	bl	4320 <__android_log_print@plt>
    588c:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5890:	a8c17bfd 	ldp	x29, x30, [sp], #16
    5894:	9121e000 	add	x0, x0, #0x878
    5898:	17fffb0a 	b	44c0 <pthread_mutex_unlock@plt>

000000000000589c <sigtimer_click_fn@@Base>:
    589c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    58a0:	910003fd 	mov	x29, sp
    58a4:	a90153f3 	stp	x19, x20, [sp, #16]
    58a8:	b0000133 	adrp	x19, 2a000 <gf_dump_data_interface@@Base+0x19760>
    58ac:	f90013f5 	str	x21, [sp, #32]
    58b0:	91002274 	add	x20, x19, #0x8
    58b4:	39403680 	ldrb	w0, [x20, #13]
    58b8:	340000a0 	cbz	w0, 58cc <sigtimer_click_fn@@Base+0x30>
    58bc:	a94153f3 	ldp	x19, x20, [sp, #16]
    58c0:	f94013f5 	ldr	x21, [sp, #32]
    58c4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    58c8:	d65f03c0 	ret
    58cc:	97ffffd7 	bl	5828 <mutex_get_lock@@Base>
    58d0:	39407680 	ldrb	w0, [x20, #29]
    58d4:	340003e0 	cbz	w0, 5950 <sigtimer_click_fn@@Base+0xb4>
    58d8:	91002275 	add	x21, x19, #0x8
    58dc:	394032b4 	ldrb	w20, [x21, #12]
    58e0:	340003f4 	cbz	w20, 595c <sigtimer_click_fn@@Base+0xc0>
    58e4:	7100069f 	cmp	w20, #0x1
    58e8:	54000241 	b.ne	5930 <sigtimer_click_fn@@Base+0x94>  // b.any
    58ec:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    58f0:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    58f4:	91200063 	add	x3, x3, #0x800
    58f8:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    58fc:	912fc042 	add	x2, x2, #0xbf0
    5900:	9100c063 	add	x3, x3, #0x30
    5904:	52801584 	mov	w4, #0xac                  	// #172
    5908:	9109c021 	add	x1, x1, #0x270
    590c:	52800060 	mov	w0, #0x3                   	// #3
    5910:	97fffa84 	bl	4320 <__android_log_print@plt>
    5914:	2a1403e1 	mov	w1, w20
    5918:	52801580 	mov	w0, #0xac                  	// #172
    591c:	97fffc77 	bl	4af8 <gf_send_key@@Base>
    5920:	52801580 	mov	w0, #0xac                  	// #172
    5924:	52800001 	mov	w1, #0x0                   	// #0
    5928:	97fffc74 	bl	4af8 <gf_send_key@@Base>
    592c:	390072b4 	strb	w20, [x21, #28]
    5930:	91002273 	add	x19, x19, #0x8
    5934:	52800020 	mov	w0, #0x1                   	// #1
    5938:	f94013f5 	ldr	x21, [sp, #32]
    593c:	3900327f 	strb	wzr, [x19, #12]
    5940:	39003660 	strb	w0, [x19, #13]
    5944:	a94153f3 	ldp	x19, x20, [sp, #16]
    5948:	a8c37bfd 	ldp	x29, x30, [sp], #48
    594c:	17ffffc5 	b	5860 <mutex_get_unlock@@Base>
    5950:	39407a80 	ldrb	w0, [x20, #30]
    5954:	34fffee0 	cbz	w0, 5930 <sigtimer_click_fn@@Base+0x94>
    5958:	17ffffe0 	b	58d8 <sigtimer_click_fn@@Base+0x3c>
    595c:	390072bf 	strb	wzr, [x21, #28]
    5960:	17fffff4 	b	5930 <sigtimer_click_fn@@Base+0x94>

0000000000005964 <sigtimer_longpress_fn@@Base>:
    5964:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    5968:	910003fd 	mov	x29, sp
    596c:	f9000bf3 	str	x19, [sp, #16]
    5970:	b0000133 	adrp	x19, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5974:	91002273 	add	x19, x19, #0x8
    5978:	39407260 	ldrb	w0, [x19, #28]
    597c:	35000060 	cbnz	w0, 5988 <sigtimer_longpress_fn@@Base+0x24>
    5980:	39403260 	ldrb	w0, [x19, #12]
    5984:	34000080 	cbz	w0, 5994 <sigtimer_longpress_fn@@Base+0x30>
    5988:	f9400bf3 	ldr	x19, [sp, #16]
    598c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    5990:	d65f03c0 	ret
    5994:	97ffffa5 	bl	5828 <mutex_get_lock@@Base>
    5998:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    599c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    59a0:	91200063 	add	x3, x3, #0x800
    59a4:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    59a8:	91014063 	add	x3, x3, #0x50
    59ac:	9130a042 	add	x2, x2, #0xc28
    59b0:	52801584 	mov	w4, #0xac                  	// #172
    59b4:	9109c021 	add	x1, x1, #0x270
    59b8:	52800060 	mov	w0, #0x3                   	// #3
    59bc:	97fffa59 	bl	4320 <__android_log_print@plt>
    59c0:	52800021 	mov	w1, #0x1                   	// #1
    59c4:	52801580 	mov	w0, #0xac                  	// #172
    59c8:	97fffc4c 	bl	4af8 <gf_send_key@@Base>
    59cc:	52800001 	mov	w1, #0x0                   	// #0
    59d0:	52801580 	mov	w0, #0xac                  	// #172
    59d4:	97fffc49 	bl	4af8 <gf_send_key@@Base>
    59d8:	3900327f 	strb	wzr, [x19, #12]
    59dc:	52800020 	mov	w0, #0x1                   	// #1
    59e0:	39003660 	strb	w0, [x19, #13]
    59e4:	39007260 	strb	w0, [x19, #28]
    59e8:	f9400bf3 	ldr	x19, [sp, #16]
    59ec:	a8c27bfd 	ldp	x29, x30, [sp], #32
    59f0:	17ffff9c 	b	5860 <mutex_get_unlock@@Base>

00000000000059f4 <mutex_get_lock_esd@@Base>:
    59f4:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    59f8:	9121e000 	add	x0, x0, #0x878
    59fc:	17fffa61 	b	4380 <pthread_mutex_lock@plt>

0000000000005a00 <mutex_get_unlock_esd@@Base>:
    5a00:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5a04:	9121e000 	add	x0, x0, #0x878
    5a08:	17fffaae 	b	44c0 <pthread_mutex_unlock@plt>

0000000000005a0c <toString@@Base>:
    5a0c:	91064003 	add	x3, x0, #0x190
    5a10:	14000004 	b	5a20 <toString@@Base+0x14>
    5a14:	91004000 	add	x0, x0, #0x10
    5a18:	eb03001f 	cmp	x0, x3
    5a1c:	540000c0 	b.eq	5a34 <toString@@Base+0x28>  // b.none
    5a20:	b9400002 	ldr	w2, [x0]
    5a24:	6b01005f 	cmp	w2, w1
    5a28:	54ffff61 	b.ne	5a14 <toString@@Base+0x8>  // b.any
    5a2c:	f9400400 	ldr	x0, [x0, #8]
    5a30:	d65f03c0 	ret
    5a34:	90000060 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    5a38:	91318000 	add	x0, x0, #0xc60
    5a3c:	d65f03c0 	ret

0000000000005a40 <sig_handler@@Base>:
    5a40:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    5a44:	7100741f 	cmp	w0, #0x1d
    5a48:	910003fd 	mov	x29, sp
    5a4c:	a90153f3 	stp	x19, x20, [sp, #16]
    5a50:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    5a54:	f9001bf7 	str	x23, [sp, #48]
    5a58:	a9025bf5 	stp	x21, x22, [sp, #32]
    5a5c:	b90067bf 	str	wzr, [x29, #100]
    5a60:	f947c260 	ldr	x0, [x19, #3968]
    5a64:	f9400000 	ldr	x0, [x0]
    5a68:	f90037a0 	str	x0, [x29, #104]
    5a6c:	54000160 	b.eq	5a98 <sig_handler@@Base+0x58>  // b.none
    5a70:	f947c273 	ldr	x19, [x19, #3968]
    5a74:	f94037a1 	ldr	x1, [x29, #104]
    5a78:	f9400260 	ldr	x0, [x19]
    5a7c:	eb00003f 	cmp	x1, x0
    5a80:	540007c1 	b.ne	5b78 <sig_handler@@Base+0x138>  // b.any
    5a84:	a94153f3 	ldp	x19, x20, [sp, #16]
    5a88:	a9425bf5 	ldp	x21, x22, [sp, #32]
    5a8c:	f9401bf7 	ldr	x23, [sp, #48]
    5a90:	a8c77bfd 	ldp	x29, x30, [sp], #112
    5a94:	d65f03c0 	ret
    5a98:	90000137 	adrp	x23, 29000 <gf_dump_data_interface@@Base+0x18760>
    5a9c:	910193a1 	add	x1, x29, #0x64
    5aa0:	90000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    5aa4:	90000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    5aa8:	91200294 	add	x20, x20, #0x800
    5aac:	9109c2b5 	add	x21, x21, #0x270
    5ab0:	f947aaf7 	ldr	x23, [x23, #3920]
    5ab4:	9101c294 	add	x20, x20, #0x70
    5ab8:	b0000136 	adrp	x22, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5abc:	aa1703e0 	mov	x0, x23
    5ac0:	9100c2d6 	add	x22, x22, #0x30
    5ac4:	97fffa4f 	bl	4400 <sem_getvalue@plt>
    5ac8:	b94067a4 	ldr	w4, [x29, #100]
    5acc:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5ad0:	9131a042 	add	x2, x2, #0xc68
    5ad4:	aa1403e3 	mov	x3, x20
    5ad8:	aa1503e1 	mov	x1, x21
    5adc:	52800060 	mov	w0, #0x3                   	// #3
    5ae0:	97fffa10 	bl	4320 <__android_log_print@plt>
    5ae4:	90000121 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    5ae8:	aa1603e0 	mov	x0, x22
    5aec:	f9477c21 	ldr	x1, [x1, #3832]
    5af0:	b9400024 	ldr	w4, [x1]
    5af4:	f90027a4 	str	x4, [x29, #72]
    5af8:	2a0403e1 	mov	w1, w4
    5afc:	97ffffc4 	bl	5a0c <toString@@Base>
    5b00:	f9002ba0 	str	x0, [x29, #80]
    5b04:	90000121 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    5b08:	910642c0 	add	x0, x22, #0x190
    5b0c:	f9478821 	ldr	x1, [x1, #3856]
    5b10:	b9400026 	ldr	w6, [x1]
    5b14:	f9002fa6 	str	x6, [x29, #88]
    5b18:	2a0603e1 	mov	w1, w6
    5b1c:	97ffffbc 	bl	5a0c <toString@@Base>
    5b20:	aa0003e7 	mov	x7, x0
    5b24:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5b28:	f94027a4 	ldr	x4, [x29, #72]
    5b2c:	f9402ba5 	ldr	x5, [x29, #80]
    5b30:	52800060 	mov	w0, #0x3                   	// #3
    5b34:	f9402fa6 	ldr	x6, [x29, #88]
    5b38:	aa1503e1 	mov	x1, x21
    5b3c:	91322042 	add	x2, x2, #0xc88
    5b40:	aa1403e3 	mov	x3, x20
    5b44:	97fff9f7 	bl	4320 <__android_log_print@plt>
    5b48:	b94067a0 	ldr	w0, [x29, #100]
    5b4c:	34000100 	cbz	w0, 5b6c <sig_handler@@Base+0x12c>
    5b50:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5b54:	aa1503e1 	mov	x1, x21
    5b58:	9132e042 	add	x2, x2, #0xcb8
    5b5c:	aa1403e3 	mov	x3, x20
    5b60:	52800060 	mov	w0, #0x3                   	// #3
    5b64:	97fff9ef 	bl	4320 <__android_log_print@plt>
    5b68:	17ffffc2 	b	5a70 <sig_handler@@Base+0x30>
    5b6c:	aa1703e0 	mov	x0, x23
    5b70:	97fff994 	bl	41c0 <sem_post@plt>
    5b74:	17ffffbf 	b	5a70 <sig_handler@@Base+0x30>
    5b78:	97fff9d2 	bl	42c0 <__stack_chk_fail@plt>

0000000000005b7c <gf_secspi_read_status@@Base>:
    5b7c:	14001713 	b	b7c8 <fnCa_GetStatus@@Base>

0000000000005b80 <gf_secspi_write_status@@Base>:
    5b80:	140016da 	b	b6e8 <fnCa_CleanStatus@@Base>

0000000000005b84 <sigtimer_baseUpdate@@Base>:
    5b84:	52800020 	mov	w0, #0x1                   	// #1
    5b88:	2a0003e1 	mov	w1, w0
    5b8c:	140023cd 	b	eac0 <fnCa_updateImageBase@@Base>

0000000000005b90 <detectBaseUpdateFingerUp@@Base>:
    5b90:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    5b94:	53001c00 	uxtb	w0, w0
    5b98:	53001c21 	uxtb	w1, w1
    5b9c:	910003fd 	mov	x29, sp
    5ba0:	a90153f3 	stp	x19, x20, [sp, #16]
    5ba4:	f90013f5 	str	x21, [sp, #32]
    5ba8:	7102c01f 	cmp	w0, #0xb0
    5bac:	540000a0 	b.eq	5bc0 <detectBaseUpdateFingerUp@@Base+0x30>  // b.none
    5bb0:	a94153f3 	ldp	x19, x20, [sp, #16]
    5bb4:	f94013f5 	ldr	x21, [sp, #32]
    5bb8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    5bbc:	d65f03c0 	ret
    5bc0:	12000433 	and	w19, w1, #0x3
    5bc4:	71000a7f 	cmp	w19, #0x2
    5bc8:	54ffff41 	b.ne	5bb0 <detectBaseUpdateFingerUp@@Base+0x20>  // b.any
    5bcc:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5bd0:	91002000 	add	x0, x0, #0x8
    5bd4:	39408001 	ldrb	w1, [x0, #32]
    5bd8:	340000e1 	cbz	w1, 5bf4 <detectBaseUpdateFingerUp@@Base+0x64>
    5bdc:	3900801f 	strb	wzr, [x0, #32]
    5be0:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5be4:	52800021 	mov	w1, #0x1                   	// #1
    5be8:	f947a000 	ldr	x0, [x0, #3904]
    5bec:	39000001 	strb	w1, [x0]
    5bf0:	17fffff0 	b	5bb0 <detectBaseUpdateFingerUp@@Base+0x20>
    5bf4:	52800020 	mov	w0, #0x1                   	// #1
    5bf8:	2a0003e1 	mov	w1, w0
    5bfc:	940023b1 	bl	eac0 <fnCa_updateImageBase@@Base>
    5c00:	6b1f001f 	cmp	w0, wzr
    5c04:	5400040d 	b.le	5c84 <detectBaseUpdateFingerUp@@Base+0xf4>
    5c08:	90000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    5c0c:	90000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    5c10:	91200294 	add	x20, x20, #0x800
    5c14:	9109c2b5 	add	x21, x21, #0x270
    5c18:	91020294 	add	x20, x20, #0x80
    5c1c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5c20:	aa1503e1 	mov	x1, x21
    5c24:	91336042 	add	x2, x2, #0xcd8
    5c28:	aa1403e3 	mov	x3, x20
    5c2c:	52800060 	mov	w0, #0x3                   	// #3
    5c30:	97fff9bc 	bl	4320 <__android_log_print@plt>
    5c34:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5c38:	aa1503e1 	mov	x1, x21
    5c3c:	91344042 	add	x2, x2, #0xd10
    5c40:	aa1403e3 	mov	x3, x20
    5c44:	52800060 	mov	w0, #0x3                   	// #3
    5c48:	97fff9b6 	bl	4320 <__android_log_print@plt>
    5c4c:	940016a7 	bl	b6e8 <fnCa_CleanStatus@@Base>
    5c50:	52800000 	mov	w0, #0x0                   	// #0
    5c54:	2a1303e1 	mov	w1, w19
    5c58:	9400239a 	bl	eac0 <fnCa_updateImageBase@@Base>
    5c5c:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5c60:	f947e800 	ldr	x0, [x0, #4048]
    5c64:	b9403800 	ldr	w0, [x0, #56]
    5c68:	34fffa40 	cbz	w0, 5bb0 <detectBaseUpdateFingerUp@@Base+0x20>
    5c6c:	2a1303e1 	mov	w1, w19
    5c70:	f94013f5 	ldr	x21, [sp, #32]
    5c74:	a94153f3 	ldp	x19, x20, [sp, #16]
    5c78:	a8c37bfd 	ldp	x29, x30, [sp], #48
    5c7c:	52800000 	mov	w0, #0x0                   	// #0
    5c80:	140023fe 	b	ec78 <fnCa_updateNavBase@@Base>
    5c84:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5c88:	f947e800 	ldr	x0, [x0, #4048]
    5c8c:	b9403800 	ldr	w0, [x0, #56]
    5c90:	34fff900 	cbz	w0, 5bb0 <detectBaseUpdateFingerUp@@Base+0x20>
    5c94:	52800020 	mov	w0, #0x1                   	// #1
    5c98:	f94013f5 	ldr	x21, [sp, #32]
    5c9c:	a94153f3 	ldp	x19, x20, [sp, #16]
    5ca0:	a8c37bfd 	ldp	x29, x30, [sp], #48
    5ca4:	2a0003e1 	mov	w1, w0
    5ca8:	140023f4 	b	ec78 <fnCa_updateNavBase@@Base>

0000000000005cac <testBaseUpdate@@Base>:
    5cac:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5cb0:	52800001 	mov	w1, #0x0                   	// #0
    5cb4:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    5cb8:	52800002 	mov	w2, #0x0                   	// #0
    5cbc:	528000a3 	mov	w3, #0x5                   	// #5
    5cc0:	910003fd 	mov	x29, sp
    5cc4:	f947d800 	ldr	x0, [x0, #4016]
    5cc8:	52800004 	mov	w4, #0x0                   	// #0
    5ccc:	97fffccf 	bl	5008 <gf_active_timer@@Base>
    5cd0:	34000060 	cbz	w0, 5cdc <testBaseUpdate@@Base+0x30>
    5cd4:	a8c17bfd 	ldp	x29, x30, [sp], #16
    5cd8:	d65f03c0 	ret
    5cdc:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5ce0:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5ce4:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5ce8:	91200063 	add	x3, x3, #0x800
    5cec:	a8c17bfd 	ldp	x29, x30, [sp], #16
    5cf0:	52800060 	mov	w0, #0x3                   	// #3
    5cf4:	9109c021 	add	x1, x1, #0x270
    5cf8:	9135c042 	add	x2, x2, #0xd70
    5cfc:	91028063 	add	x3, x3, #0xa0
    5d00:	17fff988 	b	4320 <__android_log_print@plt>

0000000000005d04 <gx_handle_exception@@Base>:
    5d04:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    5d08:	910003fd 	mov	x29, sp
    5d0c:	a90153f3 	stp	x19, x20, [sp, #16]
    5d10:	90000133 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    5d14:	f90013f5 	str	x21, [sp, #32]
    5d18:	3900dfbf 	strb	wzr, [x29, #55]
    5d1c:	39400404 	ldrb	w4, [x0, #1]
    5d20:	f947c260 	ldr	x0, [x19, #3968]
    5d24:	7103409f 	cmp	w4, #0xd0
    5d28:	f9400000 	ldr	x0, [x0]
    5d2c:	f9001fa0 	str	x0, [x29, #56]
    5d30:	54000560 	b.eq	5ddc <gx_handle_exception@@Base+0xd8>  // b.none
    5d34:	54000503 	b.cc	5dd4 <gx_handle_exception@@Base+0xd0>  // b.lo, b.ul, b.last
    5d38:	51038080 	sub	w0, w4, #0xe0
    5d3c:	7100101f 	cmp	w0, #0x4
    5d40:	540004a8 	b.hi	5dd4 <gx_handle_exception@@Base+0xd0>  // b.pmore
    5d44:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5d48:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5d4c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5d50:	91200063 	add	x3, x3, #0x800
    5d54:	91368042 	add	x2, x2, #0xda0
    5d58:	9102c063 	add	x3, x3, #0xb0
    5d5c:	9109c021 	add	x1, x1, #0x270
    5d60:	52800060 	mov	w0, #0x3                   	// #3
    5d64:	910103b4 	add	x20, x29, #0x40
    5d68:	97fff96e 	bl	4320 <__android_log_print@plt>
    5d6c:	97fffac2 	bl	4874 <gf_disable_irq@@Base>
    5d70:	9400165e 	bl	b6e8 <fnCa_CleanStatus@@Base>
    5d74:	52800020 	mov	w0, #0x1                   	// #1
    5d78:	381f7e80 	strb	w0, [x20, #-9]!
    5d7c:	aa1403e0 	mov	x0, x20
    5d80:	9400179c 	bl	bbf0 <fnCa_FWUpdate@@Base>
    5d84:	97fffaf1 	bl	4948 <gf_hw_reset@@Base>
    5d88:	52800041 	mov	w1, #0x2                   	// #2
    5d8c:	aa1403e0 	mov	x0, x20
    5d90:	3900dfa1 	strb	w1, [x29, #55]
    5d94:	94001797 	bl	bbf0 <fnCa_FWUpdate@@Base>
    5d98:	97fffa86 	bl	47b0 <gf_enable_irq@@Base>
    5d9c:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5da0:	f9477c00 	ldr	x0, [x0, #3832]
    5da4:	b9400000 	ldr	w0, [x0]
    5da8:	9400140d 	bl	addc <fnCa_SetMode@@Base>
    5dac:	52800020 	mov	w0, #0x1                   	// #1
    5db0:	f947c273 	ldr	x19, [x19, #3968]
    5db4:	f9401fa2 	ldr	x2, [x29, #56]
    5db8:	f9400261 	ldr	x1, [x19]
    5dbc:	eb01005f 	cmp	x2, x1
    5dc0:	54000a81 	b.ne	5f10 <gx_handle_exception@@Base+0x20c>  // b.any
    5dc4:	a94153f3 	ldp	x19, x20, [sp, #16]
    5dc8:	f94013f5 	ldr	x21, [sp, #32]
    5dcc:	a8c47bfd 	ldp	x29, x30, [sp], #64
    5dd0:	d65f03c0 	ret
    5dd4:	52800000 	mov	w0, #0x0                   	// #0
    5dd8:	17fffff6 	b	5db0 <gx_handle_exception@@Base+0xac>
    5ddc:	94001643 	bl	b6e8 <fnCa_CleanStatus@@Base>
    5de0:	90000124 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    5de4:	f947c484 	ldr	x4, [x4, #3976]
    5de8:	39400080 	ldrb	w0, [x4]
    5dec:	350006a0 	cbnz	w0, 5ec0 <gx_handle_exception@@Base+0x1bc>
    5df0:	90000124 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    5df4:	f947a084 	ldr	x4, [x4, #3904]
    5df8:	39400080 	ldrb	w0, [x4]
    5dfc:	35000320 	cbnz	w0, 5e60 <gx_handle_exception@@Base+0x15c>
    5e00:	52800000 	mov	w0, #0x0                   	// #0
    5e04:	52800041 	mov	w1, #0x2                   	// #2
    5e08:	9400232e 	bl	eac0 <fnCa_updateImageBase@@Base>
    5e0c:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5e10:	f947e800 	ldr	x0, [x0, #4048]
    5e14:	b9403800 	ldr	w0, [x0, #56]
    5e18:	350006c0 	cbnz	w0, 5ef0 <gx_handle_exception@@Base+0x1ec>
    5e1c:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5e20:	90000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    5e24:	9121e000 	add	x0, x0, #0x878
    5e28:	90000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    5e2c:	b9402c04 	ldr	w4, [x0, #44]
    5e30:	b9402805 	ldr	w5, [x0, #40]
    5e34:	11000484 	add	w4, w4, #0x1
    5e38:	b9002c04 	str	w4, [x0, #44]
    5e3c:	91200283 	add	x3, x20, #0x800
    5e40:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5e44:	52800060 	mov	w0, #0x3                   	// #3
    5e48:	9109c2a1 	add	x1, x21, #0x270
    5e4c:	9138a042 	add	x2, x2, #0xe28
    5e50:	9102c063 	add	x3, x3, #0xb0
    5e54:	97fff933 	bl	4320 <__android_log_print@plt>
    5e58:	52800020 	mov	w0, #0x1                   	// #1
    5e5c:	17ffffd5 	b	5db0 <gx_handle_exception@@Base+0xac>
    5e60:	90000074 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    5e64:	90000075 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    5e68:	91200283 	add	x3, x20, #0x800
    5e6c:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5e70:	9109c2a1 	add	x1, x21, #0x270
    5e74:	9137a042 	add	x2, x2, #0xde8
    5e78:	9102c063 	add	x3, x3, #0xb0
    5e7c:	52800060 	mov	w0, #0x3                   	// #3
    5e80:	3900009f 	strb	wzr, [x4]
    5e84:	97fff927 	bl	4320 <__android_log_print@plt>
    5e88:	52800020 	mov	w0, #0x1                   	// #1
    5e8c:	2a0003e1 	mov	w1, w0
    5e90:	9400230c 	bl	eac0 <fnCa_updateImageBase@@Base>
    5e94:	90000120 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    5e98:	f947e800 	ldr	x0, [x0, #4048]
    5e9c:	b9403800 	ldr	w0, [x0, #56]
    5ea0:	35000300 	cbnz	w0, 5f00 <gx_handle_exception@@Base+0x1fc>
    5ea4:	b0000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    5ea8:	9121e000 	add	x0, x0, #0x878
    5eac:	b9402805 	ldr	w5, [x0, #40]
    5eb0:	b9402c04 	ldr	w4, [x0, #44]
    5eb4:	110004a5 	add	w5, w5, #0x1
    5eb8:	b9002805 	str	w5, [x0, #40]
    5ebc:	17ffffe0 	b	5e3c <gx_handle_exception@@Base+0x138>
    5ec0:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5ec4:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5ec8:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5ecc:	91200063 	add	x3, x3, #0x800
    5ed0:	52800060 	mov	w0, #0x3                   	// #3
    5ed4:	9109c021 	add	x1, x1, #0x270
    5ed8:	91370042 	add	x2, x2, #0xdc0
    5edc:	9102c063 	add	x3, x3, #0xb0
    5ee0:	3900009f 	strb	wzr, [x4]
    5ee4:	97fff90f 	bl	4320 <__android_log_print@plt>
    5ee8:	52800020 	mov	w0, #0x1                   	// #1
    5eec:	17ffffb1 	b	5db0 <gx_handle_exception@@Base+0xac>
    5ef0:	52800041 	mov	w1, #0x2                   	// #2
    5ef4:	52800000 	mov	w0, #0x0                   	// #0
    5ef8:	94002360 	bl	ec78 <fnCa_updateNavBase@@Base>
    5efc:	17ffffc8 	b	5e1c <gx_handle_exception@@Base+0x118>
    5f00:	52800020 	mov	w0, #0x1                   	// #1
    5f04:	2a0003e1 	mov	w1, w0
    5f08:	9400235c 	bl	ec78 <fnCa_updateNavBase@@Base>
    5f0c:	17ffffe6 	b	5ea4 <gx_handle_exception@@Base+0x1a0>
    5f10:	97fff8ec 	bl	42c0 <__stack_chk_fail@plt>

0000000000005f14 <device_send_key@@Base>:
    5f14:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    5f18:	7102b01f 	cmp	w0, #0xac
    5f1c:	910003fd 	mov	x29, sp
    5f20:	a90153f3 	stp	x19, x20, [sp, #16]
    5f24:	a90363f7 	stp	x23, x24, [sp, #48]
    5f28:	a9025bf5 	stp	x21, x22, [sp, #32]
    5f2c:	2a0003f4 	mov	w20, w0
    5f30:	2a0103f7 	mov	w23, w1
    5f34:	540002a0 	b.eq	5f88 <device_send_key@@Base+0x74>  // b.none
    5f38:	7109101f 	cmp	w0, #0x244
    5f3c:	54000a20 	b.eq	6080 <device_send_key@@Base+0x16c>  // b.none
    5f40:	7102781f 	cmp	w0, #0x9e
    5f44:	52800058 	mov	w24, #0x2                   	// #2
    5f48:	54000220 	b.eq	5f8c <device_send_key@@Base+0x78>  // b.none
    5f4c:	90000063 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    5f50:	90000061 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    5f54:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5f58:	91200063 	add	x3, x3, #0x800
    5f5c:	52800060 	mov	w0, #0x3                   	// #3
    5f60:	9109c021 	add	x1, x1, #0x270
    5f64:	913a2042 	add	x2, x2, #0xe88
    5f68:	91034063 	add	x3, x3, #0xd0
    5f6c:	97fff8ed 	bl	4320 <__android_log_print@plt>
    5f70:	12800000 	mov	w0, #0xffffffff            	// #-1
    5f74:	a94153f3 	ldp	x19, x20, [sp, #16]
    5f78:	a9425bf5 	ldp	x21, x22, [sp, #32]
    5f7c:	a94363f7 	ldp	x23, x24, [sp, #48]
    5f80:	a8c47bfd 	ldp	x29, x30, [sp], #64
    5f84:	d65f03c0 	ret
    5f88:	52800038 	mov	w24, #0x1                   	// #1
    5f8c:	90000135 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    5f90:	90000073 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    5f94:	90000076 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    5f98:	91200273 	add	x19, x19, #0x800
    5f9c:	9109c2d6 	add	x22, x22, #0x270
    5fa0:	91034273 	add	x19, x19, #0xd0
    5fa4:	f947d2b5 	ldr	x21, [x21, #4000]
    5fa8:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5fac:	52800060 	mov	w0, #0x3                   	// #3
    5fb0:	aa1603e1 	mov	x1, x22
    5fb4:	913a8042 	add	x2, x2, #0xea0
    5fb8:	aa1303e3 	mov	x3, x19
    5fbc:	b94002a6 	ldr	w6, [x21]
    5fc0:	2a1403e4 	mov	w4, w20
    5fc4:	2a1703e5 	mov	w5, w23
    5fc8:	2a1803e7 	mov	w7, w24
    5fcc:	97fff8d5 	bl	4320 <__android_log_print@plt>
    5fd0:	710006ff 	cmp	w23, #0x1
    5fd4:	540005a0 	b.eq	6088 <device_send_key@@Base+0x174>  // b.none
    5fd8:	350003f7 	cbnz	w23, 6054 <device_send_key@@Base+0x140>
    5fdc:	b94002a4 	ldr	w4, [x21]
    5fe0:	90000062 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    5fe4:	52800060 	mov	w0, #0x3                   	// #3
    5fe8:	aa1603e1 	mov	x1, x22
    5fec:	913ba042 	add	x2, x2, #0xee8
    5ff0:	aa1303e3 	mov	x3, x19
    5ff4:	0a040304 	and	w4, w24, w4
    5ff8:	97fff8ca 	bl	4320 <__android_log_print@plt>
    5ffc:	b94002a0 	ldr	w0, [x21]
    6000:	6a00031f 	tst	w24, w0
    6004:	540006c0 	b.eq	60dc <device_send_key@@Base+0x1c8>  // b.none
    6008:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    600c:	aa1303e3 	mov	x3, x19
    6010:	2a1403e4 	mov	w4, w20
    6014:	aa1603e1 	mov	x1, x22
    6018:	913d0042 	add	x2, x2, #0xf40
    601c:	52800005 	mov	w5, #0x0                   	// #0
    6020:	52800060 	mov	w0, #0x3                   	// #3
    6024:	97fff8bf 	bl	4320 <__android_log_print@plt>
    6028:	2a1403e0 	mov	w0, w20
    602c:	52800001 	mov	w1, #0x0                   	// #0
    6030:	97fffab2 	bl	4af8 <gf_send_key@@Base>
    6034:	b94002a0 	ldr	w0, [x21]
    6038:	a94153f3 	ldp	x19, x20, [sp, #16]
    603c:	0a380018 	bic	w24, w0, w24
    6040:	b90002b8 	str	w24, [x21]
    6044:	a9425bf5 	ldp	x21, x22, [sp, #32]
    6048:	a94363f7 	ldp	x23, x24, [sp, #48]
    604c:	a8c47bfd 	ldp	x29, x30, [sp], #64
    6050:	d65f03c0 	ret
    6054:	aa1603e1 	mov	x1, x22
    6058:	aa1303e3 	mov	x3, x19
    605c:	2a1703e4 	mov	w4, w23
    6060:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    6064:	a94153f3 	ldp	x19, x20, [sp, #16]
    6068:	a9425bf5 	ldp	x21, x22, [sp, #32]
    606c:	a94363f7 	ldp	x23, x24, [sp, #48]
    6070:	a8c47bfd 	ldp	x29, x30, [sp], #64
    6074:	528000c0 	mov	w0, #0x6                   	// #6
    6078:	913e4042 	add	x2, x2, #0xf90
    607c:	17fff8a9 	b	4320 <__android_log_print@plt>
    6080:	52800098 	mov	w24, #0x4                   	// #4
    6084:	17ffffc2 	b	5f8c <device_send_key@@Base+0x78>
    6088:	b94002a4 	ldr	w4, [x21]
    608c:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    6090:	52800060 	mov	w0, #0x3                   	// #3
    6094:	aa1603e1 	mov	x1, x22
    6098:	913ba042 	add	x2, x2, #0xee8
    609c:	aa1303e3 	mov	x3, x19
    60a0:	0a040304 	and	w4, w24, w4
    60a4:	97fff89f 	bl	4320 <__android_log_print@plt>
    60a8:	b94002a0 	ldr	w0, [x21]
    60ac:	6a00031f 	tst	w24, w0
    60b0:	54000200 	b.eq	60f0 <device_send_key@@Base+0x1dc>  // b.none
    60b4:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    60b8:	528000c0 	mov	w0, #0x6                   	// #6
    60bc:	aa1603e1 	mov	x1, x22
    60c0:	913c6042 	add	x2, x2, #0xf18
    60c4:	aa1303e3 	mov	x3, x19
    60c8:	a9425bf5 	ldp	x21, x22, [sp, #32]
    60cc:	a94153f3 	ldp	x19, x20, [sp, #16]
    60d0:	a94363f7 	ldp	x23, x24, [sp, #48]
    60d4:	a8c47bfd 	ldp	x29, x30, [sp], #64
    60d8:	17fff892 	b	4320 <__android_log_print@plt>
    60dc:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    60e0:	528000c0 	mov	w0, #0x6                   	// #6
    60e4:	aa1603e1 	mov	x1, x22
    60e8:	913dc042 	add	x2, x2, #0xf70
    60ec:	17fffff6 	b	60c4 <device_send_key@@Base+0x1b0>
    60f0:	2a1403e0 	mov	w0, w20
    60f4:	2a1703e1 	mov	w1, w23
    60f8:	97fffa80 	bl	4af8 <gf_send_key@@Base>
    60fc:	b94002a0 	ldr	w0, [x21]
    6100:	2a000318 	orr	w24, w24, w0
    6104:	b90002b8 	str	w24, [x21]
    6108:	17ffff9b 	b	5f74 <device_send_key@@Base+0x60>

000000000000610c <sig_in_image@@Base>:
    610c:	d10283ff 	sub	sp, sp, #0xa0
    6110:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    6114:	913ec042 	add	x2, x2, #0xfb0
    6118:	52802de5 	mov	w5, #0x16f                 	// #367
    611c:	52800060 	mov	w0, #0x3                   	// #3
    6120:	a9017bfd 	stp	x29, x30, [sp, #16]
    6124:	910043fd 	add	x29, sp, #0x10
    6128:	a90253f3 	stp	x19, x20, [sp, #32]
    612c:	f0000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    6130:	f90033fb 	str	x27, [sp, #96]
    6134:	a9056bf9 	stp	x25, x26, [sp, #80]
    6138:	f000005a 	adrp	x26, 11000 <gf_dump_data_interface@@Base+0x760>
    613c:	f000005b 	adrp	x27, 11000 <gf_dump_data_interface@@Base+0x760>
    6140:	f947c286 	ldr	x6, [x20, #3968]
    6144:	91200344 	add	x4, x26, #0x800
    6148:	a90463f7 	stp	x23, x24, [sp, #64]
    614c:	91038097 	add	x23, x4, #0xe0
    6150:	9109c378 	add	x24, x27, #0x270
    6154:	f94000c6 	ldr	x6, [x6]
    6158:	aa1703e3 	mov	x3, x23
    615c:	9103c084 	add	x4, x4, #0xf0
    6160:	aa1803e1 	mov	x1, x24
    6164:	f90047a6 	str	x6, [x29, #136]
    6168:	a9035bf5 	stp	x21, x22, [sp, #48]
    616c:	97fff86d 	bl	4320 <__android_log_print@plt>
    6170:	9101e3b6 	add	x22, x29, #0x78
    6174:	aa1603e0 	mov	x0, x22
    6178:	f0000115 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    617c:	97fffe80 	bl	5b7c <gf_secspi_read_status@@Base>
    6180:	3941e7b3 	ldrb	w19, [x29, #121]
    6184:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6188:	3941fba7 	ldrb	w7, [x29, #126]
    618c:	9100c000 	add	x0, x0, #0x30
    6190:	2a1303e1 	mov	w1, w19
    6194:	910c8000 	add	x0, x0, #0x320
    6198:	3941f7b9 	ldrb	w25, [x29, #125]
    619c:	f90037a7 	str	x7, [x29, #104]
    61a0:	97fffe1b 	bl	5a0c <toString@@Base>
    61a4:	f9478ab5 	ldr	x21, [x21, #3856]
    61a8:	f0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    61ac:	f94037a7 	ldr	x7, [x29, #104]
    61b0:	aa0003e5 	mov	x5, x0
    61b4:	aa1803e1 	mov	x1, x24
    61b8:	b94002a8 	ldr	w8, [x21]
    61bc:	52800060 	mov	w0, #0x3                   	// #3
    61c0:	913f0042 	add	x2, x2, #0xfc0
    61c4:	aa1703e3 	mov	x3, x23
    61c8:	2a1303e4 	mov	w4, w19
    61cc:	2a1903e6 	mov	w6, w25
    61d0:	b90003e8 	str	w8, [sp]
    61d4:	97fff853 	bl	4320 <__android_log_print@plt>
    61d8:	7102c27f 	cmp	w19, #0xb0
    61dc:	aa1603e0 	mov	x0, x22
    61e0:	540004e0 	b.eq	627c <sig_in_image@@Base+0x170>  // b.none
    61e4:	97fffec8 	bl	5d04 <gx_handle_exception@@Base>
    61e8:	350002e0 	cbnz	w0, 6244 <sig_in_image@@Base+0x138>
    61ec:	b94002a1 	ldr	w1, [x21]
    61f0:	71000c3f 	cmp	w1, #0x3
    61f4:	1a9f17e2 	cset	w2, eq	// eq = none
    61f8:	34000062 	cbz	w2, 6204 <sig_in_image@@Base+0xf8>
    61fc:	7103027f 	cmp	w19, #0xc0
    6200:	54000b60 	b.eq	636c <sig_in_image@@Base+0x260>  // b.none
    6204:	34000a53 	cbz	w19, 634c <sig_in_image@@Base+0x240>
    6208:	11010260 	add	w0, w19, #0x40
    620c:	53001c00 	uxtb	w0, w0
    6210:	7100041f 	cmp	w0, #0x1
    6214:	54000949 	b.ls	633c <sig_in_image@@Base+0x230>  // b.plast
    6218:	91200343 	add	x3, x26, #0x800
    621c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6220:	9109c361 	add	x1, x27, #0x270
    6224:	910ea042 	add	x2, x2, #0x3a8
    6228:	91038063 	add	x3, x3, #0xe0
    622c:	52800060 	mov	w0, #0x3                   	// #3
    6230:	97fff83c 	bl	4320 <__android_log_print@plt>
    6234:	9400152d 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6238:	2a1303e0 	mov	w0, w19
    623c:	2a1903e1 	mov	w1, w25
    6240:	97fffe54 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    6244:	f947c294 	ldr	x20, [x20, #3968]
    6248:	f94047a1 	ldr	x1, [x29, #136]
    624c:	f9400280 	ldr	x0, [x20]
    6250:	eb00003f 	cmp	x1, x0
    6254:	540019c1 	b.ne	658c <sig_in_image@@Base+0x480>  // b.any
    6258:	d10043bf 	sub	sp, x29, #0x10
    625c:	a94253f3 	ldp	x19, x20, [sp, #32]
    6260:	a9435bf5 	ldp	x21, x22, [sp, #48]
    6264:	a94463f7 	ldp	x23, x24, [sp, #64]
    6268:	a9456bf9 	ldp	x25, x26, [sp, #80]
    626c:	f94033fb 	ldr	x27, [sp, #96]
    6270:	a9417bfd 	ldp	x29, x30, [sp, #16]
    6274:	910283ff 	add	sp, sp, #0xa0
    6278:	d65f03c0 	ret
    627c:	f0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    6280:	12000322 	and	w2, w25, #0x1
    6284:	f9479821 	ldr	x1, [x1, #3888]
    6288:	39000022 	strb	w2, [x1]
    628c:	97fffe9e 	bl	5d04 <gx_handle_exception@@Base>
    6290:	35fffda0 	cbnz	w0, 6244 <sig_in_image@@Base+0x138>
    6294:	94001515 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6298:	12000720 	and	w0, w25, #0x3
    629c:	7100081f 	cmp	w0, #0x2
    62a0:	54000ca0 	b.eq	6434 <sig_in_image@@Base+0x328>  // b.none
    62a4:	71000c1f 	cmp	w0, #0x3
    62a8:	540006a0 	b.eq	637c <sig_in_image@@Base+0x270>  // b.none
    62ac:	361807d9 	tbz	w25, #3, 63a4 <sig_in_image@@Base+0x298>
    62b0:	aa1803e1 	mov	x1, x24
    62b4:	37100db9 	tbnz	w25, #2, 6468 <sig_in_image@@Base+0x35c>
    62b8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    62bc:	aa1703e3 	mov	x3, x23
    62c0:	91068042 	add	x2, x2, #0x1a0
    62c4:	52800060 	mov	w0, #0x3                   	// #3
    62c8:	97fff816 	bl	4320 <__android_log_print@plt>
    62cc:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    62d0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    62d4:	aa1703e3 	mov	x3, x23
    62d8:	9102e042 	add	x2, x2, #0xb8
    62dc:	aa1803e1 	mov	x1, x24
    62e0:	52800060 	mov	w0, #0x3                   	// #3
    62e4:	f9479c84 	ldr	x4, [x4, #3896]
    62e8:	b9400084 	ldr	w4, [x4]
    62ec:	97fff80d 	bl	4320 <__android_log_print@plt>
    62f0:	52800001 	mov	w1, #0x0                   	// #0
    62f4:	52804880 	mov	w0, #0x244                 	// #580
    62f8:	97ffff07 	bl	5f14 <device_send_key@@Base>
    62fc:	2a0003f5 	mov	w21, w0
    6300:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6304:	aa1803e1 	mov	x1, x24
    6308:	aa1703e3 	mov	x3, x23
    630c:	91072042 	add	x2, x2, #0x1c8
    6310:	52804884 	mov	w4, #0x244                 	// #580
    6314:	52800060 	mov	w0, #0x3                   	// #3
    6318:	97fff802 	bl	4320 <__android_log_print@plt>
    631c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6320:	aa1803e1 	mov	x1, x24
    6324:	91084042 	add	x2, x2, #0x210
    6328:	aa1703e3 	mov	x3, x23
    632c:	2a1503e4 	mov	w4, w21
    6330:	52800060 	mov	w0, #0x3                   	// #3
    6334:	97fff7fb 	bl	4320 <__android_log_print@plt>
    6338:	17ffffc0 	b	6238 <sig_in_image@@Base+0x12c>
    633c:	7100083f 	cmp	w1, #0x2
    6340:	540002a0 	b.eq	6394 <sig_in_image@@Base+0x288>  // b.none
    6344:	34fff7a2 	cbz	w2, 6238 <sig_in_image@@Base+0x12c>
    6348:	17ffffbb 	b	6234 <sig_in_image@@Base+0x128>
    634c:	91200343 	add	x3, x26, #0x800
    6350:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6354:	9109c361 	add	x1, x27, #0x270
    6358:	91004042 	add	x2, x2, #0x10
    635c:	91038063 	add	x3, x3, #0xe0
    6360:	52800060 	mov	w0, #0x3                   	// #3
    6364:	97fff7ef 	bl	4320 <__android_log_print@plt>
    6368:	17ffffb7 	b	6244 <sig_in_image@@Base+0x138>
    636c:	52800020 	mov	w0, #0x1                   	// #1
    6370:	940023ec 	bl	f320 <fnCa_controlSampling@@Base>
    6374:	940014dd 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6378:	17ffffb3 	b	6244 <sig_in_image@@Base+0x138>
    637c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6380:	aa1803e1 	mov	x1, x24
    6384:	9101a042 	add	x2, x2, #0x68
    6388:	aa1703e3 	mov	x3, x23
    638c:	97fff7e5 	bl	4320 <__android_log_print@plt>
    6390:	17ffffaa 	b	6238 <sig_in_image@@Base+0x12c>
    6394:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    6398:	f947f400 	ldr	x0, [x0, #4072]
    639c:	97fff789 	bl	41c0 <sem_post@plt>
    63a0:	17ffffa6 	b	6238 <sig_in_image@@Base+0x12c>
    63a4:	362ff4b9 	tbz	w25, #5, 6238 <sig_in_image@@Base+0x12c>
    63a8:	aa1803e1 	mov	x1, x24
    63ac:	37200ab9 	tbnz	w25, #4, 6500 <sig_in_image@@Base+0x3f4>
    63b0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    63b4:	aa1703e3 	mov	x3, x23
    63b8:	910c0042 	add	x2, x2, #0x300
    63bc:	52800060 	mov	w0, #0x3                   	// #3
    63c0:	97fff7d8 	bl	4320 <__android_log_print@plt>
    63c4:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    63c8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    63cc:	aa1703e3 	mov	x3, x23
    63d0:	9102e042 	add	x2, x2, #0xb8
    63d4:	aa1803e1 	mov	x1, x24
    63d8:	52800060 	mov	w0, #0x3                   	// #3
    63dc:	f9479c84 	ldr	x4, [x4, #3896]
    63e0:	b9400084 	ldr	w4, [x4]
    63e4:	97fff7cf 	bl	4320 <__android_log_print@plt>
    63e8:	52800001 	mov	w1, #0x0                   	// #0
    63ec:	528013c0 	mov	w0, #0x9e                  	// #158
    63f0:	97fffec9 	bl	5f14 <device_send_key@@Base>
    63f4:	2a0003f5 	mov	w21, w0
    63f8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    63fc:	aa1803e1 	mov	x1, x24
    6400:	aa1703e3 	mov	x3, x23
    6404:	910ca042 	add	x2, x2, #0x328
    6408:	528013c4 	mov	w4, #0x9e                  	// #158
    640c:	52800060 	mov	w0, #0x3                   	// #3
    6410:	97fff7c4 	bl	4320 <__android_log_print@plt>
    6414:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6418:	aa1803e1 	mov	x1, x24
    641c:	910da042 	add	x2, x2, #0x368
    6420:	aa1703e3 	mov	x3, x23
    6424:	2a1503e4 	mov	w4, w21
    6428:	52800060 	mov	w0, #0x3                   	// #3
    642c:	97fff7bd 	bl	4320 <__android_log_print@plt>
    6430:	17ffff82 	b	6238 <sig_in_image@@Base+0x12c>
    6434:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6438:	52800060 	mov	w0, #0x3                   	// #3
    643c:	aa1803e1 	mov	x1, x24
    6440:	91010042 	add	x2, x2, #0x40
    6444:	aa1703e3 	mov	x3, x23
    6448:	97fff7b6 	bl	4320 <__android_log_print@plt>
    644c:	b94002a0 	ldr	w0, [x21]
    6450:	71000c1f 	cmp	w0, #0x3
    6454:	54000940 	b.eq	657c <sig_in_image@@Base+0x470>  // b.none
    6458:	52800001 	mov	w1, #0x0                   	// #0
    645c:	52801580 	mov	w0, #0xac                  	// #172
    6460:	97fffead 	bl	5f14 <device_send_key@@Base>
    6464:	17ffff75 	b	6238 <sig_in_image@@Base+0x12c>
    6468:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    646c:	aa1703e3 	mov	x3, x23
    6470:	91024042 	add	x2, x2, #0x90
    6474:	52800060 	mov	w0, #0x3                   	// #3
    6478:	97fff7aa 	bl	4320 <__android_log_print@plt>
    647c:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6480:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6484:	aa1803e1 	mov	x1, x24
    6488:	aa1703e3 	mov	x3, x23
    648c:	9102e042 	add	x2, x2, #0xb8
    6490:	52800060 	mov	w0, #0x3                   	// #3
    6494:	f9479c84 	ldr	x4, [x4, #3896]
    6498:	b9400084 	ldr	w4, [x4]
    649c:	97fff7a1 	bl	4320 <__android_log_print@plt>
    64a0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    64a4:	aa1703e3 	mov	x3, x23
    64a8:	91036042 	add	x2, x2, #0xd8
    64ac:	aa1803e1 	mov	x1, x24
    64b0:	52800060 	mov	w0, #0x3                   	// #3
    64b4:	97fff79b 	bl	4320 <__android_log_print@plt>
    64b8:	52800021 	mov	w1, #0x1                   	// #1
    64bc:	52804880 	mov	w0, #0x244                 	// #580
    64c0:	97fffe95 	bl	5f14 <device_send_key@@Base>
    64c4:	2a0003e4 	mov	w4, w0
    64c8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    64cc:	aa1803e1 	mov	x1, x24
    64d0:	aa1703e3 	mov	x3, x23
    64d4:	91046042 	add	x2, x2, #0x118
    64d8:	52800060 	mov	w0, #0x3                   	// #3
    64dc:	97fff791 	bl	4320 <__android_log_print@plt>
    64e0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    64e4:	aa1803e1 	mov	x1, x24
    64e8:	91058042 	add	x2, x2, #0x160
    64ec:	aa1703e3 	mov	x3, x23
    64f0:	52804884 	mov	w4, #0x244                 	// #580
    64f4:	52800060 	mov	w0, #0x3                   	// #3
    64f8:	97fff78a 	bl	4320 <__android_log_print@plt>
    64fc:	17ffff4f 	b	6238 <sig_in_image@@Base+0x12c>
    6500:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6504:	aa1703e3 	mov	x3, x23
    6508:	91096042 	add	x2, x2, #0x258
    650c:	52800060 	mov	w0, #0x3                   	// #3
    6510:	97fff784 	bl	4320 <__android_log_print@plt>
    6514:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6518:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    651c:	aa1803e1 	mov	x1, x24
    6520:	aa1703e3 	mov	x3, x23
    6524:	9102e042 	add	x2, x2, #0xb8
    6528:	52800060 	mov	w0, #0x3                   	// #3
    652c:	f9479c84 	ldr	x4, [x4, #3896]
    6530:	b9400084 	ldr	w4, [x4]
    6534:	97fff77b 	bl	4320 <__android_log_print@plt>
    6538:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    653c:	aa1703e3 	mov	x3, x23
    6540:	910a0042 	add	x2, x2, #0x280
    6544:	aa1803e1 	mov	x1, x24
    6548:	52800060 	mov	w0, #0x3                   	// #3
    654c:	97fff775 	bl	4320 <__android_log_print@plt>
    6550:	52800021 	mov	w1, #0x1                   	// #1
    6554:	528013c0 	mov	w0, #0x9e                  	// #158
    6558:	97fffe6f 	bl	5f14 <device_send_key@@Base>
    655c:	2a0003e4 	mov	w4, w0
    6560:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6564:	aa1803e1 	mov	x1, x24
    6568:	910b0042 	add	x2, x2, #0x2c0
    656c:	aa1703e3 	mov	x3, x23
    6570:	52800060 	mov	w0, #0x3                   	// #3
    6574:	97fff76b 	bl	4320 <__android_log_print@plt>
    6578:	17ffff30 	b	6238 <sig_in_image@@Base+0x12c>
    657c:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    6580:	f947cc00 	ldr	x0, [x0, #3992]
    6584:	97fff70f 	bl	41c0 <sem_post@plt>
    6588:	17ffffb4 	b	6458 <sig_in_image@@Base+0x34c>
    658c:	97fff74d 	bl	42c0 <__stack_chk_fail@plt>

0000000000006590 <sig_in_key@@Base>:
    6590:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
    6594:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6598:	52800060 	mov	w0, #0x3                   	// #3
    659c:	910003fd 	mov	x29, sp
    65a0:	a90153f3 	stp	x19, x20, [sp, #16]
    65a4:	f0000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    65a8:	910f6042 	add	x2, x2, #0x3d8
    65ac:	a9046bf9 	stp	x25, x26, [sp, #64]
    65b0:	f0000059 	adrp	x25, 11000 <gf_dump_data_interface@@Base+0x760>
    65b4:	f000005a 	adrp	x26, 11000 <gf_dump_data_interface@@Base+0x760>
    65b8:	f947c265 	ldr	x5, [x19, #3968]
    65bc:	91200324 	add	x4, x25, #0x800
    65c0:	a9025bf5 	stp	x21, x22, [sp, #32]
    65c4:	91040095 	add	x21, x4, #0x100
    65c8:	9109c356 	add	x22, x26, #0x270
    65cc:	f94000a5 	ldr	x5, [x5]
    65d0:	aa1503e3 	mov	x3, x21
    65d4:	91044084 	add	x4, x4, #0x110
    65d8:	aa1603e1 	mov	x1, x22
    65dc:	f9003fa5 	str	x5, [x29, #120]
    65e0:	a90363f7 	stp	x23, x24, [sp, #48]
    65e4:	97fff74f 	bl	4320 <__android_log_print@plt>
    65e8:	9101a3b7 	add	x23, x29, #0x68
    65ec:	aa1703e0 	mov	x0, x23
    65f0:	97fffd63 	bl	5b7c <gf_secspi_read_status@@Base>
    65f4:	3941a7b4 	ldrb	w20, [x29, #105]
    65f8:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    65fc:	3941bba7 	ldrb	w7, [x29, #110]
    6600:	9100c000 	add	x0, x0, #0x30
    6604:	2a1403e1 	mov	w1, w20
    6608:	910c8000 	add	x0, x0, #0x320
    660c:	3941b7b8 	ldrb	w24, [x29, #109]
    6610:	f9002fa7 	str	x7, [x29, #88]
    6614:	97fffcfe 	bl	5a0c <toString@@Base>
    6618:	aa0003e5 	mov	x5, x0
    661c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6620:	f9402fa7 	ldr	x7, [x29, #88]
    6624:	52800060 	mov	w0, #0x3                   	// #3
    6628:	aa1603e1 	mov	x1, x22
    662c:	910fa042 	add	x2, x2, #0x3e8
    6630:	aa1503e3 	mov	x3, x21
    6634:	2a1403e4 	mov	w4, w20
    6638:	2a1803e6 	mov	w6, w24
    663c:	97fff739 	bl	4320 <__android_log_print@plt>
    6640:	7102c29f 	cmp	w20, #0xb0
    6644:	aa1703e0 	mov	x0, x23
    6648:	54000260 	b.eq	6694 <sig_in_key@@Base+0x104>  // b.none
    664c:	97fffdae 	bl	5d04 <gx_handle_exception@@Base>
    6650:	350000c0 	cbnz	w0, 6668 <sig_in_key@@Base+0xd8>
    6654:	34000754 	cbz	w20, 673c <sig_in_key@@Base+0x1ac>
    6658:	94001424 	bl	b6e8 <fnCa_CleanStatus@@Base>
    665c:	2a1403e0 	mov	w0, w20
    6660:	2a1803e1 	mov	w1, w24
    6664:	97fffd4b 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    6668:	f947c273 	ldr	x19, [x19, #3968]
    666c:	f9403fa1 	ldr	x1, [x29, #120]
    6670:	f9400260 	ldr	x0, [x19]
    6674:	eb00003f 	cmp	x1, x0
    6678:	54002001 	b.ne	6a78 <sig_in_key@@Base+0x4e8>  // b.any
    667c:	a94153f3 	ldp	x19, x20, [sp, #16]
    6680:	a9425bf5 	ldp	x21, x22, [sp, #32]
    6684:	a94363f7 	ldp	x23, x24, [sp, #48]
    6688:	a9446bf9 	ldp	x25, x26, [sp, #64]
    668c:	a8c87bfd 	ldp	x29, x30, [sp], #128
    6690:	d65f03c0 	ret
    6694:	f0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    6698:	12000317 	and	w23, w24, #0x1
    669c:	f9479821 	ldr	x1, [x1, #3888]
    66a0:	39000037 	strb	w23, [x1]
    66a4:	97fffd98 	bl	5d04 <gx_handle_exception@@Base>
    66a8:	35fffe00 	cbnz	w0, 6668 <sig_in_key@@Base+0xd8>
    66ac:	36080578 	tbz	w24, #1, 6758 <sig_in_key@@Base+0x1c8>
    66b0:	aa1603e1 	mov	x1, x22
    66b4:	35000e37 	cbnz	w23, 6878 <sig_in_key@@Base+0x2e8>
    66b8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    66bc:	aa1503e3 	mov	x3, x21
    66c0:	91010042 	add	x2, x2, #0x40
    66c4:	52800060 	mov	w0, #0x3                   	// #3
    66c8:	97fff716 	bl	4320 <__android_log_print@plt>
    66cc:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    66d0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    66d4:	aa1503e3 	mov	x3, x21
    66d8:	9102e042 	add	x2, x2, #0xb8
    66dc:	aa1603e1 	mov	x1, x22
    66e0:	52800060 	mov	w0, #0x3                   	// #3
    66e4:	f9479c84 	ldr	x4, [x4, #3896]
    66e8:	b9400084 	ldr	w4, [x4]
    66ec:	97fff70d 	bl	4320 <__android_log_print@plt>
    66f0:	52800001 	mov	w1, #0x0                   	// #0
    66f4:	52801580 	mov	w0, #0xac                  	// #172
    66f8:	97fffe07 	bl	5f14 <device_send_key@@Base>
    66fc:	2a0003f7 	mov	w23, w0
    6700:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6704:	aa1603e1 	mov	x1, x22
    6708:	aa1503e3 	mov	x3, x21
    670c:	91144042 	add	x2, x2, #0x510
    6710:	52801584 	mov	w4, #0xac                  	// #172
    6714:	52800060 	mov	w0, #0x3                   	// #3
    6718:	97fff702 	bl	4320 <__android_log_print@plt>
    671c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6720:	aa1603e1 	mov	x1, x22
    6724:	91156042 	add	x2, x2, #0x558
    6728:	aa1503e3 	mov	x3, x21
    672c:	2a1703e4 	mov	w4, w23
    6730:	52800060 	mov	w0, #0x3                   	// #3
    6734:	97fff6fb 	bl	4320 <__android_log_print@plt>
    6738:	17ffffc8 	b	6658 <sig_in_key@@Base+0xc8>
    673c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6740:	aa1603e1 	mov	x1, x22
    6744:	9110a042 	add	x2, x2, #0x428
    6748:	aa1503e3 	mov	x3, x21
    674c:	52800060 	mov	w0, #0x3                   	// #3
    6750:	97fff6f4 	bl	4320 <__android_log_print@plt>
    6754:	17ffffc5 	b	6668 <sig_in_key@@Base+0xd8>
    6758:	371804b8 	tbnz	w24, #3, 67ec <sig_in_key@@Base+0x25c>
    675c:	362ff7f8 	tbz	w24, #5, 6658 <sig_in_key@@Base+0xc8>
    6760:	aa1603e1 	mov	x1, x22
    6764:	37201438 	tbnz	w24, #4, 69e8 <sig_in_key@@Base+0x458>
    6768:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    676c:	aa1503e3 	mov	x3, x21
    6770:	910c0042 	add	x2, x2, #0x300
    6774:	52800060 	mov	w0, #0x3                   	// #3
    6778:	97fff6ea 	bl	4320 <__android_log_print@plt>
    677c:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6780:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6784:	aa1503e3 	mov	x3, x21
    6788:	9102e042 	add	x2, x2, #0xb8
    678c:	aa1603e1 	mov	x1, x22
    6790:	52800060 	mov	w0, #0x3                   	// #3
    6794:	f9479c84 	ldr	x4, [x4, #3896]
    6798:	b9400084 	ldr	w4, [x4]
    679c:	97fff6e1 	bl	4320 <__android_log_print@plt>
    67a0:	52800001 	mov	w1, #0x0                   	// #0
    67a4:	528013c0 	mov	w0, #0x9e                  	// #158
    67a8:	97fffddb 	bl	5f14 <device_send_key@@Base>
    67ac:	2a0003f7 	mov	w23, w0
    67b0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    67b4:	aa1603e1 	mov	x1, x22
    67b8:	aa1503e3 	mov	x3, x21
    67bc:	910ca042 	add	x2, x2, #0x328
    67c0:	528013c4 	mov	w4, #0x9e                  	// #158
    67c4:	52800060 	mov	w0, #0x3                   	// #3
    67c8:	97fff6d6 	bl	4320 <__android_log_print@plt>
    67cc:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    67d0:	aa1603e1 	mov	x1, x22
    67d4:	910da042 	add	x2, x2, #0x368
    67d8:	aa1503e3 	mov	x3, x21
    67dc:	2a1703e4 	mov	w4, w23
    67e0:	52800060 	mov	w0, #0x3                   	// #3
    67e4:	97fff6cf 	bl	4320 <__android_log_print@plt>
    67e8:	17ffff9c 	b	6658 <sig_in_key@@Base+0xc8>
    67ec:	aa1603e1 	mov	x1, x22
    67f0:	37100a58 	tbnz	w24, #2, 6938 <sig_in_key@@Base+0x3a8>
    67f4:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    67f8:	aa1503e3 	mov	x3, x21
    67fc:	91068042 	add	x2, x2, #0x1a0
    6800:	52800060 	mov	w0, #0x3                   	// #3
    6804:	97fff6c7 	bl	4320 <__android_log_print@plt>
    6808:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    680c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6810:	aa1503e3 	mov	x3, x21
    6814:	9102e042 	add	x2, x2, #0xb8
    6818:	aa1603e1 	mov	x1, x22
    681c:	52800060 	mov	w0, #0x3                   	// #3
    6820:	f9479c84 	ldr	x4, [x4, #3896]
    6824:	b9400084 	ldr	w4, [x4]
    6828:	97fff6be 	bl	4320 <__android_log_print@plt>
    682c:	52800001 	mov	w1, #0x0                   	// #0
    6830:	52804880 	mov	w0, #0x244                 	// #580
    6834:	97fffdb8 	bl	5f14 <device_send_key@@Base>
    6838:	2a0003f7 	mov	w23, w0
    683c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6840:	aa1603e1 	mov	x1, x22
    6844:	aa1503e3 	mov	x3, x21
    6848:	91072042 	add	x2, x2, #0x1c8
    684c:	52804884 	mov	w4, #0x244                 	// #580
    6850:	52800060 	mov	w0, #0x3                   	// #3
    6854:	97fff6b3 	bl	4320 <__android_log_print@plt>
    6858:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    685c:	aa1603e1 	mov	x1, x22
    6860:	91084042 	add	x2, x2, #0x210
    6864:	aa1503e3 	mov	x3, x21
    6868:	2a1703e4 	mov	w4, w23
    686c:	52800060 	mov	w0, #0x3                   	// #3
    6870:	97fff6ac 	bl	4320 <__android_log_print@plt>
    6874:	17ffff79 	b	6658 <sig_in_key@@Base+0xc8>
    6878:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    687c:	aa1503e3 	mov	x3, x21
    6880:	9101a042 	add	x2, x2, #0x68
    6884:	52800060 	mov	w0, #0x3                   	// #3
    6888:	97fff6a6 	bl	4320 <__android_log_print@plt>
    688c:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6890:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6894:	aa1603e1 	mov	x1, x22
    6898:	9102e042 	add	x2, x2, #0xb8
    689c:	aa1503e3 	mov	x3, x21
    68a0:	52800060 	mov	w0, #0x3                   	// #3
    68a4:	f9479c84 	ldr	x4, [x4, #3896]
    68a8:	b9400084 	ldr	w4, [x4]
    68ac:	97fff69d 	bl	4320 <__android_log_print@plt>
    68b0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    68b4:	aa1503e3 	mov	x3, x21
    68b8:	91114042 	add	x2, x2, #0x450
    68bc:	aa1603e1 	mov	x1, x22
    68c0:	52800060 	mov	w0, #0x3                   	// #3
    68c4:	97fff697 	bl	4320 <__android_log_print@plt>
    68c8:	52800021 	mov	w1, #0x1                   	// #1
    68cc:	52801580 	mov	w0, #0xac                  	// #172
    68d0:	97fffd91 	bl	5f14 <device_send_key@@Base>
    68d4:	2a0003e4 	mov	w4, w0
    68d8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    68dc:	aa1603e1 	mov	x1, x22
    68e0:	91122042 	add	x2, x2, #0x488
    68e4:	aa1503e3 	mov	x3, x21
    68e8:	52800060 	mov	w0, #0x3                   	// #3
    68ec:	97fff68d 	bl	4320 <__android_log_print@plt>
    68f0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    68f4:	aa1603e1 	mov	x1, x22
    68f8:	52800060 	mov	w0, #0x3                   	// #3
    68fc:	91134042 	add	x2, x2, #0x4d0
    6900:	aa1503e3 	mov	x3, x21
    6904:	52801584 	mov	w4, #0xac                  	// #172
    6908:	97fff686 	bl	4320 <__android_log_print@plt>
    690c:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    6910:	f947b400 	ldr	x0, [x0, #3944]
    6914:	39400001 	ldrb	w1, [x0]
    6918:	7100043f 	cmp	w1, #0x1
    691c:	54ffe9e1 	b.ne	6658 <sig_in_key@@Base+0xc8>  // b.any
    6920:	52800e80 	mov	w0, #0x74                  	// #116
    6924:	97fff875 	bl	4af8 <gf_send_key@@Base>
    6928:	52800001 	mov	w1, #0x0                   	// #0
    692c:	52800e80 	mov	w0, #0x74                  	// #116
    6930:	97fff872 	bl	4af8 <gf_send_key@@Base>
    6934:	17ffff49 	b	6658 <sig_in_key@@Base+0xc8>
    6938:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    693c:	aa1503e3 	mov	x3, x21
    6940:	91024042 	add	x2, x2, #0x90
    6944:	52800060 	mov	w0, #0x3                   	// #3
    6948:	97fff676 	bl	4320 <__android_log_print@plt>
    694c:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6950:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6954:	aa1603e1 	mov	x1, x22
    6958:	9102e042 	add	x2, x2, #0xb8
    695c:	aa1503e3 	mov	x3, x21
    6960:	52800060 	mov	w0, #0x3                   	// #3
    6964:	f9479c84 	ldr	x4, [x4, #3896]
    6968:	b9400084 	ldr	w4, [x4]
    696c:	97fff66d 	bl	4320 <__android_log_print@plt>
    6970:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6974:	52800060 	mov	w0, #0x3                   	// #3
    6978:	aa1603e1 	mov	x1, x22
    697c:	91168042 	add	x2, x2, #0x5a0
    6980:	aa1503e3 	mov	x3, x21
    6984:	97fff667 	bl	4320 <__android_log_print@plt>
    6988:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    698c:	f947b400 	ldr	x0, [x0, #3944]
    6990:	39400000 	ldrb	w0, [x0]
    6994:	7100041f 	cmp	w0, #0x1
    6998:	54000160 	b.eq	69c4 <sig_in_key@@Base+0x434>  // b.none
    699c:	52800021 	mov	w1, #0x1                   	// #1
    69a0:	52804880 	mov	w0, #0x244                 	// #580
    69a4:	97fffd5c 	bl	5f14 <device_send_key@@Base>
    69a8:	2a0003e4 	mov	w4, w0
    69ac:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    69b0:	52800060 	mov	w0, #0x3                   	// #3
    69b4:	aa1603e1 	mov	x1, x22
    69b8:	91046042 	add	x2, x2, #0x118
    69bc:	aa1503e3 	mov	x3, x21
    69c0:	97fff658 	bl	4320 <__android_log_print@plt>
    69c4:	91200323 	add	x3, x25, #0x800
    69c8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    69cc:	9109c341 	add	x1, x26, #0x270
    69d0:	91058042 	add	x2, x2, #0x160
    69d4:	91040063 	add	x3, x3, #0x100
    69d8:	52804884 	mov	w4, #0x244                 	// #580
    69dc:	52800060 	mov	w0, #0x3                   	// #3
    69e0:	97fff650 	bl	4320 <__android_log_print@plt>
    69e4:	17ffff1d 	b	6658 <sig_in_key@@Base+0xc8>
    69e8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    69ec:	aa1503e3 	mov	x3, x21
    69f0:	91096042 	add	x2, x2, #0x258
    69f4:	52800060 	mov	w0, #0x3                   	// #3
    69f8:	97fff64a 	bl	4320 <__android_log_print@plt>
    69fc:	f0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    6a00:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6a04:	aa1603e1 	mov	x1, x22
    6a08:	9102e042 	add	x2, x2, #0xb8
    6a0c:	aa1503e3 	mov	x3, x21
    6a10:	52800060 	mov	w0, #0x3                   	// #3
    6a14:	f9479c84 	ldr	x4, [x4, #3896]
    6a18:	b9400084 	ldr	w4, [x4]
    6a1c:	97fff641 	bl	4320 <__android_log_print@plt>
    6a20:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6a24:	52800060 	mov	w0, #0x3                   	// #3
    6a28:	aa1603e1 	mov	x1, x22
    6a2c:	91176042 	add	x2, x2, #0x5d8
    6a30:	aa1503e3 	mov	x3, x21
    6a34:	97fff63b 	bl	4320 <__android_log_print@plt>
    6a38:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    6a3c:	f947b400 	ldr	x0, [x0, #3944]
    6a40:	39400000 	ldrb	w0, [x0]
    6a44:	7100041f 	cmp	w0, #0x1
    6a48:	54ffe080 	b.eq	6658 <sig_in_key@@Base+0xc8>  // b.none
    6a4c:	52800021 	mov	w1, #0x1                   	// #1
    6a50:	528013c0 	mov	w0, #0x9e                  	// #158
    6a54:	97fffd30 	bl	5f14 <device_send_key@@Base>
    6a58:	2a0003e4 	mov	w4, w0
    6a5c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6a60:	aa1603e1 	mov	x1, x22
    6a64:	91184042 	add	x2, x2, #0x610
    6a68:	aa1503e3 	mov	x3, x21
    6a6c:	52800060 	mov	w0, #0x3                   	// #3
    6a70:	97fff62c 	bl	4320 <__android_log_print@plt>
    6a74:	17fffef9 	b	6658 <sig_in_key@@Base+0xc8>
    6a78:	97fff612 	bl	42c0 <__stack_chk_fail@plt>

0000000000006a7c <sig_in_sleep@@Base>:
    6a7c:	f0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    6a80:	f0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    6a84:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6a88:	91200063 	add	x3, x3, #0x800
    6a8c:	52800060 	mov	w0, #0x3                   	// #3
    6a90:	9109c021 	add	x1, x1, #0x270
    6a94:	91194042 	add	x2, x2, #0x650
    6a98:	91048063 	add	x3, x3, #0x120
    6a9c:	17fff621 	b	4320 <__android_log_print@plt>

0000000000006aa0 <processNavResult@@Base>:
    6aa0:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    6aa4:	910003fd 	mov	x29, sp
    6aa8:	a9025bf5 	stp	x21, x22, [sp, #32]
    6aac:	f0000115 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    6ab0:	9100d3a1 	add	x1, x29, #0x34
    6ab4:	9100c3a0 	add	x0, x29, #0x30
    6ab8:	b90037bf 	str	wzr, [x29, #52]
    6abc:	a90153f3 	stp	x19, x20, [sp, #16]
    6ac0:	f947c2a2 	ldr	x2, [x21, #3968]
    6ac4:	f0000053 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    6ac8:	f0000056 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    6acc:	f9400042 	ldr	x2, [x2]
    6ad0:	f9001fa2 	str	x2, [x29, #56]
    6ad4:	94001fb5 	bl	e9a8 <fnCa_GetNavResultPoll@@Base>
    6ad8:	b94033a1 	ldr	w1, [x29, #48]
    6adc:	51000420 	sub	w0, w1, #0x1
    6ae0:	71000c1f 	cmp	w0, #0x3
    6ae4:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6ae8:	9100c000 	add	x0, x0, #0x30
    6aec:	9112c000 	add	x0, x0, #0x4b0
    6af0:	540005a8 	b.hi	6ba4 <processNavResult@@Base+0x104>  // b.pmore
    6af4:	97fffbc6 	bl	5a0c <toString@@Base>
    6af8:	aa0003e4 	mov	x4, x0
    6afc:	91200263 	add	x3, x19, #0x800
    6b00:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6b04:	9109c2c1 	add	x1, x22, #0x270
    6b08:	911a0042 	add	x2, x2, #0x680
    6b0c:	9104c063 	add	x3, x3, #0x130
    6b10:	52800060 	mov	w0, #0x3                   	// #3
    6b14:	97fff603 	bl	4320 <__android_log_print@plt>
    6b18:	b94033a0 	ldr	w0, [x29, #48]
    6b1c:	7100441f 	cmp	w0, #0x11
    6b20:	540005a9 	b.ls	6bd4 <processNavResult@@Base+0x134>  // b.plast
    6b24:	91200263 	add	x3, x19, #0x800
    6b28:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6b2c:	9109c2c1 	add	x1, x22, #0x270
    6b30:	911b8042 	add	x2, x2, #0x6e0
    6b34:	9104c063 	add	x3, x3, #0x130
    6b38:	52800060 	mov	w0, #0x3                   	// #3
    6b3c:	97fff5f9 	bl	4320 <__android_log_print@plt>
    6b40:	90000134 	adrp	x20, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6b44:	91200263 	add	x3, x19, #0x800
    6b48:	91002294 	add	x20, x20, #0x8
    6b4c:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6b50:	52800060 	mov	w0, #0x3                   	// #3
    6b54:	9109c2c1 	add	x1, x22, #0x270
    6b58:	911c4042 	add	x2, x2, #0x710
    6b5c:	9104c063 	add	x3, x3, #0x130
    6b60:	39403685 	ldrb	w5, [x20, #13]
    6b64:	52800aa4 	mov	w4, #0x55                  	// #85
    6b68:	39407286 	ldrb	w6, [x20, #28]
    6b6c:	97fff5ed 	bl	4320 <__android_log_print@plt>
    6b70:	52800020 	mov	w0, #0x1                   	// #1
    6b74:	39003680 	strb	w0, [x20, #13]
    6b78:	39007280 	strb	w0, [x20, #28]
    6b7c:	f947c2b5 	ldr	x21, [x21, #3968]
    6b80:	f9401fb3 	ldr	x19, [x29, #56]
    6b84:	b94037a0 	ldr	w0, [x29, #52]
    6b88:	f94002a1 	ldr	x1, [x21]
    6b8c:	eb01027f 	cmp	x19, x1
    6b90:	54000801 	b.ne	6c90 <processNavResult@@Base+0x1f0>  // b.any
    6b94:	a94153f3 	ldp	x19, x20, [sp, #16]
    6b98:	a9425bf5 	ldp	x21, x22, [sp, #32]
    6b9c:	a8c47bfd 	ldp	x29, x30, [sp], #64
    6ba0:	d65f03c0 	ret
    6ba4:	97fffb9a 	bl	5a0c <toString@@Base>
    6ba8:	aa0003e4 	mov	x4, x0
    6bac:	91200263 	add	x3, x19, #0x800
    6bb0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6bb4:	52800060 	mov	w0, #0x3                   	// #3
    6bb8:	9109c2c1 	add	x1, x22, #0x270
    6bbc:	911ac042 	add	x2, x2, #0x6b0
    6bc0:	9104c063 	add	x3, x3, #0x130
    6bc4:	97fff5d7 	bl	4320 <__android_log_print@plt>
    6bc8:	b94033a0 	ldr	w0, [x29, #48]
    6bcc:	7100441f 	cmp	w0, #0x11
    6bd0:	54fffaa8 	b.hi	6b24 <processNavResult@@Base+0x84>  // b.pmore
    6bd4:	f0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    6bd8:	911f4021 	add	x1, x1, #0x7d0
    6bdc:	38604820 	ldrb	w0, [x1, w0, uxtw]
    6be0:	10000061 	adr	x1, 6bec <processNavResult@@Base+0x14c>
    6be4:	8b208820 	add	x0, x1, w0, sxtb #2
    6be8:	d61f0000 	br	x0
    6bec:	90000126 	adrp	x6, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6bf0:	91200263 	add	x3, x19, #0x800
    6bf4:	910020c6 	add	x6, x6, #0x8
    6bf8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6bfc:	9109c2c1 	add	x1, x22, #0x270
    6c00:	911c4042 	add	x2, x2, #0x710
    6c04:	9104c063 	add	x3, x3, #0x130
    6c08:	52801544 	mov	w4, #0xaa                  	// #170
    6c0c:	394034c5 	ldrb	w5, [x6, #13]
    6c10:	52800060 	mov	w0, #0x3                   	// #3
    6c14:	394070c6 	ldrb	w6, [x6, #28]
    6c18:	97fff5c2 	bl	4320 <__android_log_print@plt>
    6c1c:	17ffffd8 	b	6b7c <processNavResult@@Base+0xdc>
    6c20:	52800021 	mov	w1, #0x1                   	// #1
    6c24:	52800d80 	mov	w0, #0x6c                  	// #108
    6c28:	97fff7b4 	bl	4af8 <gf_send_key@@Base>
    6c2c:	52800001 	mov	w1, #0x0                   	// #0
    6c30:	52800d80 	mov	w0, #0x6c                  	// #108
    6c34:	97fff7b1 	bl	4af8 <gf_send_key@@Base>
    6c38:	17ffffc2 	b	6b40 <processNavResult@@Base+0xa0>
    6c3c:	52800021 	mov	w1, #0x1                   	// #1
    6c40:	52800d20 	mov	w0, #0x69                  	// #105
    6c44:	97fff7ad 	bl	4af8 <gf_send_key@@Base>
    6c48:	52800001 	mov	w1, #0x0                   	// #0
    6c4c:	52800d20 	mov	w0, #0x69                  	// #105
    6c50:	97fff7aa 	bl	4af8 <gf_send_key@@Base>
    6c54:	17ffffbb 	b	6b40 <processNavResult@@Base+0xa0>
    6c58:	52800021 	mov	w1, #0x1                   	// #1
    6c5c:	52800d40 	mov	w0, #0x6a                  	// #106
    6c60:	97fff7a6 	bl	4af8 <gf_send_key@@Base>
    6c64:	52800001 	mov	w1, #0x0                   	// #0
    6c68:	52800d40 	mov	w0, #0x6a                  	// #106
    6c6c:	97fff7a3 	bl	4af8 <gf_send_key@@Base>
    6c70:	17ffffb4 	b	6b40 <processNavResult@@Base+0xa0>
    6c74:	52800021 	mov	w1, #0x1                   	// #1
    6c78:	52800ce0 	mov	w0, #0x67                  	// #103
    6c7c:	97fff79f 	bl	4af8 <gf_send_key@@Base>
    6c80:	52800001 	mov	w1, #0x0                   	// #0
    6c84:	52800ce0 	mov	w0, #0x67                  	// #103
    6c88:	97fff79c 	bl	4af8 <gf_send_key@@Base>
    6c8c:	17ffffad 	b	6b40 <processNavResult@@Base+0xa0>
    6c90:	97fff58c 	bl	42c0 <__stack_chk_fail@plt>

0000000000006c94 <sig_in_nag@@Base>:
    6c94:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
    6c98:	f0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    6c9c:	910003fd 	mov	x29, sp
    6ca0:	a90153f3 	stp	x19, x20, [sp, #16]
    6ca4:	f0000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    6ca8:	f947e800 	ldr	x0, [x0, #4048]
    6cac:	a9025bf5 	stp	x21, x22, [sp, #32]
    6cb0:	a90363f7 	stp	x23, x24, [sp, #48]
    6cb4:	f947c261 	ldr	x1, [x19, #3968]
    6cb8:	b9403800 	ldr	w0, [x0, #56]
    6cbc:	a9046bf9 	stp	x25, x26, [sp, #64]
    6cc0:	f9400021 	ldr	x1, [x1]
    6cc4:	f9003fa1 	str	x1, [x29, #120]
    6cc8:	35000840 	cbnz	w0, 6dd0 <sig_in_nag@@Base+0x13c>
    6ccc:	f0000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    6cd0:	f0000056 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    6cd4:	912542a4 	add	x4, x21, #0x950
    6cd8:	9109c2d9 	add	x25, x22, #0x270
    6cdc:	91008098 	add	x24, x4, #0x20
    6ce0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6ce4:	910f6042 	add	x2, x2, #0x3d8
    6ce8:	aa1803e3 	mov	x3, x24
    6cec:	9100c084 	add	x4, x4, #0x30
    6cf0:	aa1903e1 	mov	x1, x25
    6cf4:	52800060 	mov	w0, #0x3                   	// #3
    6cf8:	9101a3b7 	add	x23, x29, #0x68
    6cfc:	f90037bf 	str	xzr, [x29, #104]
    6d00:	7900e3bf 	strh	wzr, [x29, #112]
    6d04:	97fff587 	bl	4320 <__android_log_print@plt>
    6d08:	aa1703e0 	mov	x0, x23
    6d0c:	97fffb9c 	bl	5b7c <gf_secspi_read_status@@Base>
    6d10:	3941a7b4 	ldrb	w20, [x29, #105]
    6d14:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6d18:	3941bba7 	ldrb	w7, [x29, #110]
    6d1c:	9100c000 	add	x0, x0, #0x30
    6d20:	2a1403e1 	mov	w1, w20
    6d24:	910c8000 	add	x0, x0, #0x320
    6d28:	3941b7ba 	ldrb	w26, [x29, #109]
    6d2c:	f9002fa7 	str	x7, [x29, #88]
    6d30:	97fffb37 	bl	5a0c <toString@@Base>
    6d34:	aa0003e5 	mov	x5, x0
    6d38:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6d3c:	f9402fa7 	ldr	x7, [x29, #88]
    6d40:	52800060 	mov	w0, #0x3                   	// #3
    6d44:	aa1903e1 	mov	x1, x25
    6d48:	910fa042 	add	x2, x2, #0x3e8
    6d4c:	aa1803e3 	mov	x3, x24
    6d50:	2a1403e4 	mov	w4, w20
    6d54:	2a1a03e6 	mov	w6, w26
    6d58:	97fff572 	bl	4320 <__android_log_print@plt>
    6d5c:	7102c29f 	cmp	w20, #0xb0
    6d60:	aa1703e0 	mov	x0, x23
    6d64:	54000a60 	b.eq	6eb0 <sig_in_nag@@Base+0x21c>  // b.none
    6d68:	97fffbe7 	bl	5d04 <gx_handle_exception@@Base>
    6d6c:	34000180 	cbz	w0, 6d9c <sig_in_nag@@Base+0x108>
    6d70:	f947c273 	ldr	x19, [x19, #3968]
    6d74:	f9403fa1 	ldr	x1, [x29, #120]
    6d78:	f9400260 	ldr	x0, [x19]
    6d7c:	eb00003f 	cmp	x1, x0
    6d80:	54003cc1 	b.ne	7518 <sig_in_nag@@Base+0x884>  // b.any
    6d84:	a94153f3 	ldp	x19, x20, [sp, #16]
    6d88:	a9425bf5 	ldp	x21, x22, [sp, #32]
    6d8c:	a94363f7 	ldp	x23, x24, [sp, #48]
    6d90:	a9446bf9 	ldp	x25, x26, [sp, #64]
    6d94:	a8c87bfd 	ldp	x29, x30, [sp], #128
    6d98:	d65f03c0 	ret
    6d9c:	340016d4 	cbz	w20, 7074 <sig_in_nag@@Base+0x3e0>
    6da0:	5102c280 	sub	w0, w20, #0xb0
    6da4:	7100181f 	cmp	w0, #0x6
    6da8:	54000fc9 	b.ls	6fa0 <sig_in_nag@@Base+0x30c>  // b.plast
    6dac:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6db0:	52800060 	mov	w0, #0x3                   	// #3
    6db4:	aa1903e1 	mov	x1, x25
    6db8:	9123c042 	add	x2, x2, #0x8f0
    6dbc:	aa1803e3 	mov	x3, x24
    6dc0:	2a1403e4 	mov	w4, w20
    6dc4:	97fff557 	bl	4320 <__android_log_print@plt>
    6dc8:	94001248 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6dcc:	14000035 	b	6ea0 <sig_in_nag@@Base+0x20c>
    6dd0:	f0000056 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    6dd4:	f0000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    6dd8:	912542b7 	add	x23, x21, #0x950
    6ddc:	9109c2d8 	add	x24, x22, #0x270
    6de0:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6de4:	aa1703e3 	mov	x3, x23
    6de8:	910f6042 	add	x2, x2, #0x3d8
    6dec:	910042e4 	add	x4, x23, #0x10
    6df0:	aa1803e1 	mov	x1, x24
    6df4:	52800060 	mov	w0, #0x3                   	// #3
    6df8:	9101a3b9 	add	x25, x29, #0x68
    6dfc:	f90037bf 	str	xzr, [x29, #104]
    6e00:	7900e3bf 	strh	wzr, [x29, #112]
    6e04:	97fff547 	bl	4320 <__android_log_print@plt>
    6e08:	aa1903e0 	mov	x0, x25
    6e0c:	97fffb5c 	bl	5b7c <gf_secspi_read_status@@Base>
    6e10:	3941a7b4 	ldrb	w20, [x29, #105]
    6e14:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6e18:	3941bba7 	ldrb	w7, [x29, #110]
    6e1c:	9100c000 	add	x0, x0, #0x30
    6e20:	2a1403e1 	mov	w1, w20
    6e24:	910c8000 	add	x0, x0, #0x320
    6e28:	3941b7ba 	ldrb	w26, [x29, #109]
    6e2c:	f9002fa7 	str	x7, [x29, #88]
    6e30:	97fffaf7 	bl	5a0c <toString@@Base>
    6e34:	aa0003e5 	mov	x5, x0
    6e38:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6e3c:	f9402fa7 	ldr	x7, [x29, #88]
    6e40:	52800060 	mov	w0, #0x3                   	// #3
    6e44:	aa1803e1 	mov	x1, x24
    6e48:	910fa042 	add	x2, x2, #0x3e8
    6e4c:	aa1703e3 	mov	x3, x23
    6e50:	2a1403e4 	mov	w4, w20
    6e54:	2a1a03e6 	mov	w6, w26
    6e58:	97fff532 	bl	4320 <__android_log_print@plt>
    6e5c:	7102c29f 	cmp	w20, #0xb0
    6e60:	aa1903e0 	mov	x0, x25
    6e64:	54000aa0 	b.eq	6fb8 <sig_in_nag@@Base+0x324>  // b.none
    6e68:	97fffba7 	bl	5d04 <gx_handle_exception@@Base>
    6e6c:	35fff820 	cbnz	w0, 6d70 <sig_in_nag@@Base+0xdc>
    6e70:	34001114 	cbz	w20, 7090 <sig_in_nag@@Base+0x3fc>
    6e74:	7102c29f 	cmp	w20, #0xb0
    6e78:	54000ac0 	b.eq	6fd0 <sig_in_nag@@Base+0x33c>  // b.none
    6e7c:	71030a9f 	cmp	w20, #0xc2
    6e80:	aa1803e1 	mov	x1, x24
    6e84:	54001140 	b.eq	70ac <sig_in_nag@@Base+0x418>  // b.none
    6e88:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6e8c:	aa1703e3 	mov	x3, x23
    6e90:	9123c042 	add	x2, x2, #0x8f0
    6e94:	2a1403e4 	mov	w4, w20
    6e98:	52800060 	mov	w0, #0x3                   	// #3
    6e9c:	97fff521 	bl	4320 <__android_log_print@plt>
    6ea0:	2a1403e0 	mov	w0, w20
    6ea4:	2a1a03e1 	mov	w1, w26
    6ea8:	97fffb3a 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    6eac:	17ffffb1 	b	6d70 <sig_in_nag@@Base+0xdc>
    6eb0:	f0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    6eb4:	12000342 	and	w2, w26, #0x1
    6eb8:	f9479821 	ldr	x1, [x1, #3888]
    6ebc:	39000022 	strb	w2, [x1]
    6ec0:	97fffb91 	bl	5d04 <gx_handle_exception@@Base>
    6ec4:	35fff560 	cbnz	w0, 6d70 <sig_in_nag@@Base+0xdc>
    6ec8:	912542b7 	add	x23, x21, #0x950
    6ecc:	9109c2d8 	add	x24, x22, #0x270
    6ed0:	910082f7 	add	x23, x23, #0x20
    6ed4:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6ed8:	52800060 	mov	w0, #0x3                   	// #3
    6edc:	aa1803e1 	mov	x1, x24
    6ee0:	911f6042 	add	x2, x2, #0x7d8
    6ee4:	aa1703e3 	mov	x3, x23
    6ee8:	97fff50e 	bl	4320 <__android_log_print@plt>
    6eec:	360819da 	tbz	w26, #1, 7224 <sig_in_nag@@Base+0x590>
    6ef0:	370027ba 	tbnz	w26, #0, 73e4 <sig_in_nag@@Base+0x750>
    6ef4:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6ef8:	aa1803e1 	mov	x1, x24
    6efc:	91010042 	add	x2, x2, #0x40
    6f00:	52800060 	mov	w0, #0x3                   	// #3
    6f04:	aa1703e3 	mov	x3, x23
    6f08:	97fff506 	bl	4320 <__android_log_print@plt>
    6f0c:	90000120 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    6f10:	91002001 	add	x1, x0, #0x8
    6f14:	39407422 	ldrb	w2, [x1, #29]
    6f18:	35000062 	cbnz	w2, 6f24 <sig_in_nag@@Base+0x290>
    6f1c:	39407821 	ldrb	w1, [x1, #30]
    6f20:	34fff541 	cbz	w1, 6dc8 <sig_in_nag@@Base+0x134>
    6f24:	91002017 	add	x23, x0, #0x8
    6f28:	394036e0 	ldrb	w0, [x23, #13]
    6f2c:	35fff4e0 	cbnz	w0, 6dc8 <sig_in_nag@@Base+0x134>
    6f30:	394032e0 	ldrb	w0, [x23, #12]
    6f34:	11000400 	add	w0, w0, #0x1
    6f38:	53001c00 	uxtb	w0, w0
    6f3c:	390032e0 	strb	w0, [x23, #12]
    6f40:	7100041f 	cmp	w0, #0x1
    6f44:	54002ec0 	b.eq	751c <sig_in_nag@@Base+0x888>  // b.none
    6f48:	7100081f 	cmp	w0, #0x2
    6f4c:	54fff3e1 	b.ne	6dc8 <sig_in_nag@@Base+0x134>  // b.any
    6f50:	912542a3 	add	x3, x21, #0x950
    6f54:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6f58:	91252042 	add	x2, x2, #0x948
    6f5c:	91008063 	add	x3, x3, #0x20
    6f60:	52801584 	mov	w4, #0xac                  	// #172
    6f64:	9109c2c1 	add	x1, x22, #0x270
    6f68:	52800060 	mov	w0, #0x3                   	// #3
    6f6c:	97fff4ed 	bl	4320 <__android_log_print@plt>
    6f70:	52800021 	mov	w1, #0x1                   	// #1
    6f74:	52801580 	mov	w0, #0xac                  	// #172
    6f78:	97fff6e0 	bl	4af8 <gf_send_key@@Base>
    6f7c:	52800001 	mov	w1, #0x0                   	// #0
    6f80:	52801580 	mov	w0, #0xac                  	// #172
    6f84:	97fff6dd 	bl	4af8 <gf_send_key@@Base>
    6f88:	390032ff 	strb	wzr, [x23, #12]
    6f8c:	52800020 	mov	w0, #0x1                   	// #1
    6f90:	390036e0 	strb	w0, [x23, #13]
    6f94:	390072e0 	strb	w0, [x23, #28]
    6f98:	940011d4 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6f9c:	17ffffc1 	b	6ea0 <sig_in_nag@@Base+0x20c>
    6fa0:	f0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    6fa4:	911f9021 	add	x1, x1, #0x7e4
    6fa8:	78605820 	ldrh	w0, [x1, w0, uxtw #1]
    6fac:	10000061 	adr	x1, 6fb8 <sig_in_nag@@Base+0x324>
    6fb0:	8b20a820 	add	x0, x1, w0, sxth #2
    6fb4:	d61f0000 	br	x0
    6fb8:	f0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    6fbc:	12000342 	and	w2, w26, #0x1
    6fc0:	f9479821 	ldr	x1, [x1, #3888]
    6fc4:	39000022 	strb	w2, [x1]
    6fc8:	97fffb4f 	bl	5d04 <gx_handle_exception@@Base>
    6fcc:	35ffed20 	cbnz	w0, 6d70 <sig_in_nag@@Base+0xdc>
    6fd0:	9109c2d7 	add	x23, x22, #0x270
    6fd4:	912542b4 	add	x20, x21, #0x950
    6fd8:	90000062 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    6fdc:	aa1703e1 	mov	x1, x23
    6fe0:	911f6042 	add	x2, x2, #0x7d8
    6fe4:	aa1403e3 	mov	x3, x20
    6fe8:	52800060 	mov	w0, #0x3                   	// #3
    6fec:	97fff4cd 	bl	4320 <__android_log_print@plt>
    6ff0:	940011be 	bl	b6e8 <fnCa_CleanStatus@@Base>
    6ff4:	370806ba 	tbnz	w26, #1, 70c8 <sig_in_nag@@Base+0x434>
    6ff8:	3618175a 	tbz	w26, #3, 72e0 <sig_in_nag@@Base+0x64c>
    6ffc:	121e0357 	and	w23, w26, #0x4
    7000:	53001ef7 	uxtb	w23, w23
    7004:	340023d7 	cbz	w23, 747c <sig_in_nag@@Base+0x7e8>
    7008:	f0000044 	adrp	x4, 12000 <gf_dump_data_interface@@Base+0x1760>
    700c:	911d8084 	add	x4, x4, #0x760
    7010:	9109c2d8 	add	x24, x22, #0x270
    7014:	912542b9 	add	x25, x21, #0x950
    7018:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    701c:	aa1903e3 	mov	x3, x25
    7020:	91208042 	add	x2, x2, #0x820
    7024:	aa1803e1 	mov	x1, x24
    7028:	52800060 	mov	w0, #0x3                   	// #3
    702c:	0a000354 	and	w20, w26, w0
    7030:	97fff4bc 	bl	4320 <__android_log_print@plt>
    7034:	6b1f02ff 	cmp	w23, wzr
    7038:	52801160 	mov	w0, #0x8b                  	// #139
    703c:	1a9fd7e1 	cset	w1, gt
    7040:	97fff6ae 	bl	4af8 <gf_send_key@@Base>
    7044:	2a0003e5 	mov	w5, w0
    7048:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    704c:	52800060 	mov	w0, #0x3                   	// #3
    7050:	aa1803e1 	mov	x1, x24
    7054:	91212042 	add	x2, x2, #0x848
    7058:	aa1903e3 	mov	x3, x25
    705c:	2a1703e4 	mov	w4, w23
    7060:	97fff4b0 	bl	4320 <__android_log_print@plt>
    7064:	71000a9f 	cmp	w20, #0x2
    7068:	54000f20 	b.eq	724c <sig_in_nag@@Base+0x5b8>  // b.none
    706c:	52801614 	mov	w20, #0xb0                  	// #176
    7070:	17ffff8c 	b	6ea0 <sig_in_nag@@Base+0x20c>
    7074:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7078:	aa1903e1 	mov	x1, x25
    707c:	9110a042 	add	x2, x2, #0x428
    7080:	aa1803e3 	mov	x3, x24
    7084:	52800060 	mov	w0, #0x3                   	// #3
    7088:	97fff4a6 	bl	4320 <__android_log_print@plt>
    708c:	17ffff39 	b	6d70 <sig_in_nag@@Base+0xdc>
    7090:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7094:	aa1803e1 	mov	x1, x24
    7098:	911dc042 	add	x2, x2, #0x770
    709c:	aa1703e3 	mov	x3, x23
    70a0:	52800060 	mov	w0, #0x3                   	// #3
    70a4:	97fff49f 	bl	4320 <__android_log_print@plt>
    70a8:	17ffff32 	b	6d70 <sig_in_nag@@Base+0xdc>
    70ac:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    70b0:	aa1703e3 	mov	x3, x23
    70b4:	911ee042 	add	x2, x2, #0x7b8
    70b8:	52800060 	mov	w0, #0x3                   	// #3
    70bc:	97fff499 	bl	4320 <__android_log_print@plt>
    70c0:	9400118a 	bl	b6e8 <fnCa_CleanStatus@@Base>
    70c4:	17ffff77 	b	6ea0 <sig_in_nag@@Base+0x20c>
    70c8:	3700147a 	tbnz	w26, #0, 7354 <sig_in_nag@@Base+0x6c0>
    70cc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    70d0:	aa1403e3 	mov	x3, x20
    70d4:	52800060 	mov	w0, #0x3                   	// #3
    70d8:	aa1703e1 	mov	x1, x23
    70dc:	91010042 	add	x2, x2, #0x40
    70e0:	0a000354 	and	w20, w26, w0
    70e4:	97fff48f 	bl	4320 <__android_log_print@plt>
    70e8:	17ffffdf 	b	7064 <sig_in_nag@@Base+0x3d0>
    70ec:	912542a3 	add	x3, x21, #0x950
    70f0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    70f4:	9109c2c1 	add	x1, x22, #0x270
    70f8:	9128a042 	add	x2, x2, #0xa28
    70fc:	91008063 	add	x3, x3, #0x20
    7100:	52800060 	mov	w0, #0x3                   	// #3
    7104:	97fff487 	bl	4320 <__android_log_print@plt>
    7108:	94001178 	bl	b6e8 <fnCa_CleanStatus@@Base>
    710c:	17ffff65 	b	6ea0 <sig_in_nag@@Base+0x20c>
    7110:	912542a3 	add	x3, x21, #0x950
    7114:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7118:	91280042 	add	x2, x2, #0xa00
    711c:	91008063 	add	x3, x3, #0x20
    7120:	52800ce4 	mov	w4, #0x67                  	// #103
    7124:	9109c2c1 	add	x1, x22, #0x270
    7128:	52800060 	mov	w0, #0x3                   	// #3
    712c:	97fff47d 	bl	4320 <__android_log_print@plt>
    7130:	52800021 	mov	w1, #0x1                   	// #1
    7134:	52800ce0 	mov	w0, #0x67                  	// #103
    7138:	97fff670 	bl	4af8 <gf_send_key@@Base>
    713c:	52800ce0 	mov	w0, #0x67                  	// #103
    7140:	52800001 	mov	w1, #0x0                   	// #0
    7144:	97fff66d 	bl	4af8 <gf_send_key@@Base>
    7148:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    714c:	52800021 	mov	w1, #0x1                   	// #1
    7150:	91002000 	add	x0, x0, #0x8
    7154:	39003401 	strb	w1, [x0, #13]
    7158:	39007001 	strb	w1, [x0, #28]
    715c:	94001163 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7160:	17ffff50 	b	6ea0 <sig_in_nag@@Base+0x20c>
    7164:	912542a3 	add	x3, x21, #0x950
    7168:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    716c:	91276042 	add	x2, x2, #0x9d8
    7170:	91008063 	add	x3, x3, #0x20
    7174:	52800d84 	mov	w4, #0x6c                  	// #108
    7178:	9109c2c1 	add	x1, x22, #0x270
    717c:	52800060 	mov	w0, #0x3                   	// #3
    7180:	97fff468 	bl	4320 <__android_log_print@plt>
    7184:	52800021 	mov	w1, #0x1                   	// #1
    7188:	52800d80 	mov	w0, #0x6c                  	// #108
    718c:	97fff65b 	bl	4af8 <gf_send_key@@Base>
    7190:	52800d80 	mov	w0, #0x6c                  	// #108
    7194:	17ffffeb 	b	7140 <sig_in_nag@@Base+0x4ac>
    7198:	912542a3 	add	x3, x21, #0x950
    719c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    71a0:	9126c042 	add	x2, x2, #0x9b0
    71a4:	91008063 	add	x3, x3, #0x20
    71a8:	52800d44 	mov	w4, #0x6a                  	// #106
    71ac:	9109c2c1 	add	x1, x22, #0x270
    71b0:	52800060 	mov	w0, #0x3                   	// #3
    71b4:	97fff45b 	bl	4320 <__android_log_print@plt>
    71b8:	52800021 	mov	w1, #0x1                   	// #1
    71bc:	52800d40 	mov	w0, #0x6a                  	// #106
    71c0:	97fff64e 	bl	4af8 <gf_send_key@@Base>
    71c4:	52800d40 	mov	w0, #0x6a                  	// #106
    71c8:	17ffffde 	b	7140 <sig_in_nag@@Base+0x4ac>
    71cc:	912542a3 	add	x3, x21, #0x950
    71d0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    71d4:	91262042 	add	x2, x2, #0x988
    71d8:	91008063 	add	x3, x3, #0x20
    71dc:	52800d24 	mov	w4, #0x69                  	// #105
    71e0:	9109c2c1 	add	x1, x22, #0x270
    71e4:	52800060 	mov	w0, #0x3                   	// #3
    71e8:	97fff44e 	bl	4320 <__android_log_print@plt>
    71ec:	52800021 	mov	w1, #0x1                   	// #1
    71f0:	52800d20 	mov	w0, #0x69                  	// #105
    71f4:	97fff641 	bl	4af8 <gf_send_key@@Base>
    71f8:	52800d20 	mov	w0, #0x69                  	// #105
    71fc:	17ffffd1 	b	7140 <sig_in_nag@@Base+0x4ac>
    7200:	912542a3 	add	x3, x21, #0x950
    7204:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7208:	9109c2c1 	add	x1, x22, #0x270
    720c:	91294042 	add	x2, x2, #0xa50
    7210:	91008063 	add	x3, x3, #0x20
    7214:	52800060 	mov	w0, #0x3                   	// #3
    7218:	97fff442 	bl	4320 <__android_log_print@plt>
    721c:	94001133 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7220:	17ffff20 	b	6ea0 <sig_in_nag@@Base+0x20c>
    7224:	37180d1a 	tbnz	w26, #3, 73c4 <sig_in_nag@@Base+0x730>
    7228:	362fdd1a 	tbz	w26, #5, 6dc8 <sig_in_nag@@Base+0x134>
    722c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7230:	aa1803e1 	mov	x1, x24
    7234:	91096042 	add	x2, x2, #0x258
    7238:	aa1703e3 	mov	x3, x23
    723c:	52800060 	mov	w0, #0x3                   	// #3
    7240:	97fff438 	bl	4320 <__android_log_print@plt>
    7244:	94001129 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7248:	17ffff16 	b	6ea0 <sig_in_nag@@Base+0x20c>
    724c:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7250:	91002001 	add	x1, x0, #0x8
    7254:	39407422 	ldrb	w2, [x1, #29]
    7258:	35000082 	cbnz	w2, 7268 <sig_in_nag@@Base+0x5d4>
    725c:	39407821 	ldrb	w1, [x1, #30]
    7260:	52801614 	mov	w20, #0xb0                  	// #176
    7264:	34ffe1e1 	cbz	w1, 6ea0 <sig_in_nag@@Base+0x20c>
    7268:	91002017 	add	x23, x0, #0x8
    726c:	52801614 	mov	w20, #0xb0                  	// #176
    7270:	394036e0 	ldrb	w0, [x23, #13]
    7274:	35ffe160 	cbnz	w0, 6ea0 <sig_in_nag@@Base+0x20c>
    7278:	394032e0 	ldrb	w0, [x23, #12]
    727c:	11000400 	add	w0, w0, #0x1
    7280:	53001c00 	uxtb	w0, w0
    7284:	390032e0 	strb	w0, [x23, #12]
    7288:	7100041f 	cmp	w0, #0x1
    728c:	540010c0 	b.eq	74a4 <sig_in_nag@@Base+0x810>  // b.none
    7290:	7100081f 	cmp	w0, #0x2
    7294:	54ffe061 	b.ne	6ea0 <sig_in_nag@@Base+0x20c>  // b.any
    7298:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    729c:	912542a3 	add	x3, x21, #0x950
    72a0:	91252042 	add	x2, x2, #0x948
    72a4:	52801584 	mov	w4, #0xac                  	// #172
    72a8:	9109c2c1 	add	x1, x22, #0x270
    72ac:	52800060 	mov	w0, #0x3                   	// #3
    72b0:	97fff41c 	bl	4320 <__android_log_print@plt>
    72b4:	52800021 	mov	w1, #0x1                   	// #1
    72b8:	52801580 	mov	w0, #0xac                  	// #172
    72bc:	97fff60f 	bl	4af8 <gf_send_key@@Base>
    72c0:	52801580 	mov	w0, #0xac                  	// #172
    72c4:	52800001 	mov	w1, #0x0                   	// #0
    72c8:	97fff60c 	bl	4af8 <gf_send_key@@Base>
    72cc:	390032ff 	strb	wzr, [x23, #12]
    72d0:	52800020 	mov	w0, #0x1                   	// #1
    72d4:	390036e0 	strb	w0, [x23, #13]
    72d8:	390072e0 	strb	w0, [x23, #28]
    72dc:	17fffef1 	b	6ea0 <sig_in_nag@@Base+0x20c>
    72e0:	12000754 	and	w20, w26, #0x3
    72e4:	362fec1a 	tbz	w26, #5, 7064 <sig_in_nag@@Base+0x3d0>
    72e8:	121c0357 	and	w23, w26, #0x10
    72ec:	53001ef7 	uxtb	w23, w23
    72f0:	34000d57 	cbz	w23, 7498 <sig_in_nag@@Base+0x804>
    72f4:	f0000044 	adrp	x4, 12000 <gf_dump_data_interface@@Base+0x1760>
    72f8:	911d8084 	add	x4, x4, #0x760
    72fc:	9109c2d8 	add	x24, x22, #0x270
    7300:	912542b9 	add	x25, x21, #0x950
    7304:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7308:	aa1903e3 	mov	x3, x25
    730c:	91222042 	add	x2, x2, #0x888
    7310:	aa1803e1 	mov	x1, x24
    7314:	52800060 	mov	w0, #0x3                   	// #3
    7318:	0a000354 	and	w20, w26, w0
    731c:	97fff401 	bl	4320 <__android_log_print@plt>
    7320:	6b1f02ff 	cmp	w23, wzr
    7324:	528013c0 	mov	w0, #0x9e                  	// #158
    7328:	1a9fd7e1 	cset	w1, gt
    732c:	97fff5f3 	bl	4af8 <gf_send_key@@Base>
    7330:	2a0003e5 	mov	w5, w0
    7334:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7338:	aa1803e1 	mov	x1, x24
    733c:	9122c042 	add	x2, x2, #0x8b0
    7340:	aa1903e3 	mov	x3, x25
    7344:	2a1703e4 	mov	w4, w23
    7348:	52800060 	mov	w0, #0x3                   	// #3
    734c:	97fff3f5 	bl	4320 <__android_log_print@plt>
    7350:	17ffff45 	b	7064 <sig_in_nag@@Base+0x3d0>
    7354:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7358:	aa1703e1 	mov	x1, x23
    735c:	9101a042 	add	x2, x2, #0x68
    7360:	52800060 	mov	w0, #0x3                   	// #3
    7364:	aa1403e3 	mov	x3, x20
    7368:	97fff3ee 	bl	4320 <__android_log_print@plt>
    736c:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7370:	91002001 	add	x1, x0, #0x8
    7374:	39407422 	ldrb	w2, [x1, #29]
    7378:	35000062 	cbnz	w2, 7384 <sig_in_nag@@Base+0x6f0>
    737c:	39407821 	ldrb	w1, [x1, #30]
    7380:	340000a1 	cbz	w1, 7394 <sig_in_nag@@Base+0x700>
    7384:	91002001 	add	x1, x0, #0x8
    7388:	39403422 	ldrb	w2, [x1, #13]
    738c:	34000042 	cbz	w2, 7394 <sig_in_nag@@Base+0x700>
    7390:	3900343f 	strb	wzr, [x1, #13]
    7394:	91002005 	add	x5, x0, #0x8
    7398:	39407ca0 	ldrb	w0, [x5, #31]
    739c:	34000060 	cbz	w0, 73a8 <sig_in_nag@@Base+0x714>
    73a0:	394070a0 	ldrb	w0, [x5, #28]
    73a4:	350009c0 	cbnz	w0, 74dc <sig_in_nag@@Base+0x848>
    73a8:	97fff533 	bl	4874 <gf_disable_irq@@Base>
    73ac:	97fffdbd 	bl	6aa0 <processNavResult@@Base>
    73b0:	7100041f 	cmp	w0, #0x1
    73b4:	540006a0 	b.eq	7488 <sig_in_nag@@Base+0x7f4>  // b.none
    73b8:	12000754 	and	w20, w26, #0x3
    73bc:	97fff4fd 	bl	47b0 <gf_enable_irq@@Base>
    73c0:	17ffff29 	b	7064 <sig_in_nag@@Base+0x3d0>
    73c4:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    73c8:	aa1803e1 	mov	x1, x24
    73cc:	91024042 	add	x2, x2, #0x90
    73d0:	aa1703e3 	mov	x3, x23
    73d4:	52800060 	mov	w0, #0x3                   	// #3
    73d8:	97fff3d2 	bl	4320 <__android_log_print@plt>
    73dc:	940010c3 	bl	b6e8 <fnCa_CleanStatus@@Base>
    73e0:	17fffeb0 	b	6ea0 <sig_in_nag@@Base+0x20c>
    73e4:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    73e8:	aa1803e1 	mov	x1, x24
    73ec:	9101a042 	add	x2, x2, #0x68
    73f0:	52800060 	mov	w0, #0x3                   	// #3
    73f4:	aa1703e3 	mov	x3, x23
    73f8:	97fff3ca 	bl	4320 <__android_log_print@plt>
    73fc:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7400:	91002001 	add	x1, x0, #0x8
    7404:	39407422 	ldrb	w2, [x1, #29]
    7408:	35000062 	cbnz	w2, 7414 <sig_in_nag@@Base+0x780>
    740c:	39407821 	ldrb	w1, [x1, #30]
    7410:	340000a1 	cbz	w1, 7424 <sig_in_nag@@Base+0x790>
    7414:	91002001 	add	x1, x0, #0x8
    7418:	39403422 	ldrb	w2, [x1, #13]
    741c:	34000042 	cbz	w2, 7424 <sig_in_nag@@Base+0x790>
    7420:	3900343f 	strb	wzr, [x1, #13]
    7424:	91002005 	add	x5, x0, #0x8
    7428:	39407ca0 	ldrb	w0, [x5, #31]
    742c:	34ffcce0 	cbz	w0, 6dc8 <sig_in_nag@@Base+0x134>
    7430:	394070a0 	ldrb	w0, [x5, #28]
    7434:	34ffcca0 	cbz	w0, 6dc8 <sig_in_nag@@Base+0x134>
    7438:	b94018a2 	ldr	w2, [x5, #24]
    743c:	910040a0 	add	x0, x5, #0x10
    7440:	52800001 	mov	w1, #0x0                   	// #0
    7444:	52800003 	mov	w3, #0x0                   	// #0
    7448:	52800004 	mov	w4, #0x0                   	// #0
    744c:	390070bf 	strb	wzr, [x5, #28]
    7450:	97fff6ee 	bl	5008 <gf_active_timer@@Base>
    7454:	35ffcba0 	cbnz	w0, 6dc8 <sig_in_nag@@Base+0x134>
    7458:	912542a3 	add	x3, x21, #0x950
    745c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7460:	9109c2c1 	add	x1, x22, #0x270
    7464:	911fe042 	add	x2, x2, #0x7f8
    7468:	91008063 	add	x3, x3, #0x20
    746c:	52800060 	mov	w0, #0x3                   	// #3
    7470:	97fff3ac 	bl	4320 <__android_log_print@plt>
    7474:	9400109d 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7478:	17fffe8a 	b	6ea0 <sig_in_nag@@Base+0x20c>
    747c:	f0000044 	adrp	x4, 12000 <gf_dump_data_interface@@Base+0x1760>
    7480:	911da084 	add	x4, x4, #0x768
    7484:	17fffee3 	b	7010 <sig_in_nag@@Base+0x37c>
    7488:	5280005a 	mov	w26, #0x2                   	// #2
    748c:	2a1a03f4 	mov	w20, w26
    7490:	97fff4c8 	bl	47b0 <gf_enable_irq@@Base>
    7494:	17fffef4 	b	7064 <sig_in_nag@@Base+0x3d0>
    7498:	f0000044 	adrp	x4, 12000 <gf_dump_data_interface@@Base+0x1760>
    749c:	911da084 	add	x4, x4, #0x768
    74a0:	17ffff97 	b	72fc <sig_in_nag@@Base+0x668>
    74a4:	b9400ae2 	ldr	w2, [x23, #8]
    74a8:	aa1703e0 	mov	x0, x23
    74ac:	52800001 	mov	w1, #0x0                   	// #0
    74b0:	52800003 	mov	w3, #0x0                   	// #0
    74b4:	52800004 	mov	w4, #0x0                   	// #0
    74b8:	97fff6d4 	bl	5008 <gf_active_timer@@Base>
    74bc:	35ffcf20 	cbnz	w0, 6ea0 <sig_in_nag@@Base+0x20c>
    74c0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    74c4:	9109c2c1 	add	x1, x22, #0x270
    74c8:	91246042 	add	x2, x2, #0x918
    74cc:	912542a3 	add	x3, x21, #0x950
    74d0:	52800060 	mov	w0, #0x3                   	// #3
    74d4:	97fff393 	bl	4320 <__android_log_print@plt>
    74d8:	17fffe72 	b	6ea0 <sig_in_nag@@Base+0x20c>
    74dc:	b94018a2 	ldr	w2, [x5, #24]
    74e0:	910040a0 	add	x0, x5, #0x10
    74e4:	52800001 	mov	w1, #0x0                   	// #0
    74e8:	52800003 	mov	w3, #0x0                   	// #0
    74ec:	52800004 	mov	w4, #0x0                   	// #0
    74f0:	390070bf 	strb	wzr, [x5, #28]
    74f4:	97fff6c5 	bl	5008 <gf_active_timer@@Base>
    74f8:	35fff580 	cbnz	w0, 73a8 <sig_in_nag@@Base+0x714>
    74fc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7500:	9109c2c1 	add	x1, x22, #0x270
    7504:	911fe042 	add	x2, x2, #0x7f8
    7508:	912542a3 	add	x3, x21, #0x950
    750c:	52800060 	mov	w0, #0x3                   	// #3
    7510:	97fff384 	bl	4320 <__android_log_print@plt>
    7514:	17ffffa5 	b	73a8 <sig_in_nag@@Base+0x714>
    7518:	97fff36a 	bl	42c0 <__stack_chk_fail@plt>
    751c:	b9400ae2 	ldr	w2, [x23, #8]
    7520:	aa1703e0 	mov	x0, x23
    7524:	52800001 	mov	w1, #0x0                   	// #0
    7528:	52800003 	mov	w3, #0x0                   	// #0
    752c:	52800004 	mov	w4, #0x0                   	// #0
    7530:	97fff6b6 	bl	5008 <gf_active_timer@@Base>
    7534:	35ffc4a0 	cbnz	w0, 6dc8 <sig_in_nag@@Base+0x134>
    7538:	912542a3 	add	x3, x21, #0x950
    753c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7540:	9109c2c1 	add	x1, x22, #0x270
    7544:	91246042 	add	x2, x2, #0x918
    7548:	91008063 	add	x3, x3, #0x20
    754c:	52800060 	mov	w0, #0x3                   	// #3
    7550:	97fff374 	bl	4320 <__android_log_print@plt>
    7554:	94001065 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7558:	17fffe52 	b	6ea0 <sig_in_nag@@Base+0x20c>

000000000000755c <sig_in_hbd@@Base>:
    755c:	d10243ff 	sub	sp, sp, #0x90
    7560:	d0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    7564:	913ec042 	add	x2, x2, #0xfb0
    7568:	528086a5 	mov	w5, #0x435                 	// #1077
    756c:	52800060 	mov	w0, #0x3                   	// #3
    7570:	a9017bfd 	stp	x29, x30, [sp, #16]
    7574:	910043fd 	add	x29, sp, #0x10
    7578:	a90253f3 	stp	x19, x20, [sp, #32]
    757c:	d0000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    7580:	a9035bf5 	stp	x21, x22, [sp, #48]
    7584:	d0000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    7588:	9101a3b6 	add	x22, x29, #0x68
    758c:	f947c286 	ldr	x6, [x20, #3968]
    7590:	912542a4 	add	x4, x21, #0x950
    7594:	a9056bf9 	stp	x25, x26, [sp, #80]
    7598:	d0000059 	adrp	x25, 11000 <gf_dump_data_interface@@Base+0x760>
    759c:	f94000c6 	ldr	x6, [x6]
    75a0:	a90463f7 	stp	x23, x24, [sp, #64]
    75a4:	91010097 	add	x23, x4, #0x40
    75a8:	9109c338 	add	x24, x25, #0x270
    75ac:	aa1703e3 	mov	x3, x23
    75b0:	91014084 	add	x4, x4, #0x50
    75b4:	aa1803e1 	mov	x1, x24
    75b8:	f9003fa6 	str	x6, [x29, #120]
    75bc:	97fff359 	bl	4320 <__android_log_print@plt>
    75c0:	aa1603e0 	mov	x0, x22
    75c4:	97fff96e 	bl	5b7c <gf_secspi_read_status@@Base>
    75c8:	3941a7b3 	ldrb	w19, [x29, #105]
    75cc:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    75d0:	3941bfa7 	ldrb	w7, [x29, #111]
    75d4:	9100c000 	add	x0, x0, #0x30
    75d8:	2a1303e1 	mov	w1, w19
    75dc:	910c8000 	add	x0, x0, #0x320
    75e0:	3941b7ba 	ldrb	w26, [x29, #109]
    75e4:	f9002fa7 	str	x7, [x29, #88]
    75e8:	97fff909 	bl	5a0c <toString@@Base>
    75ec:	b90003ff 	str	wzr, [sp]
    75f0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    75f4:	f9402fa7 	ldr	x7, [x29, #88]
    75f8:	aa0003e5 	mov	x5, x0
    75fc:	aa1803e1 	mov	x1, x24
    7600:	52800060 	mov	w0, #0x3                   	// #3
    7604:	9129e042 	add	x2, x2, #0xa78
    7608:	aa1703e3 	mov	x3, x23
    760c:	2a1303e4 	mov	w4, w19
    7610:	2a1a03e6 	mov	w6, w26
    7614:	97fff343 	bl	4320 <__android_log_print@plt>
    7618:	7102c27f 	cmp	w19, #0xb0
    761c:	540004a0 	b.eq	76b0 <sig_in_hbd@@Base+0x154>  // b.none
    7620:	aa1603e0 	mov	x0, x22
    7624:	97fff9b8 	bl	5d04 <gx_handle_exception@@Base>
    7628:	350002a0 	cbnz	w0, 767c <sig_in_hbd@@Base+0x120>
    762c:	d0000116 	adrp	x22, 29000 <gf_dump_data_interface@@Base+0x18760>
    7630:	f9478ad6 	ldr	x22, [x22, #3856]
    7634:	b94002c0 	ldr	w0, [x22]
    7638:	34000460 	cbz	w0, 76c4 <sig_in_hbd@@Base+0x168>
    763c:	7102c27f 	cmp	w19, #0xb0
    7640:	54000520 	b.eq	76e4 <sig_in_hbd@@Base+0x188>  // b.none
    7644:	7102827f 	cmp	w19, #0xa0
    7648:	54000720 	b.eq	772c <sig_in_hbd@@Base+0x1d0>  // b.none
    764c:	912542a3 	add	x3, x21, #0x950
    7650:	9109c321 	add	x1, x25, #0x270
    7654:	340003d3 	cbz	w19, 76cc <sig_in_hbd@@Base+0x170>
    7658:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    765c:	91010063 	add	x3, x3, #0x40
    7660:	912e8042 	add	x2, x2, #0xba0
    7664:	52800060 	mov	w0, #0x3                   	// #3
    7668:	97fff32e 	bl	4320 <__android_log_print@plt>
    766c:	9400101f 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7670:	2a1303e0 	mov	w0, w19
    7674:	2a1a03e1 	mov	w1, w26
    7678:	97fff946 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    767c:	f947c294 	ldr	x20, [x20, #3968]
    7680:	f9403fa1 	ldr	x1, [x29, #120]
    7684:	f9400280 	ldr	x0, [x20]
    7688:	eb00003f 	cmp	x1, x0
    768c:	54000d41 	b.ne	7834 <sig_in_hbd@@Base+0x2d8>  // b.any
    7690:	d10043bf 	sub	sp, x29, #0x10
    7694:	a94253f3 	ldp	x19, x20, [sp, #32]
    7698:	a9435bf5 	ldp	x21, x22, [sp, #48]
    769c:	a94463f7 	ldp	x23, x24, [sp, #64]
    76a0:	a9456bf9 	ldp	x25, x26, [sp, #80]
    76a4:	a9417bfd 	ldp	x29, x30, [sp, #16]
    76a8:	910243ff 	add	sp, sp, #0x90
    76ac:	d65f03c0 	ret
    76b0:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    76b4:	12000341 	and	w1, w26, #0x1
    76b8:	f9479800 	ldr	x0, [x0, #3888]
    76bc:	39000001 	strb	w1, [x0]
    76c0:	17ffffd8 	b	7620 <sig_in_hbd@@Base+0xc4>
    76c4:	94001009 	bl	b6e8 <fnCa_CleanStatus@@Base>
    76c8:	17ffffed 	b	767c <sig_in_hbd@@Base+0x120>
    76cc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    76d0:	91010063 	add	x3, x3, #0x40
    76d4:	912de042 	add	x2, x2, #0xb78
    76d8:	52800060 	mov	w0, #0x3                   	// #3
    76dc:	97fff311 	bl	4320 <__android_log_print@plt>
    76e0:	17ffffe4 	b	7670 <sig_in_hbd@@Base+0x114>
    76e4:	94001001 	bl	b6e8 <fnCa_CleanStatus@@Base>
    76e8:	3608061a 	tbz	w26, #1, 77a8 <sig_in_hbd@@Base+0x24c>
    76ec:	912542a3 	add	x3, x21, #0x950
    76f0:	9109c321 	add	x1, x25, #0x270
    76f4:	370006fa 	tbnz	w26, #0, 77d0 <sig_in_hbd@@Base+0x274>
    76f8:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    76fc:	91010063 	add	x3, x3, #0x40
    7700:	91010042 	add	x2, x2, #0x40
    7704:	52800060 	mov	w0, #0x3                   	// #3
    7708:	97fff306 	bl	4320 <__android_log_print@plt>
    770c:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7710:	52800021 	mov	w1, #0x1                   	// #1
    7714:	b908a801 	str	w1, [x0, #2216]
    7718:	94001db5 	bl	edec <fnCa_InitHBDetection@@Base>
    771c:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7720:	f947e000 	ldr	x0, [x0, #4032]
    7724:	97fff2a7 	bl	41c0 <sem_post@plt>
    7728:	17ffffd2 	b	7670 <sig_in_hbd@@Base+0x114>
    772c:	912542b5 	add	x21, x21, #0x950
    7730:	9109c339 	add	x25, x25, #0x270
    7734:	910102b5 	add	x21, x21, #0x40
    7738:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    773c:	aa1903e1 	mov	x1, x25
    7740:	912b2042 	add	x2, x2, #0xac8
    7744:	aa1503e3 	mov	x3, x21
    7748:	52800060 	mov	w0, #0x3                   	// #3
    774c:	97fff2f5 	bl	4320 <__android_log_print@plt>
    7750:	b94002c4 	ldr	w4, [x22]
    7754:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7758:	52800060 	mov	w0, #0x3                   	// #3
    775c:	aa1903e1 	mov	x1, x25
    7760:	912ba042 	add	x2, x2, #0xae8
    7764:	aa1503e3 	mov	x3, x21
    7768:	97fff2ee 	bl	4320 <__android_log_print@plt>
    776c:	b94002c0 	ldr	w0, [x22]
    7770:	7100081f 	cmp	w0, #0x2
    7774:	540004c0 	b.eq	780c <sig_in_hbd@@Base+0x2b0>  // b.none
    7778:	7100101f 	cmp	w0, #0x4
    777c:	54fff7a1 	b.ne	7670 <sig_in_hbd@@Base+0x114>  // b.any
    7780:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7784:	aa1903e1 	mov	x1, x25
    7788:	912d2042 	add	x2, x2, #0xb48
    778c:	aa1503e3 	mov	x3, x21
    7790:	52800060 	mov	w0, #0x3                   	// #3
    7794:	97fff2e3 	bl	4320 <__android_log_print@plt>
    7798:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    779c:	f947e000 	ldr	x0, [x0, #4032]
    77a0:	97fff288 	bl	41c0 <sem_post@plt>
    77a4:	17ffffb3 	b	7670 <sig_in_hbd@@Base+0x114>
    77a8:	3718023a 	tbnz	w26, #3, 77ec <sig_in_hbd@@Base+0x290>
    77ac:	362ff63a 	tbz	w26, #5, 7670 <sig_in_hbd@@Base+0x114>
    77b0:	912542a3 	add	x3, x21, #0x950
    77b4:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    77b8:	9109c321 	add	x1, x25, #0x270
    77bc:	91096042 	add	x2, x2, #0x258
    77c0:	91010063 	add	x3, x3, #0x40
    77c4:	52800060 	mov	w0, #0x3                   	// #3
    77c8:	97fff2d6 	bl	4320 <__android_log_print@plt>
    77cc:	17ffffa9 	b	7670 <sig_in_hbd@@Base+0x114>
    77d0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    77d4:	91010063 	add	x3, x3, #0x40
    77d8:	9101a042 	add	x2, x2, #0x68
    77dc:	52800060 	mov	w0, #0x3                   	// #3
    77e0:	97fff2d0 	bl	4320 <__android_log_print@plt>
    77e4:	94001d82 	bl	edec <fnCa_InitHBDetection@@Base>
    77e8:	17ffffa2 	b	7670 <sig_in_hbd@@Base+0x114>
    77ec:	912542a3 	add	x3, x21, #0x950
    77f0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    77f4:	9109c321 	add	x1, x25, #0x270
    77f8:	91024042 	add	x2, x2, #0x90
    77fc:	91010063 	add	x3, x3, #0x40
    7800:	52800060 	mov	w0, #0x3                   	// #3
    7804:	97fff2c7 	bl	4320 <__android_log_print@plt>
    7808:	17ffff9a 	b	7670 <sig_in_hbd@@Base+0x114>
    780c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7810:	aa1903e1 	mov	x1, x25
    7814:	912c6042 	add	x2, x2, #0xb18
    7818:	aa1503e3 	mov	x3, x21
    781c:	52800060 	mov	w0, #0x3                   	// #3
    7820:	97fff2c0 	bl	4320 <__android_log_print@plt>
    7824:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7828:	f947f400 	ldr	x0, [x0, #4072]
    782c:	97fff265 	bl	41c0 <sem_post@plt>
    7830:	17ffff90 	b	7670 <sig_in_hbd@@Base+0x114>
    7834:	97fff2a3 	bl	42c0 <__stack_chk_fail@plt>

0000000000007838 <sig_in_ff@@Base>:
    7838:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
    783c:	d0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    7840:	52809dc5 	mov	w5, #0x4ee                 	// #1262
    7844:	910003fd 	mov	x29, sp
    7848:	a90153f3 	stp	x19, x20, [sp, #16]
    784c:	d0000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    7850:	913ec042 	add	x2, x2, #0xfb0
    7854:	a90363f7 	stp	x23, x24, [sp, #48]
    7858:	d0000058 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    785c:	52800060 	mov	w0, #0x3                   	// #3
    7860:	f947c286 	ldr	x6, [x20, #3968]
    7864:	91254304 	add	x4, x24, #0x950
    7868:	a9046bf9 	stp	x25, x26, [sp, #64]
    786c:	d0000059 	adrp	x25, 11000 <gf_dump_data_interface@@Base+0x760>
    7870:	9101a3b7 	add	x23, x29, #0x68
    7874:	f94000c6 	ldr	x6, [x6]
    7878:	a9025bf5 	stp	x21, x22, [sp, #32]
    787c:	91018095 	add	x21, x4, #0x60
    7880:	9109c336 	add	x22, x25, #0x270
    7884:	aa1503e3 	mov	x3, x21
    7888:	9101c084 	add	x4, x4, #0x70
    788c:	aa1603e1 	mov	x1, x22
    7890:	f9003fa6 	str	x6, [x29, #120]
    7894:	97fff2a3 	bl	4320 <__android_log_print@plt>
    7898:	aa1703e0 	mov	x0, x23
    789c:	97fff8b8 	bl	5b7c <gf_secspi_read_status@@Base>
    78a0:	3941a7b3 	ldrb	w19, [x29, #105]
    78a4:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    78a8:	3941bba7 	ldrb	w7, [x29, #110]
    78ac:	9100c000 	add	x0, x0, #0x30
    78b0:	2a1303e1 	mov	w1, w19
    78b4:	910c8000 	add	x0, x0, #0x320
    78b8:	3941b7ba 	ldrb	w26, [x29, #109]
    78bc:	f9002fa7 	str	x7, [x29, #88]
    78c0:	97fff853 	bl	5a0c <toString@@Base>
    78c4:	aa0003e5 	mov	x5, x0
    78c8:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    78cc:	f9402fa7 	ldr	x7, [x29, #88]
    78d0:	52800060 	mov	w0, #0x3                   	// #3
    78d4:	aa1603e1 	mov	x1, x22
    78d8:	910fa042 	add	x2, x2, #0x3e8
    78dc:	aa1503e3 	mov	x3, x21
    78e0:	2a1303e4 	mov	w4, w19
    78e4:	2a1a03e6 	mov	w6, w26
    78e8:	97fff28e 	bl	4320 <__android_log_print@plt>
    78ec:	7102c27f 	cmp	w19, #0xb0
    78f0:	aa1703e0 	mov	x0, x23
    78f4:	540003a0 	b.eq	7968 <sig_in_ff@@Base+0x130>  // b.none
    78f8:	97fff903 	bl	5d04 <gx_handle_exception@@Base>
    78fc:	35000200 	cbnz	w0, 793c <sig_in_ff@@Base+0x104>
    7900:	34000953 	cbz	w19, 7a28 <sig_in_ff@@Base+0x1f0>
    7904:	11010260 	add	w0, w19, #0x40
    7908:	53001c00 	uxtb	w0, w0
    790c:	7100041f 	cmp	w0, #0x1
    7910:	540009a9 	b.ls	7a44 <sig_in_ff@@Base+0x20c>  // b.plast
    7914:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7918:	aa1603e1 	mov	x1, x22
    791c:	910ea042 	add	x2, x2, #0x3a8
    7920:	aa1503e3 	mov	x3, x21
    7924:	52800060 	mov	w0, #0x3                   	// #3
    7928:	97fff27e 	bl	4320 <__android_log_print@plt>
    792c:	94000f6f 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7930:	2a1303e0 	mov	w0, w19
    7934:	2a1a03e1 	mov	w1, w26
    7938:	97fff896 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    793c:	f947c294 	ldr	x20, [x20, #3968]
    7940:	f9403fa1 	ldr	x1, [x29, #120]
    7944:	f9400280 	ldr	x0, [x20]
    7948:	eb00003f 	cmp	x1, x0
    794c:	54002061 	b.ne	7d58 <sig_in_ff@@Base+0x520>  // b.any
    7950:	a94153f3 	ldp	x19, x20, [sp, #16]
    7954:	a9425bf5 	ldp	x21, x22, [sp, #32]
    7958:	a94363f7 	ldp	x23, x24, [sp, #48]
    795c:	a9446bf9 	ldp	x25, x26, [sp, #64]
    7960:	a8c87bfd 	ldp	x29, x30, [sp], #128
    7964:	d65f03c0 	ret
    7968:	d0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    796c:	12000342 	and	w2, w26, #0x1
    7970:	f9479821 	ldr	x1, [x1, #3888]
    7974:	39000022 	strb	w2, [x1]
    7978:	97fff8e3 	bl	5d04 <gx_handle_exception@@Base>
    797c:	35fffe00 	cbnz	w0, 793c <sig_in_ff@@Base+0x104>
    7980:	94000f5a 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7984:	12000757 	and	w23, w26, #0x3
    7988:	71000aff 	cmp	w23, #0x2
    798c:	54001200 	b.eq	7bcc <sig_in_ff@@Base+0x394>  // b.none
    7990:	71000eff 	cmp	w23, #0x3
    7994:	54000960 	b.eq	7ac0 <sig_in_ff@@Base+0x288>  // b.none
    7998:	36180cba 	tbz	w26, #3, 7b2c <sig_in_ff@@Base+0x2f4>
    799c:	aa1603e1 	mov	x1, x22
    79a0:	3710135a 	tbnz	w26, #2, 7c08 <sig_in_ff@@Base+0x3d0>
    79a4:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    79a8:	aa1503e3 	mov	x3, x21
    79ac:	91068042 	add	x2, x2, #0x1a0
    79b0:	52800060 	mov	w0, #0x3                   	// #3
    79b4:	97fff25b 	bl	4320 <__android_log_print@plt>
    79b8:	d0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    79bc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    79c0:	aa1503e3 	mov	x3, x21
    79c4:	9102e042 	add	x2, x2, #0xb8
    79c8:	aa1603e1 	mov	x1, x22
    79cc:	52800060 	mov	w0, #0x3                   	// #3
    79d0:	f9479c84 	ldr	x4, [x4, #3896]
    79d4:	b9400084 	ldr	w4, [x4]
    79d8:	97fff252 	bl	4320 <__android_log_print@plt>
    79dc:	52800001 	mov	w1, #0x0                   	// #0
    79e0:	52804880 	mov	w0, #0x244                 	// #580
    79e4:	97fff94c 	bl	5f14 <device_send_key@@Base>
    79e8:	2a0003f7 	mov	w23, w0
    79ec:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    79f0:	aa1603e1 	mov	x1, x22
    79f4:	aa1503e3 	mov	x3, x21
    79f8:	91072042 	add	x2, x2, #0x1c8
    79fc:	52804884 	mov	w4, #0x244                 	// #580
    7a00:	52800060 	mov	w0, #0x3                   	// #3
    7a04:	97fff247 	bl	4320 <__android_log_print@plt>
    7a08:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7a0c:	aa1603e1 	mov	x1, x22
    7a10:	9130a042 	add	x2, x2, #0xc28
    7a14:	aa1503e3 	mov	x3, x21
    7a18:	2a1703e4 	mov	w4, w23
    7a1c:	52800060 	mov	w0, #0x3                   	// #3
    7a20:	97fff240 	bl	4320 <__android_log_print@plt>
    7a24:	17ffffc3 	b	7930 <sig_in_ff@@Base+0xf8>
    7a28:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7a2c:	aa1603e1 	mov	x1, x22
    7a30:	91004042 	add	x2, x2, #0x10
    7a34:	aa1503e3 	mov	x3, x21
    7a38:	52800060 	mov	w0, #0x3                   	// #3
    7a3c:	97fff239 	bl	4320 <__android_log_print@plt>
    7a40:	17ffffbf 	b	793c <sig_in_ff@@Base+0x104>
    7a44:	aa1503e3 	mov	x3, x21
    7a48:	d0000115 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    7a4c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7a50:	52800060 	mov	w0, #0x3                   	// #3
    7a54:	aa1603e1 	mov	x1, x22
    7a58:	9132a042 	add	x2, x2, #0xca8
    7a5c:	f9478ab5 	ldr	x21, [x21, #3856]
    7a60:	2a1303e4 	mov	w4, w19
    7a64:	b94002a5 	ldr	w5, [x21]
    7a68:	97fff22e 	bl	4320 <__android_log_print@plt>
    7a6c:	b94002a0 	ldr	w0, [x21]
    7a70:	7100081f 	cmp	w0, #0x2
    7a74:	54000a40 	b.eq	7bbc <sig_in_ff@@Base+0x384>  // b.none
    7a78:	71000c1f 	cmp	w0, #0x3
    7a7c:	540000c0 	b.eq	7a94 <sig_in_ff@@Base+0x25c>  // b.none
    7a80:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7a84:	f947a400 	ldr	x0, [x0, #3912]
    7a88:	39400000 	ldrb	w0, [x0]
    7a8c:	53001c00 	uxtb	w0, w0
    7a90:	35fff500 	cbnz	w0, 7930 <sig_in_ff@@Base+0xf8>
    7a94:	52800020 	mov	w0, #0x1                   	// #1
    7a98:	94001e22 	bl	f320 <fnCa_controlSampling@@Base>
    7a9c:	91254303 	add	x3, x24, #0x950
    7aa0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7aa4:	9109c321 	add	x1, x25, #0x270
    7aa8:	91334042 	add	x2, x2, #0xcd0
    7aac:	91018063 	add	x3, x3, #0x60
    7ab0:	52800060 	mov	w0, #0x3                   	// #3
    7ab4:	97fff21b 	bl	4320 <__android_log_print@plt>
    7ab8:	94000f0c 	bl	b6e8 <fnCa_CleanStatus@@Base>
    7abc:	17ffff9d 	b	7930 <sig_in_ff@@Base+0xf8>
    7ac0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7ac4:	2a1703e0 	mov	w0, w23
    7ac8:	aa1603e1 	mov	x1, x22
    7acc:	9101a042 	add	x2, x2, #0x68
    7ad0:	aa1503e3 	mov	x3, x21
    7ad4:	97fff213 	bl	4320 <__android_log_print@plt>
    7ad8:	f0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7adc:	b948ac00 	ldr	w0, [x0, #2220]
    7ae0:	34fff280 	cbz	w0, 7930 <sig_in_ff@@Base+0xf8>
    7ae4:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7ae8:	f9478800 	ldr	x0, [x0, #3856]
    7aec:	b9400000 	ldr	w0, [x0]
    7af0:	7100081f 	cmp	w0, #0x2
    7af4:	54fff1e0 	b.eq	7930 <sig_in_ff@@Base+0xf8>  // b.none
    7af8:	52800021 	mov	w1, #0x1                   	// #1
    7afc:	52800e80 	mov	w0, #0x74                  	// #116
    7b00:	97fff3fe 	bl	4af8 <gf_send_key@@Base>
    7b04:	52800001 	mov	w1, #0x0                   	// #0
    7b08:	52800e80 	mov	w0, #0x74                  	// #116
    7b0c:	97fff3fb 	bl	4af8 <gf_send_key@@Base>
    7b10:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7b14:	2a1703e0 	mov	w0, w23
    7b18:	aa1603e1 	mov	x1, x22
    7b1c:	912f2042 	add	x2, x2, #0xbc8
    7b20:	aa1503e3 	mov	x3, x21
    7b24:	97fff1ff 	bl	4320 <__android_log_print@plt>
    7b28:	17ffff82 	b	7930 <sig_in_ff@@Base+0xf8>
    7b2c:	362ff03a 	tbz	w26, #5, 7930 <sig_in_ff@@Base+0xf8>
    7b30:	aa1603e1 	mov	x1, x22
    7b34:	37200c3a 	tbnz	w26, #4, 7cb8 <sig_in_ff@@Base+0x480>
    7b38:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7b3c:	aa1503e3 	mov	x3, x21
    7b40:	910c0042 	add	x2, x2, #0x300
    7b44:	52800060 	mov	w0, #0x3                   	// #3
    7b48:	97fff1f6 	bl	4320 <__android_log_print@plt>
    7b4c:	d0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    7b50:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7b54:	aa1503e3 	mov	x3, x21
    7b58:	9102e042 	add	x2, x2, #0xb8
    7b5c:	aa1603e1 	mov	x1, x22
    7b60:	52800060 	mov	w0, #0x3                   	// #3
    7b64:	f9479c84 	ldr	x4, [x4, #3896]
    7b68:	b9400084 	ldr	w4, [x4]
    7b6c:	97fff1ed 	bl	4320 <__android_log_print@plt>
    7b70:	52800001 	mov	w1, #0x0                   	// #0
    7b74:	528013c0 	mov	w0, #0x9e                  	// #158
    7b78:	97fff8e7 	bl	5f14 <device_send_key@@Base>
    7b7c:	2a0003f7 	mov	w23, w0
    7b80:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7b84:	aa1603e1 	mov	x1, x22
    7b88:	aa1503e3 	mov	x3, x21
    7b8c:	910ca042 	add	x2, x2, #0x328
    7b90:	528013c4 	mov	w4, #0x9e                  	// #158
    7b94:	52800060 	mov	w0, #0x3                   	// #3
    7b98:	97fff1e2 	bl	4320 <__android_log_print@plt>
    7b9c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7ba0:	aa1603e1 	mov	x1, x22
    7ba4:	9131a042 	add	x2, x2, #0xc68
    7ba8:	aa1503e3 	mov	x3, x21
    7bac:	2a1703e4 	mov	w4, w23
    7bb0:	52800060 	mov	w0, #0x3                   	// #3
    7bb4:	97fff1db 	bl	4320 <__android_log_print@plt>
    7bb8:	17ffff5e 	b	7930 <sig_in_ff@@Base+0xf8>
    7bbc:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7bc0:	f947f400 	ldr	x0, [x0, #4072]
    7bc4:	97fff17f 	bl	41c0 <sem_post@plt>
    7bc8:	17ffff5a 	b	7930 <sig_in_ff@@Base+0xf8>
    7bcc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7bd0:	52800060 	mov	w0, #0x3                   	// #3
    7bd4:	aa1603e1 	mov	x1, x22
    7bd8:	91010042 	add	x2, x2, #0x40
    7bdc:	aa1503e3 	mov	x3, x21
    7be0:	97fff1d0 	bl	4320 <__android_log_print@plt>
    7be4:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7be8:	f9478800 	ldr	x0, [x0, #3856]
    7bec:	b9400000 	ldr	w0, [x0]
    7bf0:	71000c1f 	cmp	w0, #0x3
    7bf4:	54000aa0 	b.eq	7d48 <sig_in_ff@@Base+0x510>  // b.none
    7bf8:	52800001 	mov	w1, #0x0                   	// #0
    7bfc:	52801580 	mov	w0, #0xac                  	// #172
    7c00:	97fff8c5 	bl	5f14 <device_send_key@@Base>
    7c04:	17ffff4b 	b	7930 <sig_in_ff@@Base+0xf8>
    7c08:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7c0c:	aa1503e3 	mov	x3, x21
    7c10:	91024042 	add	x2, x2, #0x90
    7c14:	52800060 	mov	w0, #0x3                   	// #3
    7c18:	97fff1c2 	bl	4320 <__android_log_print@plt>
    7c1c:	d0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    7c20:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7c24:	aa1603e1 	mov	x1, x22
    7c28:	9102e042 	add	x2, x2, #0xb8
    7c2c:	aa1503e3 	mov	x3, x21
    7c30:	52800060 	mov	w0, #0x3                   	// #3
    7c34:	f9479c84 	ldr	x4, [x4, #3896]
    7c38:	b9400084 	ldr	w4, [x4]
    7c3c:	97fff1b9 	bl	4320 <__android_log_print@plt>
    7c40:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7c44:	52800060 	mov	w0, #0x3                   	// #3
    7c48:	aa1603e1 	mov	x1, x22
    7c4c:	91168042 	add	x2, x2, #0x5a0
    7c50:	aa1503e3 	mov	x3, x21
    7c54:	97fff1b3 	bl	4320 <__android_log_print@plt>
    7c58:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7c5c:	f947b400 	ldr	x0, [x0, #3944]
    7c60:	39400000 	ldrb	w0, [x0]
    7c64:	7100041f 	cmp	w0, #0x1
    7c68:	54000160 	b.eq	7c94 <sig_in_ff@@Base+0x45c>  // b.none
    7c6c:	52800021 	mov	w1, #0x1                   	// #1
    7c70:	52804880 	mov	w0, #0x244                 	// #580
    7c74:	97fff8a8 	bl	5f14 <device_send_key@@Base>
    7c78:	2a0003e4 	mov	w4, w0
    7c7c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7c80:	52800060 	mov	w0, #0x3                   	// #3
    7c84:	aa1603e1 	mov	x1, x22
    7c88:	912fa042 	add	x2, x2, #0xbe8
    7c8c:	aa1503e3 	mov	x3, x21
    7c90:	97fff1a4 	bl	4320 <__android_log_print@plt>
    7c94:	91254303 	add	x3, x24, #0x950
    7c98:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7c9c:	9109c321 	add	x1, x25, #0x270
    7ca0:	91058042 	add	x2, x2, #0x160
    7ca4:	91018063 	add	x3, x3, #0x60
    7ca8:	52804884 	mov	w4, #0x244                 	// #580
    7cac:	52800060 	mov	w0, #0x3                   	// #3
    7cb0:	97fff19c 	bl	4320 <__android_log_print@plt>
    7cb4:	17ffff1f 	b	7930 <sig_in_ff@@Base+0xf8>
    7cb8:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7cbc:	aa1503e3 	mov	x3, x21
    7cc0:	91096042 	add	x2, x2, #0x258
    7cc4:	52800060 	mov	w0, #0x3                   	// #3
    7cc8:	97fff196 	bl	4320 <__android_log_print@plt>
    7ccc:	d0000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    7cd0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7cd4:	aa1603e1 	mov	x1, x22
    7cd8:	9102e042 	add	x2, x2, #0xb8
    7cdc:	aa1503e3 	mov	x3, x21
    7ce0:	52800060 	mov	w0, #0x3                   	// #3
    7ce4:	f9479c84 	ldr	x4, [x4, #3896]
    7ce8:	b9400084 	ldr	w4, [x4]
    7cec:	97fff18d 	bl	4320 <__android_log_print@plt>
    7cf0:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7cf4:	52800060 	mov	w0, #0x3                   	// #3
    7cf8:	aa1603e1 	mov	x1, x22
    7cfc:	91176042 	add	x2, x2, #0x5d8
    7d00:	aa1503e3 	mov	x3, x21
    7d04:	97fff187 	bl	4320 <__android_log_print@plt>
    7d08:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7d0c:	f947b400 	ldr	x0, [x0, #3944]
    7d10:	39400000 	ldrb	w0, [x0]
    7d14:	7100041f 	cmp	w0, #0x1
    7d18:	54ffe0c0 	b.eq	7930 <sig_in_ff@@Base+0xf8>  // b.none
    7d1c:	52800021 	mov	w1, #0x1                   	// #1
    7d20:	528013c0 	mov	w0, #0x9e                  	// #158
    7d24:	97fff87c 	bl	5f14 <device_send_key@@Base>
    7d28:	2a0003e4 	mov	w4, w0
    7d2c:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7d30:	aa1603e1 	mov	x1, x22
    7d34:	91184042 	add	x2, x2, #0x610
    7d38:	aa1503e3 	mov	x3, x21
    7d3c:	52800060 	mov	w0, #0x3                   	// #3
    7d40:	97fff178 	bl	4320 <__android_log_print@plt>
    7d44:	17fffefb 	b	7930 <sig_in_ff@@Base+0xf8>
    7d48:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7d4c:	f947cc00 	ldr	x0, [x0, #3992]
    7d50:	97fff11c 	bl	41c0 <sem_post@plt>
    7d54:	17ffffa9 	b	7bf8 <sig_in_ff@@Base+0x3c0>
    7d58:	97fff15a 	bl	42c0 <__stack_chk_fail@plt>

0000000000007d5c <sig_in_debug@@Base>:
    7d5c:	d0000044 	adrp	x4, 11000 <gf_dump_data_interface@@Base+0x760>
    7d60:	d0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    7d64:	91254084 	add	x4, x4, #0x950
    7d68:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7d6c:	91020083 	add	x3, x4, #0x80
    7d70:	52800060 	mov	w0, #0x3                   	// #3
    7d74:	9109c021 	add	x1, x1, #0x270
    7d78:	91344042 	add	x2, x2, #0xd10
    7d7c:	91024084 	add	x4, x4, #0x90
    7d80:	17fff168 	b	4320 <__android_log_print@plt>

0000000000007d84 <sig_in_default@@Base>:
    7d84:	d0000044 	adrp	x4, 11000 <gf_dump_data_interface@@Base+0x760>
    7d88:	d0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    7d8c:	91254084 	add	x4, x4, #0x950
    7d90:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7d94:	91028083 	add	x3, x4, #0xa0
    7d98:	52800060 	mov	w0, #0x3                   	// #3
    7d9c:	9109c021 	add	x1, x1, #0x270
    7da0:	91344042 	add	x2, x2, #0xd10
    7da4:	9102c084 	add	x4, x4, #0xb0
    7da8:	17fff15e 	b	4320 <__android_log_print@plt>

0000000000007dac <device_enable@@Base>:
    7dac:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
    7db0:	910003fd 	mov	x29, sp
    7db4:	a90153f3 	stp	x19, x20, [sp, #16]
    7db8:	d0000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    7dbc:	f90023f9 	str	x25, [sp, #64]
    7dc0:	a9025bf5 	stp	x21, x22, [sp, #32]
    7dc4:	a90363f7 	stp	x23, x24, [sp, #48]
    7dc8:	f947c280 	ldr	x0, [x20, #3968]
    7dcc:	3901bfbf 	strb	wzr, [x29, #111]
    7dd0:	f9400000 	ldr	x0, [x0]
    7dd4:	f9003fa0 	str	x0, [x29, #120]
    7dd8:	97fff1d1 	bl	451c <gf_open@@Base>
    7ddc:	6b1f001f 	cmp	w0, wzr
    7de0:	2a0003f5 	mov	w21, w0
    7de4:	5400188d 	b.le	80f4 <device_enable@@Base+0x348>
    7de8:	d0000056 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    7dec:	d0000057 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    7df0:	912542d3 	add	x19, x22, #0x950
    7df4:	9109c2f8 	add	x24, x23, #0x270
    7df8:	91030273 	add	x19, x19, #0xc0
    7dfc:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e00:	f0000044 	adrp	x4, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e04:	f0000045 	adrp	x5, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e08:	aa1803e1 	mov	x1, x24
    7e0c:	52800060 	mov	w0, #0x3                   	// #3
    7e10:	91356042 	add	x2, x2, #0xd58
    7e14:	aa1303e3 	mov	x3, x19
    7e18:	9135e084 	add	x4, x4, #0xd78
    7e1c:	913620a5 	add	x5, x5, #0xd88
    7e20:	97fff140 	bl	4320 <__android_log_print@plt>
    7e24:	2a1503e0 	mov	w0, w21
    7e28:	d0000115 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    7e2c:	f947eab5 	ldr	x21, [x21, #4048]
    7e30:	aa1503e1 	mov	x1, x21
    7e34:	94000bbc 	bl	ad24 <fnCa_Init@@Base>
    7e38:	35001260 	cbnz	w0, 8084 <device_enable@@Base+0x2d8>
    7e3c:	b9400ea4 	ldr	w4, [x21, #12]
    7e40:	9101c3b9 	add	x25, x29, #0x70
    7e44:	f0000041 	adrp	x1, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e48:	aa1903e0 	mov	x0, x25
    7e4c:	2a0403e2 	mov	w2, w4
    7e50:	91332021 	add	x1, x1, #0xcc8
    7e54:	f9002fa4 	str	x4, [x29, #88]
    7e58:	f0000115 	adrp	x21, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7e5c:	97fff141 	bl	4360 <sprintf@plt>
    7e60:	f9402fa4 	ldr	x4, [x29, #88]
    7e64:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e68:	aa1303e3 	mov	x3, x19
    7e6c:	91374042 	add	x2, x2, #0xdd0
    7e70:	aa1803e1 	mov	x1, x24
    7e74:	52800060 	mov	w0, #0x3                   	// #3
    7e78:	97fff12a 	bl	4320 <__android_log_print@plt>
    7e7c:	f0000040 	adrp	x0, 12000 <gf_dump_data_interface@@Base+0x1760>
    7e80:	aa1903e1 	mov	x1, x25
    7e84:	91380000 	add	x0, x0, #0xe00
    7e88:	97fff0ea 	bl	4230 <__system_property_set@plt>
    7e8c:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7e90:	52800001 	mov	w1, #0x0                   	// #0
    7e94:	52800002 	mov	w2, #0x0                   	// #0
    7e98:	f947e000 	ldr	x0, [x0, #4032]
    7e9c:	97fff141 	bl	43a0 <sem_init@plt>
    7ea0:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7ea4:	52800001 	mov	w1, #0x0                   	// #0
    7ea8:	52800002 	mov	w2, #0x0                   	// #0
    7eac:	f9479400 	ldr	x0, [x0, #3880]
    7eb0:	97fff13c 	bl	43a0 <sem_init@plt>
    7eb4:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7eb8:	52800001 	mov	w1, #0x0                   	// #0
    7ebc:	52800002 	mov	w2, #0x0                   	// #0
    7ec0:	f947f400 	ldr	x0, [x0, #4072]
    7ec4:	97fff137 	bl	43a0 <sem_init@plt>
    7ec8:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7ecc:	52800001 	mov	w1, #0x0                   	// #0
    7ed0:	52800002 	mov	w2, #0x0                   	// #0
    7ed4:	f947cc00 	ldr	x0, [x0, #3992]
    7ed8:	97fff132 	bl	43a0 <sem_init@plt>
    7edc:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7ee0:	52800001 	mov	w1, #0x0                   	// #0
    7ee4:	52800002 	mov	w2, #0x0                   	// #0
    7ee8:	f947a800 	ldr	x0, [x0, #3920]
    7eec:	97fff12d 	bl	43a0 <sem_init@plt>
    7ef0:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7ef4:	9121e2a1 	add	x1, x21, #0x878
    7ef8:	f9478800 	ldr	x0, [x0, #3856]
    7efc:	3900e03f 	strb	wzr, [x1, #56]
    7f00:	b900001f 	str	wzr, [x0]
    7f04:	97fff25c 	bl	4874 <gf_disable_irq@@Base>
    7f08:	37f80980 	tbnz	w0, #31, 8038 <device_enable@@Base+0x28c>
    7f0c:	910203b3 	add	x19, x29, #0x80
    7f10:	381efe7f 	strb	wzr, [x19, #-17]!
    7f14:	97fff28d 	bl	4948 <gf_hw_reset@@Base>
    7f18:	aa1303e0 	mov	x0, x19
    7f1c:	94000f35 	bl	bbf0 <fnCa_FWUpdate@@Base>
    7f20:	3100041f 	cmn	w0, #0x1
    7f24:	540009c0 	b.eq	805c <device_enable@@Base+0x2b0>  // b.none
    7f28:	3941bfa0 	ldrb	w0, [x29, #111]
    7f2c:	35000980 	cbnz	w0, 805c <device_enable@@Base+0x2b0>
    7f30:	d0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    7f34:	f947dc00 	ldr	x0, [x0, #4024]
    7f38:	97fff1d1 	bl	467c <gf_handler_register@@Base>
    7f3c:	97fff21d 	bl	47b0 <gf_enable_irq@@Base>
    7f40:	d0000102 	adrp	x2, 29000 <gf_dump_data_interface@@Base+0x18760>
    7f44:	9121e2a0 	add	x0, x21, #0x878
    7f48:	d2800001 	mov	x1, #0x0                   	// #0
    7f4c:	91010000 	add	x0, x0, #0x40
    7f50:	d2800003 	mov	x3, #0x0                   	// #0
    7f54:	f947d442 	ldr	x2, [x2, #4008]
    7f58:	97fff092 	bl	41a0 <pthread_create@plt>
    7f5c:	2a0003e4 	mov	w4, w0
    7f60:	35000b00 	cbnz	w0, 80c0 <device_enable@@Base+0x314>
    7f64:	f0000040 	adrp	x0, 12000 <gf_dump_data_interface@@Base+0x1760>
    7f68:	52800001 	mov	w1, #0x0                   	// #0
    7f6c:	913a8000 	add	x0, x0, #0xea0
    7f70:	97fff150 	bl	44b0 <property_get_int32@plt>
    7f74:	7100041f 	cmp	w0, #0x1
    7f78:	540006e0 	b.eq	8054 <device_enable@@Base+0x2a8>  // b.none
    7f7c:	d0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    7f80:	f0000115 	adrp	x21, 2a000 <gf_dump_data_interface@@Base+0x19760>
    7f84:	910022a0 	add	x0, x21, #0x8
    7f88:	f947b821 	ldr	x1, [x1, #3952]
    7f8c:	97fff3e9 	bl	4f30 <gf_create_timer@@Base>
    7f90:	34000280 	cbz	w0, 7fe0 <device_enable@@Base+0x234>
    7f94:	d0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    7f98:	910022a0 	add	x0, x21, #0x8
    7f9c:	91004000 	add	x0, x0, #0x10
    7fa0:	52800015 	mov	w21, #0x0                   	// #0
    7fa4:	f947ec21 	ldr	x1, [x1, #4056]
    7fa8:	97fff3e2 	bl	4f30 <gf_create_timer@@Base>
    7fac:	34000360 	cbz	w0, 8018 <device_enable@@Base+0x26c>
    7fb0:	f947c294 	ldr	x20, [x20, #3968]
    7fb4:	2a1503e0 	mov	w0, w21
    7fb8:	f9403fa2 	ldr	x2, [x29, #120]
    7fbc:	f9400281 	ldr	x1, [x20]
    7fc0:	eb01005f 	cmp	x2, x1
    7fc4:	54000ae1 	b.ne	8120 <device_enable@@Base+0x374>  // b.any
    7fc8:	a94153f3 	ldp	x19, x20, [sp, #16]
    7fcc:	a9425bf5 	ldp	x21, x22, [sp, #32]
    7fd0:	a94363f7 	ldp	x23, x24, [sp, #48]
    7fd4:	f94023f9 	ldr	x25, [sp, #64]
    7fd8:	a8c87bfd 	ldp	x29, x30, [sp], #128
    7fdc:	d65f03c0 	ret
    7fe0:	912542c3 	add	x3, x22, #0x950
    7fe4:	f0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    7fe8:	9109c2e1 	add	x1, x23, #0x270
    7fec:	52800060 	mov	w0, #0x3                   	// #3
    7ff0:	913ae042 	add	x2, x2, #0xeb8
    7ff4:	91030063 	add	x3, x3, #0xc0
    7ff8:	97fff0ca 	bl	4320 <__android_log_print@plt>
    7ffc:	d0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8000:	910022a0 	add	x0, x21, #0x8
    8004:	91004000 	add	x0, x0, #0x10
    8008:	52800015 	mov	w21, #0x0                   	// #0
    800c:	f947ec21 	ldr	x1, [x1, #4056]
    8010:	97fff3c8 	bl	4f30 <gf_create_timer@@Base>
    8014:	35fffce0 	cbnz	w0, 7fb0 <device_enable@@Base+0x204>
    8018:	912542c3 	add	x3, x22, #0x950
    801c:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8020:	9109c2e1 	add	x1, x23, #0x270
    8024:	913ba042 	add	x2, x2, #0xee8
    8028:	91030063 	add	x3, x3, #0xc0
    802c:	52800060 	mov	w0, #0x3                   	// #3
    8030:	97fff0bc 	bl	4320 <__android_log_print@plt>
    8034:	17ffffdf 	b	7fb0 <device_enable@@Base+0x204>
    8038:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    803c:	aa1803e1 	mov	x1, x24
    8040:	91384042 	add	x2, x2, #0xe10
    8044:	aa1303e3 	mov	x3, x19
    8048:	52800060 	mov	w0, #0x3                   	// #3
    804c:	97fff0b5 	bl	4320 <__android_log_print@plt>
    8050:	17ffffaf 	b	7f0c <device_enable@@Base+0x160>
    8054:	97fff575 	bl	5628 <gf_init_esd_timer@@Base>
    8058:	17ffffc9 	b	7f7c <device_enable@@Base+0x1d0>
    805c:	912542c3 	add	x3, x22, #0x950
    8060:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8064:	9109c2e1 	add	x1, x23, #0x270
    8068:	91390042 	add	x2, x2, #0xe40
    806c:	91030063 	add	x3, x3, #0xc0
    8070:	52800060 	mov	w0, #0x3                   	// #3
    8074:	12800015 	mov	w21, #0xffffffff            	// #-1
    8078:	97fff0aa 	bl	4320 <__android_log_print@plt>
    807c:	97fff15f 	bl	45f8 <gf_close@@Base>
    8080:	17ffffcc 	b	7fb0 <device_enable@@Base+0x204>
    8084:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8088:	aa1803e1 	mov	x1, x24
    808c:	aa1303e3 	mov	x3, x19
    8090:	91366042 	add	x2, x2, #0xd98
    8094:	52800060 	mov	w0, #0x3                   	// #3
    8098:	12800015 	mov	w21, #0xffffffff            	// #-1
    809c:	97fff0a1 	bl	4320 <__android_log_print@plt>
    80a0:	528000e0 	mov	w0, #0x7                   	// #7
    80a4:	b0000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    80a8:	d0000043 	adrp	x3, 12000 <gf_dump_data_interface@@Base+0x1760>
    80ac:	2a0003e1 	mov	w1, w0
    80b0:	910b2042 	add	x2, x2, #0x2c8
    80b4:	91372063 	add	x3, x3, #0xdc8
    80b8:	97fff06a 	bl	4260 <__android_log_buf_print@plt>
    80bc:	17ffffbd 	b	7fb0 <device_enable@@Base+0x204>
    80c0:	f9002fa4 	str	x4, [x29, #88]
    80c4:	97fff1a6 	bl	475c <gf_handler_unregister@@Base>
    80c8:	97fff14c 	bl	45f8 <gf_close@@Base>
    80cc:	12800015 	mov	w21, #0xffffffff            	// #-1
    80d0:	912542c3 	add	x3, x22, #0x950
    80d4:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    80d8:	f9402fa4 	ldr	x4, [x29, #88]
    80dc:	9109c2e1 	add	x1, x23, #0x270
    80e0:	9139c042 	add	x2, x2, #0xe70
    80e4:	91030063 	add	x3, x3, #0xc0
    80e8:	52800060 	mov	w0, #0x3                   	// #3
    80ec:	97fff08d 	bl	4320 <__android_log_print@plt>
    80f0:	17ffffb0 	b	7fb0 <device_enable@@Base+0x204>
    80f4:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    80f8:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    80fc:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8100:	91254063 	add	x3, x3, #0x950
    8104:	9109c021 	add	x1, x1, #0x270
    8108:	9134e042 	add	x2, x2, #0xd38
    810c:	91030063 	add	x3, x3, #0xc0
    8110:	52800060 	mov	w0, #0x3                   	// #3
    8114:	12800015 	mov	w21, #0xffffffff            	// #-1
    8118:	97fff082 	bl	4320 <__android_log_print@plt>
    811c:	17ffffa5 	b	7fb0 <device_enable@@Base+0x204>
    8120:	97fff068 	bl	42c0 <__stack_chk_fail@plt>

0000000000008124 <device_disable@@Base>:
    8124:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8128:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    812c:	910003fd 	mov	x29, sp
    8130:	f9478800 	ldr	x0, [x0, #3856]
    8134:	f9000bf3 	str	x19, [sp, #16]
    8138:	d0000113 	adrp	x19, 2a000 <gf_dump_data_interface@@Base+0x19760>
    813c:	b900001f 	str	wzr, [x0]
    8140:	97fff458 	bl	52a0 <gf_delete_esd_timer@@Base>
    8144:	91002260 	add	x0, x19, #0x8
    8148:	97fff430 	bl	5208 <gf_delete_timer@@Base>
    814c:	34000340 	cbz	w0, 81b4 <device_disable@@Base+0x90>
    8150:	91002260 	add	x0, x19, #0x8
    8154:	91004000 	add	x0, x0, #0x10
    8158:	97fff42c 	bl	5208 <gf_delete_timer@@Base>
    815c:	35000140 	cbnz	w0, 8184 <device_disable@@Base+0x60>
    8160:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    8164:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8168:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    816c:	91254063 	add	x3, x3, #0x950
    8170:	52800060 	mov	w0, #0x3                   	// #3
    8174:	9109c021 	add	x1, x1, #0x270
    8178:	913d2042 	add	x2, x2, #0xf48
    817c:	91034063 	add	x3, x3, #0xd0
    8180:	97fff068 	bl	4320 <__android_log_print@plt>
    8184:	97fff176 	bl	475c <gf_handler_unregister@@Base>
    8188:	97fff11c 	bl	45f8 <gf_close@@Base>
    818c:	f9400bf3 	ldr	x19, [sp, #16]
    8190:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8194:	d0000102 	adrp	x2, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8198:	52800000 	mov	w0, #0x0                   	// #0
    819c:	52800023 	mov	w3, #0x1                   	// #1
    81a0:	f947fc21 	ldr	x1, [x1, #4088]
    81a4:	3922c043 	strb	w3, [x2, #2224]
    81a8:	f900003f 	str	xzr, [x1]
    81ac:	a8c27bfd 	ldp	x29, x30, [sp], #32
    81b0:	d65f03c0 	ret
    81b4:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    81b8:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    81bc:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    81c0:	91254063 	add	x3, x3, #0x950
    81c4:	9109c021 	add	x1, x1, #0x270
    81c8:	913c6042 	add	x2, x2, #0xf18
    81cc:	91034063 	add	x3, x3, #0xd0
    81d0:	52800060 	mov	w0, #0x3                   	// #3
    81d4:	97fff053 	bl	4320 <__android_log_print@plt>
    81d8:	17ffffde 	b	8150 <device_disable@@Base+0x2c>

00000000000081dc <irq_enable@@Base>:
    81dc:	17fff175 	b	47b0 <gf_enable_irq@@Base>

00000000000081e0 <irq_disable@@Base>:
    81e0:	17fff1a5 	b	4874 <gf_disable_irq@@Base>

00000000000081e4 <device_waitForFinger@@Base>:
    81e4:	a9b67bfd 	stp	x29, x30, [sp, #-160]!
    81e8:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    81ec:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    81f0:	910003fd 	mov	x29, sp
    81f4:	a9025bf5 	stp	x21, x22, [sp, #32]
    81f8:	91254036 	add	x22, x1, #0x950
    81fc:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8200:	a90363f7 	stp	x23, x24, [sp, #48]
    8204:	910382d6 	add	x22, x22, #0xe0
    8208:	b0000057 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    820c:	f947c024 	ldr	x4, [x1, #3968]
    8210:	913de042 	add	x2, x2, #0xf78
    8214:	9109c2e1 	add	x1, x23, #0x270
    8218:	2a0003f8 	mov	w24, w0
    821c:	aa1603e3 	mov	x3, x22
    8220:	52800060 	mov	w0, #0x3                   	// #3
    8224:	f9400084 	ldr	x4, [x4]
    8228:	a90153f3 	stp	x19, x20, [sp, #16]
    822c:	a9046bf9 	stp	x25, x26, [sp, #64]
    8230:	a90573fb 	stp	x27, x28, [sp, #80]
    8234:	f9004fa4 	str	x4, [x29, #152]
    8238:	97fff03a 	bl	4320 <__android_log_print@plt>
    823c:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8240:	52800042 	mov	w2, #0x2                   	// #2
    8244:	f9478801 	ldr	x1, [x0, #3856]
    8248:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    824c:	9121e000 	add	x0, x0, #0x878
    8250:	b9000022 	str	w2, [x1]
    8254:	3900e01f 	strb	wzr, [x0, #56]
    8258:	97fff156 	bl	47b0 <gf_enable_irq@@Base>
    825c:	37f815a0 	tbnz	w0, #31, 8510 <device_waitForFinger@@Base+0x32c>
    8260:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8264:	f000005a 	adrp	x26, 13000 <gf_dump_data_interface@@Base+0x2760>
    8268:	f000005b 	adrp	x27, 13000 <gf_dump_data_interface@@Base+0x2760>
    826c:	52800021 	mov	w1, #0x1                   	// #1
    8270:	2a1803f3 	mov	w19, w24
    8274:	910223b5 	add	x21, x29, #0x88
    8278:	f947a400 	ldr	x0, [x0, #3912]
    827c:	9101e3b4 	add	x20, x29, #0x78
    8280:	b0000119 	adrp	x25, 29000 <gf_dump_data_interface@@Base+0x18760>
    8284:	9102035a 	add	x26, x26, #0x80
    8288:	9100637b 	add	x27, x27, #0x18
    828c:	39000001 	strb	w1, [x0]
    8290:	aa1503e0 	mov	x0, x21
    8294:	d2800001 	mov	x1, #0x0                   	// #0
    8298:	97fff00e 	bl	42d0 <gettimeofday@plt>
    829c:	6b1f027f 	cmp	w19, wzr
    82a0:	f94002a4 	ldr	x4, [x21]
    82a4:	f94006a2 	ldr	x2, [x21, #8]
    82a8:	54000a4d 	b.le	83f0 <device_waitForFinger@@Base+0x20c>
    82ac:	d379e040 	lsl	x0, x2, #7
    82b0:	d29c2003 	mov	x3, #0xe100                	// #57600
    82b4:	cb020800 	sub	x0, x0, x2, lsl #2
    82b8:	f2a0bea3 	movk	x3, #0x5f5, lsl #16
    82bc:	8b020000 	add	x0, x0, x2
    82c0:	8b000c63 	add	x3, x3, x0, lsl #3
    82c4:	d2929662 	mov	x2, #0x94b3                	// #38067
    82c8:	d2994005 	mov	x5, #0xca00                	// #51712
    82cc:	f2a4dac2 	movk	x2, #0x26d6, lsl #16
    82d0:	f2a77345 	movk	x5, #0x3b9a, lsl #16
    82d4:	f2c17d02 	movk	x2, #0xbe8, lsl #32
    82d8:	f947f720 	ldr	x0, [x25, #4072]
    82dc:	f2e225c2 	movk	x2, #0x112e, lsl #48
    82e0:	aa1403e1 	mov	x1, x20
    82e4:	9b427c62 	smulh	x2, x3, x2
    82e8:	935afc42 	asr	x2, x2, #26
    82ec:	cb83fc42 	sub	x2, x2, x3, asr #63
    82f0:	8b020084 	add	x4, x4, x2
    82f4:	f9000284 	str	x4, [x20]
    82f8:	d503201f 	nop
    82fc:	9b058c42 	msub	x2, x2, x5, x3
    8300:	f9000682 	str	x2, [x20, #8]
    8304:	97ffefc7 	bl	4220 <sem_timedwait@plt>
    8308:	3100041f 	cmn	w0, #0x1
    830c:	2a0003fc 	mov	w28, w0
    8310:	54000540 	b.eq	83b8 <device_waitForFinger@@Base+0x1d4>  // b.none
    8314:	34000b80 	cbz	w0, 8484 <device_waitForFinger@@Base+0x2a0>
    8318:	52800060 	mov	w0, #0x3                   	// #3
    831c:	9109c2e1 	add	x1, x23, #0x270
    8320:	aa1a03e2 	mov	x2, x26
    8324:	aa1603e3 	mov	x3, x22
    8328:	97ffeffe 	bl	4320 <__android_log_print@plt>
    832c:	6b1f031f 	cmp	w24, wzr
    8330:	54fffb0d 	b.le	8290 <device_waitForFinger@@Base+0xac>
    8334:	51019273 	sub	w19, w19, #0x64
    8338:	6b1f027f 	cmp	w19, wzr
    833c:	54fffaac 	b.gt	8290 <device_waitForFinger@@Base+0xac>
    8340:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8344:	9109c2f7 	add	x23, x23, #0x270
    8348:	91254000 	add	x0, x0, #0x950
    834c:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8350:	91038014 	add	x20, x0, #0xe0
    8354:	aa1703e1 	mov	x1, x23
    8358:	91028042 	add	x2, x2, #0xa0
    835c:	aa1403e3 	mov	x3, x20
    8360:	52800060 	mov	w0, #0x3                   	// #3
    8364:	52801073 	mov	w19, #0x83                  	// #131
    8368:	97ffefee 	bl	4320 <__android_log_print@plt>
    836c:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8370:	f9478800 	ldr	x0, [x0, #3856]
    8374:	b900001f 	str	wzr, [x0]
    8378:	97fff10e 	bl	47b0 <gf_enable_irq@@Base>
    837c:	37f80bc0 	tbnz	w0, #31, 84f4 <device_waitForFinger@@Base+0x310>
    8380:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8384:	f9404fa2 	ldr	x2, [x29, #152]
    8388:	f947c001 	ldr	x1, [x0, #3968]
    838c:	2a1303e0 	mov	w0, w19
    8390:	f9400021 	ldr	x1, [x1]
    8394:	eb01005f 	cmp	x2, x1
    8398:	54000d01 	b.ne	8538 <device_waitForFinger@@Base+0x354>  // b.any
    839c:	a94153f3 	ldp	x19, x20, [sp, #16]
    83a0:	a9425bf5 	ldp	x21, x22, [sp, #32]
    83a4:	a94363f7 	ldp	x23, x24, [sp, #48]
    83a8:	a9446bf9 	ldp	x25, x26, [sp, #64]
    83ac:	a94573fb 	ldp	x27, x28, [sp, #80]
    83b0:	a8ca7bfd 	ldp	x29, x30, [sp], #160
    83b4:	d65f03c0 	ret
    83b8:	97ffef96 	bl	4210 <__errno@plt>
    83bc:	b9400001 	ldr	w1, [x0]
    83c0:	7101b83f 	cmp	w1, #0x6e
    83c4:	54000240 	b.eq	840c <device_waitForFinger@@Base+0x228>  // b.none
    83c8:	b9400001 	ldr	w1, [x0]
    83cc:	7100103f 	cmp	w1, #0x4
    83d0:	540004c0 	b.eq	8468 <device_waitForFinger@@Base+0x284>  // b.none
    83d4:	b9400004 	ldr	w4, [x0]
    83d8:	9109c2e1 	add	x1, x23, #0x270
    83dc:	aa1b03e2 	mov	x2, x27
    83e0:	aa1603e3 	mov	x3, x22
    83e4:	52800060 	mov	w0, #0x3                   	// #3
    83e8:	97ffefce 	bl	4320 <__android_log_print@plt>
    83ec:	17ffffd0 	b	832c <device_waitForFinger@@Base+0x148>
    83f0:	d379e040 	lsl	x0, x2, #7
    83f4:	d28ca003 	mov	x3, #0x6500                	// #25856
    83f8:	cb020800 	sub	x0, x0, x2, lsl #2
    83fc:	f2a3b9a3 	movk	x3, #0x1dcd, lsl #16
    8400:	8b020000 	add	x0, x0, x2
    8404:	8b000c63 	add	x3, x3, x0, lsl #3
    8408:	17ffffaf 	b	82c4 <device_waitForFinger@@Base+0xe0>
    840c:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8410:	9121e005 	add	x5, x0, #0x878
    8414:	3940e0a0 	ldrb	w0, [x5, #56]
    8418:	7100041f 	cmp	w0, #0x1
    841c:	54fff881 	b.ne	832c <device_waitForFinger@@Base+0x148>  // b.any
    8420:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8424:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8428:	91254003 	add	x3, x0, #0x950
    842c:	9109c2e1 	add	x1, x23, #0x270
    8430:	52800060 	mov	w0, #0x3                   	// #3
    8434:	913f4042 	add	x2, x2, #0xfd0
    8438:	91038063 	add	x3, x3, #0xe0
    843c:	f90037a5 	str	x5, [x29, #104]
    8440:	97ffefb8 	bl	4320 <__android_log_print@plt>
    8444:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8448:	f94037a5 	ldr	x5, [x29, #104]
    844c:	f9478800 	ldr	x0, [x0, #3856]
    8450:	3900e0bf 	strb	wzr, [x5, #56]
    8454:	b900001f 	str	wzr, [x0]
    8458:	97fff0d6 	bl	47b0 <gf_enable_irq@@Base>
    845c:	37f805a0 	tbnz	w0, #31, 8510 <device_waitForFinger@@Base+0x32c>
    8460:	2a1c03f3 	mov	w19, w28
    8464:	17ffffc7 	b	8380 <device_waitForFinger@@Base+0x19c>
    8468:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    846c:	9109c2e1 	add	x1, x23, #0x270
    8470:	913fe042 	add	x2, x2, #0xff8
    8474:	aa1603e3 	mov	x3, x22
    8478:	52800060 	mov	w0, #0x3                   	// #3
    847c:	97ffefa9 	bl	4320 <__android_log_print@plt>
    8480:	17ffffab 	b	832c <device_waitForFinger@@Base+0x148>
    8484:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8488:	9109c2f7 	add	x23, x23, #0x270
    848c:	91254000 	add	x0, x0, #0x950
    8490:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8494:	91038014 	add	x20, x0, #0xe0
    8498:	aa1703e1 	mov	x1, x23
    849c:	9100c042 	add	x2, x2, #0x30
    84a0:	aa1403e3 	mov	x3, x20
    84a4:	52800060 	mov	w0, #0x3                   	// #3
    84a8:	52800013 	mov	w19, #0x0                   	// #0
    84ac:	97ffef9d 	bl	4320 <__android_log_print@plt>
    84b0:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    84b4:	aa1703e1 	mov	x1, x23
    84b8:	91016042 	add	x2, x2, #0x58
    84bc:	aa1403e3 	mov	x3, x20
    84c0:	52800060 	mov	w0, #0x3                   	// #3
    84c4:	97ffef97 	bl	4320 <__android_log_print@plt>
    84c8:	b0000103 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    84cc:	52800020 	mov	w0, #0x1                   	// #1
    84d0:	52800001 	mov	w1, #0x0                   	// #0
    84d4:	52800002 	mov	w2, #0x0                   	// #0
    84d8:	f947fc63 	ldr	x3, [x3, #4088]
    84dc:	f9400063 	ldr	x3, [x3]
    84e0:	d63f0060 	blr	x3
    84e4:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    84e8:	f9478800 	ldr	x0, [x0, #3856]
    84ec:	b900001f 	str	wzr, [x0]
    84f0:	17ffffa4 	b	8380 <device_waitForFinger@@Base+0x19c>
    84f4:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    84f8:	aa1703e1 	mov	x1, x23
    84fc:	913e8042 	add	x2, x2, #0xfa0
    8500:	aa1403e3 	mov	x3, x20
    8504:	52800060 	mov	w0, #0x3                   	// #3
    8508:	97ffef86 	bl	4320 <__android_log_print@plt>
    850c:	17ffff9d 	b	8380 <device_waitForFinger@@Base+0x19c>
    8510:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8514:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8518:	91254003 	add	x3, x0, #0x950
    851c:	9109c2e1 	add	x1, x23, #0x270
    8520:	913e8042 	add	x2, x2, #0xfa0
    8524:	91038063 	add	x3, x3, #0xe0
    8528:	52800060 	mov	w0, #0x3                   	// #3
    852c:	12800013 	mov	w19, #0xffffffff            	// #-1
    8530:	97ffef7c 	bl	4320 <__android_log_print@plt>
    8534:	17ffff93 	b	8380 <device_waitForFinger@@Base+0x19c>
    8538:	97ffef62 	bl	42c0 <__stack_chk_fail@plt>

000000000000853c <device_waitForFingerUp@@Base>:
    853c:	a9b57bfd 	stp	x29, x30, [sp, #-176]!
    8540:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8544:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8548:	910003fd 	mov	x29, sp
    854c:	a9025bf5 	stp	x21, x22, [sp, #32]
    8550:	91254036 	add	x22, x1, #0x950
    8554:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8558:	a90363f7 	stp	x23, x24, [sp, #48]
    855c:	b0000058 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    8560:	910402d6 	add	x22, x22, #0x100
    8564:	f947c024 	ldr	x4, [x1, #3968]
    8568:	9109c315 	add	x21, x24, #0x270
    856c:	a90153f3 	stp	x19, x20, [sp, #16]
    8570:	910223b3 	add	x19, x29, #0x88
    8574:	910263b4 	add	x20, x29, #0x98
    8578:	f9400084 	ldr	x4, [x4]
    857c:	91032042 	add	x2, x2, #0xc8
    8580:	a9046bf9 	stp	x25, x26, [sp, #64]
    8584:	aa1603e3 	mov	x3, x22
    8588:	aa1503e1 	mov	x1, x21
    858c:	2a0003fa 	mov	w26, w0
    8590:	52800060 	mov	w0, #0x3                   	// #3
    8594:	a90573fb 	stp	x27, x28, [sp, #80]
    8598:	f90057a4 	str	x4, [x29, #168]
    859c:	5280007b 	mov	w27, #0x3                   	// #3
    85a0:	a9007e7f 	stp	xzr, xzr, [x19]
    85a4:	a9007e9f 	stp	xzr, xzr, [x20]
    85a8:	f9003fbf 	str	xzr, [x29, #120]
    85ac:	b000011c 	adrp	x28, 29000 <gf_dump_data_interface@@Base+0x18760>
    85b0:	790103bf 	strh	wzr, [x29, #128]
    85b4:	97ffef5b 	bl	4320 <__android_log_print@plt>
    85b8:	9101e3a0 	add	x0, x29, #0x78
    85bc:	97fff570 	bl	5b7c <gf_secspi_read_status@@Base>
    85c0:	3941e7b7 	ldrb	w23, [x29, #121]
    85c4:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    85c8:	3941fba7 	ldrb	w7, [x29, #126]
    85cc:	9100c000 	add	x0, x0, #0x30
    85d0:	2a1703e1 	mov	w1, w23
    85d4:	910c8000 	add	x0, x0, #0x320
    85d8:	3941f7b9 	ldrb	w25, [x29, #125]
    85dc:	f90037a7 	str	x7, [x29, #104]
    85e0:	97fff50b 	bl	5a0c <toString@@Base>
    85e4:	aa0003e5 	mov	x5, x0
    85e8:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    85ec:	f94037a7 	ldr	x7, [x29, #104]
    85f0:	aa1503e1 	mov	x1, x21
    85f4:	2a1b03e0 	mov	w0, w27
    85f8:	910fa042 	add	x2, x2, #0x3e8
    85fc:	aa1603e3 	mov	x3, x22
    8600:	2a1703e4 	mov	w4, w23
    8604:	2a1903e6 	mov	w6, w25
    8608:	97ffef46 	bl	4320 <__android_log_print@plt>
    860c:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8610:	f9478b81 	ldr	x1, [x28, #3856]
    8614:	f947a400 	ldr	x0, [x0, #3912]
    8618:	b900003b 	str	w27, [x1]
    861c:	3900001f 	strb	wzr, [x0]
    8620:	97fff064 	bl	47b0 <gf_enable_irq@@Base>
    8624:	37f813e0 	tbnz	w0, #31, 88a0 <device_waitForFingerUp@@Base+0x364>
    8628:	52800024 	mov	w4, #0x1                   	// #1
    862c:	f000005b 	adrp	x27, 13000 <gf_dump_data_interface@@Base+0x2760>
    8630:	2a1a03f5 	mov	w21, w26
    8634:	0a040339 	and	w25, w25, w4
    8638:	9102037b 	add	x27, x27, #0x80
    863c:	7102c2ff 	cmp	w23, #0xb0
    8640:	54000040 	b.eq	8648 <device_waitForFingerUp@@Base+0x10c>  // b.none
    8644:	34000c99 	cbz	w25, 87d4 <device_waitForFingerUp@@Base+0x298>
    8648:	d2800001 	mov	x1, #0x0                   	// #0
    864c:	aa1403e0 	mov	x0, x20
    8650:	97ffef20 	bl	42d0 <gettimeofday@plt>
    8654:	f9400682 	ldr	x2, [x20, #8]
    8658:	d2929660 	mov	x0, #0x94b3                	// #38067
    865c:	d29c2003 	mov	x3, #0xe100                	// #57600
    8660:	f2a4dac0 	movk	x0, #0x26d6, lsl #16
    8664:	d379e041 	lsl	x1, x2, #7
    8668:	f2a0bea3 	movk	x3, #0x5f5, lsl #16
    866c:	cb020821 	sub	x1, x1, x2, lsl #2
    8670:	f2c17d00 	movk	x0, #0xbe8, lsl #32
    8674:	8b020021 	add	x1, x1, x2
    8678:	f2e225c0 	movk	x0, #0x112e, lsl #48
    867c:	d2994005 	mov	x5, #0xca00                	// #51712
    8680:	f9400284 	ldr	x4, [x20]
    8684:	8b010c63 	add	x3, x3, x1, lsl #3
    8688:	f2a77345 	movk	x5, #0x3b9a, lsl #16
    868c:	aa1303e1 	mov	x1, x19
    8690:	9b407c62 	smulh	x2, x3, x0
    8694:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8698:	935afc42 	asr	x2, x2, #26
    869c:	cb83fc42 	sub	x2, x2, x3, asr #63
    86a0:	f947cc00 	ldr	x0, [x0, #3992]
    86a4:	8b020084 	add	x4, x4, x2
    86a8:	9b058c42 	msub	x2, x2, x5, x3
    86ac:	f9000264 	str	x4, [x19]
    86b0:	f9000662 	str	x2, [x19, #8]
    86b4:	97ffeedb 	bl	4220 <sem_timedwait@plt>
    86b8:	3100041f 	cmn	w0, #0x1
    86bc:	540001c0 	b.eq	86f4 <device_waitForFingerUp@@Base+0x1b8>  // b.none
    86c0:	34000b80 	cbz	w0, 8830 <device_waitForFingerUp@@Base+0x2f4>
    86c4:	52800060 	mov	w0, #0x3                   	// #3
    86c8:	9109c301 	add	x1, x24, #0x270
    86cc:	aa1b03e2 	mov	x2, x27
    86d0:	aa1603e3 	mov	x3, x22
    86d4:	97ffef13 	bl	4320 <__android_log_print@plt>
    86d8:	6b1f035f 	cmp	w26, wzr
    86dc:	5400008d 	b.le	86ec <device_waitForFingerUp@@Base+0x1b0>
    86e0:	510192b5 	sub	w21, w21, #0x64
    86e4:	6b1f02bf 	cmp	w21, wzr
    86e8:	5400032d 	b.le	874c <device_waitForFingerUp@@Base+0x210>
    86ec:	52800004 	mov	w4, #0x0                   	// #0
    86f0:	17ffffd3 	b	863c <device_waitForFingerUp@@Base+0x100>
    86f4:	97ffeec7 	bl	4210 <__errno@plt>
    86f8:	b9400001 	ldr	w1, [x0]
    86fc:	7101b83f 	cmp	w1, #0x6e
    8700:	54fffec0 	b.eq	86d8 <device_waitForFingerUp@@Base+0x19c>  // b.none
    8704:	b9400001 	ldr	w1, [x0]
    8708:	7100103f 	cmp	w1, #0x4
    870c:	54000120 	b.eq	8730 <device_waitForFingerUp@@Base+0x1f4>  // b.none
    8710:	b9400004 	ldr	w4, [x0]
    8714:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8718:	9109c301 	add	x1, x24, #0x270
    871c:	91006042 	add	x2, x2, #0x18
    8720:	aa1603e3 	mov	x3, x22
    8724:	52800060 	mov	w0, #0x3                   	// #3
    8728:	97ffeefe 	bl	4320 <__android_log_print@plt>
    872c:	17ffffeb 	b	86d8 <device_waitForFingerUp@@Base+0x19c>
    8730:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8734:	9109c301 	add	x1, x24, #0x270
    8738:	913fe042 	add	x2, x2, #0xff8
    873c:	aa1603e3 	mov	x3, x22
    8740:	52800060 	mov	w0, #0x3                   	// #3
    8744:	97ffeef7 	bl	4320 <__android_log_print@plt>
    8748:	17ffffe4 	b	86d8 <device_waitForFingerUp@@Base+0x19c>
    874c:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8750:	9109c318 	add	x24, x24, #0x270
    8754:	91254000 	add	x0, x0, #0x950
    8758:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    875c:	91040013 	add	x19, x0, #0x100
    8760:	aa1803e1 	mov	x1, x24
    8764:	91042042 	add	x2, x2, #0x108
    8768:	aa1303e3 	mov	x3, x19
    876c:	52800060 	mov	w0, #0x3                   	// #3
    8770:	97ffeeec 	bl	4320 <__android_log_print@plt>
    8774:	f9478b84 	ldr	x4, [x28, #3856]
    8778:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    877c:	52800060 	mov	w0, #0x3                   	// #3
    8780:	aa1803e1 	mov	x1, x24
    8784:	9103a042 	add	x2, x2, #0xe8
    8788:	aa1303e3 	mov	x3, x19
    878c:	b900009f 	str	wzr, [x4]
    8790:	97ffeee4 	bl	4320 <__android_log_print@plt>
    8794:	52801060 	mov	w0, #0x83                  	// #131
    8798:	f9478b9c 	ldr	x28, [x28, #3856]
    879c:	b900039f 	str	wzr, [x28]
    87a0:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    87a4:	f94057b3 	ldr	x19, [x29, #168]
    87a8:	f947c021 	ldr	x1, [x1, #3968]
    87ac:	f9400021 	ldr	x1, [x1]
    87b0:	eb01027f 	cmp	x19, x1
    87b4:	54000861 	b.ne	88c0 <device_waitForFingerUp@@Base+0x384>  // b.any
    87b8:	a94153f3 	ldp	x19, x20, [sp, #16]
    87bc:	a9425bf5 	ldp	x21, x22, [sp, #32]
    87c0:	a94363f7 	ldp	x23, x24, [sp, #48]
    87c4:	a9446bf9 	ldp	x25, x26, [sp, #64]
    87c8:	a94573fb 	ldp	x27, x28, [sp, #80]
    87cc:	a8cb7bfd 	ldp	x29, x30, [sp], #176
    87d0:	d65f03c0 	ret
    87d4:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    87d8:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    87dc:	91254003 	add	x3, x0, #0x950
    87e0:	9109c301 	add	x1, x24, #0x270
    87e4:	9103a042 	add	x2, x2, #0xe8
    87e8:	91040063 	add	x3, x3, #0x100
    87ec:	52800060 	mov	w0, #0x3                   	// #3
    87f0:	f90037a4 	str	x4, [x29, #104]
    87f4:	97ffeecb 	bl	4320 <__android_log_print@plt>
    87f8:	b0000103 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    87fc:	52800040 	mov	w0, #0x2                   	// #2
    8800:	52800001 	mov	w1, #0x0                   	// #0
    8804:	52800002 	mov	w2, #0x0                   	// #0
    8808:	f947fc63 	ldr	x3, [x3, #4088]
    880c:	f9400063 	ldr	x3, [x3]
    8810:	d63f0060 	blr	x3
    8814:	f94037a4 	ldr	x4, [x29, #104]
    8818:	350003c4 	cbnz	w4, 8890 <device_waitForFingerUp@@Base+0x354>
    881c:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8820:	52800000 	mov	w0, #0x0                   	// #0
    8824:	f9479821 	ldr	x1, [x1, #3888]
    8828:	3900003f 	strb	wzr, [x1]
    882c:	17ffffdb 	b	8798 <device_waitForFingerUp@@Base+0x25c>
    8830:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8834:	9109c318 	add	x24, x24, #0x270
    8838:	91254000 	add	x0, x0, #0x950
    883c:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8840:	91040013 	add	x19, x0, #0x100
    8844:	aa1803e1 	mov	x1, x24
    8848:	aa1303e3 	mov	x3, x19
    884c:	9100c042 	add	x2, x2, #0x30
    8850:	52800060 	mov	w0, #0x3                   	// #3
    8854:	97ffeeb3 	bl	4320 <__android_log_print@plt>
    8858:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    885c:	aa1803e1 	mov	x1, x24
    8860:	aa1303e3 	mov	x3, x19
    8864:	9103a042 	add	x2, x2, #0xe8
    8868:	52800060 	mov	w0, #0x3                   	// #3
    886c:	97ffeead 	bl	4320 <__android_log_print@plt>
    8870:	b0000103 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    8874:	52800040 	mov	w0, #0x2                   	// #2
    8878:	52800001 	mov	w1, #0x0                   	// #0
    887c:	52800002 	mov	w2, #0x0                   	// #0
    8880:	f947fc63 	ldr	x3, [x3, #4088]
    8884:	f9400063 	ldr	x3, [x3]
    8888:	d63f0060 	blr	x3
    888c:	17ffffe4 	b	881c <device_waitForFingerUp@@Base+0x2e0>
    8890:	52800001 	mov	w1, #0x0                   	// #0
    8894:	52801580 	mov	w0, #0xac                  	// #172
    8898:	97fff59f 	bl	5f14 <device_send_key@@Base>
    889c:	17ffffe0 	b	881c <device_waitForFingerUp@@Base+0x2e0>
    88a0:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    88a4:	2a1b03e0 	mov	w0, w27
    88a8:	aa1503e1 	mov	x1, x21
    88ac:	913e8042 	add	x2, x2, #0xfa0
    88b0:	aa1603e3 	mov	x3, x22
    88b4:	97ffee9b 	bl	4320 <__android_log_print@plt>
    88b8:	12800000 	mov	w0, #0xffffffff            	// #-1
    88bc:	17ffffb9 	b	87a0 <device_waitForFingerUp@@Base+0x264>
    88c0:	97ffee80 	bl	42c0 <__stack_chk_fail@plt>

00000000000088c4 <device_waitHB@@Base>:
    88c4:	a9b67bfd 	stp	x29, x30, [sp, #-160]!
    88c8:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    88cc:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    88d0:	910003fd 	mov	x29, sp
    88d4:	a9025bf5 	stp	x21, x22, [sp, #32]
    88d8:	91254036 	add	x22, x1, #0x950
    88dc:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    88e0:	a90363f7 	stp	x23, x24, [sp, #48]
    88e4:	b0000058 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    88e8:	910482d6 	add	x22, x22, #0x120
    88ec:	f947c024 	ldr	x4, [x1, #3968]
    88f0:	9104c042 	add	x2, x2, #0x130
    88f4:	a90153f3 	stp	x19, x20, [sp, #16]
    88f8:	9109c313 	add	x19, x24, #0x270
    88fc:	aa1603e3 	mov	x3, x22
    8900:	f9400084 	ldr	x4, [x4]
    8904:	aa1303e1 	mov	x1, x19
    8908:	2a0003f5 	mov	w21, w0
    890c:	52800060 	mov	w0, #0x3                   	// #3
    8910:	a90573fb 	stp	x27, x28, [sp, #80]
    8914:	a9046bf9 	stp	x25, x26, [sp, #64]
    8918:	f9004fa4 	str	x4, [x29, #152]
    891c:	97ffee81 	bl	4320 <__android_log_print@plt>
    8920:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8924:	aa1303e1 	mov	x1, x19
    8928:	91058042 	add	x2, x2, #0x160
    892c:	52800060 	mov	w0, #0x3                   	// #3
    8930:	aa1603e3 	mov	x3, x22
    8934:	d000011c 	adrp	x28, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8938:	97ffee7a 	bl	4320 <__android_log_print@plt>
    893c:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8940:	52800082 	mov	w2, #0x4                   	// #4
    8944:	f9478801 	ldr	x1, [x0, #3856]
    8948:	9121e380 	add	x0, x28, #0x878
    894c:	b9000022 	str	w2, [x1]
    8950:	3901201f 	strb	wzr, [x0, #72]
    8954:	97ffef97 	bl	47b0 <gf_enable_irq@@Base>
    8958:	37f81100 	tbnz	w0, #31, 8b78 <device_waitHB@@Base+0x2b4>
    895c:	f0000059 	adrp	x25, 13000 <gf_dump_data_interface@@Base+0x2760>
    8960:	f000005a 	adrp	x26, 13000 <gf_dump_data_interface@@Base+0x2760>
    8964:	910223b4 	add	x20, x29, #0x88
    8968:	9101e3b3 	add	x19, x29, #0x78
    896c:	b0000117 	adrp	x23, 29000 <gf_dump_data_interface@@Base+0x18760>
    8970:	9108a339 	add	x25, x25, #0x228
    8974:	9100635a 	add	x26, x26, #0x18
    8978:	d2800001 	mov	x1, #0x0                   	// #0
    897c:	aa1403e0 	mov	x0, x20
    8980:	97ffee54 	bl	42d0 <gettimeofday@plt>
    8984:	f9400680 	ldr	x0, [x20, #8]
    8988:	d2929662 	mov	x2, #0x94b3                	// #38067
    898c:	d29c2003 	mov	x3, #0xe100                	// #57600
    8990:	f2a4dac2 	movk	x2, #0x26d6, lsl #16
    8994:	d379e001 	lsl	x1, x0, #7
    8998:	f2a0bea3 	movk	x3, #0x5f5, lsl #16
    899c:	cb000821 	sub	x1, x1, x0, lsl #2
    89a0:	f2c17d02 	movk	x2, #0xbe8, lsl #32
    89a4:	8b000020 	add	x0, x1, x0
    89a8:	f2e225c2 	movk	x2, #0x112e, lsl #48
    89ac:	d2994005 	mov	x5, #0xca00                	// #51712
    89b0:	f9400284 	ldr	x4, [x20]
    89b4:	8b000c63 	add	x3, x3, x0, lsl #3
    89b8:	f2a77345 	movk	x5, #0x3b9a, lsl #16
    89bc:	f947e2e0 	ldr	x0, [x23, #4032]
    89c0:	aa1303e1 	mov	x1, x19
    89c4:	9b427c62 	smulh	x2, x3, x2
    89c8:	935afc42 	asr	x2, x2, #26
    89cc:	cb83fc42 	sub	x2, x2, x3, asr #63
    89d0:	8b020084 	add	x4, x4, x2
    89d4:	f9000264 	str	x4, [x19]
    89d8:	d503201f 	nop
    89dc:	9b058c42 	msub	x2, x2, x5, x3
    89e0:	f9000662 	str	x2, [x19, #8]
    89e4:	97ffee0f 	bl	4220 <sem_timedwait@plt>
    89e8:	2a0003fb 	mov	w27, w0
    89ec:	34000920 	cbz	w0, 8b10 <device_waitHB@@Base+0x24c>
    89f0:	3100041f 	cmn	w0, #0x1
    89f4:	54000381 	b.ne	8a64 <device_waitHB@@Base+0x1a0>  // b.any
    89f8:	97ffee06 	bl	4210 <__errno@plt>
    89fc:	b9400001 	ldr	w1, [x0]
    8a00:	7101b83f 	cmp	w1, #0x6e
    8a04:	540003c0 	b.eq	8a7c <device_waitHB@@Base+0x1b8>  // b.none
    8a08:	b9400001 	ldr	w1, [x0]
    8a0c:	7100103f 	cmp	w1, #0x4
    8a10:	54000720 	b.eq	8af4 <device_waitHB@@Base+0x230>  // b.none
    8a14:	b9400004 	ldr	w4, [x0]
    8a18:	9109c301 	add	x1, x24, #0x270
    8a1c:	aa1a03e2 	mov	x2, x26
    8a20:	aa1603e3 	mov	x3, x22
    8a24:	52800060 	mov	w0, #0x3                   	// #3
    8a28:	97ffee3e 	bl	4320 <__android_log_print@plt>
    8a2c:	34fffa75 	cbz	w21, 8978 <device_waitHB@@Base+0xb4>
    8a30:	510192b5 	sub	w21, w21, #0x64
    8a34:	6b1f02bf 	cmp	w21, wzr
    8a38:	54fffa0c 	b.gt	8978 <device_waitHB@@Base+0xb4>
    8a3c:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8a40:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8a44:	91254003 	add	x3, x0, #0x950
    8a48:	9109c301 	add	x1, x24, #0x270
    8a4c:	52800060 	mov	w0, #0x3                   	// #3
    8a50:	91092042 	add	x2, x2, #0x248
    8a54:	91048063 	add	x3, x3, #0x120
    8a58:	52801073 	mov	w19, #0x83                  	// #131
    8a5c:	97ffee31 	bl	4320 <__android_log_print@plt>
    8a60:	14000035 	b	8b34 <device_waitHB@@Base+0x270>
    8a64:	9109c301 	add	x1, x24, #0x270
    8a68:	aa1903e2 	mov	x2, x25
    8a6c:	aa1603e3 	mov	x3, x22
    8a70:	52800060 	mov	w0, #0x3                   	// #3
    8a74:	97ffee2b 	bl	4320 <__android_log_print@plt>
    8a78:	17ffffed 	b	8a2c <device_waitHB@@Base+0x168>
    8a7c:	9121e385 	add	x5, x28, #0x878
    8a80:	394120a0 	ldrb	w0, [x5, #72]
    8a84:	7100041f 	cmp	w0, #0x1
    8a88:	54fffd21 	b.ne	8a2c <device_waitHB@@Base+0x168>  // b.any
    8a8c:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8a90:	9109c318 	add	x24, x24, #0x270
    8a94:	91254000 	add	x0, x0, #0x950
    8a98:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8a9c:	91048014 	add	x20, x0, #0x120
    8aa0:	aa1803e1 	mov	x1, x24
    8aa4:	91078042 	add	x2, x2, #0x1e0
    8aa8:	aa1403e3 	mov	x3, x20
    8aac:	52800060 	mov	w0, #0x3                   	// #3
    8ab0:	f90037a5 	str	x5, [x29, #104]
    8ab4:	2a1b03f3 	mov	w19, w27
    8ab8:	97ffee1a 	bl	4320 <__android_log_print@plt>
    8abc:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8ac0:	f94037a5 	ldr	x5, [x29, #104]
    8ac4:	f9478800 	ldr	x0, [x0, #3856]
    8ac8:	390120bf 	strb	wzr, [x5, #72]
    8acc:	b900001f 	str	wzr, [x0]
    8ad0:	97ffef38 	bl	47b0 <gf_enable_irq@@Base>
    8ad4:	36f80360 	tbz	w0, #31, 8b40 <device_waitHB@@Base+0x27c>
    8ad8:	d0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    8adc:	aa1803e1 	mov	x1, x24
    8ae0:	913e8042 	add	x2, x2, #0xfa0
    8ae4:	aa1403e3 	mov	x3, x20
    8ae8:	52800060 	mov	w0, #0x3                   	// #3
    8aec:	97ffee0d 	bl	4320 <__android_log_print@plt>
    8af0:	14000014 	b	8b40 <device_waitHB@@Base+0x27c>
    8af4:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8af8:	9109c301 	add	x1, x24, #0x270
    8afc:	91080042 	add	x2, x2, #0x200
    8b00:	aa1603e3 	mov	x3, x22
    8b04:	52800060 	mov	w0, #0x3                   	// #3
    8b08:	97ffee06 	bl	4320 <__android_log_print@plt>
    8b0c:	17ffffc8 	b	8a2c <device_waitHB@@Base+0x168>
    8b10:	b0000040 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    8b14:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8b18:	91254003 	add	x3, x0, #0x950
    8b1c:	9109c301 	add	x1, x24, #0x270
    8b20:	52800060 	mov	w0, #0x3                   	// #3
    8b24:	9106e042 	add	x2, x2, #0x1b8
    8b28:	91048063 	add	x3, x3, #0x120
    8b2c:	52800013 	mov	w19, #0x0                   	// #0
    8b30:	97ffedfc 	bl	4320 <__android_log_print@plt>
    8b34:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8b38:	f9478800 	ldr	x0, [x0, #3856]
    8b3c:	b900001f 	str	wzr, [x0]
    8b40:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8b44:	f9404fa2 	ldr	x2, [x29, #152]
    8b48:	f947c001 	ldr	x1, [x0, #3968]
    8b4c:	2a1303e0 	mov	w0, w19
    8b50:	f9400021 	ldr	x1, [x1]
    8b54:	eb01005f 	cmp	x2, x1
    8b58:	54000201 	b.ne	8b98 <device_waitHB@@Base+0x2d4>  // b.any
    8b5c:	a94153f3 	ldp	x19, x20, [sp, #16]
    8b60:	a9425bf5 	ldp	x21, x22, [sp, #32]
    8b64:	a94363f7 	ldp	x23, x24, [sp, #48]
    8b68:	a9446bf9 	ldp	x25, x26, [sp, #64]
    8b6c:	a94573fb 	ldp	x27, x28, [sp, #80]
    8b70:	a8ca7bfd 	ldp	x29, x30, [sp], #160
    8b74:	d65f03c0 	ret
    8b78:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8b7c:	aa1303e1 	mov	x1, x19
    8b80:	91062042 	add	x2, x2, #0x188
    8b84:	aa1603e3 	mov	x3, x22
    8b88:	52800060 	mov	w0, #0x3                   	// #3
    8b8c:	12800013 	mov	w19, #0xffffffff            	// #-1
    8b90:	97ffede4 	bl	4320 <__android_log_print@plt>
    8b94:	17ffffeb 	b	8b40 <device_waitHB@@Base+0x27c>
    8b98:	97ffedca 	bl	42c0 <__stack_chk_fail@plt>

0000000000008b9c <device_getHBData@@Base>:
    8b9c:	140018ed 	b	ef50 <fnCa_GetHBData@@Base>

0000000000008ba0 <device_getHBRawData@@Base>:
    8ba0:	14001916 	b	eff8 <fnCa_getHBRawData@@Base>

0000000000008ba4 <device_getGscHbdRet@@Base>:
    8ba4:	1400193d 	b	f098 <fnCa_getGscHbdRet@@Base>

0000000000008ba8 <device_recoverFwCfg@@Base>:
    8ba8:	14001967 	b	f144 <fnCa_recoverFwCfg@@Base>

0000000000008bac <device_HBCheckUp@@Base>:
    8bac:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8bb0:	9121e000 	add	x0, x0, #0x878
    8bb4:	b9403001 	ldr	w1, [x0, #48]
    8bb8:	34000081 	cbz	w1, 8bc8 <device_HBCheckUp@@Base+0x1c>
    8bbc:	b900301f 	str	wzr, [x0, #48]
    8bc0:	52800000 	mov	w0, #0x0                   	// #0
    8bc4:	d65f03c0 	ret
    8bc8:	12800000 	mov	w0, #0xffffffff            	// #-1
    8bcc:	d65f03c0 	ret

0000000000008bd0 <device_enableGsc@@Base>:
    8bd0:	140019bb 	b	f2bc <fnCa_enableGsc@@Base>

0000000000008bd4 <device_enableKeyMode@@Base>:
    8bd4:	b0000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    8bd8:	f9479c21 	ldr	x1, [x1, #3896]
    8bdc:	b9000020 	str	w0, [x1]
    8be0:	52800000 	mov	w0, #0x0                   	// #0
    8be4:	d65f03c0 	ret

0000000000008be8 <device_enableNavClick@@Base>:
    8be8:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    8bec:	7100041f 	cmp	w0, #0x1
    8bf0:	2a0003e4 	mov	w4, w0
    8bf4:	910003fd 	mov	x29, sp
    8bf8:	a90153f3 	stp	x19, x20, [sp, #16]
    8bfc:	2a0103f4 	mov	w20, w1
    8c00:	2a0203f3 	mov	w19, w2
    8c04:	54000820 	b.eq	8d08 <device_enableNavClick@@Base+0x120>  // b.none
    8c08:	7100081f 	cmp	w0, #0x2
    8c0c:	540004e0 	b.eq	8ca8 <device_enableNavClick@@Base+0xc0>  // b.none
    8c10:	340001c0 	cbz	w0, 8c48 <device_enableNavClick@@Base+0x60>
    8c14:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    8c18:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8c1c:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8c20:	91254063 	add	x3, x3, #0x950
    8c24:	9109c021 	add	x1, x1, #0x270
    8c28:	910cc042 	add	x2, x2, #0x330
    8c2c:	9104c063 	add	x3, x3, #0x130
    8c30:	52800060 	mov	w0, #0x3                   	// #3
    8c34:	97ffedbb 	bl	4320 <__android_log_print@plt>
    8c38:	52800000 	mov	w0, #0x0                   	// #0
    8c3c:	a94153f3 	ldp	x19, x20, [sp, #16]
    8c40:	a8c27bfd 	ldp	x29, x30, [sp], #32
    8c44:	d65f03c0 	ret
    8c48:	6b1f003f 	cmp	w1, wzr
    8c4c:	540009ad 	b.le	8d80 <device_enableNavClick@@Base+0x198>
    8c50:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8c54:	9109a084 	add	x4, x4, #0x268
    8c58:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    8c5c:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8c60:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8c64:	91254063 	add	x3, x3, #0x950
    8c68:	2a1303e5 	mov	w5, w19
    8c6c:	9109c021 	add	x1, x1, #0x270
    8c70:	9109e042 	add	x2, x2, #0x278
    8c74:	9104c063 	add	x3, x3, #0x130
    8c78:	52800060 	mov	w0, #0x3                   	// #3
    8c7c:	97ffeda9 	bl	4320 <__android_log_print@plt>
    8c80:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8c84:	6b1f029f 	cmp	w20, wzr
    8c88:	91002000 	add	x0, x0, #0x8
    8c8c:	1a9f07e1 	cset	w1, ne	// ne = any
    8c90:	b9000813 	str	w19, [x0, #8]
    8c94:	39007401 	strb	w1, [x0, #29]
    8c98:	52800000 	mov	w0, #0x0                   	// #0
    8c9c:	a94153f3 	ldp	x19, x20, [sp, #16]
    8ca0:	a8c27bfd 	ldp	x29, x30, [sp], #32
    8ca4:	d65f03c0 	ret
    8ca8:	6b1f003f 	cmp	w1, wzr
    8cac:	5400064d 	b.le	8d74 <device_enableNavClick@@Base+0x18c>
    8cb0:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8cb4:	9109a084 	add	x4, x4, #0x268
    8cb8:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    8cbc:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8cc0:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8cc4:	91254063 	add	x3, x3, #0x950
    8cc8:	2a1303e5 	mov	w5, w19
    8ccc:	9109c021 	add	x1, x1, #0x270
    8cd0:	910be042 	add	x2, x2, #0x2f8
    8cd4:	9104c063 	add	x3, x3, #0x130
    8cd8:	52800060 	mov	w0, #0x3                   	// #3
    8cdc:	97ffed91 	bl	4320 <__android_log_print@plt>
    8ce0:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8ce4:	6b1f029f 	cmp	w20, wzr
    8ce8:	91002000 	add	x0, x0, #0x8
    8cec:	1a9f07e1 	cset	w1, ne	// ne = any
    8cf0:	b9001813 	str	w19, [x0, #24]
    8cf4:	39007c01 	strb	w1, [x0, #31]
    8cf8:	52800000 	mov	w0, #0x0                   	// #0
    8cfc:	a94153f3 	ldp	x19, x20, [sp, #16]
    8d00:	a8c27bfd 	ldp	x29, x30, [sp], #32
    8d04:	d65f03c0 	ret
    8d08:	6b1f003f 	cmp	w1, wzr
    8d0c:	540002ed 	b.le	8d68 <device_enableNavClick@@Base+0x180>
    8d10:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8d14:	9109a084 	add	x4, x4, #0x268
    8d18:	b0000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    8d1c:	b0000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    8d20:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8d24:	91254063 	add	x3, x3, #0x950
    8d28:	2a1303e5 	mov	w5, w19
    8d2c:	9109c021 	add	x1, x1, #0x270
    8d30:	910ae042 	add	x2, x2, #0x2b8
    8d34:	9104c063 	add	x3, x3, #0x130
    8d38:	52800060 	mov	w0, #0x3                   	// #3
    8d3c:	97ffed79 	bl	4320 <__android_log_print@plt>
    8d40:	d0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    8d44:	6b1f029f 	cmp	w20, wzr
    8d48:	91002000 	add	x0, x0, #0x8
    8d4c:	1a9f07e1 	cset	w1, ne	// ne = any
    8d50:	b9000813 	str	w19, [x0, #8]
    8d54:	39007801 	strb	w1, [x0, #30]
    8d58:	52800000 	mov	w0, #0x0                   	// #0
    8d5c:	a94153f3 	ldp	x19, x20, [sp, #16]
    8d60:	a8c27bfd 	ldp	x29, x30, [sp], #32
    8d64:	d65f03c0 	ret
    8d68:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8d6c:	9109c084 	add	x4, x4, #0x270
    8d70:	17ffffea 	b	8d18 <device_enableNavClick@@Base+0x130>
    8d74:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8d78:	9109c084 	add	x4, x4, #0x270
    8d7c:	17ffffcf 	b	8cb8 <device_enableNavClick@@Base+0xd0>
    8d80:	f0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    8d84:	9109c084 	add	x4, x4, #0x270
    8d88:	17ffffb4 	b	8c58 <device_enableNavClick@@Base+0x70>

0000000000008d8c <device_readHBD@@Base>:
    8d8c:	a9b77bfd 	stp	x29, x30, [sp, #-144]!
    8d90:	910003fd 	mov	x29, sp
    8d94:	a90363f7 	stp	x23, x24, [sp, #48]
    8d98:	b0000117 	adrp	x23, 29000 <gf_dump_data_interface@@Base+0x18760>
    8d9c:	b0000058 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    8da0:	a9025bf5 	stp	x21, x22, [sp, #32]
    8da4:	b0000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    8da8:	f9002bfb 	str	x27, [sp, #80]
    8dac:	f947c2e4 	ldr	x4, [x23, #3968]
    8db0:	9109c31b 	add	x27, x24, #0x270
    8db4:	a90153f3 	stp	x19, x20, [sp, #16]
    8db8:	912542b3 	add	x19, x21, #0x950
    8dbc:	b0000116 	adrp	x22, 29000 <gf_dump_data_interface@@Base+0x18760>
    8dc0:	a9046bf9 	stp	x25, x26, [sp, #64]
    8dc4:	f9400084 	ldr	x4, [x4]
    8dc8:	91054273 	add	x19, x19, #0x150
    8dcc:	2a0203fa 	mov	w26, w2
    8dd0:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8dd4:	aa0003f9 	mov	x25, x0
    8dd8:	2a0103f4 	mov	w20, w1
    8ddc:	52800060 	mov	w0, #0x3                   	// #3
    8de0:	aa1b03e1 	mov	x1, x27
    8de4:	910dc042 	add	x2, x2, #0x370
    8de8:	aa1303e3 	mov	x3, x19
    8dec:	f90047a4 	str	x4, [x29, #136]
    8df0:	97ffed4c 	bl	4320 <__android_log_print@plt>
    8df4:	f9478ac0 	ldr	x0, [x22, #3856]
    8df8:	52800081 	mov	w1, #0x4                   	// #4
    8dfc:	b9000001 	str	w1, [x0]
    8e00:	b4001099 	cbz	x25, 9010 <device_readHBD@@Base+0x284>
    8e04:	7100529f 	cmp	w20, #0x14
    8e08:	54001041 	b.ne	9010 <device_readHBD@@Base+0x284>  // b.any
    8e0c:	97ffee69 	bl	47b0 <gf_enable_irq@@Base>
    8e10:	37f81140 	tbnz	w0, #31, 9038 <device_readHBD@@Base+0x2ac>
    8e14:	6b1f035f 	cmp	w26, wzr
    8e18:	54000b00 	b.eq	8f78 <device_readHBD@@Base+0x1ec>  // b.none
    8e1c:	b0000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    8e20:	540008cd 	b.le	8f38 <device_readHBD@@Base+0x1ac>
    8e24:	9101e3bb 	add	x27, x29, #0x78
    8e28:	9101a3b3 	add	x19, x29, #0x68
    8e2c:	14000004 	b	8e3c <device_readHBD@@Base+0xb0>
    8e30:	5101935a 	sub	w26, w26, #0x64
    8e34:	6b1f035f 	cmp	w26, wzr
    8e38:	54000bad 	b.le	8fac <device_readHBD@@Base+0x220>
    8e3c:	d2800001 	mov	x1, #0x0                   	// #0
    8e40:	aa1b03e0 	mov	x0, x27
    8e44:	97ffed23 	bl	42d0 <gettimeofday@plt>
    8e48:	f9400760 	ldr	x0, [x27, #8]
    8e4c:	d2929662 	mov	x2, #0x94b3                	// #38067
    8e50:	d29c2003 	mov	x3, #0xe100                	// #57600
    8e54:	f2a4dac2 	movk	x2, #0x26d6, lsl #16
    8e58:	d379e001 	lsl	x1, x0, #7
    8e5c:	f2a0bea3 	movk	x3, #0x5f5, lsl #16
    8e60:	cb000821 	sub	x1, x1, x0, lsl #2
    8e64:	f2c17d02 	movk	x2, #0xbe8, lsl #32
    8e68:	8b000020 	add	x0, x1, x0
    8e6c:	f2e225c2 	movk	x2, #0x112e, lsl #48
    8e70:	d2994005 	mov	x5, #0xca00                	// #51712
    8e74:	f9400364 	ldr	x4, [x27]
    8e78:	8b000c63 	add	x3, x3, x0, lsl #3
    8e7c:	f2a77345 	movk	x5, #0x3b9a, lsl #16
    8e80:	f947e280 	ldr	x0, [x20, #4032]
    8e84:	aa1303e1 	mov	x1, x19
    8e88:	9b427c62 	smulh	x2, x3, x2
    8e8c:	935afc42 	asr	x2, x2, #26
    8e90:	cb83fc42 	sub	x2, x2, x3, asr #63
    8e94:	8b020084 	add	x4, x4, x2
    8e98:	f9000264 	str	x4, [x19]
    8e9c:	d503201f 	nop
    8ea0:	9b058c42 	msub	x2, x2, x5, x3
    8ea4:	f9000662 	str	x2, [x19, #8]
    8ea8:	97ffecde 	bl	4220 <sem_timedwait@plt>
    8eac:	35fffc20 	cbnz	w0, 8e30 <device_readHBD@@Base+0xa4>
    8eb0:	912542a3 	add	x3, x21, #0x950
    8eb4:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8eb8:	9109c301 	add	x1, x24, #0x270
    8ebc:	910f4042 	add	x2, x2, #0x3d0
    8ec0:	91054063 	add	x3, x3, #0x150
    8ec4:	52800060 	mov	w0, #0x3                   	// #3
    8ec8:	97ffed16 	bl	4320 <__android_log_print@plt>
    8ecc:	912542a3 	add	x3, x21, #0x950
    8ed0:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8ed4:	9109c301 	add	x1, x24, #0x270
    8ed8:	91110042 	add	x2, x2, #0x440
    8edc:	91054063 	add	x3, x3, #0x150
    8ee0:	52800060 	mov	w0, #0x3                   	// #3
    8ee4:	97ffed0f 	bl	4320 <__android_log_print@plt>
    8ee8:	aa1903e0 	mov	x0, x25
    8eec:	52800281 	mov	w1, #0x14                  	// #20
    8ef0:	52800002 	mov	w2, #0x0                   	// #0
    8ef4:	940017d7 	bl	ee50 <fnCa_read_hbd@@Base>
    8ef8:	2a0003f4 	mov	w20, w0
    8efc:	f9478ad6 	ldr	x22, [x22, #3856]
    8f00:	2a1403e0 	mov	w0, w20
    8f04:	b90002df 	str	wzr, [x22]
    8f08:	f947c2f7 	ldr	x23, [x23, #3968]
    8f0c:	f94047a2 	ldr	x2, [x29, #136]
    8f10:	f94002e1 	ldr	x1, [x23]
    8f14:	eb01005f 	cmp	x2, x1
    8f18:	54000a01 	b.ne	9058 <device_readHBD@@Base+0x2cc>  // b.any
    8f1c:	a94153f3 	ldp	x19, x20, [sp, #16]
    8f20:	a9425bf5 	ldp	x21, x22, [sp, #32]
    8f24:	a94363f7 	ldp	x23, x24, [sp, #48]
    8f28:	a9446bf9 	ldp	x25, x26, [sp, #64]
    8f2c:	f9402bfb 	ldr	x27, [sp, #80]
    8f30:	a8c97bfd 	ldp	x29, x30, [sp], #144
    8f34:	d65f03c0 	ret
    8f38:	f947e280 	ldr	x0, [x20, #4032]
    8f3c:	97ffec95 	bl	4190 <sem_wait@plt>
    8f40:	3100041f 	cmn	w0, #0x1
    8f44:	540000a1 	b.ne	8f58 <device_readHBD@@Base+0x1cc>  // b.any
    8f48:	97ffecb2 	bl	4210 <__errno@plt>
    8f4c:	b9400000 	ldr	w0, [x0]
    8f50:	7100101f 	cmp	w0, #0x4
    8f54:	54ffff20 	b.eq	8f38 <device_readHBD@@Base+0x1ac>  // b.none
    8f58:	912542a3 	add	x3, x21, #0x950
    8f5c:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8f60:	9109c301 	add	x1, x24, #0x270
    8f64:	91106042 	add	x2, x2, #0x418
    8f68:	91054063 	add	x3, x3, #0x150
    8f6c:	52800060 	mov	w0, #0x3                   	// #3
    8f70:	97ffecec 	bl	4320 <__android_log_print@plt>
    8f74:	17ffffd6 	b	8ecc <device_readHBD@@Base+0x140>
    8f78:	b0000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    8f7c:	12800014 	mov	w20, #0xffffffff            	// #-1
    8f80:	f947e000 	ldr	x0, [x0, #4032]
    8f84:	97ffeceb 	bl	4330 <sem_trywait@plt>
    8f88:	34000360 	cbz	w0, 8ff4 <device_readHBD@@Base+0x268>
    8f8c:	912542a3 	add	x3, x21, #0x950
    8f90:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8f94:	9109c301 	add	x1, x24, #0x270
    8f98:	91110042 	add	x2, x2, #0x440
    8f9c:	91054063 	add	x3, x3, #0x150
    8fa0:	52800060 	mov	w0, #0x3                   	// #3
    8fa4:	97ffecdf 	bl	4320 <__android_log_print@plt>
    8fa8:	17ffffd5 	b	8efc <device_readHBD@@Base+0x170>
    8fac:	912542a3 	add	x3, x21, #0x950
    8fb0:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8fb4:	9109c301 	add	x1, x24, #0x270
    8fb8:	910fe042 	add	x2, x2, #0x3f8
    8fbc:	91054063 	add	x3, x3, #0x150
    8fc0:	52800060 	mov	w0, #0x3                   	// #3
    8fc4:	52801074 	mov	w20, #0x83                  	// #131
    8fc8:	97ffecd6 	bl	4320 <__android_log_print@plt>
    8fcc:	f9478ac0 	ldr	x0, [x22, #3856]
    8fd0:	912542a3 	add	x3, x21, #0x950
    8fd4:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8fd8:	9109c301 	add	x1, x24, #0x270
    8fdc:	91110042 	add	x2, x2, #0x440
    8fe0:	91054063 	add	x3, x3, #0x150
    8fe4:	b900001f 	str	wzr, [x0]
    8fe8:	52800060 	mov	w0, #0x3                   	// #3
    8fec:	97ffeccd 	bl	4320 <__android_log_print@plt>
    8ff0:	17ffffc3 	b	8efc <device_readHBD@@Base+0x170>
    8ff4:	f0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    8ff8:	aa1b03e1 	mov	x1, x27
    8ffc:	910ea042 	add	x2, x2, #0x3a8
    9000:	aa1303e3 	mov	x3, x19
    9004:	52800060 	mov	w0, #0x3                   	// #3
    9008:	97ffecc6 	bl	4320 <__android_log_print@plt>
    900c:	17ffffb0 	b	8ecc <device_readHBD@@Base+0x140>
    9010:	912542a4 	add	x4, x21, #0x950
    9014:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9018:	91054083 	add	x3, x4, #0x150
    901c:	52800060 	mov	w0, #0x3                   	// #3
    9020:	9109c301 	add	x1, x24, #0x270
    9024:	910e2042 	add	x2, x2, #0x388
    9028:	91058084 	add	x4, x4, #0x160
    902c:	97ffecbd 	bl	4320 <__android_log_print@plt>
    9030:	12800000 	mov	w0, #0xffffffff            	// #-1
    9034:	17ffffb5 	b	8f08 <device_readHBD@@Base+0x17c>
    9038:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    903c:	52800060 	mov	w0, #0x3                   	// #3
    9040:	aa1b03e1 	mov	x1, x27
    9044:	91062042 	add	x2, x2, #0x188
    9048:	aa1303e3 	mov	x3, x19
    904c:	97ffecb5 	bl	4320 <__android_log_print@plt>
    9050:	12800000 	mov	w0, #0xffffffff            	// #-1
    9054:	17ffffad 	b	8f08 <device_readHBD@@Base+0x17c>
    9058:	97ffec9a 	bl	42c0 <__stack_chk_fail@plt>

000000000000905c <device_setSpeed@@Base>:
    905c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    9060:	910003fd 	mov	x29, sp
    9064:	35000200 	cbnz	w0, 90a4 <device_setSpeed@@Base+0x48>
    9068:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    906c:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    9070:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9074:	91254063 	add	x3, x3, #0x950
    9078:	9109c021 	add	x1, x1, #0x270
    907c:	9111c042 	add	x2, x2, #0x470
    9080:	9105c063 	add	x3, x3, #0x170
    9084:	52800060 	mov	w0, #0x3                   	// #3
    9088:	97ffeca6 	bl	4320 <__android_log_print@plt>
    908c:	52884800 	mov	w0, #0x4240                	// #16960
    9090:	72a001e0 	movk	w0, #0xf, lsl #16
    9094:	97ffee73 	bl	4a60 <gf_set_speed@@Base>
    9098:	52800000 	mov	w0, #0x0                   	// #0
    909c:	a8c17bfd 	ldp	x29, x30, [sp], #16
    90a0:	d65f03c0 	ret
    90a4:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    90a8:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    90ac:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    90b0:	91254063 	add	x3, x3, #0x950
    90b4:	9109c021 	add	x1, x1, #0x270
    90b8:	91116042 	add	x2, x2, #0x458
    90bc:	9105c063 	add	x3, x3, #0x170
    90c0:	52800060 	mov	w0, #0x3                   	// #3
    90c4:	97ffec97 	bl	4320 <__android_log_print@plt>
    90c8:	5287c000 	mov	w0, #0x3e00                	// #15872
    90cc:	72a00920 	movk	w0, #0x49, lsl #16
    90d0:	97ffee64 	bl	4a60 <gf_set_speed@@Base>
    90d4:	52800000 	mov	w0, #0x0                   	// #0
    90d8:	a8c17bfd 	ldp	x29, x30, [sp], #16
    90dc:	d65f03c0 	ret

00000000000090e0 <device_setMode@@Base>:
    90e0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    90e4:	910003fd 	mov	x29, sp
    90e8:	a90153f3 	stp	x19, x20, [sp, #16]
    90ec:	90000053 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    90f0:	53001c14 	uxtb	w20, w0
    90f4:	f90013f5 	str	x21, [sp, #32]
    90f8:	91254273 	add	x19, x19, #0x950
    90fc:	97fff1cb 	bl	5828 <mutex_get_lock@@Base>
    9100:	90000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    9104:	9109c2b5 	add	x21, x21, #0x270
    9108:	91060273 	add	x19, x19, #0x180
    910c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9110:	52800060 	mov	w0, #0x3                   	// #3
    9114:	aa1503e1 	mov	x1, x21
    9118:	91122042 	add	x2, x2, #0x488
    911c:	aa1303e3 	mov	x3, x19
    9120:	2a1403e4 	mov	w4, w20
    9124:	97ffec7f 	bl	4320 <__android_log_print@plt>
    9128:	71015a9f 	cmp	w20, #0x56
    912c:	54000060 	b.eq	9138 <device_setMode@@Base+0x58>  // b.none
    9130:	71001e9f 	cmp	w20, #0x7
    9134:	54000308 	b.hi	9194 <device_setMode@@Base+0xb4>  // b.pmore
    9138:	90000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    913c:	f9477e60 	ldr	x0, [x19, #3832]
    9140:	b9400000 	ldr	w0, [x0]
    9144:	7100081f 	cmp	w0, #0x2
    9148:	54000540 	b.eq	91f0 <device_setMode@@Base+0x110>  // b.none
    914c:	71000e9f 	cmp	w20, #0x3
    9150:	54000040 	b.eq	9158 <device_setMode@@Base+0x78>  // b.none
    9154:	350003b4 	cbnz	w20, 91c8 <device_setMode@@Base+0xe8>
    9158:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    915c:	f9477e73 	ldr	x19, [x19, #3832]
    9160:	f947b400 	ldr	x0, [x0, #3944]
    9164:	39400000 	ldrb	w0, [x0]
    9168:	6b1f001f 	cmp	w0, wzr
    916c:	52800060 	mov	w0, #0x3                   	// #3
    9170:	1a8003e0 	csel	w0, wzr, w0, eq	// eq = none
    9174:	b9000260 	str	w0, [x19]
    9178:	94000719 	bl	addc <fnCa_SetMode@@Base>
    917c:	97fff1b9 	bl	5860 <mutex_get_unlock@@Base>
    9180:	f94013f5 	ldr	x21, [sp, #32]
    9184:	52800000 	mov	w0, #0x0                   	// #0
    9188:	a94153f3 	ldp	x19, x20, [sp, #16]
    918c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    9190:	d65f03c0 	ret
    9194:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9198:	aa1503e1 	mov	x1, x21
    919c:	aa1303e3 	mov	x3, x19
    91a0:	2a1403e4 	mov	w4, w20
    91a4:	91128042 	add	x2, x2, #0x4a0
    91a8:	52800060 	mov	w0, #0x3                   	// #3
    91ac:	97ffec5d 	bl	4320 <__android_log_print@plt>
    91b0:	97fff1ac 	bl	5860 <mutex_get_unlock@@Base>
    91b4:	f94013f5 	ldr	x21, [sp, #32]
    91b8:	52800000 	mov	w0, #0x0                   	// #0
    91bc:	a94153f3 	ldp	x19, x20, [sp, #16]
    91c0:	a8c37bfd 	ldp	x29, x30, [sp], #48
    91c4:	d65f03c0 	ret
    91c8:	2a1403e0 	mov	w0, w20
    91cc:	94000704 	bl	addc <fnCa_SetMode@@Base>
    91d0:	f9477e73 	ldr	x19, [x19, #3832]
    91d4:	b9000274 	str	w20, [x19]
    91d8:	97fff1a2 	bl	5860 <mutex_get_unlock@@Base>
    91dc:	52800000 	mov	w0, #0x0                   	// #0
    91e0:	f94013f5 	ldr	x21, [sp, #32]
    91e4:	a94153f3 	ldp	x19, x20, [sp, #16]
    91e8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    91ec:	d65f03c0 	ret
    91f0:	528000c0 	mov	w0, #0x6                   	// #6
    91f4:	940006fa 	bl	addc <fnCa_SetMode@@Base>
    91f8:	52827100 	mov	w0, #0x1388                	// #5000
    91fc:	97ffec71 	bl	43c0 <usleep@plt>
    9200:	528000c0 	mov	w0, #0x6                   	// #6
    9204:	940006f6 	bl	addc <fnCa_SetMode@@Base>
    9208:	52827100 	mov	w0, #0x1388                	// #5000
    920c:	97ffec6d 	bl	43c0 <usleep@plt>
    9210:	17ffffcf 	b	914c <device_setMode@@Base+0x6c>

0000000000009214 <device_getMode@@Base>:
    9214:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    9218:	910003fd 	mov	x29, sp
    921c:	f9000fa0 	str	x0, [x29, #24]
    9220:	97fff182 	bl	5828 <mutex_get_lock@@Base>
    9224:	90000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    9228:	f9400fa0 	ldr	x0, [x29, #24]
    922c:	f9477c21 	ldr	x1, [x1, #3832]
    9230:	b9400021 	ldr	w1, [x1]
    9234:	39000001 	strb	w1, [x0]
    9238:	97fff18a 	bl	5860 <mutex_get_unlock@@Base>
    923c:	52800000 	mov	w0, #0x0                   	// #0
    9240:	a8c27bfd 	ldp	x29, x30, [sp], #32
    9244:	d65f03c0 	ret

0000000000009248 <device_getVersion@@Base>:
    9248:	14001420 	b	e2c8 <fnCa_GetVersion@@Base>

000000000000924c <device_action@@Base>:
    924c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    9250:	52800000 	mov	w0, #0x0                   	// #0
    9254:	910003fd 	mov	x29, sp
    9258:	b4000061 	cbz	x1, 9264 <device_action@@Base+0x18>
    925c:	a8c17bfd 	ldp	x29, x30, [sp], #16
    9260:	d65f03c0 	ret
    9264:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    9268:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    926c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9270:	91254063 	add	x3, x3, #0x950
    9274:	52800060 	mov	w0, #0x3                   	// #3
    9278:	9109c021 	add	x1, x1, #0x270
    927c:	91130042 	add	x2, x2, #0x4c0
    9280:	91064063 	add	x3, x3, #0x190
    9284:	97ffec27 	bl	4320 <__android_log_print@plt>
    9288:	12801080 	mov	w0, #0xffffff7b            	// #-133
    928c:	17fffff4 	b	925c <device_action@@Base+0x10>

0000000000009290 <device_notify@@Base>:
    9290:	90000101 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    9294:	f947fc21 	ldr	x1, [x1, #4088]
    9298:	f9000020 	str	x0, [x1]
    929c:	d65f03c0 	ret

00000000000092a0 <device_cancel_waitfinger@@Base>:
    92a0:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    92a4:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    92a8:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    92ac:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    92b0:	91254063 	add	x3, x3, #0x950
    92b4:	910003fd 	mov	x29, sp
    92b8:	9109c021 	add	x1, x1, #0x270
    92bc:	9113c042 	add	x2, x2, #0x4f0
    92c0:	91068063 	add	x3, x3, #0x1a0
    92c4:	52800060 	mov	w0, #0x3                   	// #3
    92c8:	97ffec16 	bl	4320 <__android_log_print@plt>
    92cc:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    92d0:	52800021 	mov	w1, #0x1                   	// #1
    92d4:	a8c17bfd 	ldp	x29, x30, [sp], #16
    92d8:	3922c001 	strb	w1, [x0, #2224]
    92dc:	d65f03c0 	ret

00000000000092e0 <device_cancel_waitHB@@Base>:
    92e0:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    92e4:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    92e8:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    92ec:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    92f0:	91254063 	add	x3, x3, #0x950
    92f4:	910003fd 	mov	x29, sp
    92f8:	9109c021 	add	x1, x1, #0x270
    92fc:	91146042 	add	x2, x2, #0x518
    9300:	91070063 	add	x3, x3, #0x1c0
    9304:	52800060 	mov	w0, #0x3                   	// #3
    9308:	97ffec06 	bl	4320 <__android_log_print@plt>
    930c:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    9310:	52800021 	mov	w1, #0x1                   	// #1
    9314:	a8c17bfd 	ldp	x29, x30, [sp], #16
    9318:	39230001 	strb	w1, [x0, #2240]
    931c:	d65f03c0 	ret

0000000000009320 <device_InitialHBAlgorithmBuffer@@Base>:
    9320:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    9324:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    9328:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    932c:	91254063 	add	x3, x3, #0x950
    9330:	52800060 	mov	w0, #0x3                   	// #3
    9334:	9109c021 	add	x1, x1, #0x270
    9338:	9114e042 	add	x2, x2, #0x538
    933c:	91078063 	add	x3, x3, #0x1e0
    9340:	17ffebf8 	b	4320 <__android_log_print@plt>

0000000000009344 <sig_in_hbd_debug@@Base>:
    9344:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    9348:	90000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    934c:	52809245 	mov	w5, #0x492                 	// #1170
    9350:	910003fd 	mov	x29, sp
    9354:	a90153f3 	stp	x19, x20, [sp, #16]
    9358:	90000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    935c:	913ec042 	add	x2, x2, #0xfb0
    9360:	a9025bf5 	stp	x21, x22, [sp, #32]
    9364:	90000055 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    9368:	52800060 	mov	w0, #0x3                   	// #3
    936c:	f947c266 	ldr	x6, [x19, #3968]
    9370:	912542a4 	add	x4, x21, #0x950
    9374:	a9046bf9 	stp	x25, x26, [sp, #64]
    9378:	9000005a 	adrp	x26, 11000 <gf_dump_data_interface@@Base+0x760>
    937c:	910163b6 	add	x22, x29, #0x58
    9380:	f94000c6 	ldr	x6, [x6]
    9384:	a90363f7 	stp	x23, x24, [sp, #48]
    9388:	91080097 	add	x23, x4, #0x200
    938c:	9109c358 	add	x24, x26, #0x270
    9390:	aa1803e1 	mov	x1, x24
    9394:	aa1703e3 	mov	x3, x23
    9398:	91088084 	add	x4, x4, #0x220
    939c:	f90037a6 	str	x6, [x29, #104]
    93a0:	97ffebe0 	bl	4320 <__android_log_print@plt>
    93a4:	aa1603e0 	mov	x0, x22
    93a8:	97fff1f5 	bl	5b7c <gf_secspi_read_status@@Base>
    93ac:	394167b4 	ldrb	w20, [x29, #89]
    93b0:	394177b9 	ldrb	w25, [x29, #93]
    93b4:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    93b8:	39417fa6 	ldrb	w6, [x29, #95]
    93bc:	52800060 	mov	w0, #0x3                   	// #3
    93c0:	aa1803e1 	mov	x1, x24
    93c4:	91158042 	add	x2, x2, #0x560
    93c8:	aa1703e3 	mov	x3, x23
    93cc:	2a1403e4 	mov	w4, w20
    93d0:	2a1903e5 	mov	w5, w25
    93d4:	52800007 	mov	w7, #0x0                   	// #0
    93d8:	97ffebd2 	bl	4320 <__android_log_print@plt>
    93dc:	7102c29f 	cmp	w20, #0xb0
    93e0:	54000460 	b.eq	946c <sig_in_hbd_debug@@Base+0x128>  // b.none
    93e4:	aa1603e0 	mov	x0, x22
    93e8:	97fff247 	bl	5d04 <gx_handle_exception@@Base>
    93ec:	350002a0 	cbnz	w0, 9440 <sig_in_hbd_debug@@Base+0xfc>
    93f0:	90000116 	adrp	x22, 29000 <gf_dump_data_interface@@Base+0x18760>
    93f4:	f9478ad6 	ldr	x22, [x22, #3856]
    93f8:	b94002c0 	ldr	w0, [x22]
    93fc:	34000420 	cbz	w0, 9480 <sig_in_hbd_debug@@Base+0x13c>
    9400:	7102c29f 	cmp	w20, #0xb0
    9404:	540004e0 	b.eq	94a0 <sig_in_hbd_debug@@Base+0x15c>  // b.none
    9408:	7102829f 	cmp	w20, #0xa0
    940c:	540006e0 	b.eq	94e8 <sig_in_hbd_debug@@Base+0x1a4>  // b.none
    9410:	912542a3 	add	x3, x21, #0x950
    9414:	9109c341 	add	x1, x26, #0x270
    9418:	34000394 	cbz	w20, 9488 <sig_in_hbd_debug@@Base+0x144>
    941c:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    9420:	91080063 	add	x3, x3, #0x200
    9424:	912e8042 	add	x2, x2, #0xba0
    9428:	52800060 	mov	w0, #0x3                   	// #3
    942c:	97ffebbd 	bl	4320 <__android_log_print@plt>
    9430:	940008ae 	bl	b6e8 <fnCa_CleanStatus@@Base>
    9434:	2a1403e0 	mov	w0, w20
    9438:	2a1903e1 	mov	w1, w25
    943c:	97fff1d5 	bl	5b90 <detectBaseUpdateFingerUp@@Base>
    9440:	f947c273 	ldr	x19, [x19, #3968]
    9444:	f94037a1 	ldr	x1, [x29, #104]
    9448:	f9400260 	ldr	x0, [x19]
    944c:	eb00003f 	cmp	x1, x0
    9450:	54000d01 	b.ne	95f0 <sig_in_hbd_debug@@Base+0x2ac>  // b.any
    9454:	a94153f3 	ldp	x19, x20, [sp, #16]
    9458:	a9425bf5 	ldp	x21, x22, [sp, #32]
    945c:	a94363f7 	ldp	x23, x24, [sp, #48]
    9460:	a9446bf9 	ldp	x25, x26, [sp, #64]
    9464:	a8c77bfd 	ldp	x29, x30, [sp], #112
    9468:	d65f03c0 	ret
    946c:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9470:	12000321 	and	w1, w25, #0x1
    9474:	f9479800 	ldr	x0, [x0, #3888]
    9478:	39000001 	strb	w1, [x0]
    947c:	17ffffda 	b	93e4 <sig_in_hbd_debug@@Base+0xa0>
    9480:	9400089a 	bl	b6e8 <fnCa_CleanStatus@@Base>
    9484:	17ffffef 	b	9440 <sig_in_hbd_debug@@Base+0xfc>
    9488:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    948c:	91080063 	add	x3, x3, #0x200
    9490:	912de042 	add	x2, x2, #0xb78
    9494:	52800060 	mov	w0, #0x3                   	// #3
    9498:	97ffeba2 	bl	4320 <__android_log_print@plt>
    949c:	17ffffe6 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    94a0:	94000892 	bl	b6e8 <fnCa_CleanStatus@@Base>
    94a4:	36080619 	tbz	w25, #1, 9564 <sig_in_hbd_debug@@Base+0x220>
    94a8:	912542a3 	add	x3, x21, #0x950
    94ac:	9109c341 	add	x1, x26, #0x270
    94b0:	370006f9 	tbnz	w25, #0, 958c <sig_in_hbd_debug@@Base+0x248>
    94b4:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    94b8:	91080063 	add	x3, x3, #0x200
    94bc:	91010042 	add	x2, x2, #0x40
    94c0:	52800060 	mov	w0, #0x3                   	// #3
    94c4:	97ffeb97 	bl	4320 <__android_log_print@plt>
    94c8:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    94cc:	52800021 	mov	w1, #0x1                   	// #1
    94d0:	b908a801 	str	w1, [x0, #2216]
    94d4:	97ffff93 	bl	9320 <device_InitialHBAlgorithmBuffer@@Base>
    94d8:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    94dc:	f947e000 	ldr	x0, [x0, #4032]
    94e0:	97ffeb38 	bl	41c0 <sem_post@plt>
    94e4:	17ffffd4 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    94e8:	912542b5 	add	x21, x21, #0x950
    94ec:	9109c35a 	add	x26, x26, #0x270
    94f0:	910802b5 	add	x21, x21, #0x200
    94f4:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    94f8:	aa1a03e1 	mov	x1, x26
    94fc:	912b2042 	add	x2, x2, #0xac8
    9500:	aa1503e3 	mov	x3, x21
    9504:	52800060 	mov	w0, #0x3                   	// #3
    9508:	97ffeb86 	bl	4320 <__android_log_print@plt>
    950c:	b94002c4 	ldr	w4, [x22]
    9510:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    9514:	52800060 	mov	w0, #0x3                   	// #3
    9518:	aa1a03e1 	mov	x1, x26
    951c:	912ba042 	add	x2, x2, #0xae8
    9520:	aa1503e3 	mov	x3, x21
    9524:	97ffeb7f 	bl	4320 <__android_log_print@plt>
    9528:	b94002c0 	ldr	w0, [x22]
    952c:	7100081f 	cmp	w0, #0x2
    9530:	540004c0 	b.eq	95c8 <sig_in_hbd_debug@@Base+0x284>  // b.none
    9534:	7100101f 	cmp	w0, #0x4
    9538:	54fff7e1 	b.ne	9434 <sig_in_hbd_debug@@Base+0xf0>  // b.any
    953c:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    9540:	aa1a03e1 	mov	x1, x26
    9544:	912d2042 	add	x2, x2, #0xb48
    9548:	aa1503e3 	mov	x3, x21
    954c:	52800060 	mov	w0, #0x3                   	// #3
    9550:	97ffeb74 	bl	4320 <__android_log_print@plt>
    9554:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9558:	f947e000 	ldr	x0, [x0, #4032]
    955c:	97ffeb19 	bl	41c0 <sem_post@plt>
    9560:	17ffffb5 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    9564:	37180239 	tbnz	w25, #3, 95a8 <sig_in_hbd_debug@@Base+0x264>
    9568:	362ff679 	tbz	w25, #5, 9434 <sig_in_hbd_debug@@Base+0xf0>
    956c:	912542a3 	add	x3, x21, #0x950
    9570:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    9574:	9109c341 	add	x1, x26, #0x270
    9578:	91096042 	add	x2, x2, #0x258
    957c:	91080063 	add	x3, x3, #0x200
    9580:	52800060 	mov	w0, #0x3                   	// #3
    9584:	97ffeb67 	bl	4320 <__android_log_print@plt>
    9588:	17ffffab 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    958c:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    9590:	91080063 	add	x3, x3, #0x200
    9594:	9101a042 	add	x2, x2, #0x68
    9598:	52800060 	mov	w0, #0x3                   	// #3
    959c:	97ffeb61 	bl	4320 <__android_log_print@plt>
    95a0:	97ffff60 	bl	9320 <device_InitialHBAlgorithmBuffer@@Base>
    95a4:	17ffffa4 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    95a8:	912542a3 	add	x3, x21, #0x950
    95ac:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    95b0:	9109c341 	add	x1, x26, #0x270
    95b4:	91024042 	add	x2, x2, #0x90
    95b8:	91080063 	add	x3, x3, #0x200
    95bc:	52800060 	mov	w0, #0x3                   	// #3
    95c0:	97ffeb58 	bl	4320 <__android_log_print@plt>
    95c4:	17ffff9c 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    95c8:	b0000042 	adrp	x2, 12000 <gf_dump_data_interface@@Base+0x1760>
    95cc:	aa1a03e1 	mov	x1, x26
    95d0:	912c6042 	add	x2, x2, #0xb18
    95d4:	aa1503e3 	mov	x3, x21
    95d8:	52800060 	mov	w0, #0x3                   	// #3
    95dc:	97ffeb51 	bl	4320 <__android_log_print@plt>
    95e0:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    95e4:	f947f400 	ldr	x0, [x0, #4072]
    95e8:	97ffeaf6 	bl	41c0 <sem_post@plt>
    95ec:	17ffff92 	b	9434 <sig_in_hbd_debug@@Base+0xf0>
    95f0:	97ffeb34 	bl	42c0 <__stack_chk_fail@plt>

00000000000095f4 <sig_handler_loop@@Base>:
    95f4:	a9b57bfd 	stp	x29, x30, [sp, #-176]!
    95f8:	910003fd 	mov	x29, sp
    95fc:	a90153f3 	stp	x19, x20, [sp, #16]
    9600:	90000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    9604:	910293a0 	add	x0, x29, #0xa4
    9608:	f9003fa0 	str	x0, [x29, #120]
    960c:	91028fa0 	add	x0, x29, #0xa3
    9610:	f90043a0 	str	x0, [x29, #128]
    9614:	90000054 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    9618:	f947c273 	ldr	x19, [x19, #3968]
    961c:	9109c294 	add	x20, x20, #0x270
    9620:	a90363f7 	stp	x23, x24, [sp, #48]
    9624:	b0000117 	adrp	x23, 2a000 <gf_dump_data_interface@@Base+0x19760>
    9628:	90000118 	adrp	x24, 29000 <gf_dump_data_interface@@Base+0x18760>
    962c:	f9400260 	ldr	x0, [x19]
    9630:	90000053 	adrp	x19, 11000 <gf_dump_data_interface@@Base+0x760>
    9634:	f90057a0 	str	x0, [x29, #168]
    9638:	d0000040 	adrp	x0, 13000 <gf_dump_data_interface@@Base+0x2760>
    963c:	9116a000 	add	x0, x0, #0x5a8
    9640:	9100c2f7 	add	x23, x23, #0x30
    9644:	91254273 	add	x19, x19, #0x950
    9648:	f9003ba0 	str	x0, [x29, #112]
    964c:	a9046bf9 	stp	x25, x26, [sp, #64]
    9650:	910642e0 	add	x0, x23, #0x190
    9654:	90000119 	adrp	x25, 29000 <gf_dump_data_interface@@Base+0x18760>
    9658:	a9025bf5 	stp	x21, x22, [sp, #32]
    965c:	a90573fb 	stp	x27, x28, [sp, #80]
    9660:	d000005a 	adrp	x26, 13000 <gf_dump_data_interface@@Base+0x2760>
    9664:	91090273 	add	x19, x19, #0x240
    9668:	f90037a0 	str	x0, [x29, #104]
    966c:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9670:	b900a7bf 	str	wzr, [x29, #164]
    9674:	f947a815 	ldr	x21, [x0, #3920]
    9678:	aa1503e0 	mov	x0, x21
    967c:	97ffeac5 	bl	4190 <sem_wait@plt>
    9680:	f9403fa1 	ldr	x1, [x29, #120]
    9684:	aa1503e0 	mov	x0, x21
    9688:	97ffeb5e 	bl	4400 <sem_getvalue@plt>
    968c:	b940a7a4 	ldr	w4, [x29, #164]
    9690:	aa1403e1 	mov	x1, x20
    9694:	f9403ba2 	ldr	x2, [x29, #112]
    9698:	aa1303e3 	mov	x3, x19
    969c:	52800060 	mov	w0, #0x3                   	// #3
    96a0:	97ffeb20 	bl	4320 <__android_log_print@plt>
    96a4:	39028fbf 	strb	wzr, [x29, #163]
    96a8:	f94043a0 	ldr	x0, [x29, #128]
    96ac:	97ffecef 	bl	4a68 <gf_read_pm_fb@@Base>
    96b0:	3100041f 	cmn	w0, #0x1
    96b4:	54fffdc0 	b.eq	966c <sig_handler_loop@@Base+0x78>  // b.none
    96b8:	f947b720 	ldr	x0, [x25, #3944]
    96bc:	39428fa1 	ldrb	w1, [x29, #163]
    96c0:	39400002 	ldrb	w2, [x0]
    96c4:	6b01005f 	cmp	w2, w1
    96c8:	54000060 	b.eq	96d4 <sig_handler_loop@@Base+0xe0>  // b.none
    96cc:	7100043f 	cmp	w1, #0x1
    96d0:	54000b69 	b.ls	983c <sig_handler_loop@@Base+0x248>  // b.plast
    96d4:	52800015 	mov	w21, #0x0                   	// #0
    96d8:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    96dc:	aa1303e3 	mov	x3, x19
    96e0:	2a1503e5 	mov	w5, w21
    96e4:	aa1403e1 	mov	x1, x20
    96e8:	f947981c 	ldr	x28, [x0, #3888]
    96ec:	d0000040 	adrp	x0, 13000 <gf_dump_data_interface@@Base+0x2760>
    96f0:	91170002 	add	x2, x0, #0x5c0
    96f4:	52800060 	mov	w0, #0x3                   	// #3
    96f8:	39400384 	ldrb	w4, [x28]
    96fc:	97ffeb09 	bl	4320 <__android_log_print@plt>
    9700:	f9477f1b 	ldr	x27, [x24, #3832]
    9704:	f947b736 	ldr	x22, [x25, #3944]
    9708:	aa1703e0 	mov	x0, x23
    970c:	b9400365 	ldr	w5, [x27]
    9710:	394002c4 	ldrb	w4, [x22]
    9714:	2a0503e1 	mov	w1, w5
    9718:	f9004ba4 	str	x4, [x29, #144]
    971c:	f9004fa5 	str	x5, [x29, #152]
    9720:	97fff0bb 	bl	5a0c <toString@@Base>
    9724:	aa0003e6 	mov	x6, x0
    9728:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    972c:	f9404ba4 	ldr	x4, [x29, #144]
    9730:	f9404fa5 	ldr	x5, [x29, #152]
    9734:	aa1403e1 	mov	x1, x20
    9738:	52800060 	mov	w0, #0x3                   	// #3
    973c:	9117e042 	add	x2, x2, #0x5f8
    9740:	aa1303e3 	mov	x3, x19
    9744:	97ffeaf7 	bl	4320 <__android_log_print@plt>
    9748:	394002d6 	ldrb	w22, [x22]
    974c:	710006df 	cmp	w22, #0x1
    9750:	54000b40 	b.eq	98b8 <sig_handler_loop@@Base+0x2c4>  // b.none
    9754:	35000936 	cbnz	w22, 9878 <sig_handler_loop@@Base+0x284>
    9758:	39400380 	ldrb	w0, [x28]
    975c:	7100041f 	cmp	w0, #0x1
    9760:	540008c0 	b.eq	9878 <sig_handler_loop@@Base+0x284>  // b.none
    9764:	97fff031 	bl	5828 <mutex_get_lock@@Base>
    9768:	5280001c 	mov	w28, #0x0                   	// #0
    976c:	b9400360 	ldr	w0, [x27]
    9770:	71000c1f 	cmp	w0, #0x3
    9774:	54001140 	b.eq	999c <sig_handler_loop@@Base+0x3a8>  // b.none
    9778:	97fff03a 	bl	5860 <mutex_get_unlock@@Base>
    977c:	52800060 	mov	w0, #0x3                   	// #3
    9780:	aa1403e1 	mov	x1, x20
    9784:	9119e342 	add	x2, x26, #0x678
    9788:	aa1303e3 	mov	x3, x19
    978c:	2a1503e4 	mov	w4, w21
    9790:	97ffeae4 	bl	4320 <__android_log_print@plt>
    9794:	35000835 	cbnz	w21, 9898 <sig_handler_loop@@Base+0x2a4>
    9798:	7100079f 	cmp	w28, #0x1
    979c:	54fff680 	b.eq	966c <sig_handler_loop@@Base+0x78>  // b.none
    97a0:	f9477f15 	ldr	x21, [x24, #3832]
    97a4:	aa1703e0 	mov	x0, x23
    97a8:	b94002a4 	ldr	w4, [x21]
    97ac:	f90047a4 	str	x4, [x29, #136]
    97b0:	2a0403e1 	mov	w1, w4
    97b4:	97fff096 	bl	5a0c <toString@@Base>
    97b8:	f9004ba0 	str	x0, [x29, #144]
    97bc:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    97c0:	f9478801 	ldr	x1, [x0, #3856]
    97c4:	f94037a0 	ldr	x0, [x29, #104]
    97c8:	b9400026 	ldr	w6, [x1]
    97cc:	f9004fa6 	str	x6, [x29, #152]
    97d0:	2a0603e1 	mov	w1, w6
    97d4:	97fff08e 	bl	5a0c <toString@@Base>
    97d8:	aa0003e7 	mov	x7, x0
    97dc:	f94047a4 	ldr	x4, [x29, #136]
    97e0:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    97e4:	f9404ba5 	ldr	x5, [x29, #144]
    97e8:	aa1403e1 	mov	x1, x20
    97ec:	f9404fa6 	ldr	x6, [x29, #152]
    97f0:	911a6042 	add	x2, x2, #0x698
    97f4:	aa1303e3 	mov	x3, x19
    97f8:	52800060 	mov	w0, #0x3                   	// #3
    97fc:	97ffeac9 	bl	4320 <__android_log_print@plt>
    9800:	97fff00a 	bl	5828 <mutex_get_lock@@Base>
    9804:	b94002a4 	ldr	w4, [x21]
    9808:	71000c9f 	cmp	w4, #0x3
    980c:	540007e0 	b.eq	9908 <sig_handler_loop@@Base+0x314>  // b.none
    9810:	54000489 	b.ls	98a0 <sig_handler_loop@@Base+0x2ac>  // b.plast
    9814:	7100149f 	cmp	w4, #0x5
    9818:	54000720 	b.eq	98fc <sig_handler_loop@@Base+0x308>  // b.none
    981c:	540006a3 	b.cc	98f0 <sig_handler_loop@@Base+0x2fc>  // b.lo, b.ul, b.last
    9820:	71001c9f 	cmp	w4, #0x7
    9824:	540008a0 	b.eq	9938 <sig_handler_loop@@Base+0x344>  // b.none
    9828:	7101589f 	cmp	w4, #0x56
    982c:	54000741 	b.ne	9914 <sig_handler_loop@@Base+0x320>  // b.any
    9830:	97fff94b 	bl	7d5c <sig_in_debug@@Base>
    9834:	97fff00b 	bl	5860 <mutex_get_unlock@@Base>
    9838:	17ffff8d 	b	966c <sig_handler_loop@@Base+0x78>
    983c:	90000102 	adrp	x2, 29000 <gf_dump_data_interface@@Base+0x18760>
    9840:	f947fc42 	ldr	x2, [x2, #4088]
    9844:	39000001 	strb	w1, [x0]
    9848:	f9400043 	ldr	x3, [x2]
    984c:	b40000a3 	cbz	x3, 9860 <sig_handler_loop@@Base+0x26c>
    9850:	52800100 	mov	w0, #0x8                   	// #8
    9854:	52800002 	mov	w2, #0x0                   	// #0
    9858:	d63f0060 	blr	x3
    985c:	39428fa1 	ldrb	w1, [x29, #163]
    9860:	7100043f 	cmp	w1, #0x1
    9864:	52800035 	mov	w21, #0x1                   	// #1
    9868:	54fff381 	b.ne	96d8 <sig_handler_loop@@Base+0xe4>  // b.any
    986c:	97ffefce 	bl	57a4 <gf_excute_esd_timer@@Base>
    9870:	52800015 	mov	w21, #0x0                   	// #0
    9874:	17ffff99 	b	96d8 <sig_handler_loop@@Base+0xe4>
    9878:	52800060 	mov	w0, #0x3                   	// #3
    987c:	aa1403e1 	mov	x1, x20
    9880:	9119e342 	add	x2, x26, #0x678
    9884:	aa1303e3 	mov	x3, x19
    9888:	2a1503e4 	mov	w4, w21
    988c:	5280001c 	mov	w28, #0x0                   	// #0
    9890:	97ffeaa4 	bl	4320 <__android_log_print@plt>
    9894:	34fff875 	cbz	w21, 97a0 <sig_handler_loop@@Base+0x1ac>
    9898:	97ffefc3 	bl	57a4 <gf_excute_esd_timer@@Base>
    989c:	17ffffbf 	b	9798 <sig_handler_loop@@Base+0x1a4>
    98a0:	7100049f 	cmp	w4, #0x1
    98a4:	54000560 	b.eq	9950 <sig_handler_loop@@Base+0x35c>  // b.none
    98a8:	540004e8 	b.hi	9944 <sig_handler_loop@@Base+0x350>  // b.pmore
    98ac:	97fff218 	bl	610c <sig_in_image@@Base>
    98b0:	97ffefec 	bl	5860 <mutex_get_unlock@@Base>
    98b4:	17ffff6e 	b	966c <sig_handler_loop@@Base+0x78>
    98b8:	39400380 	ldrb	w0, [x28]
    98bc:	7100041f 	cmp	w0, #0x1
    98c0:	54fffdc0 	b.eq	9878 <sig_handler_loop@@Base+0x284>  // b.none
    98c4:	97ffefd9 	bl	5828 <mutex_get_lock@@Base>
    98c8:	5280001c 	mov	w28, #0x0                   	// #0
    98cc:	b9400360 	ldr	w0, [x27]
    98d0:	34000460 	cbz	w0, 995c <sig_handler_loop@@Base+0x368>
    98d4:	71000c1f 	cmp	w0, #0x3
    98d8:	54fff501 	b.ne	9778 <sig_handler_loop@@Base+0x184>  // b.any
    98dc:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    98e0:	52800021 	mov	w1, #0x1                   	// #1
    98e4:	9121e000 	add	x0, x0, #0x878
    98e8:	b9003401 	str	w1, [x0, #52]
    98ec:	17ffffa3 	b	9778 <sig_handler_loop@@Base+0x184>
    98f0:	97fff4e9 	bl	6c94 <sig_in_nag@@Base>
    98f4:	97ffefdb 	bl	5860 <mutex_get_unlock@@Base>
    98f8:	17ffff5d 	b	966c <sig_handler_loop@@Base+0x78>
    98fc:	97fff718 	bl	755c <sig_in_hbd@@Base>
    9900:	97ffefd8 	bl	5860 <mutex_get_unlock@@Base>
    9904:	17ffff5a 	b	966c <sig_handler_loop@@Base+0x78>
    9908:	97fff7cc 	bl	7838 <sig_in_ff@@Base>
    990c:	97ffefd5 	bl	5860 <mutex_get_unlock@@Base>
    9910:	17ffff57 	b	966c <sig_handler_loop@@Base+0x78>
    9914:	d0000040 	adrp	x0, 13000 <gf_dump_data_interface@@Base+0x2760>
    9918:	aa1403e1 	mov	x1, x20
    991c:	911bc002 	add	x2, x0, #0x6f0
    9920:	aa1303e3 	mov	x3, x19
    9924:	52800060 	mov	w0, #0x3                   	// #3
    9928:	97ffea7e 	bl	4320 <__android_log_print@plt>
    992c:	97fff916 	bl	7d84 <sig_in_default@@Base>
    9930:	97ffefcc 	bl	5860 <mutex_get_unlock@@Base>
    9934:	17ffff4e 	b	966c <sig_handler_loop@@Base+0x78>
    9938:	97fffe83 	bl	9344 <sig_in_hbd_debug@@Base>
    993c:	97ffefc9 	bl	5860 <mutex_get_unlock@@Base>
    9940:	17ffff4b 	b	966c <sig_handler_loop@@Base+0x78>
    9944:	97fff44e 	bl	6a7c <sig_in_sleep@@Base>
    9948:	97ffefc6 	bl	5860 <mutex_get_unlock@@Base>
    994c:	17ffff48 	b	966c <sig_handler_loop@@Base+0x78>
    9950:	97fff310 	bl	6590 <sig_in_key@@Base>
    9954:	97ffefc3 	bl	5860 <mutex_get_unlock@@Base>
    9958:	17ffff45 	b	966c <sig_handler_loop@@Base+0x78>
    995c:	d0000040 	adrp	x0, 13000 <gf_dump_data_interface@@Base+0x2760>
    9960:	aa1403e1 	mov	x1, x20
    9964:	9118c002 	add	x2, x0, #0x630
    9968:	aa1303e3 	mov	x3, x19
    996c:	52800060 	mov	w0, #0x3                   	// #3
    9970:	2a1603fc 	mov	w28, w22
    9974:	97ffea6b 	bl	4320 <__android_log_print@plt>
    9978:	52800060 	mov	w0, #0x3                   	// #3
    997c:	b9000360 	str	w0, [x27]
    9980:	94000517 	bl	addc <fnCa_SetMode@@Base>
    9984:	97ffefb7 	bl	5860 <mutex_get_unlock@@Base>
    9988:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    998c:	9121e001 	add	x1, x0, #0x878
    9990:	b9400360 	ldr	w0, [x27]
    9994:	b9003436 	str	w22, [x1, #52]
    9998:	17ffffcf 	b	98d4 <sig_handler_loop@@Base+0x2e0>
    999c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    99a0:	aa1403e1 	mov	x1, x20
    99a4:	91194042 	add	x2, x2, #0x650
    99a8:	aa1303e3 	mov	x3, x19
    99ac:	5280003c 	mov	w28, #0x1                   	// #1
    99b0:	97ffea5c 	bl	4320 <__android_log_print@plt>
    99b4:	b900037f 	str	wzr, [x27]
    99b8:	52800000 	mov	w0, #0x0                   	// #0
    99bc:	94000508 	bl	addc <fnCa_SetMode@@Base>
    99c0:	97ffefa8 	bl	5860 <mutex_get_unlock@@Base>
    99c4:	b0000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    99c8:	9121e000 	add	x0, x0, #0x878
    99cc:	b900341f 	str	wzr, [x0, #52]
    99d0:	17ffff6a 	b	9778 <sig_handler_loop@@Base+0x184>

00000000000099d4 <device_mp_pin@@Base>:
    99d4:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    99d8:	90000104 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    99dc:	90000043 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    99e0:	910003fd 	mov	x29, sp
    99e4:	a90153f3 	stp	x19, x20, [sp, #16]
    99e8:	90000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    99ec:	f947c484 	ldr	x4, [x4, #3976]
    99f0:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    99f4:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    99f8:	91254063 	add	x3, x3, #0x950
    99fc:	52800025 	mov	w5, #0x1                   	// #1
    9a00:	f9479273 	ldr	x19, [x19, #3872]
    9a04:	2a0003f4 	mov	w20, w0
    9a08:	39000085 	strb	w5, [x4]
    9a0c:	9109c021 	add	x1, x1, #0x270
    9a10:	52800024 	mov	w4, #0x1                   	// #1
    9a14:	911c2042 	add	x2, x2, #0x708
    9a18:	91098063 	add	x3, x3, #0x260
    9a1c:	52800060 	mov	w0, #0x3                   	// #3
    9a20:	b9000264 	str	w4, [x19]
    9a24:	97ffea3f 	bl	4320 <__android_log_print@plt>
    9a28:	2a1403e0 	mov	w0, w20
    9a2c:	97ffec6d 	bl	4be0 <gf_reset_sensor@@Base>
    9a30:	b900027f 	str	wzr, [x19]
    9a34:	a94153f3 	ldp	x19, x20, [sp, #16]
    9a38:	a8c27bfd 	ldp	x29, x30, [sp], #32
    9a3c:	d65f03c0 	ret

0000000000009a40 <device_irq_control@@Base>:
    9a40:	34000080 	cbz	w0, 9a50 <device_irq_control@@Base+0x10>
    9a44:	7100041f 	cmp	w0, #0x1
    9a48:	54000060 	b.eq	9a54 <device_irq_control@@Base+0x14>  // b.none
    9a4c:	d65f03c0 	ret
    9a50:	17ffeb89 	b	4874 <gf_disable_irq@@Base>
    9a54:	17ffeb57 	b	47b0 <gf_enable_irq@@Base>
    9a58:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    9a5c:	910003fd 	mov	x29, sp
    9a60:	a90153f3 	stp	x19, x20, [sp, #16]
    9a64:	90000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    9a68:	b9401801 	ldr	w1, [x0, #24]
    9a6c:	aa0003f3 	mov	x19, x0
    9a70:	f9400800 	ldr	x0, [x0, #16]
    9a74:	113ffc21 	add	w1, w1, #0xfff
    9a78:	f90013f5 	str	x21, [sp, #32]
    9a7c:	f947c282 	ldr	x2, [x20, #3968]
    9a80:	92744c21 	and	x1, x1, #0xfffff000
    9a84:	f9400042 	ldr	x2, [x2]
    9a88:	f90027a2 	str	x2, [x29, #72]
    9a8c:	97ffea65 	bl	4420 <munmap@plt>
    9a90:	2a0003e4 	mov	w4, w0
    9a94:	35000480 	cbnz	w0, 9b24 <device_irq_control@@Base+0xe4>
    9a98:	910143a2 	add	x2, x29, #0x50
    9a9c:	b9400a61 	ldr	w1, [x19, #8]
    9aa0:	b9400660 	ldr	w0, [x19, #4]
    9aa4:	b81f0c41 	str	w1, [x2, #-16]!
    9aa8:	f9001fa2 	str	x2, [x29, #56]
    9aac:	f9001ba2 	str	x2, [x29, #48]
    9ab0:	97ffea50 	bl	43f0 <close@plt>
    9ab4:	52892021 	mov	w1, #0x4901                	// #18689
    9ab8:	b9400260 	ldr	w0, [x19]
    9abc:	f9401fa2 	ldr	x2, [x29, #56]
    9ac0:	72b80081 	movk	w1, #0xc004, lsl #16
    9ac4:	97ffea0f 	bl	4300 <ioctl@plt>
    9ac8:	2a0003f5 	mov	w21, w0
    9acc:	34000140 	cbz	w0, 9af4 <device_irq_control@@Base+0xb4>
    9ad0:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    9ad4:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9ad8:	d0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    9adc:	528000c0 	mov	w0, #0x6                   	// #6
    9ae0:	9109c021 	add	x1, x1, #0x270
    9ae4:	9136c042 	add	x2, x2, #0xdb0
    9ae8:	912d8063 	add	x3, x3, #0xb60
    9aec:	2a1503e4 	mov	w4, w21
    9af0:	97ffea0c 	bl	4320 <__android_log_print@plt>
    9af4:	b9400260 	ldr	w0, [x19]
    9af8:	97ffea3e 	bl	43f0 <close@plt>
    9afc:	f947c294 	ldr	x20, [x20, #3968]
    9b00:	f94027a2 	ldr	x2, [x29, #72]
    9b04:	2a1503e0 	mov	w0, w21
    9b08:	f9400281 	ldr	x1, [x20]
    9b0c:	eb01005f 	cmp	x2, x1
    9b10:	540001c1 	b.ne	9b48 <device_irq_control@@Base+0x108>  // b.any
    9b14:	a94153f3 	ldp	x19, x20, [sp, #16]
    9b18:	f94013f5 	ldr	x21, [sp, #32]
    9b1c:	a8c57bfd 	ldp	x29, x30, [sp], #80
    9b20:	d65f03c0 	ret
    9b24:	90000041 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    9b28:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9b2c:	d0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    9b30:	9109c021 	add	x1, x1, #0x270
    9b34:	9135c042 	add	x2, x2, #0xd70
    9b38:	912d8063 	add	x3, x3, #0xb60
    9b3c:	528000c0 	mov	w0, #0x6                   	// #6
    9b40:	97ffe9f8 	bl	4320 <__android_log_print@plt>
    9b44:	17ffffd5 	b	9a98 <device_irq_control@@Base+0x58>
    9b48:	97ffe9de 	bl	42c0 <__stack_chk_fail@plt>

0000000000009b4c <gx_ta_start@@Base>:
    9b4c:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    9b50:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9b54:	52800060 	mov	w0, #0x3                   	// #3
    9b58:	910003fd 	mov	x29, sp
    9b5c:	a90153f3 	stp	x19, x20, [sp, #16]
    9b60:	90000114 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    9b64:	d0000053 	adrp	x19, 13000 <gf_dump_data_interface@@Base+0x2760>
    9b68:	a9025bf5 	stp	x21, x22, [sp, #32]
    9b6c:	912d8264 	add	x4, x19, #0xb60
    9b70:	90000056 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    9b74:	f947c285 	ldr	x5, [x20, #3968]
    9b78:	91384042 	add	x2, x2, #0xe10
    9b7c:	a90363f7 	stp	x23, x24, [sp, #48]
    9b80:	91004097 	add	x23, x4, #0x10
    9b84:	9109c2d8 	add	x24, x22, #0x270
    9b88:	f94000a5 	ldr	x5, [x5]
    9b8c:	aa1803e1 	mov	x1, x24
    9b90:	aa1703e3 	mov	x3, x23
    9b94:	91008084 	add	x4, x4, #0x20
    9b98:	f90027a5 	str	x5, [x29, #72]
    9b9c:	910103b5 	add	x21, x29, #0x40
    9ba0:	97ffe9e0 	bl	4320 <__android_log_print@plt>
    9ba4:	b90043bf 	str	wzr, [x29, #64]
    9ba8:	d0000040 	adrp	x0, 13000 <gf_dump_data_interface@@Base+0x2760>
    9bac:	aa1503e1 	mov	x1, x21
    9bb0:	91388000 	add	x0, x0, #0xe20
    9bb4:	390113bf 	strb	wzr, [x29, #68]
    9bb8:	97ffea3a 	bl	44a0 <__system_property_get@plt>
    9bbc:	d0000041 	adrp	x1, 13000 <gf_dump_data_interface@@Base+0x2760>
    9bc0:	aa1503e0 	mov	x0, x21
    9bc4:	9138c021 	add	x1, x1, #0xe30
    9bc8:	97ffe9e2 	bl	4350 <strcmp@plt>
    9bcc:	350004e0 	cbnz	w0, 9c68 <gx_ta_start@@Base+0x11c>
    9bd0:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9bd4:	d0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    9bd8:	9137c084 	add	x4, x4, #0xdf0
    9bdc:	aa1503e5 	mov	x5, x21
    9be0:	52800060 	mov	w0, #0x3                   	// #3
    9be4:	aa1803e1 	mov	x1, x24
    9be8:	9138e042 	add	x2, x2, #0xe38
    9bec:	aa1703e3 	mov	x3, x23
    9bf0:	aa0403f5 	mov	x21, x4
    9bf4:	97ffe9cb 	bl	4320 <__android_log_print@plt>
    9bf8:	90000103 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    9bfc:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9c00:	912d8273 	add	x19, x19, #0xb60
    9c04:	aa1503e2 	mov	x2, x21
    9c08:	9100c261 	add	x1, x19, #0x30
    9c0c:	f9478463 	ldr	x3, [x3, #3848]
    9c10:	f947ac00 	ldr	x0, [x0, #3928]
    9c14:	b9400063 	ldr	w3, [x3]
    9c18:	97ffe996 	bl	4270 <QSEECom_start_app@plt>
    9c1c:	350003c0 	cbnz	w0, 9c94 <gx_ta_start@@Base+0x148>
    9c20:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9c24:	52800060 	mov	w0, #0x3                   	// #3
    9c28:	9109c2c1 	add	x1, x22, #0x270
    9c2c:	913b0042 	add	x2, x2, #0xec0
    9c30:	91004263 	add	x3, x19, #0x10
    9c34:	aa1503e4 	mov	x4, x21
    9c38:	97ffe9ba 	bl	4320 <__android_log_print@plt>
    9c3c:	52800000 	mov	w0, #0x0                   	// #0
    9c40:	f947c294 	ldr	x20, [x20, #3968]
    9c44:	f94027a2 	ldr	x2, [x29, #72]
    9c48:	f9400281 	ldr	x1, [x20]
    9c4c:	eb01005f 	cmp	x2, x1
    9c50:	54000441 	b.ne	9cd8 <gx_ta_start@@Base+0x18c>  // b.any
    9c54:	a94153f3 	ldp	x19, x20, [sp, #16]
    9c58:	a9425bf5 	ldp	x21, x22, [sp, #32]
    9c5c:	a94363f7 	ldp	x23, x24, [sp, #48]
    9c60:	a8c57bfd 	ldp	x29, x30, [sp], #80
    9c64:	d65f03c0 	ret
    9c68:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9c6c:	d0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    9c70:	91380084 	add	x4, x4, #0xe00
    9c74:	aa1503e5 	mov	x5, x21
    9c78:	aa1803e1 	mov	x1, x24
    9c7c:	9139a042 	add	x2, x2, #0xe68
    9c80:	aa1703e3 	mov	x3, x23
    9c84:	52800060 	mov	w0, #0x3                   	// #3
    9c88:	aa0403f5 	mov	x21, x4
    9c8c:	97ffe9a5 	bl	4320 <__android_log_print@plt>
    9c90:	17ffffda 	b	9bf8 <gx_ta_start@@Base+0xac>
    9c94:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9c98:	2a0003e5 	mov	w5, w0
    9c9c:	9109c2c1 	add	x1, x22, #0x270
    9ca0:	913a6042 	add	x2, x2, #0xe98
    9ca4:	91004263 	add	x3, x19, #0x10
    9ca8:	aa1503e4 	mov	x4, x21
    9cac:	52800060 	mov	w0, #0x3                   	// #3
    9cb0:	97ffe99c 	bl	4320 <__android_log_print@plt>
    9cb4:	528000e0 	mov	w0, #0x7                   	// #7
    9cb8:	90000042 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    9cbc:	d0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    9cc0:	2a0003e1 	mov	w1, w0
    9cc4:	910b2042 	add	x2, x2, #0x2c8
    9cc8:	913ae063 	add	x3, x3, #0xeb8
    9ccc:	97ffe965 	bl	4260 <__android_log_buf_print@plt>
    9cd0:	12800000 	mov	w0, #0xffffffff            	// #-1
    9cd4:	17ffffdb 	b	9c40 <gx_ta_start@@Base+0xf4>
    9cd8:	97ffe97a 	bl	42c0 <__stack_chk_fail@plt>

0000000000009cdc <gx_alipay_ta_start@@Base>:
    9cdc:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    9ce0:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9ce4:	52800060 	mov	w0, #0x3                   	// #3
    9ce8:	910003fd 	mov	x29, sp
    9cec:	a90153f3 	stp	x19, x20, [sp, #16]
    9cf0:	d0000053 	adrp	x19, 13000 <gf_dump_data_interface@@Base+0x2760>
    9cf4:	90000054 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    9cf8:	912d8273 	add	x19, x19, #0xb60
    9cfc:	9109c294 	add	x20, x20, #0x270
    9d00:	a9025bf5 	stp	x21, x22, [sp, #32]
    9d04:	91014276 	add	x22, x19, #0x50
    9d08:	aa1403e1 	mov	x1, x20
    9d0c:	91384042 	add	x2, x2, #0xe10
    9d10:	aa1603e3 	mov	x3, x22
    9d14:	9101c264 	add	x4, x19, #0x70
    9d18:	91024275 	add	x21, x19, #0x90
    9d1c:	97ffe981 	bl	4320 <__android_log_print@plt>
    9d20:	90000103 	adrp	x3, 29000 <gf_dump_data_interface@@Base+0x18760>
    9d24:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9d28:	9100c261 	add	x1, x19, #0x30
    9d2c:	aa1503e2 	mov	x2, x21
    9d30:	f9478463 	ldr	x3, [x3, #3848]
    9d34:	f947f800 	ldr	x0, [x0, #4080]
    9d38:	b9400063 	ldr	w3, [x3]
    9d3c:	97ffe94d 	bl	4270 <QSEECom_start_app@plt>
    9d40:	2a0003e5 	mov	w5, w0
    9d44:	aa1403e1 	mov	x1, x20
    9d48:	52800060 	mov	w0, #0x3                   	// #3
    9d4c:	35000165 	cbnz	w5, 9d78 <gx_alipay_ta_start@@Base+0x9c>
    9d50:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9d54:	aa1603e3 	mov	x3, x22
    9d58:	913b0042 	add	x2, x2, #0xec0
    9d5c:	aa1503e4 	mov	x4, x21
    9d60:	97ffe970 	bl	4320 <__android_log_print@plt>
    9d64:	52800000 	mov	w0, #0x0                   	// #0
    9d68:	a94153f3 	ldp	x19, x20, [sp, #16]
    9d6c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    9d70:	a8c37bfd 	ldp	x29, x30, [sp], #48
    9d74:	d65f03c0 	ret
    9d78:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9d7c:	aa1603e3 	mov	x3, x22
    9d80:	913a6042 	add	x2, x2, #0xe98
    9d84:	aa1503e4 	mov	x4, x21
    9d88:	97ffe966 	bl	4320 <__android_log_print@plt>
    9d8c:	12800000 	mov	w0, #0xffffffff            	// #-1
    9d90:	17fffff6 	b	9d68 <gx_alipay_ta_start@@Base+0x8c>

0000000000009d94 <gx_ta_stop@@Base>:
    9d94:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    9d98:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9d9c:	52800060 	mov	w0, #0x3                   	// #3
    9da0:	910003fd 	mov	x29, sp
    9da4:	a90153f3 	stp	x19, x20, [sp, #16]
    9da8:	90000113 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    9dac:	d0000054 	adrp	x20, 13000 <gf_dump_data_interface@@Base+0x2760>
    9db0:	a90363f7 	stp	x23, x24, [sp, #48]
    9db4:	912d8284 	add	x4, x20, #0xb60
    9db8:	90000058 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    9dbc:	f947c265 	ldr	x5, [x19, #3968]
    9dc0:	9109c317 	add	x23, x24, #0x270
    9dc4:	a9025bf5 	stp	x21, x22, [sp, #32]
    9dc8:	9102c096 	add	x22, x4, #0xb0
    9dcc:	aa1703e1 	mov	x1, x23
    9dd0:	f94000a5 	ldr	x5, [x5]
    9dd4:	91384042 	add	x2, x2, #0xe10
    9dd8:	aa1603e3 	mov	x3, x22
    9ddc:	91030084 	add	x4, x4, #0xc0
    9de0:	f90027a5 	str	x5, [x29, #72]
    9de4:	910103b5 	add	x21, x29, #0x40
    9de8:	97ffe94e 	bl	4320 <__android_log_print@plt>
    9dec:	b90043bf 	str	wzr, [x29, #64]
    9df0:	d0000041 	adrp	x1, 13000 <gf_dump_data_interface@@Base+0x2760>
    9df4:	aa1503e0 	mov	x0, x21
    9df8:	9138c021 	add	x1, x1, #0xe30
    9dfc:	390113bf 	strb	wzr, [x29, #68]
    9e00:	97ffe954 	bl	4350 <strcmp@plt>
    9e04:	35000480 	cbnz	w0, 9e94 <gx_ta_stop@@Base+0x100>
    9e08:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9e0c:	d0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    9e10:	9137c084 	add	x4, x4, #0xdf0
    9e14:	aa1503e5 	mov	x5, x21
    9e18:	52800060 	mov	w0, #0x3                   	// #3
    9e1c:	aa1703e1 	mov	x1, x23
    9e20:	9138e042 	add	x2, x2, #0xe38
    9e24:	aa1603e3 	mov	x3, x22
    9e28:	aa0403f5 	mov	x21, x4
    9e2c:	97ffe93d 	bl	4320 <__android_log_print@plt>
    9e30:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9e34:	f947ac00 	ldr	x0, [x0, #3928]
    9e38:	f9400001 	ldr	x1, [x0]
    9e3c:	b4000541 	cbz	x1, 9ee4 <gx_ta_stop@@Base+0x150>
    9e40:	97ffe92c 	bl	42f0 <QSEECom_shutdown_app@plt>
    9e44:	912d8283 	add	x3, x20, #0xb60
    9e48:	350003c0 	cbnz	w0, 9ec0 <gx_ta_stop@@Base+0x12c>
    9e4c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9e50:	52800060 	mov	w0, #0x3                   	// #3
    9e54:	9109c301 	add	x1, x24, #0x270
    9e58:	913c0042 	add	x2, x2, #0xf00
    9e5c:	9102c063 	add	x3, x3, #0xb0
    9e60:	aa1503e4 	mov	x4, x21
    9e64:	97ffe92f 	bl	4320 <__android_log_print@plt>
    9e68:	52800000 	mov	w0, #0x0                   	// #0
    9e6c:	f947c273 	ldr	x19, [x19, #3968]
    9e70:	f94027a2 	ldr	x2, [x29, #72]
    9e74:	f9400261 	ldr	x1, [x19]
    9e78:	eb01005f 	cmp	x2, x1
    9e7c:	54000461 	b.ne	9f08 <gx_ta_stop@@Base+0x174>  // b.any
    9e80:	a94153f3 	ldp	x19, x20, [sp, #16]
    9e84:	a9425bf5 	ldp	x21, x22, [sp, #32]
    9e88:	a94363f7 	ldp	x23, x24, [sp, #48]
    9e8c:	a8c57bfd 	ldp	x29, x30, [sp], #80
    9e90:	d65f03c0 	ret
    9e94:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9e98:	d0000044 	adrp	x4, 13000 <gf_dump_data_interface@@Base+0x2760>
    9e9c:	91380084 	add	x4, x4, #0xe00
    9ea0:	aa1503e5 	mov	x5, x21
    9ea4:	aa1703e1 	mov	x1, x23
    9ea8:	9139a042 	add	x2, x2, #0xe68
    9eac:	aa1603e3 	mov	x3, x22
    9eb0:	52800060 	mov	w0, #0x3                   	// #3
    9eb4:	aa0403f5 	mov	x21, x4
    9eb8:	97ffe91a 	bl	4320 <__android_log_print@plt>
    9ebc:	17ffffdd 	b	9e30 <gx_ta_stop@@Base+0x9c>
    9ec0:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9ec4:	52800060 	mov	w0, #0x3                   	// #3
    9ec8:	9109c301 	add	x1, x24, #0x270
    9ecc:	913b8042 	add	x2, x2, #0xee0
    9ed0:	9102c063 	add	x3, x3, #0xb0
    9ed4:	aa1503e4 	mov	x4, x21
    9ed8:	97ffe912 	bl	4320 <__android_log_print@plt>
    9edc:	12800000 	mov	w0, #0xffffffff            	// #-1
    9ee0:	17ffffe3 	b	9e6c <gx_ta_stop@@Base+0xd8>
    9ee4:	912d8283 	add	x3, x20, #0xb60
    9ee8:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9eec:	52800060 	mov	w0, #0x3                   	// #3
    9ef0:	9109c301 	add	x1, x24, #0x270
    9ef4:	913c8042 	add	x2, x2, #0xf20
    9ef8:	9102c063 	add	x3, x3, #0xb0
    9efc:	97ffe909 	bl	4320 <__android_log_print@plt>
    9f00:	12800000 	mov	w0, #0xffffffff            	// #-1
    9f04:	17ffffda 	b	9e6c <gx_ta_stop@@Base+0xd8>
    9f08:	97ffe8ee 	bl	42c0 <__stack_chk_fail@plt>

0000000000009f0c <gx_alipay_ta_stop@@Base>:
    9f0c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    9f10:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9f14:	52800060 	mov	w0, #0x3                   	// #3
    9f18:	910003fd 	mov	x29, sp
    9f1c:	a90153f3 	stp	x19, x20, [sp, #16]
    9f20:	d0000053 	adrp	x19, 13000 <gf_dump_data_interface@@Base+0x2760>
    9f24:	90000054 	adrp	x20, 11000 <gf_dump_data_interface@@Base+0x760>
    9f28:	912d8273 	add	x19, x19, #0xb60
    9f2c:	f90013f5 	str	x21, [sp, #32]
    9f30:	9109c294 	add	x20, x20, #0x270
    9f34:	91034275 	add	x21, x19, #0xd0
    9f38:	aa1403e1 	mov	x1, x20
    9f3c:	91384042 	add	x2, x2, #0xe10
    9f40:	aa1503e3 	mov	x3, x21
    9f44:	9103c264 	add	x4, x19, #0xf0
    9f48:	97ffe8f6 	bl	4320 <__android_log_print@plt>
    9f4c:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9f50:	f947ac00 	ldr	x0, [x0, #3928]
    9f54:	f9400000 	ldr	x0, [x0]
    9f58:	b40003a0 	cbz	x0, 9fcc <gx_alipay_ta_stop@@Base+0xc0>
    9f5c:	90000100 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    9f60:	f947f800 	ldr	x0, [x0, #4080]
    9f64:	97ffe8e3 	bl	42f0 <QSEECom_shutdown_app@plt>
    9f68:	350001a0 	cbnz	w0, 9f9c <gx_alipay_ta_stop@@Base+0x90>
    9f6c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9f70:	52800060 	mov	w0, #0x3                   	// #3
    9f74:	aa1403e1 	mov	x1, x20
    9f78:	913c0042 	add	x2, x2, #0xf00
    9f7c:	aa1503e3 	mov	x3, x21
    9f80:	91024264 	add	x4, x19, #0x90
    9f84:	97ffe8e7 	bl	4320 <__android_log_print@plt>
    9f88:	52800000 	mov	w0, #0x0                   	// #0
    9f8c:	a94153f3 	ldp	x19, x20, [sp, #16]
    9f90:	f94013f5 	ldr	x21, [sp, #32]
    9f94:	a8c37bfd 	ldp	x29, x30, [sp], #48
    9f98:	d65f03c0 	ret
    9f9c:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9fa0:	aa1403e1 	mov	x1, x20
    9fa4:	aa1503e3 	mov	x3, x21
    9fa8:	91024264 	add	x4, x19, #0x90
    9fac:	913b8042 	add	x2, x2, #0xee0
    9fb0:	52800060 	mov	w0, #0x3                   	// #3
    9fb4:	97ffe8db 	bl	4320 <__android_log_print@plt>
    9fb8:	f94013f5 	ldr	x21, [sp, #32]
    9fbc:	12800000 	mov	w0, #0xffffffff            	// #-1
    9fc0:	a94153f3 	ldp	x19, x20, [sp, #16]
    9fc4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    9fc8:	d65f03c0 	ret
    9fcc:	d0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    9fd0:	52800060 	mov	w0, #0x3                   	// #3
    9fd4:	aa1403e1 	mov	x1, x20
    9fd8:	913c8042 	add	x2, x2, #0xf20
    9fdc:	aa1503e3 	mov	x3, x21
    9fe0:	97ffe8d0 	bl	4320 <__android_log_print@plt>
    9fe4:	12800000 	mov	w0, #0xffffffff            	// #-1
    9fe8:	17ffffe9 	b	9f8c <gx_alipay_ta_stop@@Base+0x80>

0000000000009fec <gx_ta_send_command@@Base>:
    9fec:	d14007ff 	sub	sp, sp, #0x1, lsl #12
    9ff0:	d10083ff 	sub	sp, sp, #0x20
    9ff4:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    9ff8:	910003fd 	mov	x29, sp
    9ffc:	a9025bf5 	stp	x21, x22, [sp, #32]
    a000:	f00000f5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    a004:	2a0403f6 	mov	w22, w4
    a008:	a90153f3 	stp	x19, x20, [sp, #16]
    a00c:	aa0103f3 	mov	x19, x1
    a010:	f947c2a1 	ldr	x1, [x21, #3968]
    a014:	a90363f7 	stp	x23, x24, [sp, #48]
    a018:	90000118 	adrp	x24, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a01c:	2a0003f7 	mov	w23, w0
    a020:	f9400021 	ldr	x1, [x1]
    a024:	91240300 	add	x0, x24, #0x900
    a028:	a9046bf9 	stp	x25, x26, [sp, #64]
    a02c:	a90573fb 	stp	x27, x28, [sp, #80]
    a030:	2a0203fa 	mov	w26, w2
    a034:	aa0303f9 	mov	x25, x3
    a038:	f9083fa1 	str	x1, [x29, #4216]
    a03c:	97ffe8d1 	bl	4380 <pthread_mutex_lock@plt>
    a040:	b4000f93 	cbz	x19, a230 <gx_ta_send_command@@Base+0x244>
    a044:	b4000f79 	cbz	x25, a230 <gx_ta_send_command@@Base+0x244>
    a048:	7120035f 	cmp	w26, #0x800
    a04c:	54000d48 	b.hi	a1f4 <gx_ta_send_command@@Base+0x208>  // b.pmore
    a050:	712002df 	cmp	w22, #0x800
    a054:	54000d08 	b.hi	a1f4 <gx_ta_send_command@@Base+0x208>  // b.pmore
    a058:	9121c3bb 	add	x27, x29, #0x870
    a05c:	aa1303e1 	mov	x1, x19
    a060:	aa1b03e0 	mov	x0, x27
    a064:	2a1a03e2 	mov	w2, w26
    a068:	11000753 	add	w19, w26, #0x1
    a06c:	b8004417 	str	w23, [x0], #4
    a070:	97ffe8f4 	bl	4440 <memcpy@plt>
    a074:	12001660 	and	w0, w19, #0x3f
    a078:	34000060 	cbz	w0, a084 <gx_ta_send_command@@Base+0x98>
    a07c:	1101075a 	add	w26, w26, #0x41
    a080:	121a6753 	and	w19, w26, #0xffffffc0
    a084:	120016d4 	and	w20, w22, #0x3f
    a088:	2a1603e4 	mov	w4, w22
    a08c:	34000074 	cbz	w20, a098 <gx_ta_send_command@@Base+0xac>
    a090:	110102c4 	add	w4, w22, #0x40
    a094:	121a6484 	and	w4, w4, #0xffffffc0
    a098:	f00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    a09c:	52800021 	mov	w1, #0x1                   	// #1
    a0a0:	f90037a4 	str	x4, [x29, #104]
    a0a4:	910203bc 	add	x28, x29, #0x80
    a0a8:	d100439a 	sub	x26, x28, #0x10
    a0ac:	f947ae94 	ldr	x20, [x20, #3928]
    a0b0:	f9400280 	ldr	x0, [x20]
    a0b4:	97ffe897 	bl	4310 <QSEECom_scale_bus_bandwidth@plt>
    a0b8:	f9400280 	ldr	x0, [x20]
    a0bc:	aa1b03e1 	mov	x1, x27
    a0c0:	f94037a4 	ldr	x4, [x29, #104]
    a0c4:	2a1303e2 	mov	w2, w19
    a0c8:	aa1a03e3 	mov	x3, x26
    a0cc:	97ffe84d 	bl	4200 <QSEECom_send_cmd@plt>
    a0d0:	2a0003f3 	mov	w19, w0
    a0d4:	f9400280 	ldr	x0, [x20]
    a0d8:	52800001 	mov	w1, #0x0                   	// #0
    a0dc:	97ffe88d 	bl	4310 <QSEECom_scale_bus_bandwidth@plt>
    a0e0:	35000573 	cbnz	w19, a18c <gx_ta_send_command@@Base+0x1a0>
    a0e4:	2a1603e2 	mov	w2, w22
    a0e8:	aa1a03e1 	mov	x1, x26
    a0ec:	aa1903e0 	mov	x0, x25
    a0f0:	b0000054 	adrp	x20, 13000 <gf_dump_data_interface@@Base+0x2760>
    a0f4:	f0000036 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    a0f8:	97ffe8d2 	bl	4440 <memcpy@plt>
    a0fc:	912d8283 	add	x3, x20, #0xb60
    a100:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a104:	385f0385 	ldurb	w5, [x28, #-16]
    a108:	52800060 	mov	w0, #0x3                   	// #3
    a10c:	385f1386 	ldurb	w6, [x28, #-15]
    a110:	9109c2c1 	add	x1, x22, #0x270
    a114:	91014042 	add	x2, x2, #0x50
    a118:	91044063 	add	x3, x3, #0x110
    a11c:	2a1703e4 	mov	w4, w23
    a120:	97ffe880 	bl	4320 <__android_log_print@plt>
    a124:	912d8284 	add	x4, x20, #0xb60
    a128:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a12c:	91044083 	add	x3, x4, #0x110
    a130:	9109c2c1 	add	x1, x22, #0x270
    a134:	91026042 	add	x2, x2, #0x98
    a138:	9104c084 	add	x4, x4, #0x130
    a13c:	2a1703e5 	mov	w5, w23
    a140:	52800060 	mov	w0, #0x3                   	// #3
    a144:	97ffe877 	bl	4320 <__android_log_print@plt>
    a148:	91240300 	add	x0, x24, #0x900
    a14c:	97ffe8dd 	bl	44c0 <pthread_mutex_unlock@plt>
    a150:	2a1303e0 	mov	w0, w19
    a154:	f947c2b5 	ldr	x21, [x21, #3968]
    a158:	f9483fa2 	ldr	x2, [x29, #4216]
    a15c:	f94002a1 	ldr	x1, [x21]
    a160:	eb01005f 	cmp	x2, x1
    a164:	54000861 	b.ne	a270 <gx_ta_send_command@@Base+0x284>  // b.any
    a168:	a94153f3 	ldp	x19, x20, [sp, #16]
    a16c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    a170:	a94363f7 	ldp	x23, x24, [sp, #48]
    a174:	a9446bf9 	ldp	x25, x26, [sp, #64]
    a178:	a94573fb 	ldp	x27, x28, [sp, #80]
    a17c:	a8c67bfd 	ldp	x29, x30, [sp], #96
    a180:	910083ff 	add	sp, sp, #0x20
    a184:	914007ff 	add	sp, sp, #0x1, lsl #12
    a188:	d65f03c0 	ret
    a18c:	b0000054 	adrp	x20, 13000 <gf_dump_data_interface@@Base+0x2760>
    a190:	f0000036 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    a194:	912d8299 	add	x25, x20, #0xb60
    a198:	9109c2da 	add	x26, x22, #0x270
    a19c:	91044339 	add	x25, x25, #0x110
    a1a0:	b0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    a1a4:	2a1303e5 	mov	w5, w19
    a1a8:	2a1703e4 	mov	w4, w23
    a1ac:	aa1a03e1 	mov	x1, x26
    a1b0:	aa1903e3 	mov	x3, x25
    a1b4:	913f2042 	add	x2, x2, #0xfc8
    a1b8:	52800060 	mov	w0, #0x3                   	// #3
    a1bc:	12800013 	mov	w19, #0xffffffff            	// #-1
    a1c0:	97ffe858 	bl	4320 <__android_log_print@plt>
    a1c4:	b0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    a1c8:	aa1a03e1 	mov	x1, x26
    a1cc:	913fe042 	add	x2, x2, #0xff8
    a1d0:	aa1903e3 	mov	x3, x25
    a1d4:	52800060 	mov	w0, #0x3                   	// #3
    a1d8:	97ffe852 	bl	4320 <__android_log_print@plt>
    a1dc:	d0000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    a1e0:	d0000041 	adrp	x1, 14000 <gf_dump_data_interface@@Base+0x3760>
    a1e4:	91012021 	add	x1, x1, #0x48
    a1e8:	9100c000 	add	x0, x0, #0x30
    a1ec:	97ffe811 	bl	4230 <__system_property_set@plt>
    a1f0:	17ffffcd 	b	a124 <gx_ta_send_command@@Base+0x138>
    a1f4:	b0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    a1f8:	52810004 	mov	w4, #0x800                 	// #2048
    a1fc:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    a200:	b0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    a204:	912d8063 	add	x3, x3, #0xb60
    a208:	9109c021 	add	x1, x1, #0x270
    a20c:	913dc042 	add	x2, x2, #0xf70
    a210:	91044063 	add	x3, x3, #0x110
    a214:	2a0403e5 	mov	w5, w4
    a218:	52800060 	mov	w0, #0x3                   	// #3
    a21c:	97ffe841 	bl	4320 <__android_log_print@plt>
    a220:	91240300 	add	x0, x24, #0x900
    a224:	97ffe8a7 	bl	44c0 <pthread_mutex_unlock@plt>
    a228:	12800000 	mov	w0, #0xffffffff            	// #-1
    a22c:	17ffffca 	b	a154 <gx_ta_send_command@@Base+0x168>
    a230:	b0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    a234:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    a238:	b0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    a23c:	912d8063 	add	x3, x3, #0xb60
    a240:	9109c021 	add	x1, x1, #0x270
    a244:	913d0042 	add	x2, x2, #0xf40
    a248:	91044063 	add	x3, x3, #0x110
    a24c:	2a1703e4 	mov	w4, w23
    a250:	aa1303e5 	mov	x5, x19
    a254:	aa1903e6 	mov	x6, x25
    a258:	52800060 	mov	w0, #0x3                   	// #3
    a25c:	97ffe831 	bl	4320 <__android_log_print@plt>
    a260:	91240300 	add	x0, x24, #0x900
    a264:	97ffe897 	bl	44c0 <pthread_mutex_unlock@plt>
    a268:	12800000 	mov	w0, #0xffffffff            	// #-1
    a26c:	17ffffba 	b	a154 <gx_ta_send_command@@Base+0x168>
    a270:	97ffe814 	bl	42c0 <__stack_chk_fail@plt>

000000000000a274 <gx_alipay_ta_send_command@@Base>:
    a274:	d14007ff 	sub	sp, sp, #0x1, lsl #12
    a278:	d10083ff 	sub	sp, sp, #0x20
    a27c:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    a280:	910003fd 	mov	x29, sp
    a284:	a90153f3 	stp	x19, x20, [sp, #16]
    a288:	f00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    a28c:	2a0203f3 	mov	w19, w2
    a290:	a90363f7 	stp	x23, x24, [sp, #48]
    a294:	90000117 	adrp	x23, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a298:	f90037a1 	str	x1, [x29, #104]
    a29c:	f947c285 	ldr	x5, [x20, #3968]
    a2a0:	aa0303f8 	mov	x24, x3
    a2a4:	a9025bf5 	stp	x21, x22, [sp, #32]
    a2a8:	912402f5 	add	x21, x23, #0x900
    a2ac:	f9002bfb 	str	x27, [sp, #80]
    a2b0:	f94000a2 	ldr	x2, [x5]
    a2b4:	a9046bf9 	stp	x25, x26, [sp, #64]
    a2b8:	2a0003f9 	mov	w25, w0
    a2bc:	aa1503e0 	mov	x0, x21
    a2c0:	aa0403fa 	mov	x26, x4
    a2c4:	f9083fa2 	str	x2, [x29, #4216]
    a2c8:	97ffe82e 	bl	4380 <pthread_mutex_lock@plt>
    a2cc:	f94037a1 	ldr	x1, [x29, #104]
    a2d0:	b4000b01 	cbz	x1, a430 <gx_alipay_ta_send_command@@Base+0x1bc>
    a2d4:	b4000af8 	cbz	x24, a430 <gx_alipay_ta_send_command@@Base+0x1bc>
    a2d8:	7120027f 	cmp	w19, #0x800
    a2dc:	540008c8 	b.hi	a3f4 <gx_alipay_ta_send_command@@Base+0x180>  // b.pmore
    a2e0:	9121c3b5 	add	x21, x29, #0x870
    a2e4:	11002262 	add	w2, w19, #0x8
    a2e8:	910022a0 	add	x0, x21, #0x8
    a2ec:	aa0203fb 	mov	x27, x2
    a2f0:	b90002b9 	str	w25, [x21]
    a2f4:	b90006b3 	str	w19, [x21, #4]
    a2f8:	97ffe852 	bl	4440 <memcpy@plt>
    a2fc:	12001760 	and	w0, w27, #0x3f
    a300:	34000060 	cbz	w0, a30c <gx_alipay_ta_send_command@@Base+0x98>
    a304:	11012273 	add	w19, w19, #0x48
    a308:	121a667b 	and	w27, w19, #0xffffffc0
    a30c:	f00000e0 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    a310:	9101c3b6 	add	x22, x29, #0x70
    a314:	aa1503e1 	mov	x1, x21
    a318:	2a1b03e2 	mov	w2, w27
    a31c:	aa1603e3 	mov	x3, x22
    a320:	52800804 	mov	w4, #0x40                  	// #64
    a324:	f947f800 	ldr	x0, [x0, #4080]
    a328:	f9400000 	ldr	x0, [x0]
    a32c:	97ffe7b5 	bl	4200 <QSEECom_send_cmd@plt>
    a330:	2a0003f3 	mov	w19, w0
    a334:	350002c0 	cbnz	w0, a38c <gx_alipay_ta_send_command@@Base+0x118>
    a338:	b9400342 	ldr	w2, [x26]
    a33c:	aa1803e0 	mov	x0, x24
    a340:	aa1603e1 	mov	x1, x22
    a344:	97ffe83f 	bl	4440 <memcpy@plt>
    a348:	912402e0 	add	x0, x23, #0x900
    a34c:	97ffe85d 	bl	44c0 <pthread_mutex_unlock@plt>
    a350:	2a1303e0 	mov	w0, w19
    a354:	f947c294 	ldr	x20, [x20, #3968]
    a358:	f9483fa2 	ldr	x2, [x29, #4216]
    a35c:	f9400281 	ldr	x1, [x20]
    a360:	eb01005f 	cmp	x2, x1
    a364:	54000801 	b.ne	a464 <gx_alipay_ta_send_command@@Base+0x1f0>  // b.any
    a368:	a94153f3 	ldp	x19, x20, [sp, #16]
    a36c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    a370:	a94363f7 	ldp	x23, x24, [sp, #48]
    a374:	a9446bf9 	ldp	x25, x26, [sp, #64]
    a378:	f9402bfb 	ldr	x27, [sp, #80]
    a37c:	a8c67bfd 	ldp	x29, x30, [sp], #96
    a380:	910083ff 	add	sp, sp, #0x20
    a384:	914007ff 	add	sp, sp, #0x1, lsl #12
    a388:	d65f03c0 	ret
    a38c:	b0000055 	adrp	x21, 13000 <gf_dump_data_interface@@Base+0x2760>
    a390:	f0000036 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    a394:	912d82b5 	add	x21, x21, #0xb60
    a398:	9109c2d6 	add	x22, x22, #0x270
    a39c:	910542b5 	add	x21, x21, #0x150
    a3a0:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a3a4:	2a0003e5 	mov	w5, w0
    a3a8:	2a1903e4 	mov	w4, w25
    a3ac:	aa1603e1 	mov	x1, x22
    a3b0:	aa1503e3 	mov	x3, x21
    a3b4:	9103c042 	add	x2, x2, #0xf0
    a3b8:	52800060 	mov	w0, #0x3                   	// #3
    a3bc:	12800013 	mov	w19, #0xffffffff            	// #-1
    a3c0:	97ffe7d8 	bl	4320 <__android_log_print@plt>
    a3c4:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a3c8:	aa1603e1 	mov	x1, x22
    a3cc:	91046042 	add	x2, x2, #0x118
    a3d0:	aa1503e3 	mov	x3, x21
    a3d4:	52800060 	mov	w0, #0x3                   	// #3
    a3d8:	97ffe7d2 	bl	4320 <__android_log_print@plt>
    a3dc:	d0000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    a3e0:	d0000041 	adrp	x1, 14000 <gf_dump_data_interface@@Base+0x3760>
    a3e4:	91012021 	add	x1, x1, #0x48
    a3e8:	9100c000 	add	x0, x0, #0x30
    a3ec:	97ffe791 	bl	4230 <__system_property_set@plt>
    a3f0:	17ffffd6 	b	a348 <gx_alipay_ta_send_command@@Base+0xd4>
    a3f4:	b0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    a3f8:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    a3fc:	b0000042 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    a400:	912d8063 	add	x3, x3, #0xb60
    a404:	9109c021 	add	x1, x1, #0x270
    a408:	913dc042 	add	x2, x2, #0xf70
    a40c:	91054063 	add	x3, x3, #0x150
    a410:	2a1303e4 	mov	w4, w19
    a414:	52810005 	mov	w5, #0x800                 	// #2048
    a418:	52800060 	mov	w0, #0x3                   	// #3
    a41c:	97ffe7c1 	bl	4320 <__android_log_print@plt>
    a420:	aa1503e0 	mov	x0, x21
    a424:	97ffe827 	bl	44c0 <pthread_mutex_unlock@plt>
    a428:	12800000 	mov	w0, #0xffffffff            	// #-1
    a42c:	17ffffca 	b	a354 <gx_alipay_ta_send_command@@Base+0xe0>
    a430:	b0000043 	adrp	x3, 13000 <gf_dump_data_interface@@Base+0x2760>
    a434:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    a438:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a43c:	912d8063 	add	x3, x3, #0xb60
    a440:	9109c021 	add	x1, x1, #0x270
    a444:	91032042 	add	x2, x2, #0xc8
    a448:	91054063 	add	x3, x3, #0x150
    a44c:	52800060 	mov	w0, #0x3                   	// #3
    a450:	97ffe7b4 	bl	4320 <__android_log_print@plt>
    a454:	912402e0 	add	x0, x23, #0x900
    a458:	97ffe81a 	bl	44c0 <pthread_mutex_unlock@plt>
    a45c:	12800000 	mov	w0, #0xffffffff            	// #-1
    a460:	17ffffbd 	b	a354 <gx_alipay_ta_send_command@@Base+0xe0>
    a464:	97ffe797 	bl	42c0 <__stack_chk_fail@plt>

000000000000a468 <gx_ta_send_command_ex@@Base>:
    a468:	a9af7bfd 	stp	x29, x30, [sp, #-272]!
    a46c:	910003fd 	mov	x29, sp
    a470:	a9046bf9 	stp	x25, x26, [sp, #64]
    a474:	f00000fa 	adrp	x26, 29000 <gf_dump_data_interface@@Base+0x18760>
    a478:	a90573fb 	stp	x27, x28, [sp, #80]
    a47c:	b000005b 	adrp	x27, 13000 <gf_dump_data_interface@@Base+0x2760>
    a480:	f000003c 	adrp	x28, 11000 <gf_dump_data_interface@@Base+0x760>
    a484:	f947c346 	ldr	x6, [x26, #3968]
    a488:	912d8379 	add	x25, x27, #0xb60
    a48c:	a90153f3 	stp	x19, x20, [sp, #16]
    a490:	2a0003f3 	mov	w19, w0
    a494:	9109c380 	add	x0, x28, #0x270
    a498:	a90363f7 	stp	x23, x24, [sp, #48]
    a49c:	aa0003e7 	mov	x7, x0
    a4a0:	2a0203f7 	mov	w23, w2
    a4a4:	f94000c6 	ldr	x6, [x6]
    a4a8:	9105c334 	add	x20, x25, #0x170
    a4ac:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a4b0:	f9003fa0 	str	x0, [x29, #120]
    a4b4:	a9025bf5 	stp	x21, x22, [sp, #32]
    a4b8:	b90077a4 	str	w4, [x29, #116]
    a4bc:	2a0403f5 	mov	w21, w4
    a4c0:	f90047a3 	str	x3, [x29, #136]
    a4c4:	aa0103f8 	mov	x24, x1
    a4c8:	f90043a5 	str	x5, [x29, #128]
    a4cc:	aa0703e1 	mov	x1, x7
    a4d0:	52800060 	mov	w0, #0x3                   	// #3
    a4d4:	91052042 	add	x2, x2, #0x148
    a4d8:	aa1403e3 	mov	x3, x20
    a4dc:	91064324 	add	x4, x25, #0x190
    a4e0:	2a1303e5 	mov	w5, w19
    a4e4:	f90087a6 	str	x6, [x29, #264]
    a4e8:	97ffe78e 	bl	4320 <__android_log_print@plt>
    a4ec:	714082ff 	cmp	w23, #0x20, lsl #12
    a4f0:	1a9f97e1 	cset	w1, hi	// hi = pmore
    a4f4:	714082bf 	cmp	w21, #0x20, lsl #12
    a4f8:	1a9f97e0 	cset	w0, hi	// hi = pmore
    a4fc:	2a000020 	orr	w0, w1, w0
    a500:	350017e0 	cbnz	w0, a7fc <gx_ta_send_command_ex@@Base+0x394>
    a504:	b40017d8 	cbz	x24, a7fc <gx_ta_send_command_ex@@Base+0x394>
    a508:	f00000f5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    a50c:	f947aeb5 	ldr	x21, [x21, #3928]
    a510:	f94002a0 	ldr	x0, [x21]
    a514:	b4002140 	cbz	x0, a93c <gx_ta_send_command_ex@@Base+0x4d4>
    a518:	90000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a51c:	91240016 	add	x22, x0, #0x900
    a520:	aa1603e0 	mov	x0, x22
    a524:	97ffe797 	bl	4380 <pthread_mutex_lock@plt>
    a528:	f94002b5 	ldr	x21, [x21]
    a52c:	b4002195 	cbz	x21, a95c <gx_ta_send_command_ex@@Base+0x4f4>
    a530:	d0000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    a534:	52800001 	mov	w1, #0x0                   	// #0
    a538:	91070000 	add	x0, x0, #0x1c0
    a53c:	b900cbbf 	str	wzr, [x29, #200]
    a540:	b900d3bf 	str	wzr, [x29, #208]
    a544:	910323b6 	add	x22, x29, #0xc8
    a548:	97ffe71a 	bl	41b0 <open@plt>
    a54c:	2a0003f4 	mov	w20, w0
    a550:	37f816c0 	tbnz	w0, #31, a828 <gx_ta_send_command_ex@@Base+0x3c0>
    a554:	d2900003 	mov	x3, #0x8000                	// #32768
    a558:	52892001 	mov	w1, #0x4900                	// #18688
    a55c:	f2a000a3 	movk	x3, #0x5, lsl #16
    a560:	f90077a3 	str	x3, [x29, #232]
    a564:	d2820003 	mov	x3, #0x1000                	// #4096
    a568:	9103a3a2 	add	x2, x29, #0xe8
    a56c:	f9007ba3 	str	x3, [x29, #240]
    a570:	72b80401 	movk	w1, #0xc020, lsl #16
    a574:	52a10003 	mov	w3, #0x8000000             	// #134217728
    a578:	f90037a2 	str	x2, [x29, #104]
    a57c:	f9006fbf 	str	xzr, [x29, #216]
    a580:	b900cfbf 	str	wzr, [x29, #204]
    a584:	b900fba3 	str	w3, [x29, #248]
    a588:	b900ffbf 	str	wzr, [x29, #252]
    a58c:	97ffe75d 	bl	4300 <ioctl@plt>
    a590:	35000e60 	cbnz	w0, a75c <gx_ta_send_command_ex@@Base+0x2f4>
    a594:	b94103a3 	ldr	w3, [x29, #256]
    a598:	34000ca3 	cbz	w3, a72c <gx_ta_send_command_ex@@Base+0x2c4>
    a59c:	910443a2 	add	x2, x29, #0x110
    a5a0:	52892041 	mov	w1, #0x4902                	// #18690
    a5a4:	72b80101 	movk	w1, #0xc008, lsl #16
    a5a8:	2a1403e0 	mov	w0, w20
    a5ac:	b8190c43 	str	w3, [x2, #-112]!
    a5b0:	97ffe754 	bl	4300 <ioctl@plt>
    a5b4:	34000e40 	cbz	w0, a77c <gx_ta_send_command_ex@@Base+0x314>
    a5b8:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a5bc:	f9403fa1 	ldr	x1, [x29, #120]
    a5c0:	9106c323 	add	x3, x25, #0x1b0
    a5c4:	528000c0 	mov	w0, #0x6                   	// #6
    a5c8:	91098042 	add	x2, x2, #0x260
    a5cc:	52800019 	mov	w25, #0x0                   	// #0
    a5d0:	97ffe754 	bl	4320 <__android_log_print@plt>
    a5d4:	b94103a1 	ldr	w1, [x29, #256]
    a5d8:	b940cfa0 	ldr	w0, [x29, #204]
    a5dc:	b9009ba1 	str	w1, [x29, #152]
    a5e0:	35001200 	cbnz	w0, a820 <gx_ta_send_command_ex@@Base+0x3b8>
    a5e4:	52892021 	mov	w1, #0x4901                	// #18689
    a5e8:	2a1403e0 	mov	w0, w20
    a5ec:	72b80081 	movk	w1, #0xc004, lsl #16
    a5f0:	910263a2 	add	x2, x29, #0x98
    a5f4:	97ffe743 	bl	4300 <ioctl@plt>
    a5f8:	2a0003e4 	mov	w4, w0
    a5fc:	35000ee0 	cbnz	w0, a7d8 <gx_ta_send_command_ex@@Base+0x370>
    a600:	35000a74 	cbnz	w20, a74c <gx_ta_send_command_ex@@Base+0x2e4>
    a604:	350011f9 	cbnz	w25, a840 <gx_ta_send_command_ex@@Base+0x3d8>
    a608:	f9406fa0 	ldr	x0, [x29, #216]
    a60c:	9102a3a5 	add	x5, x29, #0xa8
    a610:	aa1803e1 	mov	x1, x24
    a614:	2a1703e2 	mov	w2, w23
    a618:	f9003fa5 	str	x5, [x29, #120]
    a61c:	a9007cbf 	stp	xzr, xzr, [x5]
    a620:	a9017cbf 	stp	xzr, xzr, [x5, #16]
    a624:	38001413 	strb	w19, [x0], #1
    a628:	97ffe786 	bl	4440 <memcpy@plt>
    a62c:	f94002a1 	ldr	x1, [x21]
    a630:	528e7a83 	mov	w3, #0x73d4                	// #29652
    a634:	f9406fa0 	ldr	x0, [x29, #216]
    a638:	72a000a3 	movk	w3, #0x5, lsl #16
    a63c:	910c0034 	add	x20, x1, #0x300
    a640:	b940cfa6 	ldr	w6, [x29, #204]
    a644:	b9000033 	str	w19, [x1]
    a648:	52800802 	mov	w2, #0x40                  	// #64
    a64c:	b9000420 	str	w0, [x1, #4]
    a650:	2a0203e4 	mov	w4, w2
    a654:	b9000823 	str	w3, [x1, #8]
    a658:	aa1503e0 	mov	x0, x21
    a65c:	f9403fa5 	ldr	x5, [x29, #120]
    a660:	aa1403e3 	mov	x3, x20
    a664:	b900aba6 	str	w6, [x29, #168]
    a668:	52800086 	mov	w6, #0x4                   	// #4
    a66c:	b9000a9f 	str	wzr, [x20, #8]
    a670:	b900afa6 	str	w6, [x29, #172]
    a674:	97ffe75b 	bl	43e0 <QSEECom_send_modified_cmd@plt>
    a678:	b9400a86 	ldr	w6, [x20, #8]
    a67c:	35001140 	cbnz	w0, a8a4 <gx_ta_send_command_ex@@Base+0x43c>
    a680:	37f81126 	tbnz	w6, #31, a8a4 <gx_ta_send_command_ex@@Base+0x43c>
    a684:	f94047a0 	ldr	x0, [x29, #136]
    a688:	f9400ad4 	ldr	x20, [x22, #16]
    a68c:	b40000a0 	cbz	x0, a6a0 <gx_ta_send_command_ex@@Base+0x238>
    a690:	91408281 	add	x1, x20, #0x20, lsl #12
    a694:	b94077a2 	ldr	w2, [x29, #116]
    a698:	91001021 	add	x1, x1, #0x4
    a69c:	97ffe769 	bl	4440 <memcpy@plt>
    a6a0:	f94043a0 	ldr	x0, [x29, #128]
    a6a4:	b40000c0 	cbz	x0, a6bc <gx_ta_send_command_ex@@Base+0x254>
    a6a8:	d28e7982 	mov	x2, #0x73cc                	// #29644
    a6ac:	91410281 	add	x1, x20, #0x40, lsl #12
    a6b0:	f2a00022 	movk	x2, #0x1, lsl #16
    a6b4:	91002021 	add	x1, x1, #0x8
    a6b8:	97ffe762 	bl	4440 <memcpy@plt>
    a6bc:	aa1603e0 	mov	x0, x22
    a6c0:	97fffce6 	bl	9a58 <device_irq_control@@Base+0x18>
    a6c4:	35000d60 	cbnz	w0, a870 <gx_ta_send_command_ex@@Base+0x408>
    a6c8:	90000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a6cc:	91240000 	add	x0, x0, #0x900
    a6d0:	97ffe77c 	bl	44c0 <pthread_mutex_unlock@plt>
    a6d4:	912d8364 	add	x4, x27, #0xb60
    a6d8:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a6dc:	9105c083 	add	x3, x4, #0x170
    a6e0:	52800060 	mov	w0, #0x3                   	// #3
    a6e4:	9109c381 	add	x1, x28, #0x270
    a6e8:	910f8042 	add	x2, x2, #0x3e0
    a6ec:	91064084 	add	x4, x4, #0x190
    a6f0:	2a1303e5 	mov	w5, w19
    a6f4:	97ffe70b 	bl	4320 <__android_log_print@plt>
    a6f8:	52800000 	mov	w0, #0x0                   	// #0
    a6fc:	f947c341 	ldr	x1, [x26, #3968]
    a700:	f94087b4 	ldr	x20, [x29, #264]
    a704:	f9400021 	ldr	x1, [x1]
    a708:	eb01029f 	cmp	x20, x1
    a70c:	540013c1 	b.ne	a984 <gx_ta_send_command_ex@@Base+0x51c>  // b.any
    a710:	a94153f3 	ldp	x19, x20, [sp, #16]
    a714:	a9425bf5 	ldp	x21, x22, [sp, #32]
    a718:	a94363f7 	ldp	x23, x24, [sp, #48]
    a71c:	a9446bf9 	ldp	x25, x26, [sp, #64]
    a720:	a94573fb 	ldp	x27, x28, [sp, #80]
    a724:	a8d17bfd 	ldp	x29, x30, [sp], #272
    a728:	d65f03c0 	ret
    a72c:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a730:	f9403fa1 	ldr	x1, [x29, #120]
    a734:	9108c042 	add	x2, x2, #0x230
    a738:	9106c323 	add	x3, x25, #0x1b0
    a73c:	528000c0 	mov	w0, #0x6                   	// #6
    a740:	97ffe6f8 	bl	4320 <__android_log_print@plt>
    a744:	34fff634 	cbz	w20, a608 <gx_ta_send_command_ex@@Base+0x1a0>
    a748:	52800019 	mov	w25, #0x0                   	// #0
    a74c:	2a1403e0 	mov	w0, w20
    a750:	97ffe728 	bl	43f0 <close@plt>
    a754:	34fff5b9 	cbz	w25, a608 <gx_ta_send_command_ex@@Base+0x1a0>
    a758:	1400003a 	b	a840 <gx_ta_send_command_ex@@Base+0x3d8>
    a75c:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a760:	f9403fa1 	ldr	x1, [x29, #120]
    a764:	9107e042 	add	x2, x2, #0x1f8
    a768:	9106c323 	add	x3, x25, #0x1b0
    a76c:	528000c0 	mov	w0, #0x6                   	// #6
    a770:	97ffe6ec 	bl	4320 <__android_log_print@plt>
    a774:	34fff4b4 	cbz	w20, a608 <gx_ta_send_command_ex@@Base+0x1a0>
    a778:	17fffff4 	b	a748 <gx_ta_send_command_ex@@Base+0x2e0>
    a77c:	f94037a0 	ldr	x0, [x29, #104]
    a780:	52800062 	mov	w2, #0x3                   	// #3
    a784:	b940a7a4 	ldr	w4, [x29, #164]
    a788:	52800023 	mov	w3, #0x1                   	// #1
    a78c:	d2800005 	mov	x5, #0x0                   	// #0
    a790:	f9400001 	ldr	x1, [x0]
    a794:	d2800000 	mov	x0, #0x0                   	// #0
    a798:	97ffe6fe 	bl	4390 <mmap@plt>
    a79c:	b100041f 	cmn	x0, #0x1
    a7a0:	aa0003e1 	mov	x1, x0
    a7a4:	54000a00 	b.eq	a8e4 <gx_ta_send_command_ex@@Base+0x47c>  // b.none
    a7a8:	f94037a0 	ldr	x0, [x29, #104]
    a7ac:	528e7a82 	mov	w2, #0x73d4                	// #29652
    a7b0:	b940a7a4 	ldr	w4, [x29, #164]
    a7b4:	72a000a2 	movk	w2, #0x5, lsl #16
    a7b8:	b90002d4 	str	w20, [x22]
    a7bc:	b9401803 	ldr	w3, [x0, #24]
    a7c0:	aa0103e0 	mov	x0, x1
    a7c4:	b90006c4 	str	w4, [x22, #4]
    a7c8:	f9000ac1 	str	x1, [x22, #16]
    a7cc:	b9000ac3 	str	w3, [x22, #8]
    a7d0:	b9001ac2 	str	w2, [x22, #24]
    a7d4:	17ffff8e 	b	a60c <gx_ta_send_command_ex@@Base+0x1a4>
    a7d8:	912d8363 	add	x3, x27, #0xb60
    a7dc:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a7e0:	528000c0 	mov	w0, #0x6                   	// #6
    a7e4:	9109c381 	add	x1, x28, #0x270
    a7e8:	910bc042 	add	x2, x2, #0x2f0
    a7ec:	9106c063 	add	x3, x3, #0x1b0
    a7f0:	97ffe6cc 	bl	4320 <__android_log_print@plt>
    a7f4:	34fff094 	cbz	w20, a604 <gx_ta_send_command_ex@@Base+0x19c>
    a7f8:	17ffffd5 	b	a74c <gx_ta_send_command_ex@@Base+0x2e4>
    a7fc:	912d8363 	add	x3, x27, #0xb60
    a800:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a804:	528000c0 	mov	w0, #0x6                   	// #6
    a808:	9109c381 	add	x1, x28, #0x270
    a80c:	91058042 	add	x2, x2, #0x160
    a810:	9105c063 	add	x3, x3, #0x170
    a814:	97ffe6c3 	bl	4320 <__android_log_print@plt>
    a818:	12800000 	mov	w0, #0xffffffff            	// #-1
    a81c:	17ffffb8 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a820:	97ffe6f4 	bl	43f0 <close@plt>
    a824:	17ffff70 	b	a5e4 <gx_ta_send_command_ex@@Base+0x17c>
    a828:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a82c:	f9403fa1 	ldr	x1, [x29, #120]
    a830:	91074042 	add	x2, x2, #0x1d0
    a834:	9106c323 	add	x3, x25, #0x1b0
    a838:	528000c0 	mov	w0, #0x6                   	// #6
    a83c:	97ffe6b9 	bl	4320 <__android_log_print@plt>
    a840:	912d8363 	add	x3, x27, #0xb60
    a844:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a848:	9109c381 	add	x1, x28, #0x270
    a84c:	910ca042 	add	x2, x2, #0x328
    a850:	9105c063 	add	x3, x3, #0x170
    a854:	52800060 	mov	w0, #0x3                   	// #3
    a858:	97ffe6b2 	bl	4320 <__android_log_print@plt>
    a85c:	90000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a860:	91240000 	add	x0, x0, #0x900
    a864:	97ffe717 	bl	44c0 <pthread_mutex_unlock@plt>
    a868:	12800000 	mov	w0, #0xffffffff            	// #-1
    a86c:	17ffffa4 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a870:	912d8363 	add	x3, x27, #0xb60
    a874:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a878:	2a0003e4 	mov	w4, w0
    a87c:	9109c381 	add	x1, x28, #0x270
    a880:	910ee042 	add	x2, x2, #0x3b8
    a884:	9105c063 	add	x3, x3, #0x170
    a888:	528000c0 	mov	w0, #0x6                   	// #6
    a88c:	97ffe6a5 	bl	4320 <__android_log_print@plt>
    a890:	90000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a894:	91240000 	add	x0, x0, #0x900
    a898:	97ffe70a 	bl	44c0 <pthread_mutex_unlock@plt>
    a89c:	12800000 	mov	w0, #0xffffffff            	// #-1
    a8a0:	17ffff97 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a8a4:	912d8363 	add	x3, x27, #0xb60
    a8a8:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a8ac:	2a0003e5 	mov	w5, w0
    a8b0:	9109c381 	add	x1, x28, #0x270
    a8b4:	910d4042 	add	x2, x2, #0x350
    a8b8:	9105c063 	add	x3, x3, #0x170
    a8bc:	2a1303e4 	mov	w4, w19
    a8c0:	52800060 	mov	w0, #0x3                   	// #3
    a8c4:	97ffe697 	bl	4320 <__android_log_print@plt>
    a8c8:	aa1603e0 	mov	x0, x22
    a8cc:	97fffc63 	bl	9a58 <device_irq_control@@Base+0x18>
    a8d0:	90000100 	adrp	x0, 2a000 <gf_dump_data_interface@@Base+0x19760>
    a8d4:	91240000 	add	x0, x0, #0x900
    a8d8:	97ffe6fa 	bl	44c0 <pthread_mutex_unlock@plt>
    a8dc:	12800000 	mov	w0, #0xffffffff            	// #-1
    a8e0:	17ffff87 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a8e4:	f9403fa1 	ldr	x1, [x29, #120]
    a8e8:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a8ec:	9106c323 	add	x3, x25, #0x1b0
    a8f0:	528000c0 	mov	w0, #0x6                   	// #6
    a8f4:	910a4042 	add	x2, x2, #0x290
    a8f8:	12800019 	mov	w25, #0xffffffff            	// #-1
    a8fc:	97ffe689 	bl	4320 <__android_log_print@plt>
    a900:	f9400ac0 	ldr	x0, [x22, #16]
    a904:	b4ffe680 	cbz	x0, a5d4 <gx_ta_send_command_ex@@Base+0x16c>
    a908:	f94077a1 	ldr	x1, [x29, #232]
    a90c:	97ffe6c5 	bl	4420 <munmap@plt>
    a910:	2a0003f9 	mov	w25, w0
    a914:	34ffe600 	cbz	w0, a5d4 <gx_ta_send_command_ex@@Base+0x16c>
    a918:	912d8363 	add	x3, x27, #0xb60
    a91c:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a920:	9109c381 	add	x1, x28, #0x270
    a924:	910ac042 	add	x2, x2, #0x2b0
    a928:	9106c063 	add	x3, x3, #0x1b0
    a92c:	2a1903e4 	mov	w4, w25
    a930:	528000c0 	mov	w0, #0x6                   	// #6
    a934:	97ffe67b 	bl	4320 <__android_log_print@plt>
    a938:	17ffff27 	b	a5d4 <gx_ta_send_command_ex@@Base+0x16c>
    a93c:	f9403fa1 	ldr	x1, [x29, #120]
    a940:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a944:	52800060 	mov	w0, #0x3                   	// #3
    a948:	9105e042 	add	x2, x2, #0x178
    a94c:	aa1403e3 	mov	x3, x20
    a950:	97ffe674 	bl	4320 <__android_log_print@plt>
    a954:	12800000 	mov	w0, #0xffffffff            	// #-1
    a958:	17ffff69 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a95c:	f9403fa1 	ldr	x1, [x29, #120]
    a960:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    a964:	9106a042 	add	x2, x2, #0x1a8
    a968:	aa1403e3 	mov	x3, x20
    a96c:	52800060 	mov	w0, #0x3                   	// #3
    a970:	97ffe66c 	bl	4320 <__android_log_print@plt>
    a974:	aa1603e0 	mov	x0, x22
    a978:	97ffe6d2 	bl	44c0 <pthread_mutex_unlock@plt>
    a97c:	12800000 	mov	w0, #0xffffffff            	// #-1
    a980:	17ffff5f 	b	a6fc <gx_ta_send_command_ex@@Base+0x294>
    a984:	97ffe64f 	bl	42c0 <__stack_chk_fail@plt>

000000000000a988 <gx_ta_send_command_ex_ree@@Base>:
    a988:	d1415fff 	sub	sp, sp, #0x57, lsl #12
    a98c:	d28e7a87 	mov	x7, #0x73d4                	// #29652
    a990:	d11083ff 	sub	sp, sp, #0x420
    a994:	f2a000a7 	movk	x7, #0x5, lsl #16
    a998:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    a99c:	910003fd 	mov	x29, sp
    a9a0:	a90153f3 	stp	x19, x20, [sp, #16]
    a9a4:	f00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    a9a8:	911203b3 	add	x19, x29, #0x480
    a9ac:	f9003fa3 	str	x3, [x29, #120]
    a9b0:	d28e8b03 	mov	x3, #0x7458                	// #29784
    a9b4:	a90573fb 	stp	x27, x28, [sp, #80]
    a9b8:	f947c288 	ldr	x8, [x20, #3968]
    a9bc:	2a0403fc 	mov	w28, w4
    a9c0:	b90067a4 	str	w4, [x29, #100]
    a9c4:	f2a000a3 	movk	x3, #0x5, lsl #16
    a9c8:	910083a4 	add	x4, x29, #0x20
    a9cc:	d10fe266 	sub	x6, x19, #0x3f8
    a9d0:	a90363f7 	stp	x23, x24, [sp, #48]
    a9d4:	8b040063 	add	x3, x3, x4
    a9d8:	2a0203f8 	mov	w24, w2
    a9dc:	aa0703e2 	mov	x2, x7
    a9e0:	f9400107 	ldr	x7, [x8]
    a9e4:	a9025bf5 	stp	x21, x22, [sp, #32]
    a9e8:	a9046bf9 	stp	x25, x26, [sp, #64]
    a9ec:	2a0003f5 	mov	w21, w0
    a9f0:	aa0103f9 	mov	x25, x1
    a9f4:	d10f8260 	sub	x0, x19, #0x3e0
    a9f8:	52800001 	mov	w1, #0x0                   	// #0
    a9fc:	f9000067 	str	x7, [x3]
    aa00:	b000005b 	adrp	x27, 13000 <gf_dump_data_interface@@Base+0x2760>
    aa04:	f9003ba5 	str	x5, [x29, #112]
    aa08:	f0000037 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    aa0c:	a9007cdf 	stp	xzr, xzr, [x6]
    aa10:	f90008df 	str	xzr, [x6, #16]
    aa14:	97ffe68f 	bl	4450 <memset@plt>
    aa18:	912d8364 	add	x4, x27, #0xb60
    aa1c:	9109c2fa 	add	x26, x23, #0x270
    aa20:	91074096 	add	x22, x4, #0x1d0
    aa24:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    aa28:	aa1a03e1 	mov	x1, x26
    aa2c:	52800060 	mov	w0, #0x3                   	// #3
    aa30:	91052042 	add	x2, x2, #0x148
    aa34:	aa1603e3 	mov	x3, x22
    aa38:	9107c084 	add	x4, x4, #0x1f0
    aa3c:	2a1503e5 	mov	w5, w21
    aa40:	97ffe638 	bl	4320 <__android_log_print@plt>
    aa44:	7140831f 	cmp	w24, #0x20, lsl #12
    aa48:	1a9f97e1 	cset	w1, hi	// hi = pmore
    aa4c:	7140839f 	cmp	w28, #0x20, lsl #12
    aa50:	1a9f97e0 	cset	w0, hi	// hi = pmore
    aa54:	2a000020 	orr	w0, w1, w0
    aa58:	35000b00 	cbnz	w0, abb8 <gx_ta_send_command_ex_ree@@Base+0x230>
    aa5c:	b4000af9 	cbz	x25, abb8 <gx_ta_send_command_ex_ree@@Base+0x230>
    aa60:	f00000e4 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    aa64:	f947ac80 	ldr	x0, [x4, #3928]
    aa68:	f9400000 	ldr	x0, [x0]
    aa6c:	b4000940 	cbz	x0, ab94 <gx_ta_send_command_ex_ree@@Base+0x20c>
    aa70:	9000011c 	adrp	x28, 2a000 <gf_dump_data_interface@@Base+0x19760>
    aa74:	f90037a4 	str	x4, [x29, #104]
    aa78:	91240380 	add	x0, x28, #0x900
    aa7c:	d10f8276 	sub	x22, x19, #0x3e0
    aa80:	d10fe27a 	sub	x26, x19, #0x3f8
    aa84:	97ffe63f 	bl	4380 <pthread_mutex_lock@plt>
    aa88:	f94037a4 	ldr	x4, [x29, #104]
    aa8c:	aa1603e0 	mov	x0, x22
    aa90:	2a1803e2 	mov	w2, w24
    aa94:	aa1903e1 	mov	x1, x25
    aa98:	f947ac84 	ldr	x4, [x4, #3928]
    aa9c:	38001415 	strb	w21, [x0], #1
    aaa0:	f9400098 	ldr	x24, [x4]
    aaa4:	97ffe667 	bl	4440 <memcpy@plt>
    aaa8:	52800802 	mov	w2, #0x40                  	// #64
    aaac:	528e7a85 	mov	w5, #0x73d4                	// #29652
    aab0:	72a000a5 	movk	w5, #0x5, lsl #16
    aab4:	aa1803e0 	mov	x0, x24
    aab8:	aa1a03e1 	mov	x1, x26
    aabc:	91002263 	add	x3, x19, #0x8
    aac0:	2a0203e4 	mov	w4, w2
    aac4:	b9040f5f 	str	wzr, [x26, #1036]
    aac8:	b9000355 	str	w21, [x26]
    aacc:	f9000756 	str	x22, [x26, #8]
    aad0:	b9001345 	str	w5, [x26, #16]
    aad4:	97ffe5cb 	bl	4200 <QSEECom_send_cmd@plt>
    aad8:	b9440f46 	ldr	w6, [x26, #1036]
    aadc:	35000800 	cbnz	w0, abdc <gx_ta_send_command_ex_ree@@Base+0x254>
    aae0:	37f807e6 	tbnz	w6, #31, abdc <gx_ta_send_command_ex_ree@@Base+0x254>
    aae4:	f9403fa0 	ldr	x0, [x29, #120]
    aae8:	b40000a0 	cbz	x0, aafc <gx_ta_send_command_ex_ree@@Base+0x174>
    aaec:	914082c1 	add	x1, x22, #0x20, lsl #12
    aaf0:	b94067a2 	ldr	w2, [x29, #100]
    aaf4:	91001021 	add	x1, x1, #0x4
    aaf8:	97ffe652 	bl	4440 <memcpy@plt>
    aafc:	f9403ba0 	ldr	x0, [x29, #112]
    ab00:	b40000e0 	cbz	x0, ab1c <gx_ta_send_command_ex_ree@@Base+0x194>
    ab04:	d10f8261 	sub	x1, x19, #0x3e0
    ab08:	d28e7982 	mov	x2, #0x73cc                	// #29644
    ab0c:	91410021 	add	x1, x1, #0x40, lsl #12
    ab10:	f2a00022 	movk	x2, #0x1, lsl #16
    ab14:	91002021 	add	x1, x1, #0x8
    ab18:	97ffe64a 	bl	4440 <memcpy@plt>
    ab1c:	91240380 	add	x0, x28, #0x900
    ab20:	97ffe668 	bl	44c0 <pthread_mutex_unlock@plt>
    ab24:	912d8364 	add	x4, x27, #0xb60
    ab28:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ab2c:	91074083 	add	x3, x4, #0x1d0
    ab30:	52800060 	mov	w0, #0x3                   	// #3
    ab34:	9109c2e1 	add	x1, x23, #0x270
    ab38:	910f8042 	add	x2, x2, #0x3e0
    ab3c:	9107c084 	add	x4, x4, #0x1f0
    ab40:	2a1503e5 	mov	w5, w21
    ab44:	97ffe5f7 	bl	4320 <__android_log_print@plt>
    ab48:	52800000 	mov	w0, #0x0                   	// #0
    ab4c:	d28e8b01 	mov	x1, #0x7458                	// #29784
    ab50:	910083a2 	add	x2, x29, #0x20
    ab54:	f2a000a1 	movk	x1, #0x5, lsl #16
    ab58:	f947c294 	ldr	x20, [x20, #3968]
    ab5c:	8b020021 	add	x1, x1, x2
    ab60:	f9400022 	ldr	x2, [x1]
    ab64:	f9400281 	ldr	x1, [x20]
    ab68:	eb01005f 	cmp	x2, x1
    ab6c:	540005e1 	b.ne	ac28 <gx_ta_send_command_ex_ree@@Base+0x2a0>  // b.any
    ab70:	a94153f3 	ldp	x19, x20, [sp, #16]
    ab74:	a9425bf5 	ldp	x21, x22, [sp, #32]
    ab78:	a94363f7 	ldp	x23, x24, [sp, #48]
    ab7c:	a9446bf9 	ldp	x25, x26, [sp, #64]
    ab80:	a94573fb 	ldp	x27, x28, [sp, #80]
    ab84:	a8c67bfd 	ldp	x29, x30, [sp], #96
    ab88:	911083ff 	add	sp, sp, #0x420
    ab8c:	91415fff 	add	sp, sp, #0x57, lsl #12
    ab90:	d65f03c0 	ret
    ab94:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ab98:	52800060 	mov	w0, #0x3                   	// #3
    ab9c:	aa1a03e1 	mov	x1, x26
    aba0:	910fe042 	add	x2, x2, #0x3f8
    aba4:	aa1603e3 	mov	x3, x22
    aba8:	f90037a4 	str	x4, [x29, #104]
    abac:	97ffe5dd 	bl	4320 <__android_log_print@plt>
    abb0:	f94037a4 	ldr	x4, [x29, #104]
    abb4:	17ffffaf 	b	aa70 <gx_ta_send_command_ex_ree@@Base+0xe8>
    abb8:	912d8363 	add	x3, x27, #0xb60
    abbc:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    abc0:	528000c0 	mov	w0, #0x6                   	// #6
    abc4:	9109c2e1 	add	x1, x23, #0x270
    abc8:	91058042 	add	x2, x2, #0x160
    abcc:	91074063 	add	x3, x3, #0x1d0
    abd0:	97ffe5d4 	bl	4320 <__android_log_print@plt>
    abd4:	12800000 	mov	w0, #0xffffffff            	// #-1
    abd8:	17ffffdd 	b	ab4c <gx_ta_send_command_ex_ree@@Base+0x1c4>
    abdc:	912d8363 	add	x3, x27, #0xb60
    abe0:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    abe4:	2a0003e5 	mov	w5, w0
    abe8:	9109c2e1 	add	x1, x23, #0x270
    abec:	910d4042 	add	x2, x2, #0x350
    abf0:	91074063 	add	x3, x3, #0x1d0
    abf4:	2a1503e4 	mov	w4, w21
    abf8:	52800060 	mov	w0, #0x3                   	// #3
    abfc:	97ffe5c9 	bl	4320 <__android_log_print@plt>
    ac00:	91240380 	add	x0, x28, #0x900
    ac04:	97ffe62f 	bl	44c0 <pthread_mutex_unlock@plt>
    ac08:	94001306 	bl	f820 <keymaster_ta_stop@@Base>
    ac0c:	d0000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac10:	d0000041 	adrp	x1, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac14:	9100c000 	add	x0, x0, #0x30
    ac18:	91012021 	add	x1, x1, #0x48
    ac1c:	97ffe585 	bl	4230 <__system_property_set@plt>
    ac20:	12800000 	mov	w0, #0xffffffff            	// #-1
    ac24:	17ffffca 	b	ab4c <gx_ta_send_command_ex_ree@@Base+0x1c4>
    ac28:	97ffe5a6 	bl	42c0 <__stack_chk_fail@plt>

000000000000ac2c <fnCa_OpenSession@@Base>:
    ac2c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    ac30:	910003fd 	mov	x29, sp
    ac34:	f9000bf3 	str	x19, [sp, #16]
    ac38:	97fffbc5 	bl	9b4c <gx_ta_start@@Base>
    ac3c:	2a0003f3 	mov	w19, w0
    ac40:	350001a0 	cbnz	w0, ac74 <fnCa_OpenSession@@Base+0x48>
    ac44:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ac48:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac4c:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac50:	9109c021 	add	x1, x1, #0x270
    ac54:	91226042 	add	x2, x2, #0x898
    ac58:	91110063 	add	x3, x3, #0x440
    ac5c:	52800060 	mov	w0, #0x3                   	// #3
    ac60:	97ffe5b0 	bl	4320 <__android_log_print@plt>
    ac64:	2a1303e0 	mov	w0, w19
    ac68:	f9400bf3 	ldr	x19, [sp, #16]
    ac6c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    ac70:	d65f03c0 	ret
    ac74:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ac78:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac7c:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ac80:	9109c021 	add	x1, x1, #0x270
    ac84:	91220042 	add	x2, x2, #0x880
    ac88:	91110063 	add	x3, x3, #0x440
    ac8c:	528000c0 	mov	w0, #0x6                   	// #6
    ac90:	97ffe5a4 	bl	4320 <__android_log_print@plt>
    ac94:	2a1303e0 	mov	w0, w19
    ac98:	f9400bf3 	ldr	x19, [sp, #16]
    ac9c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    aca0:	d65f03c0 	ret

000000000000aca4 <fnCa_CloseSession@@Base>:
    aca4:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    aca8:	910003fd 	mov	x29, sp
    acac:	f9000bf3 	str	x19, [sp, #16]
    acb0:	97fffc39 	bl	9d94 <gx_ta_stop@@Base>
    acb4:	2a0003f3 	mov	w19, w0
    acb8:	350001c0 	cbnz	w0, acf0 <fnCa_CloseSession@@Base+0x4c>
    acbc:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    acc0:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    acc4:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    acc8:	91110063 	add	x3, x3, #0x440
    accc:	9109c021 	add	x1, x1, #0x270
    acd0:	91234042 	add	x2, x2, #0x8d0
    acd4:	91008063 	add	x3, x3, #0x20
    acd8:	52800060 	mov	w0, #0x3                   	// #3
    acdc:	97ffe591 	bl	4320 <__android_log_print@plt>
    ace0:	2a1303e0 	mov	w0, w19
    ace4:	f9400bf3 	ldr	x19, [sp, #16]
    ace8:	a8c27bfd 	ldp	x29, x30, [sp], #32
    acec:	d65f03c0 	ret
    acf0:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    acf4:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    acf8:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    acfc:	91110063 	add	x3, x3, #0x440
    ad00:	9109c021 	add	x1, x1, #0x270
    ad04:	9122e042 	add	x2, x2, #0x8b8
    ad08:	91008063 	add	x3, x3, #0x20
    ad0c:	528000c0 	mov	w0, #0x6                   	// #6
    ad10:	97ffe584 	bl	4320 <__android_log_print@plt>
    ad14:	2a1303e0 	mov	w0, w19
    ad18:	f9400bf3 	ldr	x19, [sp, #16]
    ad1c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    ad20:	d65f03c0 	ret

000000000000ad24 <fnCa_Init@@Base>:
    ad24:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ad28:	aa0103e3 	mov	x3, x1
    ad2c:	52800082 	mov	w2, #0x4                   	// #4
    ad30:	910003fd 	mov	x29, sp
    ad34:	9100c3a5 	add	x5, x29, #0x30
    ad38:	f9000bf3 	str	x19, [sp, #16]
    ad3c:	52800a04 	mov	w4, #0x50                  	// #80
    ad40:	aa0103f3 	mov	x19, x1
    ad44:	b81fcca0 	str	w0, [x5, #-4]!
    ad48:	52800020 	mov	w0, #0x1                   	// #1
    ad4c:	aa0503e1 	mov	x1, x5
    ad50:	97fffca7 	bl	9fec <gx_ta_send_command@@Base>
    ad54:	6b1f001f 	cmp	w0, wzr
    ad58:	39400261 	ldrb	w1, [x19]
    ad5c:	f9400bf3 	ldr	x19, [sp, #16]
    ad60:	5a9f0020 	csinv	w0, w1, wzr, eq	// eq = none
    ad64:	a8c37bfd 	ldp	x29, x30, [sp], #48
    ad68:	d65f03c0 	ret

000000000000ad6c <fnCa_Reset@@Base>:
    ad6c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ad70:	52800040 	mov	w0, #0x2                   	// #2
    ad74:	52800002 	mov	w2, #0x0                   	// #0
    ad78:	910003fd 	mov	x29, sp
    ad7c:	f9000bf3 	str	x19, [sp, #16]
    ad80:	f00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ad84:	9100c3a1 	add	x1, x29, #0x30
    ad88:	910083a3 	add	x3, x29, #0x20
    ad8c:	52800084 	mov	w4, #0x4                   	// #4
    ad90:	b90023bf 	str	wzr, [x29, #32]
    ad94:	f947c265 	ldr	x5, [x19, #3968]
    ad98:	b81f4c3f 	str	wzr, [x1, #-12]!
    ad9c:	f94000a5 	ldr	x5, [x5]
    ada0:	f90017a5 	str	x5, [x29, #40]
    ada4:	97fffc92 	bl	9fec <gx_ta_send_command@@Base>
    ada8:	35000140 	cbnz	w0, add0 <fnCa_Reset@@Base+0x64>
    adac:	b94023a0 	ldr	w0, [x29, #32]
    adb0:	f947c273 	ldr	x19, [x19, #3968]
    adb4:	f94017a2 	ldr	x2, [x29, #40]
    adb8:	f9400261 	ldr	x1, [x19]
    adbc:	eb01005f 	cmp	x2, x1
    adc0:	540000c1 	b.ne	add8 <fnCa_Reset@@Base+0x6c>  // b.any
    adc4:	f9400bf3 	ldr	x19, [sp, #16]
    adc8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    adcc:	d65f03c0 	ret
    add0:	12800000 	mov	w0, #0xffffffff            	// #-1
    add4:	17fffff7 	b	adb0 <fnCa_Reset@@Base+0x44>
    add8:	97ffe53a 	bl	42c0 <__stack_chk_fail@plt>

000000000000addc <fnCa_SetMode@@Base>:
    addc:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ade0:	52800022 	mov	w2, #0x1                   	// #1
    ade4:	52800084 	mov	w4, #0x4                   	// #4
    ade8:	910003fd 	mov	x29, sp
    adec:	a90153f3 	stp	x19, x20, [sp, #16]
    adf0:	f00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    adf4:	9100c3a1 	add	x1, x29, #0x30
    adf8:	2a0003f4 	mov	w20, w0
    adfc:	910093a3 	add	x3, x29, #0x24
    ae00:	52800060 	mov	w0, #0x3                   	// #3
    ae04:	b90027bf 	str	wzr, [x29, #36]
    ae08:	f947c265 	ldr	x5, [x19, #3968]
    ae0c:	381f3c34 	strb	w20, [x1, #-13]!
    ae10:	f94000a5 	ldr	x5, [x5]
    ae14:	f90017a5 	str	x5, [x29, #40]
    ae18:	97fffc75 	bl	9fec <gx_ta_send_command@@Base>
    ae1c:	35000280 	cbnz	w0, ae6c <fnCa_SetMode@@Base+0x90>
    ae20:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ae24:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ae28:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ae2c:	91110063 	add	x3, x3, #0x440
    ae30:	52800060 	mov	w0, #0x3                   	// #3
    ae34:	9109c021 	add	x1, x1, #0x270
    ae38:	9123a042 	add	x2, x2, #0x8e8
    ae3c:	91010063 	add	x3, x3, #0x40
    ae40:	2a1403e4 	mov	w4, w20
    ae44:	97ffe537 	bl	4320 <__android_log_print@plt>
    ae48:	b94027a0 	ldr	w0, [x29, #36]
    ae4c:	f947c273 	ldr	x19, [x19, #3968]
    ae50:	f94017a2 	ldr	x2, [x29, #40]
    ae54:	f9400261 	ldr	x1, [x19]
    ae58:	eb01005f 	cmp	x2, x1
    ae5c:	54000201 	b.ne	ae9c <fnCa_SetMode@@Base+0xc0>  // b.any
    ae60:	a94153f3 	ldp	x19, x20, [sp, #16]
    ae64:	a8c37bfd 	ldp	x29, x30, [sp], #48
    ae68:	d65f03c0 	ret
    ae6c:	d0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ae70:	f0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ae74:	d0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ae78:	91110063 	add	x3, x3, #0x440
    ae7c:	52800060 	mov	w0, #0x3                   	// #3
    ae80:	9109c021 	add	x1, x1, #0x270
    ae84:	91242042 	add	x2, x2, #0x908
    ae88:	91010063 	add	x3, x3, #0x40
    ae8c:	2a1403e4 	mov	w4, w20
    ae90:	97ffe524 	bl	4320 <__android_log_print@plt>
    ae94:	12800000 	mov	w0, #0xffffffff            	// #-1
    ae98:	17ffffed 	b	ae4c <fnCa_SetMode@@Base+0x70>
    ae9c:	97ffe509 	bl	42c0 <__stack_chk_fail@plt>

000000000000aea0 <fnCa_GetMode@@Base>:
    aea0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    aea4:	910003fd 	mov	x29, sp
    aea8:	a90153f3 	stp	x19, x20, [sp, #16]
    aeac:	f00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    aeb0:	9100c3a1 	add	x1, x29, #0x30
    aeb4:	aa0003f4 	mov	x20, x0
    aeb8:	52800080 	mov	w0, #0x4                   	// #4
    aebc:	2a0003e2 	mov	w2, w0
    aec0:	910083a3 	add	x3, x29, #0x20
    aec4:	f947c265 	ldr	x5, [x19, #3968]
    aec8:	2a0003e4 	mov	w4, w0
    aecc:	b81f4c3f 	str	wzr, [x1, #-12]!
    aed0:	b90023bf 	str	wzr, [x29, #32]
    aed4:	f94000a5 	ldr	x5, [x5]
    aed8:	f90017a5 	str	x5, [x29, #40]
    aedc:	97fffc44 	bl	9fec <gx_ta_send_command@@Base>
    aee0:	35000160 	cbnz	w0, af0c <fnCa_GetMode@@Base+0x6c>
    aee4:	b94023a1 	ldr	w1, [x29, #32]
    aee8:	b9000281 	str	w1, [x20]
    aeec:	f947c273 	ldr	x19, [x19, #3968]
    aef0:	f94017a2 	ldr	x2, [x29, #40]
    aef4:	f9400261 	ldr	x1, [x19]
    aef8:	eb01005f 	cmp	x2, x1
    aefc:	540000c1 	b.ne	af14 <fnCa_GetMode@@Base+0x74>  // b.any
    af00:	a94153f3 	ldp	x19, x20, [sp, #16]
    af04:	a8c37bfd 	ldp	x29, x30, [sp], #48
    af08:	d65f03c0 	ret
    af0c:	12800000 	mov	w0, #0xffffffff            	// #-1
    af10:	17fffff7 	b	aeec <fnCa_GetMode@@Base+0x4c>
    af14:	97ffe4eb 	bl	42c0 <__stack_chk_fail@plt>

000000000000af18 <fnCa_SetModeCancel@@Base>:
    af18:	52800000 	mov	w0, #0x0                   	// #0
    af1c:	d65f03c0 	ret

000000000000af20 <fnCa_Register@@Base>:
    af20:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    af24:	52800103 	mov	w3, #0x8                   	// #8
    af28:	52800082 	mov	w2, #0x4                   	// #4
    af2c:	910003fd 	mov	x29, sp
    af30:	a90153f3 	stp	x19, x20, [sp, #16]
    af34:	f00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    af38:	910143a1 	add	x1, x29, #0x50
    af3c:	f90013f5 	str	x21, [sp, #32]
    af40:	9100e3b4 	add	x20, x29, #0x38
    af44:	aa0003f5 	mov	x21, x0
    af48:	52800184 	mov	w4, #0xc                   	// #12
    af4c:	f947c265 	ldr	x5, [x19, #3968]
    af50:	528000a0 	mov	w0, #0x5                   	// #5
    af54:	b81e4c23 	str	w3, [x1, #-28]!
    af58:	aa1403e3 	mov	x3, x20
    af5c:	f94000a5 	ldr	x5, [x5]
    af60:	f90027a5 	str	x5, [x29, #72]
    af64:	97fffc22 	bl	9fec <gx_ta_send_command@@Base>
    af68:	35000220 	cbnz	w0, afac <fnCa_Register@@Base+0x8c>
    af6c:	b40001d5 	cbz	x21, afa4 <fnCa_Register@@Base+0x84>
    af70:	f9400282 	ldr	x2, [x20]
    af74:	b9400a81 	ldr	w1, [x20, #8]
    af78:	f90002a2 	str	x2, [x21]
    af7c:	b9000aa1 	str	w1, [x21, #8]
    af80:	f947c273 	ldr	x19, [x19, #3968]
    af84:	f94027a2 	ldr	x2, [x29, #72]
    af88:	f9400261 	ldr	x1, [x19]
    af8c:	eb01005f 	cmp	x2, x1
    af90:	54000121 	b.ne	afb4 <fnCa_Register@@Base+0x94>  // b.any
    af94:	a94153f3 	ldp	x19, x20, [sp, #16]
    af98:	f94013f5 	ldr	x21, [sp, #32]
    af9c:	a8c57bfd 	ldp	x29, x30, [sp], #80
    afa0:	d65f03c0 	ret
    afa4:	52800000 	mov	w0, #0x0                   	// #0
    afa8:	17fffff6 	b	af80 <fnCa_Register@@Base+0x60>
    afac:	12800000 	mov	w0, #0xffffffff            	// #-1
    afb0:	17fffff4 	b	af80 <fnCa_Register@@Base+0x60>
    afb4:	97ffe4c3 	bl	42c0 <__stack_chk_fail@plt>

000000000000afb8 <fnCa_CancelRegister@@Base>:
    afb8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    afbc:	52800082 	mov	w2, #0x4                   	// #4
    afc0:	528000c0 	mov	w0, #0x6                   	// #6
    afc4:	910003fd 	mov	x29, sp
    afc8:	f9000bf3 	str	x19, [sp, #16]
    afcc:	f00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    afd0:	9100c3a1 	add	x1, x29, #0x30
    afd4:	910083a3 	add	x3, x29, #0x20
    afd8:	2a0203e4 	mov	w4, w2
    afdc:	b90023bf 	str	wzr, [x29, #32]
    afe0:	f947c273 	ldr	x19, [x19, #3968]
    afe4:	b81f4c3f 	str	wzr, [x1, #-12]!
    afe8:	f9400265 	ldr	x5, [x19]
    afec:	f90017a5 	str	x5, [x29, #40]
    aff0:	97fffbff 	bl	9fec <gx_ta_send_command@@Base>
    aff4:	6b1f001f 	cmp	w0, wzr
    aff8:	90000103 	adrp	x3, 2a000 <gf_dump_data_interface@@Base+0x19760>
    affc:	f94017a2 	ldr	x2, [x29, #40]
    b000:	f9400261 	ldr	x1, [x19]
    b004:	5a9f03e0 	csetm	w0, ne	// ne = any
    b008:	3924e07f 	strb	wzr, [x3, #2360]
    b00c:	eb01005f 	cmp	x2, x1
    b010:	54000081 	b.ne	b020 <fnCa_CancelRegister@@Base+0x68>  // b.any
    b014:	f9400bf3 	ldr	x19, [sp, #16]
    b018:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b01c:	d65f03c0 	ret
    b020:	97ffe4a8 	bl	42c0 <__stack_chk_fail@plt>

000000000000b024 <fnCa_SaveRegisteredFp@@Base>:
    b024:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
    b028:	52800205 	mov	w5, #0x10                  	// #16
    b02c:	52800104 	mov	w4, #0x8                   	// #8
    b030:	910003fd 	mov	x29, sp
    b034:	a90153f3 	stp	x19, x20, [sp, #16]
    b038:	d00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    b03c:	b0000053 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    b040:	a9025bf5 	stp	x21, x22, [sp, #32]
    b044:	91110273 	add	x19, x19, #0x440
    b048:	d0000035 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    b04c:	f947c286 	ldr	x6, [x20, #3968]
    b050:	9109c2b5 	add	x21, x21, #0x270
    b054:	f90023f9 	str	x25, [sp, #64]
    b058:	91014273 	add	x19, x19, #0x50
    b05c:	9101a3b6 	add	x22, x29, #0x68
    b060:	aa0203f9 	mov	x25, x2
    b064:	f94000c6 	ldr	x6, [x6]
    b068:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b06c:	a90363f7 	stp	x23, x24, [sp, #48]
    b070:	f9002fa0 	str	x0, [x29, #88]
    b074:	aa1303e3 	mov	x3, x19
    b078:	9124a042 	add	x2, x2, #0x928
    b07c:	aa0103f8 	mov	x24, x1
    b080:	52800060 	mov	w0, #0x3                   	// #3
    b084:	aa1503e1 	mov	x1, x21
    b088:	f9003fa6 	str	x6, [x29, #120]
    b08c:	a9007edf 	stp	xzr, xzr, [x22]
    b090:	97ffe4a4 	bl	4320 <__android_log_print@plt>
    b094:	910163a1 	add	x1, x29, #0x58
    b098:	52800102 	mov	w2, #0x8                   	// #8
    b09c:	aa1603e3 	mov	x3, x22
    b0a0:	52800204 	mov	w4, #0x10                  	// #16
    b0a4:	528000e0 	mov	w0, #0x7                   	// #7
    b0a8:	97fffbd1 	bl	9fec <gx_ta_send_command@@Base>
    b0ac:	2a0003f7 	mov	w23, w0
    b0b0:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b0b4:	f9402fa4 	ldr	x4, [x29, #88]
    b0b8:	f9403ba5 	ldr	x5, [x29, #112]
    b0bc:	52800060 	mov	w0, #0x3                   	// #3
    b0c0:	b9406fa6 	ldr	w6, [x29, #108]
    b0c4:	aa1503e1 	mov	x1, x21
    b0c8:	91256042 	add	x2, x2, #0x958
    b0cc:	aa1303e3 	mov	x3, x19
    b0d0:	97ffe494 	bl	4320 <__android_log_print@plt>
    b0d4:	350002b7 	cbnz	w23, b128 <fnCa_SaveRegisteredFp@@Base+0x104>
    b0d8:	b9406ba0 	ldr	w0, [x29, #104]
    b0dc:	51000400 	sub	w0, w0, #0x1
    b0e0:	7100101f 	cmp	w0, #0x4
    b0e4:	54000228 	b.hi	b128 <fnCa_SaveRegisteredFp@@Base+0x104>  // b.pmore
    b0e8:	b94006c1 	ldr	w1, [x22, #4]
    b0ec:	52800000 	mov	w0, #0x0                   	// #0
    b0f0:	b9000321 	str	w1, [x25]
    b0f4:	f94006c1 	ldr	x1, [x22, #8]
    b0f8:	f9000301 	str	x1, [x24]
    b0fc:	f947c294 	ldr	x20, [x20, #3968]
    b100:	f9403fa2 	ldr	x2, [x29, #120]
    b104:	f9400281 	ldr	x1, [x20]
    b108:	eb01005f 	cmp	x2, x1
    b10c:	54000121 	b.ne	b130 <fnCa_SaveRegisteredFp@@Base+0x10c>  // b.any
    b110:	a94153f3 	ldp	x19, x20, [sp, #16]
    b114:	a9425bf5 	ldp	x21, x22, [sp, #32]
    b118:	a94363f7 	ldp	x23, x24, [sp, #48]
    b11c:	f94023f9 	ldr	x25, [sp, #64]
    b120:	a8c87bfd 	ldp	x29, x30, [sp], #128
    b124:	d65f03c0 	ret
    b128:	12800000 	mov	w0, #0xffffffff            	// #-1
    b12c:	17fffff4 	b	b0fc <fnCa_SaveRegisteredFp@@Base+0xd8>
    b130:	97ffe464 	bl	42c0 <__stack_chk_fail@plt>

000000000000b134 <fnCa_GetFpNameById@@Base>:
    b134:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    b138:	aa0103e3 	mov	x3, x1
    b13c:	52800082 	mov	w2, #0x4                   	// #4
    b140:	910003fd 	mov	x29, sp
    b144:	910083a5 	add	x5, x29, #0x20
    b148:	52801004 	mov	w4, #0x80                  	// #128
    b14c:	b81fcca0 	str	w0, [x5, #-4]!
    b150:	52800100 	mov	w0, #0x8                   	// #8
    b154:	aa0503e1 	mov	x1, x5
    b158:	97fffba5 	bl	9fec <gx_ta_send_command@@Base>
    b15c:	6b1f001f 	cmp	w0, wzr
    b160:	5a9f03e0 	csetm	w0, ne	// ne = any
    b164:	a8c27bfd 	ldp	x29, x30, [sp], #32
    b168:	d65f03c0 	ret

000000000000b16c <fnCa_ChangeFpNameById@@Base>:
    b16c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    b170:	2a0203e4 	mov	w4, w2
    b174:	aa0103e3 	mov	x3, x1
    b178:	910003fd 	mov	x29, sp
    b17c:	910083a5 	add	x5, x29, #0x20
    b180:	52800082 	mov	w2, #0x4                   	// #4
    b184:	b81fcca0 	str	w0, [x5, #-4]!
    b188:	52800120 	mov	w0, #0x9                   	// #9
    b18c:	aa0503e1 	mov	x1, x5
    b190:	97fffb97 	bl	9fec <gx_ta_send_command@@Base>
    b194:	6b1f001f 	cmp	w0, wzr
    b198:	5a9f03e0 	csetm	w0, ne	// ne = any
    b19c:	a8c27bfd 	ldp	x29, x30, [sp], #32
    b1a0:	d65f03c0 	ret

000000000000b1a4 <fnCa_Recognize@@Base>:
    b1a4:	d11c83ff 	sub	sp, sp, #0x720
    b1a8:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    b1ac:	910003fd 	mov	x29, sp
    b1b0:	a9025bf5 	stp	x21, x22, [sp, #32]
    b1b4:	d00000f5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    b1b8:	aa0003f6 	mov	x22, x0
    b1bc:	a90153f3 	stp	x19, x20, [sp, #16]
    b1c0:	a9046bf9 	stp	x25, x26, [sp, #64]
    b1c4:	f947c2a4 	ldr	x4, [x21, #3968]
    b1c8:	910d63b3 	add	x19, x29, #0x358
    b1cc:	f9400019 	ldr	x25, [x0]
    b1d0:	aa0203fa 	mov	x26, x2
    b1d4:	a90573fb 	stp	x27, x28, [sp, #80]
    b1d8:	aa0303fb 	mov	x27, x3
    b1dc:	f9400083 	ldr	x3, [x4]
    b1e0:	a90363f7 	stp	x23, x24, [sp, #48]
    b1e4:	d2808402 	mov	x2, #0x420                 	// #1056
    b1e8:	2a0103f8 	mov	w24, w1
    b1ec:	aa1303e0 	mov	x0, x19
    b1f0:	52800001 	mov	w1, #0x0                   	// #0
    b1f4:	f903bfa3 	str	x3, [x29, #1912]
    b1f8:	9101a3b7 	add	x23, x29, #0x68
    b1fc:	d2805d94 	mov	x20, #0x2ec                 	// #748
    b200:	b940173c 	ldr	w28, [x25, #20]
    b204:	97ffe493 	bl	4450 <memset@plt>
    b208:	52800001 	mov	w1, #0x0                   	// #0
    b20c:	aa1403e2 	mov	x2, x20
    b210:	aa1703e0 	mov	x0, x23
    b214:	97ffe48f 	bl	4450 <memset@plt>
    b218:	b9000678 	str	w24, [x19, #4]
    b21c:	aa1903e1 	mov	x1, x25
    b220:	d37e7f02 	ubfiz	x2, x24, #2, #32
    b224:	91002260 	add	x0, x19, #0x8
    b228:	97ffe486 	bl	4440 <memcpy@plt>
    b22c:	b9001e7c 	str	w28, [x19, #28]
    b230:	f94006c3 	ldr	x3, [x22, #8]
    b234:	aa1303e0 	mov	x0, x19
    b238:	f9400ac1 	ldr	x1, [x22, #16]
    b23c:	d2808002 	mov	x2, #0x400                 	// #1024
    b240:	b9400063 	ldr	w3, [x3]
    b244:	b8020403 	str	w3, [x0], #32
    b248:	97ffe47e 	bl	4440 <memcpy@plt>
    b24c:	aa1303e1 	mov	x1, x19
    b250:	52800140 	mov	w0, #0xa                   	// #10
    b254:	52808402 	mov	w2, #0x420                 	// #1056
    b258:	aa1703e3 	mov	x3, x23
    b25c:	2a1403e4 	mov	w4, w20
    b260:	97fffb63 	bl	9fec <gx_ta_send_command@@Base>
    b264:	f00000e1 	adrp	x1, 2a000 <gf_dump_data_interface@@Base+0x19760>
    b268:	3924e03f 	strb	wzr, [x1, #2360]
    b26c:	350003e0 	cbnz	w0, b2e8 <fnCa_Recognize@@Base+0x144>
    b270:	aa1703e1 	mov	x1, x23
    b274:	aa1403e2 	mov	x2, x20
    b278:	aa1a03e0 	mov	x0, x26
    b27c:	97ffe471 	bl	4440 <memcpy@plt>
    b280:	b9000374 	str	w20, [x27]
    b284:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    b288:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    b28c:	39400345 	ldrb	w5, [x26]
    b290:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b294:	91110063 	add	x3, x3, #0x440
    b298:	52800060 	mov	w0, #0x3                   	// #3
    b29c:	9109c021 	add	x1, x1, #0x270
    b2a0:	91266042 	add	x2, x2, #0x998
    b2a4:	9101c063 	add	x3, x3, #0x70
    b2a8:	2a1403e4 	mov	w4, w20
    b2ac:	97ffe41d 	bl	4320 <__android_log_print@plt>
    b2b0:	52800000 	mov	w0, #0x0                   	// #0
    b2b4:	f947c2b5 	ldr	x21, [x21, #3968]
    b2b8:	f943bfa2 	ldr	x2, [x29, #1912]
    b2bc:	f94002a1 	ldr	x1, [x21]
    b2c0:	eb01005f 	cmp	x2, x1
    b2c4:	54000161 	b.ne	b2f0 <fnCa_Recognize@@Base+0x14c>  // b.any
    b2c8:	a94153f3 	ldp	x19, x20, [sp, #16]
    b2cc:	a9425bf5 	ldp	x21, x22, [sp, #32]
    b2d0:	a94363f7 	ldp	x23, x24, [sp, #48]
    b2d4:	a9446bf9 	ldp	x25, x26, [sp, #64]
    b2d8:	a94573fb 	ldp	x27, x28, [sp, #80]
    b2dc:	a8c67bfd 	ldp	x29, x30, [sp], #96
    b2e0:	911c83ff 	add	sp, sp, #0x720
    b2e4:	d65f03c0 	ret
    b2e8:	12800000 	mov	w0, #0xffffffff            	// #-1
    b2ec:	17fffff2 	b	b2b4 <fnCa_Recognize@@Base+0x110>
    b2f0:	97ffe3f4 	bl	42c0 <__stack_chk_fail@plt>

000000000000b2f4 <fnCa_CancelRecognize@@Base>:
    b2f4:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b2f8:	52800082 	mov	w2, #0x4                   	// #4
    b2fc:	52800160 	mov	w0, #0xb                   	// #11
    b300:	910003fd 	mov	x29, sp
    b304:	f9000bf3 	str	x19, [sp, #16]
    b308:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b30c:	9100c3a1 	add	x1, x29, #0x30
    b310:	910083a3 	add	x3, x29, #0x20
    b314:	2a0203e4 	mov	w4, w2
    b318:	b90023bf 	str	wzr, [x29, #32]
    b31c:	f947c265 	ldr	x5, [x19, #3968]
    b320:	b81f4c3f 	str	wzr, [x1, #-12]!
    b324:	f94000a5 	ldr	x5, [x5]
    b328:	f90017a5 	str	x5, [x29, #40]
    b32c:	97fffb30 	bl	9fec <gx_ta_send_command@@Base>
    b330:	f00000e1 	adrp	x1, 2a000 <gf_dump_data_interface@@Base+0x19760>
    b334:	3924e03f 	strb	wzr, [x1, #2360]
    b338:	35000140 	cbnz	w0, b360 <fnCa_CancelRecognize@@Base+0x6c>
    b33c:	b94023a0 	ldr	w0, [x29, #32]
    b340:	f947c273 	ldr	x19, [x19, #3968]
    b344:	f94017a2 	ldr	x2, [x29, #40]
    b348:	f9400261 	ldr	x1, [x19]
    b34c:	eb01005f 	cmp	x2, x1
    b350:	540000c1 	b.ne	b368 <fnCa_CancelRecognize@@Base+0x74>  // b.any
    b354:	f9400bf3 	ldr	x19, [sp, #16]
    b358:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b35c:	d65f03c0 	ret
    b360:	12800000 	mov	w0, #0xffffffff            	// #-1
    b364:	17fffff7 	b	b340 <fnCa_CancelRecognize@@Base+0x4c>
    b368:	97ffe3d6 	bl	42c0 <__stack_chk_fail@plt>

000000000000b36c <fnCa_DelFpTemplates@@Base>:
    b36c:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    b370:	910003fd 	mov	x29, sp
    b374:	a90153f3 	stp	x19, x20, [sp, #16]
    b378:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b37c:	2a0103f4 	mov	w20, w1
    b380:	a90363f7 	stp	x23, x24, [sp, #48]
    b384:	11000438 	add	w24, w1, #0x1
    b388:	f90023f9 	str	x25, [sp, #64]
    b38c:	f947c261 	ldr	x1, [x19, #3968]
    b390:	aa0003f9 	mov	x25, x0
    b394:	a9025bf5 	stp	x21, x22, [sp, #32]
    b398:	910183b6 	add	x22, x29, #0x60
    b39c:	d37e7f00 	ubfiz	x0, x24, #2, #32
    b3a0:	f9400021 	ldr	x1, [x1]
    b3a4:	f9002fa1 	str	x1, [x29, #88]
    b3a8:	b81f4edf 	str	wzr, [x22, #-12]!
    b3ac:	97ffe421 	bl	4430 <malloc@plt>
    b3b0:	aa0003f5 	mov	x21, x0
    b3b4:	aa1503f7 	mov	x23, x21
    b3b8:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    b3bc:	b9400324 	ldr	w4, [x25]
    b3c0:	91110063 	add	x3, x3, #0x440
    b3c4:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b3c8:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    b3cc:	2a1403e5 	mov	w5, w20
    b3d0:	91020063 	add	x3, x3, #0x80
    b3d4:	b80046f4 	str	w20, [x23], #4
    b3d8:	91270042 	add	x2, x2, #0x9c0
    b3dc:	9109c021 	add	x1, x1, #0x270
    b3e0:	52800060 	mov	w0, #0x3                   	// #3
    b3e4:	97ffe3cf 	bl	4320 <__android_log_print@plt>
    b3e8:	d37e7e82 	ubfiz	x2, x20, #2, #32
    b3ec:	aa1903e1 	mov	x1, x25
    b3f0:	aa1703e0 	mov	x0, x23
    b3f4:	97ffe413 	bl	4440 <memcpy@plt>
    b3f8:	52800180 	mov	w0, #0xc                   	// #12
    b3fc:	aa1503e1 	mov	x1, x21
    b400:	531e7702 	lsl	w2, w24, #2
    b404:	aa1603e3 	mov	x3, x22
    b408:	52800084 	mov	w4, #0x4                   	// #4
    b40c:	97fffaf8 	bl	9fec <gx_ta_send_command@@Base>
    b410:	2a0003f4 	mov	w20, w0
    b414:	aa1503e0 	mov	x0, x21
    b418:	97ffe41e 	bl	4490 <free@plt>
    b41c:	350001b4 	cbnz	w20, b450 <fnCa_DelFpTemplates@@Base+0xe4>
    b420:	b94057a0 	ldr	w0, [x29, #84]
    b424:	f947c273 	ldr	x19, [x19, #3968]
    b428:	f9402fa2 	ldr	x2, [x29, #88]
    b42c:	f9400261 	ldr	x1, [x19]
    b430:	eb01005f 	cmp	x2, x1
    b434:	54000121 	b.ne	b458 <fnCa_DelFpTemplates@@Base+0xec>  // b.any
    b438:	a94153f3 	ldp	x19, x20, [sp, #16]
    b43c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    b440:	a94363f7 	ldp	x23, x24, [sp, #48]
    b444:	f94023f9 	ldr	x25, [sp, #64]
    b448:	a8c67bfd 	ldp	x29, x30, [sp], #96
    b44c:	d65f03c0 	ret
    b450:	12800000 	mov	w0, #0xffffffff            	// #-1
    b454:	17fffff4 	b	b424 <fnCa_DelFpTemplates@@Base+0xb8>
    b458:	97ffe39a 	bl	42c0 <__stack_chk_fail@plt>

000000000000b45c <fnCa_GetFpTemplateIdList@@Base>:
    b45c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b460:	910003fd 	mov	x29, sp
    b464:	a9025bf5 	stp	x21, x22, [sp, #32]
    b468:	b9400036 	ldr	w22, [x1]
    b46c:	aa0003f5 	mov	x21, x0
    b470:	a90153f3 	stp	x19, x20, [sp, #16]
    b474:	110006d6 	add	w22, w22, #0x1
    b478:	aa0103f4 	mov	x20, x1
    b47c:	d37e7ec0 	ubfiz	x0, x22, #2, #32
    b480:	97ffe3ec 	bl	4430 <malloc@plt>
    b484:	aa0003f3 	mov	x19, x0
    b488:	b4000540 	cbz	x0, b530 <fnCa_GetFpTemplateIdList@@Base+0xd4>
    b48c:	528001a0 	mov	w0, #0xd                   	// #13
    b490:	aa1503e1 	mov	x1, x21
    b494:	52800082 	mov	w2, #0x4                   	// #4
    b498:	aa1303e3 	mov	x3, x19
    b49c:	531e76c4 	lsl	w4, w22, #2
    b4a0:	97fffad3 	bl	9fec <gx_ta_send_command@@Base>
    b4a4:	350003e0 	cbnz	w0, b520 <fnCa_GetFpTemplateIdList@@Base+0xc4>
    b4a8:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    b4ac:	b9400264 	ldr	w4, [x19]
    b4b0:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    b4b4:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b4b8:	91110063 	add	x3, x3, #0x440
    b4bc:	9109c021 	add	x1, x1, #0x270
    b4c0:	9127e042 	add	x2, x2, #0x9f8
    b4c4:	b9000284 	str	w4, [x20]
    b4c8:	52800060 	mov	w0, #0x3                   	// #3
    b4cc:	91028063 	add	x3, x3, #0xa0
    b4d0:	97ffe394 	bl	4320 <__android_log_print@plt>
    b4d4:	b9400282 	ldr	w2, [x20]
    b4d8:	d2800000 	mov	x0, #0x0                   	// #0
    b4dc:	52800001 	mov	w1, #0x0                   	// #0
    b4e0:	34000122 	cbz	w2, b504 <fnCa_GetFpTemplateIdList@@Base+0xa8>
    b4e4:	8b000262 	add	x2, x19, x0
    b4e8:	11000421 	add	w1, w1, #0x1
    b4ec:	b9400442 	ldr	w2, [x2, #4]
    b4f0:	b8206aa2 	str	w2, [x21, x0]
    b4f4:	91001000 	add	x0, x0, #0x4
    b4f8:	b9400282 	ldr	w2, [x20]
    b4fc:	6b02003f 	cmp	w1, w2
    b500:	54ffff23 	b.cc	b4e4 <fnCa_GetFpTemplateIdList@@Base+0x88>  // b.lo, b.ul, b.last
    b504:	aa1303e0 	mov	x0, x19
    b508:	97ffe3e2 	bl	4490 <free@plt>
    b50c:	52800000 	mov	w0, #0x0                   	// #0
    b510:	a94153f3 	ldp	x19, x20, [sp, #16]
    b514:	a9425bf5 	ldp	x21, x22, [sp, #32]
    b518:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b51c:	d65f03c0 	ret
    b520:	aa1303e0 	mov	x0, x19
    b524:	97ffe3db 	bl	4490 <free@plt>
    b528:	12800000 	mov	w0, #0xffffffff            	// #-1
    b52c:	17fffff9 	b	b510 <fnCa_GetFpTemplateIdList@@Base+0xb4>
    b530:	12800000 	mov	w0, #0xffffffff            	// #-1
    b534:	17fffff7 	b	b510 <fnCa_GetFpTemplateIdList@@Base+0xb4>

000000000000b538 <fnCa_ChangeFpPassword@@Base>:
    b538:	d12083ff 	sub	sp, sp, #0x820
    b53c:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    b540:	910003fd 	mov	x29, sp
    b544:	a90153f3 	stp	x19, x20, [sp, #16]
    b548:	d00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    b54c:	9101a3b3 	add	x19, x29, #0x68
    b550:	a9025bf5 	stp	x21, x22, [sp, #32]
    b554:	2a0303f6 	mov	w22, w3
    b558:	910193b5 	add	x21, x29, #0x64
    b55c:	f947c294 	ldr	x20, [x20, #3968]
    b560:	a9046bf9 	stp	x25, x26, [sp, #64]
    b564:	a90363f7 	stp	x23, x24, [sp, #48]
    b568:	f9400283 	ldr	x3, [x20]
    b56c:	2a0103f7 	mov	w23, w1
    b570:	aa0003fa 	mov	x26, x0
    b574:	aa0203f9 	mov	x25, x2
    b578:	52800001 	mov	w1, #0x0                   	// #0
    b57c:	d2810002 	mov	x2, #0x800                 	// #2048
    b580:	aa1303e0 	mov	x0, x19
    b584:	f90437a3 	str	x3, [x29, #2152]
    b588:	b90002bf 	str	wzr, [x21]
    b58c:	f9002fb5 	str	x21, [x29, #88]
    b590:	97ffe3b0 	bl	4450 <memset@plt>
    b594:	aa1a03e1 	mov	x1, x26
    b598:	aa1703e2 	mov	x2, x23
    b59c:	aa1303e0 	mov	x0, x19
    b5a0:	97ffe3a8 	bl	4440 <memcpy@plt>
    b5a4:	910006e0 	add	x0, x23, #0x1
    b5a8:	aa1903e1 	mov	x1, x25
    b5ac:	2a1603e2 	mov	w2, w22
    b5b0:	8b000260 	add	x0, x19, x0
    b5b4:	97ffe3a3 	bl	4440 <memcpy@plt>
    b5b8:	110006c2 	add	w2, w22, #0x1
    b5bc:	f9402fa3 	ldr	x3, [x29, #88]
    b5c0:	aa1303e1 	mov	x1, x19
    b5c4:	0b170042 	add	w2, w2, w23
    b5c8:	528001c0 	mov	w0, #0xe                   	// #14
    b5cc:	52800084 	mov	w4, #0x4                   	// #4
    b5d0:	97fffa87 	bl	9fec <gx_ta_send_command@@Base>
    b5d4:	6b1f001f 	cmp	w0, wzr
    b5d8:	f94437a2 	ldr	x2, [x29, #2152]
    b5dc:	5a9f03e0 	csetm	w0, ne	// ne = any
    b5e0:	f9400281 	ldr	x1, [x20]
    b5e4:	eb01005f 	cmp	x2, x1
    b5e8:	54000101 	b.ne	b608 <fnCa_ChangeFpPassword@@Base+0xd0>  // b.any
    b5ec:	a94153f3 	ldp	x19, x20, [sp, #16]
    b5f0:	a9425bf5 	ldp	x21, x22, [sp, #32]
    b5f4:	a94363f7 	ldp	x23, x24, [sp, #48]
    b5f8:	a9446bf9 	ldp	x25, x26, [sp, #64]
    b5fc:	a8c57bfd 	ldp	x29, x30, [sp], #80
    b600:	912083ff 	add	sp, sp, #0x820
    b604:	d65f03c0 	ret
    b608:	97ffe32e 	bl	42c0 <__stack_chk_fail@plt>

000000000000b60c <fnCa_VerifyFpPassword@@Base>:
    b60c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b610:	aa0003e4 	mov	x4, x0
    b614:	2a0103e2 	mov	w2, w1
    b618:	910003fd 	mov	x29, sp
    b61c:	f9000bf3 	str	x19, [sp, #16]
    b620:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b624:	9100c3a3 	add	x3, x29, #0x30
    b628:	aa0403e1 	mov	x1, x4
    b62c:	528001e0 	mov	w0, #0xf                   	// #15
    b630:	52800084 	mov	w4, #0x4                   	// #4
    b634:	f947c265 	ldr	x5, [x19, #3968]
    b638:	b81f4c7f 	str	wzr, [x3, #-12]!
    b63c:	f94000a5 	ldr	x5, [x5]
    b640:	f90017a5 	str	x5, [x29, #40]
    b644:	97fffa6a 	bl	9fec <gx_ta_send_command@@Base>
    b648:	35000140 	cbnz	w0, b670 <fnCa_VerifyFpPassword@@Base+0x64>
    b64c:	b94027a0 	ldr	w0, [x29, #36]
    b650:	f947c273 	ldr	x19, [x19, #3968]
    b654:	f94017a2 	ldr	x2, [x29, #40]
    b658:	f9400261 	ldr	x1, [x19]
    b65c:	eb01005f 	cmp	x2, x1
    b660:	540000c1 	b.ne	b678 <fnCa_VerifyFpPassword@@Base+0x6c>  // b.any
    b664:	f9400bf3 	ldr	x19, [sp, #16]
    b668:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b66c:	d65f03c0 	ret
    b670:	12800000 	mov	w0, #0xffffffff            	// #-1
    b674:	17fffff7 	b	b650 <fnCa_VerifyFpPassword@@Base+0x44>
    b678:	97ffe312 	bl	42c0 <__stack_chk_fail@plt>

000000000000b67c <fnCa_LoadFpAlogParams@@Base>:
    b67c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b680:	52800200 	mov	w0, #0x10                  	// #16
    b684:	d2800001 	mov	x1, #0x0                   	// #0
    b688:	910003fd 	mov	x29, sp
    b68c:	f9000bf3 	str	x19, [sp, #16]
    b690:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b694:	9100c3a3 	add	x3, x29, #0x30
    b698:	52800002 	mov	w2, #0x0                   	// #0
    b69c:	52800084 	mov	w4, #0x4                   	// #4
    b6a0:	f947c265 	ldr	x5, [x19, #3968]
    b6a4:	b81f4c7f 	str	wzr, [x3, #-12]!
    b6a8:	f94000a5 	ldr	x5, [x5]
    b6ac:	f90017a5 	str	x5, [x29, #40]
    b6b0:	97fffa4f 	bl	9fec <gx_ta_send_command@@Base>
    b6b4:	35000140 	cbnz	w0, b6dc <fnCa_LoadFpAlogParams@@Base+0x60>
    b6b8:	b94027a0 	ldr	w0, [x29, #36]
    b6bc:	f947c273 	ldr	x19, [x19, #3968]
    b6c0:	f94017a2 	ldr	x2, [x29, #40]
    b6c4:	f9400261 	ldr	x1, [x19]
    b6c8:	eb01005f 	cmp	x2, x1
    b6cc:	540000c1 	b.ne	b6e4 <fnCa_LoadFpAlogParams@@Base+0x68>  // b.any
    b6d0:	f9400bf3 	ldr	x19, [sp, #16]
    b6d4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b6d8:	d65f03c0 	ret
    b6dc:	12800000 	mov	w0, #0xffffffff            	// #-1
    b6e0:	17fffff7 	b	b6bc <fnCa_LoadFpAlogParams@@Base+0x40>
    b6e4:	97ffe2f7 	bl	42c0 <__stack_chk_fail@plt>

000000000000b6e8 <fnCa_CleanStatus@@Base>:
    b6e8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b6ec:	52800082 	mov	w2, #0x4                   	// #4
    b6f0:	52800260 	mov	w0, #0x13                  	// #19
    b6f4:	910003fd 	mov	x29, sp
    b6f8:	f9000bf3 	str	x19, [sp, #16]
    b6fc:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b700:	910083a1 	add	x1, x29, #0x20
    b704:	910093a3 	add	x3, x29, #0x24
    b708:	2a0203e4 	mov	w4, w2
    b70c:	b90023bf 	str	wzr, [x29, #32]
    b710:	f947c265 	ldr	x5, [x19, #3968]
    b714:	b90027bf 	str	wzr, [x29, #36]
    b718:	f94000a5 	ldr	x5, [x5]
    b71c:	f90017a5 	str	x5, [x29, #40]
    b720:	97fffa33 	bl	9fec <gx_ta_send_command@@Base>
    b724:	35000140 	cbnz	w0, b74c <fnCa_CleanStatus@@Base+0x64>
    b728:	b94027a0 	ldr	w0, [x29, #36]
    b72c:	f947c273 	ldr	x19, [x19, #3968]
    b730:	f94017a2 	ldr	x2, [x29, #40]
    b734:	f9400261 	ldr	x1, [x19]
    b738:	eb01005f 	cmp	x2, x1
    b73c:	540000c1 	b.ne	b754 <fnCa_CleanStatus@@Base+0x6c>  // b.any
    b740:	f9400bf3 	ldr	x19, [sp, #16]
    b744:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b748:	d65f03c0 	ret
    b74c:	12800000 	mov	w0, #0xffffffff            	// #-1
    b750:	17fffff7 	b	b72c <fnCa_CleanStatus@@Base+0x44>
    b754:	97ffe2db 	bl	42c0 <__stack_chk_fail@plt>

000000000000b758 <fnCa_CleanLBStatus@@Base>:
    b758:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    b75c:	52800082 	mov	w2, #0x4                   	// #4
    b760:	910003fd 	mov	x29, sp
    b764:	f9000bf3 	str	x19, [sp, #16]
    b768:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b76c:	9100b3a1 	add	x1, x29, #0x2c
    b770:	9100d3a3 	add	x3, x29, #0x34
    b774:	b9002fa0 	str	w0, [x29, #44]
    b778:	2a0203e4 	mov	w4, w2
    b77c:	f947c265 	ldr	x5, [x19, #3968]
    b780:	52800360 	mov	w0, #0x1b                  	// #27
    b784:	b90037bf 	str	wzr, [x29, #52]
    b788:	f94000a5 	ldr	x5, [x5]
    b78c:	f9001fa5 	str	x5, [x29, #56]
    b790:	97fffa17 	bl	9fec <gx_ta_send_command@@Base>
    b794:	35000140 	cbnz	w0, b7bc <fnCa_CleanLBStatus@@Base+0x64>
    b798:	b94037a0 	ldr	w0, [x29, #52]
    b79c:	f947c273 	ldr	x19, [x19, #3968]
    b7a0:	f9401fa2 	ldr	x2, [x29, #56]
    b7a4:	f9400261 	ldr	x1, [x19]
    b7a8:	eb01005f 	cmp	x2, x1
    b7ac:	540000c1 	b.ne	b7c4 <fnCa_CleanLBStatus@@Base+0x6c>  // b.any
    b7b0:	f9400bf3 	ldr	x19, [sp, #16]
    b7b4:	a8c47bfd 	ldp	x29, x30, [sp], #64
    b7b8:	d65f03c0 	ret
    b7bc:	12800000 	mov	w0, #0xffffffff            	// #-1
    b7c0:	17fffff7 	b	b79c <fnCa_CleanLBStatus@@Base+0x44>
    b7c4:	97ffe2bf 	bl	42c0 <__stack_chk_fail@plt>

000000000000b7c8 <fnCa_GetStatus@@Base>:
    b7c8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b7cc:	aa0003e3 	mov	x3, x0
    b7d0:	52800002 	mov	w2, #0x0                   	// #0
    b7d4:	910003fd 	mov	x29, sp
    b7d8:	f9000bf3 	str	x19, [sp, #16]
    b7dc:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b7e0:	9100c3a1 	add	x1, x29, #0x30
    b7e4:	52800240 	mov	w0, #0x12                  	// #18
    b7e8:	52800144 	mov	w4, #0xa                   	// #10
    b7ec:	f947c273 	ldr	x19, [x19, #3968]
    b7f0:	b81f4c3f 	str	wzr, [x1, #-12]!
    b7f4:	f9400265 	ldr	x5, [x19]
    b7f8:	f90017a5 	str	x5, [x29, #40]
    b7fc:	97fff9fc 	bl	9fec <gx_ta_send_command@@Base>
    b800:	6b1f001f 	cmp	w0, wzr
    b804:	f94017a2 	ldr	x2, [x29, #40]
    b808:	5a9f03e0 	csetm	w0, ne	// ne = any
    b80c:	f9400261 	ldr	x1, [x19]
    b810:	eb01005f 	cmp	x2, x1
    b814:	54000081 	b.ne	b824 <fnCa_GetStatus@@Base+0x5c>  // b.any
    b818:	f9400bf3 	ldr	x19, [sp, #16]
    b81c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b820:	d65f03c0 	ret
    b824:	97ffe2a7 	bl	42c0 <__stack_chk_fail@plt>

000000000000b828 <fnCa_ConfirmStatus@@Base>:
    b828:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b82c:	52800082 	mov	w2, #0x4                   	// #4
    b830:	910003fd 	mov	x29, sp
    b834:	a90153f3 	stp	x19, x20, [sp, #16]
    b838:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b83c:	9100c3a1 	add	x1, x29, #0x30
    b840:	aa0003f4 	mov	x20, x0
    b844:	910083a3 	add	x3, x29, #0x20
    b848:	528004c0 	mov	w0, #0x26                  	// #38
    b84c:	2a0203e4 	mov	w4, w2
    b850:	f947c265 	ldr	x5, [x19, #3968]
    b854:	b81f4c3f 	str	wzr, [x1, #-12]!
    b858:	b90023bf 	str	wzr, [x29, #32]
    b85c:	f94000a5 	ldr	x5, [x5]
    b860:	f90017a5 	str	x5, [x29, #40]
    b864:	97fff9e2 	bl	9fec <gx_ta_send_command@@Base>
    b868:	35000160 	cbnz	w0, b894 <fnCa_ConfirmStatus@@Base+0x6c>
    b86c:	b94023a1 	ldr	w1, [x29, #32]
    b870:	39000281 	strb	w1, [x20]
    b874:	f947c273 	ldr	x19, [x19, #3968]
    b878:	f94017a2 	ldr	x2, [x29, #40]
    b87c:	f9400261 	ldr	x1, [x19]
    b880:	eb01005f 	cmp	x2, x1
    b884:	540000c1 	b.ne	b89c <fnCa_ConfirmStatus@@Base+0x74>  // b.any
    b888:	a94153f3 	ldp	x19, x20, [sp, #16]
    b88c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b890:	d65f03c0 	ret
    b894:	12800000 	mov	w0, #0xffffffff            	// #-1
    b898:	17fffff7 	b	b874 <fnCa_ConfirmStatus@@Base+0x4c>
    b89c:	97ffe289 	bl	42c0 <__stack_chk_fail@plt>

000000000000b8a0 <fnCa_GetLBStatus@@Base>:
    b8a0:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    b8a4:	52800082 	mov	w2, #0x4                   	// #4
    b8a8:	910003fd 	mov	x29, sp
    b8ac:	a90153f3 	stp	x19, x20, [sp, #16]
    b8b0:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b8b4:	910103a1 	add	x1, x29, #0x40
    b8b8:	f90013f5 	str	x21, [sp, #32]
    b8bc:	2a0203e4 	mov	w4, w2
    b8c0:	9100c3a3 	add	x3, x29, #0x30
    b8c4:	aa0003f5 	mov	x21, x0
    b8c8:	f947c265 	ldr	x5, [x19, #3968]
    b8cc:	52800340 	mov	w0, #0x1a                  	// #26
    b8d0:	b81f4c3f 	str	wzr, [x1, #-12]!
    b8d4:	b90033bf 	str	wzr, [x29, #48]
    b8d8:	f94000a5 	ldr	x5, [x5]
    b8dc:	f9001fa5 	str	x5, [x29, #56]
    b8e0:	97fff9c3 	bl	9fec <gx_ta_send_command@@Base>
    b8e4:	2a0003f4 	mov	w20, w0
    b8e8:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    b8ec:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    b8f0:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b8f4:	91110063 	add	x3, x3, #0x440
    b8f8:	b94033a4 	ldr	w4, [x29, #48]
    b8fc:	52800060 	mov	w0, #0x3                   	// #3
    b900:	9109c021 	add	x1, x1, #0x270
    b904:	91284042 	add	x2, x2, #0xa10
    b908:	91030063 	add	x3, x3, #0xc0
    b90c:	97ffe285 	bl	4320 <__android_log_print@plt>
    b910:	350001b4 	cbnz	w20, b944 <fnCa_GetLBStatus@@Base+0xa4>
    b914:	b94033a1 	ldr	w1, [x29, #48]
    b918:	52800000 	mov	w0, #0x0                   	// #0
    b91c:	390002a1 	strb	w1, [x21]
    b920:	f947c273 	ldr	x19, [x19, #3968]
    b924:	f9401fa2 	ldr	x2, [x29, #56]
    b928:	f9400261 	ldr	x1, [x19]
    b92c:	eb01005f 	cmp	x2, x1
    b930:	540000e1 	b.ne	b94c <fnCa_GetLBStatus@@Base+0xac>  // b.any
    b934:	a94153f3 	ldp	x19, x20, [sp, #16]
    b938:	f94013f5 	ldr	x21, [sp, #32]
    b93c:	a8c47bfd 	ldp	x29, x30, [sp], #64
    b940:	d65f03c0 	ret
    b944:	12800000 	mov	w0, #0xffffffff            	// #-1
    b948:	17fffff6 	b	b920 <fnCa_GetLBStatus@@Base+0x80>
    b94c:	97ffe25d 	bl	42c0 <__stack_chk_fail@plt>

000000000000b950 <fnCa_GetForceValue@@Base>:
    b950:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    b954:	52800082 	mov	w2, #0x4                   	// #4
    b958:	910003fd 	mov	x29, sp
    b95c:	a90153f3 	stp	x19, x20, [sp, #16]
    b960:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    b964:	9100c3a1 	add	x1, x29, #0x30
    b968:	aa0003f4 	mov	x20, x0
    b96c:	910083a3 	add	x3, x29, #0x20
    b970:	52800380 	mov	w0, #0x1c                  	// #28
    b974:	2a0203e4 	mov	w4, w2
    b978:	f947c265 	ldr	x5, [x19, #3968]
    b97c:	b81f4c3f 	str	wzr, [x1, #-12]!
    b980:	b90023bf 	str	wzr, [x29, #32]
    b984:	f94000a5 	ldr	x5, [x5]
    b988:	f90017a5 	str	x5, [x29, #40]
    b98c:	97fff998 	bl	9fec <gx_ta_send_command@@Base>
    b990:	35000160 	cbnz	w0, b9bc <fnCa_GetForceValue@@Base+0x6c>
    b994:	b94023a1 	ldr	w1, [x29, #32]
    b998:	39000281 	strb	w1, [x20]
    b99c:	f947c273 	ldr	x19, [x19, #3968]
    b9a0:	f94017a2 	ldr	x2, [x29, #40]
    b9a4:	f9400261 	ldr	x1, [x19]
    b9a8:	eb01005f 	cmp	x2, x1
    b9ac:	540000c1 	b.ne	b9c4 <fnCa_GetForceValue@@Base+0x74>  // b.any
    b9b0:	a94153f3 	ldp	x19, x20, [sp, #16]
    b9b4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    b9b8:	d65f03c0 	ret
    b9bc:	12800000 	mov	w0, #0xffffffff            	// #-1
    b9c0:	17fffff7 	b	b99c <fnCa_GetForceValue@@Base+0x4c>
    b9c4:	97ffe23f 	bl	42c0 <__stack_chk_fail@plt>

000000000000b9c8 <fnCa_ali_invoke_command@@Base>:
    b9c8:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    b9cc:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    b9d0:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    b9d4:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    b9d8:	91110063 	add	x3, x3, #0x440
    b9dc:	910003fd 	mov	x29, sp
    b9e0:	9109c021 	add	x1, x1, #0x270
    b9e4:	91220042 	add	x2, x2, #0x880
    b9e8:	91038063 	add	x3, x3, #0xe0
    b9ec:	52800060 	mov	w0, #0x3                   	// #3
    b9f0:	97ffe24c 	bl	4320 <__android_log_print@plt>
    b9f4:	12800000 	mov	w0, #0xffffffff            	// #-1
    b9f8:	a8c17bfd 	ldp	x29, x30, [sp], #16
    b9fc:	d65f03c0 	ret

000000000000ba00 <fnCa_GetShareDate@@Base>:
    ba00:	d108c3ff 	sub	sp, sp, #0x230
    ba04:	52800001 	mov	w1, #0x0                   	// #0
    ba08:	d2804082 	mov	x2, #0x204                 	// #516
    ba0c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    ba10:	910003fd 	mov	x29, sp
    ba14:	a90153f3 	stp	x19, x20, [sp, #16]
    ba18:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ba1c:	910103a3 	add	x3, x29, #0x40
    ba20:	aa0303e0 	mov	x0, x3
    ba24:	f90017a3 	str	x3, [x29, #40]
    ba28:	b9003fbf 	str	wzr, [x29, #60]
    ba2c:	9100f3b4 	add	x20, x29, #0x3c
    ba30:	f947c273 	ldr	x19, [x19, #3968]
    ba34:	f9400264 	ldr	x4, [x19]
    ba38:	f90127a4 	str	x4, [x29, #584]
    ba3c:	97ffe285 	bl	4450 <memset@plt>
    ba40:	f94017a3 	ldr	x3, [x29, #40]
    ba44:	aa1403e1 	mov	x1, x20
    ba48:	52800082 	mov	w2, #0x4                   	// #4
    ba4c:	52800500 	mov	w0, #0x28                  	// #40
    ba50:	52804084 	mov	w4, #0x204                 	// #516
    ba54:	97fff966 	bl	9fec <gx_ta_send_command@@Base>
    ba58:	f94127a2 	ldr	x2, [x29, #584]
    ba5c:	52800000 	mov	w0, #0x0                   	// #0
    ba60:	f9400261 	ldr	x1, [x19]
    ba64:	eb01005f 	cmp	x2, x1
    ba68:	540000a1 	b.ne	ba7c <fnCa_GetShareDate@@Base+0x7c>  // b.any
    ba6c:	a94153f3 	ldp	x19, x20, [sp, #16]
    ba70:	a8c27bfd 	ldp	x29, x30, [sp], #32
    ba74:	9108c3ff 	add	sp, sp, #0x230
    ba78:	d65f03c0 	ret
    ba7c:	97ffe211 	bl	42c0 <__stack_chk_fail@plt>

000000000000ba80 <fnCa_ESDCheck@@Base>:
    ba80:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ba84:	52800082 	mov	w2, #0x4                   	// #4
    ba88:	910003fd 	mov	x29, sp
    ba8c:	a90153f3 	stp	x19, x20, [sp, #16]
    ba90:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ba94:	9100c3a1 	add	x1, x29, #0x30
    ba98:	aa0003f4 	mov	x20, x0
    ba9c:	910083a3 	add	x3, x29, #0x20
    baa0:	528002a0 	mov	w0, #0x15                  	// #21
    baa4:	2a0203e4 	mov	w4, w2
    baa8:	f947c265 	ldr	x5, [x19, #3968]
    baac:	b81f4c3f 	str	wzr, [x1, #-12]!
    bab0:	b90023bf 	str	wzr, [x29, #32]
    bab4:	f94000a5 	ldr	x5, [x5]
    bab8:	f90017a5 	str	x5, [x29, #40]
    babc:	97fff94c 	bl	9fec <gx_ta_send_command@@Base>
    bac0:	35000160 	cbnz	w0, baec <fnCa_ESDCheck@@Base+0x6c>
    bac4:	b94023a1 	ldr	w1, [x29, #32]
    bac8:	39000281 	strb	w1, [x20]
    bacc:	f947c273 	ldr	x19, [x19, #3968]
    bad0:	f94017a2 	ldr	x2, [x29, #40]
    bad4:	f9400261 	ldr	x1, [x19]
    bad8:	eb01005f 	cmp	x2, x1
    badc:	540000c1 	b.ne	baf4 <fnCa_ESDCheck@@Base+0x74>  // b.any
    bae0:	a94153f3 	ldp	x19, x20, [sp, #16]
    bae4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bae8:	d65f03c0 	ret
    baec:	12800000 	mov	w0, #0xffffffff            	// #-1
    baf0:	17fffff7 	b	bacc <fnCa_ESDCheck@@Base+0x4c>
    baf4:	97ffe1f3 	bl	42c0 <__stack_chk_fail@plt>

000000000000baf8 <fnCa_FWIsUpdate@@Base>:
    baf8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bafc:	52800082 	mov	w2, #0x4                   	// #4
    bb00:	910003fd 	mov	x29, sp
    bb04:	a90153f3 	stp	x19, x20, [sp, #16]
    bb08:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bb0c:	9100c3a1 	add	x1, x29, #0x30
    bb10:	aa0003f4 	mov	x20, x0
    bb14:	910083a3 	add	x3, x29, #0x20
    bb18:	528002c0 	mov	w0, #0x16                  	// #22
    bb1c:	2a0203e4 	mov	w4, w2
    bb20:	f947c265 	ldr	x5, [x19, #3968]
    bb24:	b81f4c3f 	str	wzr, [x1, #-12]!
    bb28:	b90023bf 	str	wzr, [x29, #32]
    bb2c:	f94000a5 	ldr	x5, [x5]
    bb30:	f90017a5 	str	x5, [x29, #40]
    bb34:	97fff92e 	bl	9fec <gx_ta_send_command@@Base>
    bb38:	35000160 	cbnz	w0, bb64 <fnCa_FWIsUpdate@@Base+0x6c>
    bb3c:	b94023a1 	ldr	w1, [x29, #32]
    bb40:	39000281 	strb	w1, [x20]
    bb44:	f947c273 	ldr	x19, [x19, #3968]
    bb48:	f94017a2 	ldr	x2, [x29, #40]
    bb4c:	f9400261 	ldr	x1, [x19]
    bb50:	eb01005f 	cmp	x2, x1
    bb54:	540000c1 	b.ne	bb6c <fnCa_FWIsUpdate@@Base+0x74>  // b.any
    bb58:	a94153f3 	ldp	x19, x20, [sp, #16]
    bb5c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bb60:	d65f03c0 	ret
    bb64:	12800000 	mov	w0, #0xffffffff            	// #-1
    bb68:	17fffff7 	b	bb44 <fnCa_FWIsUpdate@@Base+0x4c>
    bb6c:	97ffe1d5 	bl	42c0 <__stack_chk_fail@plt>

000000000000bb70 <fnCa_FWUpdatePre@@Base>:
    bb70:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bb74:	52800082 	mov	w2, #0x4                   	// #4
    bb78:	910003fd 	mov	x29, sp
    bb7c:	a90153f3 	stp	x19, x20, [sp, #16]
    bb80:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bb84:	9100c3a1 	add	x1, x29, #0x30
    bb88:	aa0003f4 	mov	x20, x0
    bb8c:	910083a3 	add	x3, x29, #0x20
    bb90:	528002e0 	mov	w0, #0x17                  	// #23
    bb94:	2a0203e4 	mov	w4, w2
    bb98:	f947c265 	ldr	x5, [x19, #3968]
    bb9c:	b81f4c3f 	str	wzr, [x1, #-12]!
    bba0:	b90023bf 	str	wzr, [x29, #32]
    bba4:	f94000a5 	ldr	x5, [x5]
    bba8:	f90017a5 	str	x5, [x29, #40]
    bbac:	97fff910 	bl	9fec <gx_ta_send_command@@Base>
    bbb0:	f00000e1 	adrp	x1, 2a000 <gf_dump_data_interface@@Base+0x19760>
    bbb4:	3924e03f 	strb	wzr, [x1, #2360]
    bbb8:	35000160 	cbnz	w0, bbe4 <fnCa_FWUpdatePre@@Base+0x74>
    bbbc:	b94023a1 	ldr	w1, [x29, #32]
    bbc0:	39000281 	strb	w1, [x20]
    bbc4:	f947c273 	ldr	x19, [x19, #3968]
    bbc8:	f94017a2 	ldr	x2, [x29, #40]
    bbcc:	f9400261 	ldr	x1, [x19]
    bbd0:	eb01005f 	cmp	x2, x1
    bbd4:	540000c1 	b.ne	bbec <fnCa_FWUpdatePre@@Base+0x7c>  // b.any
    bbd8:	a94153f3 	ldp	x19, x20, [sp, #16]
    bbdc:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bbe0:	d65f03c0 	ret
    bbe4:	12800000 	mov	w0, #0xffffffff            	// #-1
    bbe8:	17fffff7 	b	bbc4 <fnCa_FWUpdatePre@@Base+0x54>
    bbec:	97ffe1b5 	bl	42c0 <__stack_chk_fail@plt>

000000000000bbf0 <fnCa_FWUpdate@@Base>:
    bbf0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bbf4:	52800022 	mov	w2, #0x1                   	// #1
    bbf8:	52800084 	mov	w4, #0x4                   	// #4
    bbfc:	910003fd 	mov	x29, sp
    bc00:	a90153f3 	stp	x19, x20, [sp, #16]
    bc04:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bc08:	aa0003f4 	mov	x20, x0
    bc0c:	9100c3a1 	add	x1, x29, #0x30
    bc10:	52800300 	mov	w0, #0x18                  	// #24
    bc14:	910093a3 	add	x3, x29, #0x24
    bc18:	b90027bf 	str	wzr, [x29, #36]
    bc1c:	f947c265 	ldr	x5, [x19, #3968]
    bc20:	39400286 	ldrb	w6, [x20]
    bc24:	381f3c26 	strb	w6, [x1, #-13]!
    bc28:	f94000a5 	ldr	x5, [x5]
    bc2c:	f90017a5 	str	x5, [x29, #40]
    bc30:	97fff8ef 	bl	9fec <gx_ta_send_command@@Base>
    bc34:	35000160 	cbnz	w0, bc60 <fnCa_FWUpdate@@Base+0x70>
    bc38:	b94027a1 	ldr	w1, [x29, #36]
    bc3c:	39000281 	strb	w1, [x20]
    bc40:	f947c273 	ldr	x19, [x19, #3968]
    bc44:	f94017a2 	ldr	x2, [x29, #40]
    bc48:	f9400261 	ldr	x1, [x19]
    bc4c:	eb01005f 	cmp	x2, x1
    bc50:	540000c1 	b.ne	bc68 <fnCa_FWUpdate@@Base+0x78>  // b.any
    bc54:	a94153f3 	ldp	x19, x20, [sp, #16]
    bc58:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bc5c:	d65f03c0 	ret
    bc60:	12800000 	mov	w0, #0xffffffff            	// #-1
    bc64:	17fffff7 	b	bc40 <fnCa_FWUpdate@@Base+0x50>
    bc68:	97ffe196 	bl	42c0 <__stack_chk_fail@plt>

000000000000bc6c <fnCa_DownloadCFG@@Base>:
    bc6c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bc70:	52800082 	mov	w2, #0x4                   	// #4
    bc74:	910003fd 	mov	x29, sp
    bc78:	a90153f3 	stp	x19, x20, [sp, #16]
    bc7c:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bc80:	9100c3a1 	add	x1, x29, #0x30
    bc84:	aa0003f4 	mov	x20, x0
    bc88:	910083a3 	add	x3, x29, #0x20
    bc8c:	52800320 	mov	w0, #0x19                  	// #25
    bc90:	2a0203e4 	mov	w4, w2
    bc94:	f947c265 	ldr	x5, [x19, #3968]
    bc98:	b81f4c3f 	str	wzr, [x1, #-12]!
    bc9c:	b90023bf 	str	wzr, [x29, #32]
    bca0:	f94000a5 	ldr	x5, [x5]
    bca4:	f90017a5 	str	x5, [x29, #40]
    bca8:	97fff8d1 	bl	9fec <gx_ta_send_command@@Base>
    bcac:	35000160 	cbnz	w0, bcd8 <fnCa_DownloadCFG@@Base+0x6c>
    bcb0:	b94023a1 	ldr	w1, [x29, #32]
    bcb4:	39000281 	strb	w1, [x20]
    bcb8:	f947c273 	ldr	x19, [x19, #3968]
    bcbc:	f94017a2 	ldr	x2, [x29, #40]
    bcc0:	f9400261 	ldr	x1, [x19]
    bcc4:	eb01005f 	cmp	x2, x1
    bcc8:	540000c1 	b.ne	bce0 <fnCa_DownloadCFG@@Base+0x74>  // b.any
    bccc:	a94153f3 	ldp	x19, x20, [sp, #16]
    bcd0:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bcd4:	d65f03c0 	ret
    bcd8:	12800000 	mov	w0, #0xffffffff            	// #-1
    bcdc:	17fffff7 	b	bcb8 <fnCa_DownloadCFG@@Base+0x4c>
    bce0:	97ffe178 	bl	42c0 <__stack_chk_fail@plt>

000000000000bce4 <fnCa_Calib@@Base>:
    bce4:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bce8:	b0000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    bcec:	d0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    bcf0:	910003fd 	mov	x29, sp
    bcf4:	a90153f3 	stp	x19, x20, [sp, #16]
    bcf8:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bcfc:	9100c3b4 	add	x20, x29, #0x30
    bd00:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    bd04:	91110063 	add	x3, x3, #0x440
    bd08:	9109c021 	add	x1, x1, #0x270
    bd0c:	9128e042 	add	x2, x2, #0xa38
    bd10:	f947c264 	ldr	x4, [x19, #3968]
    bd14:	91040063 	add	x3, x3, #0x100
    bd18:	52800060 	mov	w0, #0x3                   	// #3
    bd1c:	b81f4e9f 	str	wzr, [x20, #-12]!
    bd20:	b90023bf 	str	wzr, [x29, #32]
    bd24:	f9400084 	ldr	x4, [x4]
    bd28:	f90017a4 	str	x4, [x29, #40]
    bd2c:	97ffe17d 	bl	4320 <__android_log_print@plt>
    bd30:	52800082 	mov	w2, #0x4                   	// #4
    bd34:	52800280 	mov	w0, #0x14                  	// #20
    bd38:	aa1403e1 	mov	x1, x20
    bd3c:	910083a3 	add	x3, x29, #0x20
    bd40:	2a0203e4 	mov	w4, w2
    bd44:	97fff8aa 	bl	9fec <gx_ta_send_command@@Base>
    bd48:	35000140 	cbnz	w0, bd70 <fnCa_Calib@@Base+0x8c>
    bd4c:	b94023a0 	ldr	w0, [x29, #32]
    bd50:	f947c273 	ldr	x19, [x19, #3968]
    bd54:	f94017a2 	ldr	x2, [x29, #40]
    bd58:	f9400261 	ldr	x1, [x19]
    bd5c:	eb01005f 	cmp	x2, x1
    bd60:	540000c1 	b.ne	bd78 <fnCa_Calib@@Base+0x94>  // b.any
    bd64:	a94153f3 	ldp	x19, x20, [sp, #16]
    bd68:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bd6c:	d65f03c0 	ret
    bd70:	12800000 	mov	w0, #0xffffffff            	// #-1
    bd74:	17fffff7 	b	bd50 <fnCa_Calib@@Base+0x6c>
    bd78:	97ffe152 	bl	42c0 <__stack_chk_fail@plt>

000000000000bd7c <fnCa_DriverTest@@Base>:
    bd7c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    bd80:	52800082 	mov	w2, #0x4                   	// #4
    bd84:	52800220 	mov	w0, #0x11                  	// #17
    bd88:	910003fd 	mov	x29, sp
    bd8c:	f9000bf3 	str	x19, [sp, #16]
    bd90:	d00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    bd94:	9100c3a1 	add	x1, x29, #0x30
    bd98:	910083a3 	add	x3, x29, #0x20
    bd9c:	2a0203e4 	mov	w4, w2
    bda0:	b90023bf 	str	wzr, [x29, #32]
    bda4:	f947c265 	ldr	x5, [x19, #3968]
    bda8:	b81f4c3f 	str	wzr, [x1, #-12]!
    bdac:	f94000a5 	ldr	x5, [x5]
    bdb0:	f90017a5 	str	x5, [x29, #40]
    bdb4:	97fff88e 	bl	9fec <gx_ta_send_command@@Base>
    bdb8:	35000140 	cbnz	w0, bde0 <fnCa_DriverTest@@Base+0x64>
    bdbc:	b94023a0 	ldr	w0, [x29, #32]
    bdc0:	f947c273 	ldr	x19, [x19, #3968]
    bdc4:	f94017a2 	ldr	x2, [x29, #40]
    bdc8:	f9400261 	ldr	x1, [x19]
    bdcc:	eb01005f 	cmp	x2, x1
    bdd0:	540000c1 	b.ne	bde8 <fnCa_DriverTest@@Base+0x6c>  // b.any
    bdd4:	f9400bf3 	ldr	x19, [sp, #16]
    bdd8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    bddc:	d65f03c0 	ret
    bde0:	12800000 	mov	w0, #0xffffffff            	// #-1
    bde4:	17fffff7 	b	bdc0 <fnCa_DriverTest@@Base+0x44>
    bde8:	97ffe136 	bl	42c0 <__stack_chk_fail@plt>

000000000000bdec <fnCa_Fido_Recognize@@Base>:
    bdec:	d11dc3ff 	sub	sp, sp, #0x770
    bdf0:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    bdf4:	910003fd 	mov	x29, sp
    bdf8:	a9025bf5 	stp	x21, x22, [sp, #32]
    bdfc:	d00000f5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    be00:	d0000036 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    be04:	a90153f3 	stp	x19, x20, [sp, #16]
    be08:	a90363f7 	stp	x23, x24, [sp, #48]
    be0c:	f947c2a5 	ldr	x5, [x21, #3968]
    be10:	9101c3b7 	add	x23, x29, #0x70
    be14:	a90573fb 	stp	x27, x28, [sp, #80]
    be18:	d2805d94 	mov	x20, #0x2ec                 	// #748
    be1c:	aa0003fb 	mov	x27, x0
    be20:	f90033a3 	str	x3, [x29, #96]
    be24:	2a0103fc 	mov	w28, w1
    be28:	f94000a3 	ldr	x3, [x5]
    be2c:	52800001 	mov	w1, #0x0                   	// #0
    be30:	aa0203f8 	mov	x24, x2
    be34:	aa1703e0 	mov	x0, x23
    be38:	aa1403e2 	mov	x2, x20
    be3c:	b0000053 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    be40:	a9046bf9 	stp	x25, x26, [sp, #64]
    be44:	f90037a4 	str	x4, [x29, #104]
    be48:	91110273 	add	x19, x19, #0x440
    be4c:	f9400379 	ldr	x25, [x27]
    be50:	9109c2d6 	add	x22, x22, #0x270
    be54:	f903e7a3 	str	x3, [x29, #1992]
    be58:	97ffe17e 	bl	4450 <memset@plt>
    be5c:	91044273 	add	x19, x19, #0x110
    be60:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    be64:	aa1303e3 	mov	x3, x19
    be68:	aa1603e1 	mov	x1, x22
    be6c:	91296042 	add	x2, x2, #0xa58
    be70:	52800060 	mov	w0, #0x3                   	// #3
    be74:	910d83ba 	add	x26, x29, #0x360
    be78:	97ffe12a 	bl	4320 <__android_log_print@plt>
    be7c:	f94037a4 	ldr	x4, [x29, #104]
    be80:	91108343 	add	x3, x26, #0x420
    be84:	aa1903e1 	mov	x1, x25
    be88:	d37e7f82 	ubfiz	x2, x28, #2, #32
    be8c:	91002340 	add	x0, x26, #0x8
    be90:	b900075c 	str	w28, [x26, #4]
    be94:	a9402c8a 	ldp	x10, x11, [x4]
    be98:	a9412488 	ldp	x8, x9, [x4, #16]
    be9c:	a9421c86 	ldp	x6, x7, [x4, #32]
    bea0:	a943348c 	ldp	x12, x13, [x4, #48]
    bea4:	f9402084 	ldr	x4, [x4, #64]
    bea8:	a9002c6a 	stp	x10, x11, [x3]
    beac:	a9012468 	stp	x8, x9, [x3, #16]
    beb0:	a9021c66 	stp	x6, x7, [x3, #32]
    beb4:	a903346c 	stp	x12, x13, [x3, #48]
    beb8:	f9023344 	str	x4, [x26, #1120]
    bebc:	97ffe161 	bl	4440 <memcpy@plt>
    bec0:	f9400763 	ldr	x3, [x27, #8]
    bec4:	aa1a03e0 	mov	x0, x26
    bec8:	f9400b61 	ldr	x1, [x27, #16]
    becc:	52800044 	mov	w4, #0x2                   	// #2
    bed0:	d2808002 	mov	x2, #0x400                 	// #1024
    bed4:	b9001f44 	str	w4, [x26, #28]
    bed8:	b9400063 	ldr	w3, [x3]
    bedc:	b8020403 	str	w3, [x0], #32
    bee0:	97ffe158 	bl	4440 <memcpy@plt>
    bee4:	aa1a03e1 	mov	x1, x26
    bee8:	52800140 	mov	w0, #0xa                   	// #10
    beec:	52808d02 	mov	w2, #0x468                 	// #1128
    bef0:	aa1703e3 	mov	x3, x23
    bef4:	2a1403e4 	mov	w4, w20
    bef8:	97fff83d 	bl	9fec <gx_ta_send_command@@Base>
    befc:	f00000e1 	adrp	x1, 2a000 <gf_dump_data_interface@@Base+0x19760>
    bf00:	3924e03f 	strb	wzr, [x1, #2360]
    bf04:	350003a0 	cbnz	w0, bf78 <fnCa_Fido_Recognize@@Base+0x18c>
    bf08:	aa1703e1 	mov	x1, x23
    bf0c:	aa1403e2 	mov	x2, x20
    bf10:	aa1803e0 	mov	x0, x24
    bf14:	97ffe14b 	bl	4440 <memcpy@plt>
    bf18:	f94033a0 	ldr	x0, [x29, #96]
    bf1c:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    bf20:	aa1603e1 	mov	x1, x22
    bf24:	9129e042 	add	x2, x2, #0xa78
    bf28:	aa1303e3 	mov	x3, x19
    bf2c:	2a1403e4 	mov	w4, w20
    bf30:	b9000014 	str	w20, [x0]
    bf34:	52800060 	mov	w0, #0x3                   	// #3
    bf38:	39400305 	ldrb	w5, [x24]
    bf3c:	97ffe0f9 	bl	4320 <__android_log_print@plt>
    bf40:	52800000 	mov	w0, #0x0                   	// #0
    bf44:	f947c2b5 	ldr	x21, [x21, #3968]
    bf48:	f943e7a2 	ldr	x2, [x29, #1992]
    bf4c:	f94002a1 	ldr	x1, [x21]
    bf50:	eb01005f 	cmp	x2, x1
    bf54:	54000221 	b.ne	bf98 <fnCa_Fido_Recognize@@Base+0x1ac>  // b.any
    bf58:	a94153f3 	ldp	x19, x20, [sp, #16]
    bf5c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    bf60:	a94363f7 	ldp	x23, x24, [sp, #48]
    bf64:	a9446bf9 	ldp	x25, x26, [sp, #64]
    bf68:	a94573fb 	ldp	x27, x28, [sp, #80]
    bf6c:	a8c67bfd 	ldp	x29, x30, [sp], #96
    bf70:	911dc3ff 	add	sp, sp, #0x770
    bf74:	d65f03c0 	ret
    bf78:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    bf7c:	52800060 	mov	w0, #0x3                   	// #3
    bf80:	aa1603e1 	mov	x1, x22
    bf84:	912aa042 	add	x2, x2, #0xaa8
    bf88:	aa1303e3 	mov	x3, x19
    bf8c:	97ffe0e5 	bl	4320 <__android_log_print@plt>
    bf90:	12800000 	mov	w0, #0xffffffff            	// #-1
    bf94:	17ffffec 	b	bf44 <fnCa_Fido_Recognize@@Base+0x158>
    bf98:	97ffe0ca 	bl	42c0 <__stack_chk_fail@plt>

000000000000bf9c <fnCa_GetBitmap@@Base>:
    bf9c:	d11183ff 	sub	sp, sp, #0x460
    bfa0:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    bfa4:	910003fd 	mov	x29, sp
    bfa8:	a90153f3 	stp	x19, x20, [sp, #16]
    bfac:	d00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    bfb0:	a9025bf5 	stp	x21, x22, [sp, #32]
    bfb4:	b0000055 	adrp	x21, 14000 <gf_dump_data_interface@@Base+0x3760>
    bfb8:	f9003ba2 	str	x2, [x29, #112]
    bfbc:	f947c285 	ldr	x5, [x20, #3968]
    bfc0:	911102b6 	add	x22, x21, #0x440
    bfc4:	a90363f7 	stp	x23, x24, [sp, #48]
    bfc8:	d0000038 	adrp	x24, 11000 <gf_dump_data_interface@@Base+0x760>
    bfcc:	910243b7 	add	x23, x29, #0x90
    bfd0:	a9046bf9 	stp	x25, x26, [sp, #64]
    bfd4:	f94000a5 	ldr	x5, [x5]
    bfd8:	9104c2d6 	add	x22, x22, #0x130
    bfdc:	9109c319 	add	x25, x24, #0x270
    bfe0:	b0000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    bfe4:	a90573fb 	stp	x27, x28, [sp, #80]
    bfe8:	f9003fa1 	str	x1, [x29, #120]
    bfec:	2a0303fc 	mov	w28, w3
    bff0:	aa0003fb 	mov	x27, x0
    bff4:	aa1903e1 	mov	x1, x25
    bff8:	52800060 	mov	w0, #0x3                   	// #3
    bffc:	912b4042 	add	x2, x2, #0xad0
    c000:	aa1603e3 	mov	x3, x22
    c004:	f9025fa5 	str	x5, [x29, #1208]
    c008:	a9007eff 	stp	xzr, xzr, [x23]
    c00c:	f9000aff 	str	xzr, [x23, #16]
    c010:	97ffe0c4 	bl	4320 <__android_log_print@plt>
    c014:	71000f9f 	cmp	w28, #0x3
    c018:	54001108 	b.hi	c238 <fnCa_GetBitmap@@Base+0x29c>  // b.pmore
    c01c:	910223b3 	add	x19, x29, #0x88
    c020:	9102a3ba 	add	x26, x29, #0xa8
    c024:	52800023 	mov	w3, #0x1                   	// #1
    c028:	52800001 	mov	w1, #0x0                   	// #0
    c02c:	d2808182 	mov	x2, #0x40c                 	// #1036
    c030:	aa1a03e0 	mov	x0, x26
    c034:	b9000263 	str	w3, [x19]
    c038:	b900067c 	str	w28, [x19, #4]
    c03c:	97ffe105 	bl	4450 <memset@plt>
    c040:	528003a0 	mov	w0, #0x1d                  	// #29
    c044:	aa1303e1 	mov	x1, x19
    c048:	52800102 	mov	w2, #0x8                   	// #8
    c04c:	aa1a03e3 	mov	x3, x26
    c050:	52808184 	mov	w4, #0x40c                 	// #1036
    c054:	97fff7e6 	bl	9fec <gx_ta_send_command@@Base>
    c058:	35000060 	cbnz	w0, c064 <fnCa_GetBitmap@@Base+0xc8>
    c05c:	b9400b46 	ldr	w6, [x26, #8]
    c060:	350002e6 	cbnz	w6, c0bc <fnCa_GetBitmap@@Base+0x120>
    c064:	911102a3 	add	x3, x21, #0x440
    c068:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c06c:	52800060 	mov	w0, #0x3                   	// #3
    c070:	9109c301 	add	x1, x24, #0x270
    c074:	912c6042 	add	x2, x2, #0xb18
    c078:	9104c063 	add	x3, x3, #0x130
    c07c:	12800013 	mov	w19, #0xffffffff            	// #-1
    c080:	97ffe0a8 	bl	4320 <__android_log_print@plt>
    c084:	f947c294 	ldr	x20, [x20, #3968]
    c088:	2a1303e0 	mov	w0, w19
    c08c:	f9425fa2 	ldr	x2, [x29, #1208]
    c090:	f9400281 	ldr	x1, [x20]
    c094:	eb01005f 	cmp	x2, x1
    c098:	54000f61 	b.ne	c284 <fnCa_GetBitmap@@Base+0x2e8>  // b.any
    c09c:	a94153f3 	ldp	x19, x20, [sp, #16]
    c0a0:	a9425bf5 	ldp	x21, x22, [sp, #32]
    c0a4:	a94363f7 	ldp	x23, x24, [sp, #48]
    c0a8:	a9446bf9 	ldp	x25, x26, [sp, #64]
    c0ac:	a94573fb 	ldp	x27, x28, [sp, #80]
    c0b0:	a8c67bfd 	ldp	x29, x30, [sp], #96
    c0b4:	911183ff 	add	sp, sp, #0x460
    c0b8:	d65f03c0 	ret
    c0bc:	b9400344 	ldr	w4, [x26]
    c0c0:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c0c4:	b9400745 	ldr	w5, [x26, #4]
    c0c8:	aa1603e3 	mov	x3, x22
    c0cc:	52800060 	mov	w0, #0x3                   	// #3
    c0d0:	aa1903e1 	mov	x1, x25
    c0d4:	912d0042 	add	x2, x2, #0xb40
    c0d8:	97ffe092 	bl	4320 <__android_log_print@plt>
    c0dc:	b9400343 	ldr	w3, [x26]
    c0e0:	7100087f 	cmp	w3, #0x2
    c0e4:	54000ba0 	b.eq	c258 <fnCa_GetBitmap@@Base+0x2bc>  // b.none
    c0e8:	52800016 	mov	w22, #0x0                   	// #0
    c0ec:	d2800019 	mov	x25, #0x0                   	// #0
    c0f0:	91003340 	add	x0, x26, #0xc
    c0f4:	f90037a0 	str	x0, [x29, #104]
    c0f8:	7100087f 	cmp	w3, #0x2
    c0fc:	540002c1 	b.ne	c154 <fnCa_GetBitmap@@Base+0x1b8>  // b.any
    c100:	52800001 	mov	w1, #0x0                   	// #0
    c104:	d2808182 	mov	x2, #0x40c                 	// #1036
    c108:	aa1a03e0 	mov	x0, x26
    c10c:	97ffe0d1 	bl	4450 <memset@plt>
    c110:	528003a0 	mov	w0, #0x1d                  	// #29
    c114:	aa1303e1 	mov	x1, x19
    c118:	52800102 	mov	w2, #0x8                   	// #8
    c11c:	aa1a03e3 	mov	x3, x26
    c120:	52808184 	mov	w4, #0x40c                 	// #1036
    c124:	97fff7b2 	bl	9fec <gx_ta_send_command@@Base>
    c128:	350004a0 	cbnz	w0, c1bc <fnCa_GetBitmap@@Base+0x220>
    c12c:	b9400b5c 	ldr	w28, [x26, #8]
    c130:	3400047c 	cbz	w28, c1bc <fnCa_GetBitmap@@Base+0x220>
    c134:	b9400743 	ldr	w3, [x26, #4]
    c138:	35000263 	cbnz	w3, c184 <fnCa_GetBitmap@@Base+0x1e8>
    c13c:	b9400343 	ldr	w3, [x26]
    c140:	71000c7f 	cmp	w3, #0x3
    c144:	54fffda1 	b.ne	c0f8 <fnCa_GetBitmap@@Base+0x15c>  // b.any
    c148:	f9403fa0 	ldr	x0, [x29, #120]
    c14c:	f9000379 	str	x25, [x27]
    c150:	b900001c 	str	w28, [x0]
    c154:	b9400660 	ldr	w0, [x19, #4]
    c158:	7100081f 	cmp	w0, #0x2
    c15c:	540003a0 	b.eq	c1d0 <fnCa_GetBitmap@@Base+0x234>  // b.none
    c160:	911102a3 	add	x3, x21, #0x440
    c164:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c168:	9109c301 	add	x1, x24, #0x270
    c16c:	91300042 	add	x2, x2, #0xc00
    c170:	9104c063 	add	x3, x3, #0x130
    c174:	52800060 	mov	w0, #0x3                   	// #3
    c178:	52800013 	mov	w19, #0x0                   	// #0
    c17c:	97ffe069 	bl	4320 <__android_log_print@plt>
    c180:	17ffffc1 	b	c084 <fnCa_GetBitmap@@Base+0xe8>
    c184:	f94037a1 	ldr	x1, [x29, #104]
    c188:	2a0303e2 	mov	w2, w3
    c18c:	8b36c320 	add	x0, x25, w22, sxtw
    c190:	0b0302d6 	add	w22, w22, w3
    c194:	97ffe0ab 	bl	4440 <memcpy@plt>
    c198:	6b16039f 	cmp	w28, w22
    c19c:	54fffd02 	b.cs	c13c <fnCa_GetBitmap@@Base+0x1a0>  // b.hs, b.nlast
    c1a0:	911102a3 	add	x3, x21, #0x440
    c1a4:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c1a8:	9109c301 	add	x1, x24, #0x270
    c1ac:	912e4042 	add	x2, x2, #0xb90
    c1b0:	9104c063 	add	x3, x3, #0x130
    c1b4:	52800060 	mov	w0, #0x3                   	// #3
    c1b8:	97ffe05a 	bl	4320 <__android_log_print@plt>
    c1bc:	12800013 	mov	w19, #0xffffffff            	// #-1
    c1c0:	b4fff639 	cbz	x25, c084 <fnCa_GetBitmap@@Base+0xe8>
    c1c4:	aa1903e0 	mov	x0, x25
    c1c8:	97ffe0b2 	bl	4490 <free@plt>
    c1cc:	17ffffae 	b	c084 <fnCa_GetBitmap@@Base+0xe8>
    c1d0:	aa1303e1 	mov	x1, x19
    c1d4:	528000a5 	mov	w5, #0x5                   	// #5
    c1d8:	52800102 	mov	w2, #0x8                   	// #8
    c1dc:	aa1703e3 	mov	x3, x23
    c1e0:	52800304 	mov	w4, #0x18                  	// #24
    c1e4:	528003a0 	mov	w0, #0x1d                  	// #29
    c1e8:	b9000265 	str	w5, [x19]
    c1ec:	97fff780 	bl	9fec <gx_ta_send_command@@Base>
    c1f0:	2a0003f3 	mov	w19, w0
    c1f4:	911102a3 	add	x3, x21, #0x440
    c1f8:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c1fc:	b94002e4 	ldr	w4, [x23]
    c200:	52800060 	mov	w0, #0x3                   	// #3
    c204:	b94006e5 	ldr	w5, [x23, #4]
    c208:	9109c301 	add	x1, x24, #0x270
    c20c:	912f2042 	add	x2, x2, #0xbc8
    c210:	9104c063 	add	x3, x3, #0x130
    c214:	97ffe043 	bl	4320 <__android_log_print@plt>
    c218:	35fffd33 	cbnz	w19, c1bc <fnCa_GetBitmap@@Base+0x220>
    c21c:	f9403ba3 	ldr	x3, [x29, #112]
    c220:	b4fffa03 	cbz	x3, c160 <fnCa_GetBitmap@@Base+0x1c4>
    c224:	a94006e0 	ldp	x0, x1, [x23]
    c228:	f9400ae2 	ldr	x2, [x23, #16]
    c22c:	f9000862 	str	x2, [x3, #16]
    c230:	a9000460 	stp	x0, x1, [x3]
    c234:	17ffffcb 	b	c160 <fnCa_GetBitmap@@Base+0x1c4>
    c238:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c23c:	aa1903e1 	mov	x1, x25
    c240:	912bc042 	add	x2, x2, #0xaf0
    c244:	aa1603e3 	mov	x3, x22
    c248:	52800060 	mov	w0, #0x3                   	// #3
    c24c:	12800013 	mov	w19, #0xffffffff            	// #-1
    c250:	97ffe034 	bl	4320 <__android_log_print@plt>
    c254:	17ffff8c 	b	c084 <fnCa_GetBitmap@@Base+0xe8>
    c258:	b9400b40 	ldr	w0, [x26, #8]
    c25c:	f90037a3 	str	x3, [x29, #104]
    c260:	97ffe074 	bl	4430 <malloc@plt>
    c264:	b9400756 	ldr	w22, [x26, #4]
    c268:	91003341 	add	x1, x26, #0xc
    c26c:	aa0003f9 	mov	x25, x0
    c270:	aa1603e2 	mov	x2, x22
    c274:	97ffe073 	bl	4440 <memcpy@plt>
    c278:	f94037a3 	ldr	x3, [x29, #104]
    c27c:	b9000263 	str	w3, [x19]
    c280:	17ffff9c 	b	c0f0 <fnCa_GetBitmap@@Base+0x154>
    c284:	97ffe00f 	bl	42c0 <__stack_chk_fail@plt>

000000000000c288 <fnCa_reg_from_bmp@@Base>:
    c288:	d11103ff 	sub	sp, sp, #0x440
    c28c:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    c290:	910003fd 	mov	x29, sp
    c294:	a9046bf9 	stp	x25, x26, [sp, #64]
    c298:	b00000fa 	adrp	x26, 29000 <gf_dump_data_interface@@Base+0x18760>
    c29c:	aa0203f9 	mov	x25, x2
    c2a0:	a9025bf5 	stp	x21, x22, [sp, #32]
    c2a4:	a90153f3 	stp	x19, x20, [sp, #16]
    c2a8:	f947c343 	ldr	x3, [x26, #3968]
    c2ac:	910223b4 	add	x20, x29, #0x88
    c2b0:	9101e3b6 	add	x22, x29, #0x78
    c2b4:	2a0103f5 	mov	w21, w1
    c2b8:	a90573fb 	stp	x27, x28, [sp, #80]
    c2bc:	f9400063 	ldr	x3, [x3]
    c2c0:	aa0003fb 	mov	x27, x0
    c2c4:	52800001 	mov	w1, #0x0                   	// #0
    c2c8:	aa1403e0 	mov	x0, x20
    c2cc:	d2808182 	mov	x2, #0x40c                 	// #1036
    c2d0:	f9024fa3 	str	x3, [x29, #1176]
    c2d4:	a90363f7 	stp	x23, x24, [sp, #48]
    c2d8:	97ffe05e 	bl	4450 <memset@plt>
    c2dc:	a9007edf 	stp	xzr, xzr, [x22]
    c2e0:	b4000d3b 	cbz	x27, c484 <fnCa_reg_from_bmp@@Base+0x1fc>
    c2e4:	93407ea2 	sxtw	x2, w21
    c2e8:	f90037a2 	str	x2, [x29, #104]
    c2ec:	aa0203e0 	mov	x0, x2
    c2f0:	b000003c 	adrp	x28, 11000 <gf_dump_data_interface@@Base+0x760>
    c2f4:	91003297 	add	x23, x20, #0xc
    c2f8:	52808013 	mov	w19, #0x400                 	// #1024
    c2fc:	97ffe04d 	bl	4430 <malloc@plt>
    c300:	aa0003f8 	mov	x24, x0
    c304:	f94037a2 	ldr	x2, [x29, #104]
    c308:	aa1b03e1 	mov	x1, x27
    c30c:	97ffe04d 	bl	4440 <memcpy@plt>
    c310:	90000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    c314:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c318:	91110003 	add	x3, x0, #0x440
    c31c:	2a1503e4 	mov	w4, w21
    c320:	91050063 	add	x3, x3, #0x140
    c324:	9109c381 	add	x1, x28, #0x270
    c328:	91312042 	add	x2, x2, #0xc48
    c32c:	52800060 	mov	w0, #0x3                   	// #3
    c330:	97ffdffc 	bl	4320 <__android_log_print@plt>
    c334:	b9000693 	str	w19, [x20, #4]
    c338:	52800023 	mov	w3, #0x1                   	// #1
    c33c:	aa1803e1 	mov	x1, x24
    c340:	d2808002 	mov	x2, #0x400                 	// #1024
    c344:	aa1703e0 	mov	x0, x23
    c348:	b9000283 	str	w3, [x20]
    c34c:	b9000a95 	str	w21, [x20, #8]
    c350:	97ffe03c 	bl	4440 <memcpy@plt>
    c354:	528003c0 	mov	w0, #0x1e                  	// #30
    c358:	aa1403e1 	mov	x1, x20
    c35c:	52808182 	mov	w2, #0x40c                 	// #1036
    c360:	aa1603e3 	mov	x3, x22
    c364:	52800204 	mov	w4, #0x10                  	// #16
    c368:	97fff721 	bl	9fec <gx_ta_send_command@@Base>
    c36c:	35000840 	cbnz	w0, c474 <fnCa_reg_from_bmp@@Base+0x1ec>
    c370:	6b1302bf 	cmp	w21, w19
    c374:	2a1303fb 	mov	w27, w19
    c378:	5400024c 	b.gt	c3c0 <fnCa_reg_from_bmp@@Base+0x138>
    c37c:	14000018 	b	c3dc <fnCa_reg_from_bmp@@Base+0x154>
    c380:	52800063 	mov	w3, #0x3                   	// #3
    c384:	2a1303e2 	mov	w2, w19
    c388:	aa1703e0 	mov	x0, x23
    c38c:	8b3bc301 	add	x1, x24, w27, sxtw
    c390:	b9000283 	str	w3, [x20]
    c394:	0b1b027b 	add	w27, w19, w27
    c398:	b9000693 	str	w19, [x20, #4]
    c39c:	97ffe029 	bl	4440 <memcpy@plt>
    c3a0:	528003c0 	mov	w0, #0x1e                  	// #30
    c3a4:	aa1403e1 	mov	x1, x20
    c3a8:	52808182 	mov	w2, #0x40c                 	// #1036
    c3ac:	aa1603e3 	mov	x3, x22
    c3b0:	52800204 	mov	w4, #0x10                  	// #16
    c3b4:	97fff70e 	bl	9fec <gx_ta_send_command@@Base>
    c3b8:	6b1b02bf 	cmp	w21, w27
    c3bc:	5400010d 	b.le	c3dc <fnCa_reg_from_bmp@@Base+0x154>
    c3c0:	4b1b02b3 	sub	w19, w21, w27
    c3c4:	7110027f 	cmp	w19, #0x400
    c3c8:	54fffdcd 	b.le	c380 <fnCa_reg_from_bmp@@Base+0xf8>
    c3cc:	d2808002 	mov	x2, #0x400                 	// #1024
    c3d0:	52800043 	mov	w3, #0x2                   	// #2
    c3d4:	2a0203f3 	mov	w19, w2
    c3d8:	17ffffec 	b	c388 <fnCa_reg_from_bmp@@Base+0x100>
    c3dc:	b4000439 	cbz	x25, c460 <fnCa_reg_from_bmp@@Base+0x1d8>
    c3e0:	b94002c4 	ldr	w4, [x22]
    c3e4:	b94006c5 	ldr	w5, [x22, #4]
    c3e8:	b9400ac6 	ldr	w6, [x22, #8]
    c3ec:	b9400ec7 	ldr	w7, [x22, #12]
    c3f0:	b9000324 	str	w4, [x25]
    c3f4:	b9000725 	str	w5, [x25, #4]
    c3f8:	b9000b26 	str	w6, [x25, #8]
    c3fc:	b9000f27 	str	w7, [x25, #12]
    c400:	90000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    c404:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c408:	91110003 	add	x3, x0, #0x440
    c40c:	9109c381 	add	x1, x28, #0x270
    c410:	9131e042 	add	x2, x2, #0xc78
    c414:	91050063 	add	x3, x3, #0x140
    c418:	52800060 	mov	w0, #0x3                   	// #3
    c41c:	97ffdfc1 	bl	4320 <__android_log_print@plt>
    c420:	aa1803e0 	mov	x0, x24
    c424:	97ffe01b 	bl	4490 <free@plt>
    c428:	52800000 	mov	w0, #0x0                   	// #0
    c42c:	f947c35a 	ldr	x26, [x26, #3968]
    c430:	f9424fa2 	ldr	x2, [x29, #1176]
    c434:	f9400341 	ldr	x1, [x26]
    c438:	eb01005f 	cmp	x2, x1
    c43c:	540003a1 	b.ne	c4b0 <fnCa_reg_from_bmp@@Base+0x228>  // b.any
    c440:	a94153f3 	ldp	x19, x20, [sp, #16]
    c444:	a9425bf5 	ldp	x21, x22, [sp, #32]
    c448:	a94363f7 	ldp	x23, x24, [sp, #48]
    c44c:	a9446bf9 	ldp	x25, x26, [sp, #64]
    c450:	a94573fb 	ldp	x27, x28, [sp, #80]
    c454:	a8c67bfd 	ldp	x29, x30, [sp], #96
    c458:	911103ff 	add	sp, sp, #0x440
    c45c:	d65f03c0 	ret
    c460:	b94002c4 	ldr	w4, [x22]
    c464:	b94006c5 	ldr	w5, [x22, #4]
    c468:	b9400ac6 	ldr	w6, [x22, #8]
    c46c:	b9400ec7 	ldr	w7, [x22, #12]
    c470:	17ffffe4 	b	c400 <fnCa_reg_from_bmp@@Base+0x178>
    c474:	aa1803e0 	mov	x0, x24
    c478:	97ffe006 	bl	4490 <free@plt>
    c47c:	12800000 	mov	w0, #0xffffffff            	// #-1
    c480:	17ffffeb 	b	c42c <fnCa_reg_from_bmp@@Base+0x1a4>
    c484:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    c488:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    c48c:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c490:	91110063 	add	x3, x3, #0x440
    c494:	52800060 	mov	w0, #0x3                   	// #3
    c498:	9109c021 	add	x1, x1, #0x270
    c49c:	91308042 	add	x2, x2, #0xc20
    c4a0:	91050063 	add	x3, x3, #0x140
    c4a4:	97ffdf9f 	bl	4320 <__android_log_print@plt>
    c4a8:	12800000 	mov	w0, #0xffffffff            	// #-1
    c4ac:	17ffffe0 	b	c42c <fnCa_reg_from_bmp@@Base+0x1a4>
    c4b0:	97ffdf84 	bl	42c0 <__stack_chk_fail@plt>

000000000000c4b4 <fnCa_reg_from_bmp_in_enrollpic_test@@Base>:
    c4b4:	d11143ff 	sub	sp, sp, #0x450
    c4b8:	52800001 	mov	w1, #0x0                   	// #0
    c4bc:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    c4c0:	910003fd 	mov	x29, sp
    c4c4:	a90153f3 	stp	x19, x20, [sp, #16]
    c4c8:	a90363f7 	stp	x23, x24, [sp, #48]
    c4cc:	f9003ba2 	str	x2, [x29, #112]
    c4d0:	b00000e2 	adrp	x2, 29000 <gf_dump_data_interface@@Base+0x18760>
    c4d4:	910263b3 	add	x19, x29, #0x98
    c4d8:	910223b7 	add	x23, x29, #0x88
    c4dc:	a9046bf9 	stp	x25, x26, [sp, #64]
    c4e0:	f947c043 	ldr	x3, [x2, #3968]
    c4e4:	aa0003f9 	mov	x25, x0
    c4e8:	d2808182 	mov	x2, #0x40c                 	// #1036
    c4ec:	aa1303e0 	mov	x0, x19
    c4f0:	a9025bf5 	stp	x21, x22, [sp, #32]
    c4f4:	f9400063 	ldr	x3, [x3]
    c4f8:	a90573fb 	stp	x27, x28, [sp, #80]
    c4fc:	f90257a3 	str	x3, [x29, #1192]
    c500:	97ffdfd4 	bl	4450 <memset@plt>
    c504:	a9007eff 	stp	xzr, xzr, [x23]
    c508:	b40018b9 	cbz	x25, c81c <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x368>
    c50c:	aa1903e1 	mov	x1, x25
    c510:	b0000020 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    c514:	9109c018 	add	x24, x0, #0x270
    c518:	b8404436 	ldr	w22, [x1], #4
    c51c:	f90037a1 	str	x1, [x29, #104]
    c520:	93407ec2 	sxtw	x2, w22
    c524:	f9003fa2 	str	x2, [x29, #120]
    c528:	aa0203e0 	mov	x0, x2
    c52c:	97ffdfc1 	bl	4430 <malloc@plt>
    c530:	aa0003fa 	mov	x26, x0
    c534:	f94037a1 	ldr	x1, [x29, #104]
    c538:	f9403fa2 	ldr	x2, [x29, #120]
    c53c:	97ffdfc1 	bl	4440 <memcpy@plt>
    c540:	90000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    c544:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c548:	91110015 	add	x21, x0, #0x440
    c54c:	aa1803e1 	mov	x1, x24
    c550:	910582b5 	add	x21, x21, #0x160
    c554:	91334042 	add	x2, x2, #0xcd0
    c558:	aa1503e3 	mov	x3, x21
    c55c:	2a1603e4 	mov	w4, w22
    c560:	52800060 	mov	w0, #0x3                   	// #3
    c564:	97ffdf6f 	bl	4320 <__android_log_print@plt>
    c568:	110012c0 	add	w0, w22, #0x4
    c56c:	1100101c 	add	w28, w0, #0x4
    c570:	b860cb34 	ldr	w20, [x25, w0, sxtw]
    c574:	93407e80 	sxtw	x0, w20
    c578:	f9003fa0 	str	x0, [x29, #120]
    c57c:	97ffdfad 	bl	4430 <malloc@plt>
    c580:	aa0003fb 	mov	x27, x0
    c584:	f9403fa2 	ldr	x2, [x29, #120]
    c588:	8b3cc321 	add	x1, x25, w28, sxtw
    c58c:	97ffdfad 	bl	4440 <memcpy@plt>
    c590:	6b1f029f 	cmp	w20, wzr
    c594:	540010ad 	b.le	c7a8 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x2f4>
    c598:	90000059 	adrp	x25, 14000 <gf_dump_data_interface@@Base+0x3760>
    c59c:	d280001c 	mov	x28, #0x0                   	// #0
    c5a0:	9133e339 	add	x25, x25, #0xcf8
    c5a4:	387c6b64 	ldrb	w4, [x27, x28]
    c5a8:	52800060 	mov	w0, #0x3                   	// #3
    c5ac:	aa1803e1 	mov	x1, x24
    c5b0:	aa1903e2 	mov	x2, x25
    c5b4:	aa1503e3 	mov	x3, x21
    c5b8:	9100079c 	add	x28, x28, #0x1
    c5bc:	97ffdf59 	bl	4320 <__android_log_print@plt>
    c5c0:	6b1c029f 	cmp	w20, w28
    c5c4:	54ffff0c 	b.gt	c5a4 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0xf0>
    c5c8:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c5cc:	2a1403e4 	mov	w4, w20
    c5d0:	aa1503e3 	mov	x3, x21
    c5d4:	aa1803e1 	mov	x1, x24
    c5d8:	9134c042 	add	x2, x2, #0xd30
    c5dc:	52800060 	mov	w0, #0x3                   	// #3
    c5e0:	90000059 	adrp	x25, 14000 <gf_dump_data_interface@@Base+0x3760>
    c5e4:	aa1303fc 	mov	x28, x19
    c5e8:	97ffdf4e 	bl	4320 <__android_log_print@plt>
    c5ec:	91342339 	add	x25, x25, #0xd08
    c5f0:	52800001 	mov	w1, #0x0                   	// #0
    c5f4:	d2808182 	mov	x2, #0x40c                 	// #1036
    c5f8:	aa1303e0 	mov	x0, x19
    c5fc:	97ffdf95 	bl	4450 <memset@plt>
    c600:	b9000674 	str	w20, [x19, #4]
    c604:	51000694 	sub	w20, w20, #0x1
    c608:	f9403fa2 	ldr	x2, [x29, #120]
    c60c:	91000694 	add	x20, x20, #0x1
    c610:	528000e3 	mov	w3, #0x7                   	// #7
    c614:	91003260 	add	x0, x19, #0xc
    c618:	aa1b03e1 	mov	x1, x27
    c61c:	8b140274 	add	x20, x19, x20
    c620:	b9000263 	str	w3, [x19]
    c624:	b9000a76 	str	w22, [x19, #8]
    c628:	97ffdf86 	bl	4440 <memcpy@plt>
    c62c:	39403385 	ldrb	w5, [x28, #12]
    c630:	4b130384 	sub	w4, w28, w19
    c634:	52800060 	mov	w0, #0x3                   	// #3
    c638:	aa1803e1 	mov	x1, x24
    c63c:	aa1903e2 	mov	x2, x25
    c640:	aa1503e3 	mov	x3, x21
    c644:	9100079c 	add	x28, x28, #0x1
    c648:	97ffdf36 	bl	4320 <__android_log_print@plt>
    c64c:	eb14039f 	cmp	x28, x20
    c650:	54fffee1 	b.ne	c62c <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x178>  // b.any
    c654:	52800760 	mov	w0, #0x3b                  	// #59
    c658:	aa1303e1 	mov	x1, x19
    c65c:	52808182 	mov	w2, #0x40c                 	// #1036
    c660:	aa1703e3 	mov	x3, x23
    c664:	52800204 	mov	w4, #0x10                  	// #16
    c668:	97fff661 	bl	9fec <gx_ta_send_command@@Base>
    c66c:	35000d00 	cbnz	w0, c80c <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x358>
    c670:	91003275 	add	x21, x19, #0xc
    c674:	52800023 	mov	w3, #0x1                   	// #1
    c678:	aa1a03e1 	mov	x1, x26
    c67c:	d2808002 	mov	x2, #0x400                 	// #1024
    c680:	aa1503e0 	mov	x0, x21
    c684:	b9000263 	str	w3, [x19]
    c688:	52808018 	mov	w24, #0x400                 	// #1024
    c68c:	b9000a76 	str	w22, [x19, #8]
    c690:	b9000678 	str	w24, [x19, #4]
    c694:	97ffdf6b 	bl	4440 <memcpy@plt>
    c698:	52800760 	mov	w0, #0x3b                  	// #59
    c69c:	aa1303e1 	mov	x1, x19
    c6a0:	52808182 	mov	w2, #0x40c                 	// #1036
    c6a4:	aa1703e3 	mov	x3, x23
    c6a8:	52800204 	mov	w4, #0x10                  	// #16
    c6ac:	97fff650 	bl	9fec <gx_ta_send_command@@Base>
    c6b0:	34000200 	cbz	w0, c6f0 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x23c>
    c6b4:	14000056 	b	c80c <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x358>
    c6b8:	52800063 	mov	w3, #0x3                   	// #3
    c6bc:	2a1403e2 	mov	w2, w20
    c6c0:	aa1503e0 	mov	x0, x21
    c6c4:	8b38c341 	add	x1, x26, w24, sxtw
    c6c8:	b9000263 	str	w3, [x19]
    c6cc:	0b180298 	add	w24, w20, w24
    c6d0:	b9000674 	str	w20, [x19, #4]
    c6d4:	97ffdf5b 	bl	4440 <memcpy@plt>
    c6d8:	52800760 	mov	w0, #0x3b                  	// #59
    c6dc:	aa1303e1 	mov	x1, x19
    c6e0:	52808182 	mov	w2, #0x40c                 	// #1036
    c6e4:	aa1703e3 	mov	x3, x23
    c6e8:	52800204 	mov	w4, #0x10                  	// #16
    c6ec:	97fff640 	bl	9fec <gx_ta_send_command@@Base>
    c6f0:	6b1802df 	cmp	w22, w24
    c6f4:	5400010d 	b.le	c714 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x260>
    c6f8:	4b1802d4 	sub	w20, w22, w24
    c6fc:	7110029f 	cmp	w20, #0x400
    c700:	54fffdcd 	b.le	c6b8 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x204>
    c704:	d2808002 	mov	x2, #0x400                 	// #1024
    c708:	52800043 	mov	w3, #0x2                   	// #2
    c70c:	2a0203f4 	mov	w20, w2
    c710:	17ffffec 	b	c6c0 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x20c>
    c714:	f9403ba0 	ldr	x0, [x29, #112]
    c718:	b4000700 	cbz	x0, c7f8 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x344>
    c71c:	f9403ba0 	ldr	x0, [x29, #112]
    c720:	b94002e4 	ldr	w4, [x23]
    c724:	b94006e5 	ldr	w5, [x23, #4]
    c728:	b9400ae6 	ldr	w6, [x23, #8]
    c72c:	b9400ee7 	ldr	w7, [x23, #12]
    c730:	b9000004 	str	w4, [x0]
    c734:	b9000405 	str	w5, [x0, #4]
    c738:	b9000806 	str	w6, [x0, #8]
    c73c:	b9000c07 	str	w7, [x0, #12]
    c740:	90000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    c744:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c748:	91110003 	add	x3, x0, #0x440
    c74c:	b0000020 	adrp	x0, 11000 <gf_dump_data_interface@@Base+0x760>
    c750:	9109c001 	add	x1, x0, #0x270
    c754:	9131e042 	add	x2, x2, #0xc78
    c758:	91058063 	add	x3, x3, #0x160
    c75c:	52800060 	mov	w0, #0x3                   	// #3
    c760:	97ffdef0 	bl	4320 <__android_log_print@plt>
    c764:	aa1a03e0 	mov	x0, x26
    c768:	97ffdf4a 	bl	4490 <free@plt>
    c76c:	52800000 	mov	w0, #0x0                   	// #0
    c770:	b00000e1 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    c774:	f94257b8 	ldr	x24, [x29, #1192]
    c778:	f947c021 	ldr	x1, [x1, #3968]
    c77c:	f9400021 	ldr	x1, [x1]
    c780:	eb01031f 	cmp	x24, x1
    c784:	54000621 	b.ne	c848 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x394>  // b.any
    c788:	a94153f3 	ldp	x19, x20, [sp, #16]
    c78c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    c790:	a94363f7 	ldp	x23, x24, [sp, #48]
    c794:	a9446bf9 	ldp	x25, x26, [sp, #64]
    c798:	a94573fb 	ldp	x27, x28, [sp, #80]
    c79c:	a8c67bfd 	ldp	x29, x30, [sp], #96
    c7a0:	911143ff 	add	sp, sp, #0x450
    c7a4:	d65f03c0 	ret
    c7a8:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c7ac:	aa1503e3 	mov	x3, x21
    c7b0:	aa1803e1 	mov	x1, x24
    c7b4:	2a1403e4 	mov	w4, w20
    c7b8:	9134c042 	add	x2, x2, #0xd30
    c7bc:	52800060 	mov	w0, #0x3                   	// #3
    c7c0:	97ffded8 	bl	4320 <__android_log_print@plt>
    c7c4:	aa1303e0 	mov	x0, x19
    c7c8:	52800001 	mov	w1, #0x0                   	// #0
    c7cc:	d2808182 	mov	x2, #0x40c                 	// #1036
    c7d0:	97ffdf20 	bl	4450 <memset@plt>
    c7d4:	b9000674 	str	w20, [x19, #4]
    c7d8:	528000e3 	mov	w3, #0x7                   	// #7
    c7dc:	91003260 	add	x0, x19, #0xc
    c7e0:	aa1b03e1 	mov	x1, x27
    c7e4:	2a1403e2 	mov	w2, w20
    c7e8:	b9000263 	str	w3, [x19]
    c7ec:	b9000a76 	str	w22, [x19, #8]
    c7f0:	97ffdf14 	bl	4440 <memcpy@plt>
    c7f4:	17ffff98 	b	c654 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x1a0>
    c7f8:	b94002e4 	ldr	w4, [x23]
    c7fc:	b94006e5 	ldr	w5, [x23, #4]
    c800:	b9400ae6 	ldr	w6, [x23, #8]
    c804:	b9400ee7 	ldr	w7, [x23, #12]
    c808:	17ffffce 	b	c740 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x28c>
    c80c:	aa1a03e0 	mov	x0, x26
    c810:	97ffdf20 	bl	4490 <free@plt>
    c814:	12800000 	mov	w0, #0xffffffff            	// #-1
    c818:	17ffffd6 	b	c770 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x2bc>
    c81c:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    c820:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    c824:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c828:	91110063 	add	x3, x3, #0x440
    c82c:	52800060 	mov	w0, #0x3                   	// #3
    c830:	9109c021 	add	x1, x1, #0x270
    c834:	91308042 	add	x2, x2, #0xc20
    c838:	91058063 	add	x3, x3, #0x160
    c83c:	97ffdeb9 	bl	4320 <__android_log_print@plt>
    c840:	12800000 	mov	w0, #0xffffffff            	// #-1
    c844:	17ffffcb 	b	c770 <fnCa_reg_from_bmp_in_enrollpic_test@@Base+0x2bc>
    c848:	97ffde9e 	bl	42c0 <__stack_chk_fail@plt>

000000000000c84c <fnCa_reg_from_bmp_cancel@@Base>:
    c84c:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    c850:	52800082 	mov	w2, #0x4                   	// #4
    c854:	52800420 	mov	w0, #0x21                  	// #33
    c858:	910003fd 	mov	x29, sp
    c85c:	f9000bf3 	str	x19, [sp, #16]
    c860:	b00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    c864:	9100c3a1 	add	x1, x29, #0x30
    c868:	2a0203e4 	mov	w4, w2
    c86c:	910083a3 	add	x3, x29, #0x20
    c870:	b90023bf 	str	wzr, [x29, #32]
    c874:	f947c273 	ldr	x19, [x19, #3968]
    c878:	b81f4c3f 	str	wzr, [x1, #-12]!
    c87c:	f9400265 	ldr	x5, [x19]
    c880:	f90017a5 	str	x5, [x29, #40]
    c884:	97fff5da 	bl	9fec <gx_ta_send_command@@Base>
    c888:	6b1f001f 	cmp	w0, wzr
    c88c:	f94017a2 	ldr	x2, [x29, #40]
    c890:	5a9f03e0 	csetm	w0, ne	// ne = any
    c894:	f9400261 	ldr	x1, [x19]
    c898:	eb01005f 	cmp	x2, x1
    c89c:	54000081 	b.ne	c8ac <fnCa_reg_from_bmp_cancel@@Base+0x60>  // b.any
    c8a0:	f9400bf3 	ldr	x19, [sp, #16]
    c8a4:	a8c37bfd 	ldp	x29, x30, [sp], #48
    c8a8:	d65f03c0 	ret
    c8ac:	97ffde85 	bl	42c0 <__stack_chk_fail@plt>

000000000000c8b0 <fnCa_reg_save@@Base>:
    c8b0:	a9aa7bfd 	stp	x29, x30, [sp, #-352]!
    c8b4:	d2801fe2 	mov	x2, #0xff                  	// #255
    c8b8:	910003fd 	mov	x29, sp
    c8bc:	a9025bf5 	stp	x21, x22, [sp, #32]
    c8c0:	b00000f5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    c8c4:	f90023f9 	str	x25, [sp, #64]
    c8c8:	a90363f7 	stp	x23, x24, [sp, #48]
    c8cc:	a90153f3 	stp	x19, x20, [sp, #16]
    c8d0:	f947c2a3 	ldr	x3, [x21, #3968]
    c8d4:	910163b4 	add	x20, x29, #0x58
    c8d8:	910153b8 	add	x24, x29, #0x54
    c8dc:	2a0103f7 	mov	w23, w1
    c8e0:	aa0003f3 	mov	x19, x0
    c8e4:	52800001 	mov	w1, #0x0                   	// #0
    c8e8:	f9400063 	ldr	x3, [x3]
    c8ec:	aa1403e0 	mov	x0, x20
    c8f0:	f900afa3 	str	x3, [x29, #344]
    c8f4:	b0000036 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    c8f8:	b900031f 	str	wzr, [x24]
    c8fc:	9109c2d6 	add	x22, x22, #0x270
    c900:	97ffded4 	bl	4450 <memset@plt>
    c904:	110006f9 	add	w25, w23, #0x1
    c908:	aa1303e1 	mov	x1, x19
    c90c:	93407ee2 	sxtw	x2, w23
    c910:	aa1403e0 	mov	x0, x20
    c914:	90000053 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    c918:	91110273 	add	x19, x19, #0x440
    c91c:	97ffdec9 	bl	4440 <memcpy@plt>
    c920:	91064273 	add	x19, x19, #0x190
    c924:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c928:	aa1603e1 	mov	x1, x22
    c92c:	91358042 	add	x2, x2, #0xd60
    c930:	aa1303e3 	mov	x3, x19
    c934:	2a1703e4 	mov	w4, w23
    c938:	aa1403e5 	mov	x5, x20
    c93c:	52800060 	mov	w0, #0x3                   	// #3
    c940:	97ffde78 	bl	4320 <__android_log_print@plt>
    c944:	aa1403e0 	mov	x0, x20
    c948:	97ffdea2 	bl	43d0 <strlen@plt>
    c94c:	f100101f 	cmp	x0, #0x4
    c950:	54000289 	b.ls	c9a0 <fnCa_reg_save@@Base+0xf0>  // b.plast
    c954:	528003e0 	mov	w0, #0x1f                  	// #31
    c958:	aa1403e1 	mov	x1, x20
    c95c:	2a1903e2 	mov	w2, w25
    c960:	aa1803e3 	mov	x3, x24
    c964:	52800084 	mov	w4, #0x4                   	// #4
    c968:	97fff5a1 	bl	9fec <gx_ta_send_command@@Base>
    c96c:	350002a0 	cbnz	w0, c9c0 <fnCa_reg_save@@Base+0x110>
    c970:	b9400300 	ldr	w0, [x24]
    c974:	f947c2b5 	ldr	x21, [x21, #3968]
    c978:	f940afa2 	ldr	x2, [x29, #344]
    c97c:	f94002a1 	ldr	x1, [x21]
    c980:	eb01005f 	cmp	x2, x1
    c984:	54000221 	b.ne	c9c8 <fnCa_reg_save@@Base+0x118>  // b.any
    c988:	a94153f3 	ldp	x19, x20, [sp, #16]
    c98c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    c990:	a94363f7 	ldp	x23, x24, [sp, #48]
    c994:	f94023f9 	ldr	x25, [sp, #64]
    c998:	a8d67bfd 	ldp	x29, x30, [sp], #352
    c99c:	d65f03c0 	ret
    c9a0:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    c9a4:	52800060 	mov	w0, #0x3                   	// #3
    c9a8:	aa1603e1 	mov	x1, x22
    c9ac:	91364042 	add	x2, x2, #0xd90
    c9b0:	aa1303e3 	mov	x3, x19
    c9b4:	97ffde5b 	bl	4320 <__android_log_print@plt>
    c9b8:	12800000 	mov	w0, #0xffffffff            	// #-1
    c9bc:	17ffffee 	b	c974 <fnCa_reg_save@@Base+0xc4>
    c9c0:	12800000 	mov	w0, #0xffffffff            	// #-1
    c9c4:	17ffffec 	b	c974 <fnCa_reg_save@@Base+0xc4>
    c9c8:	97ffde3e 	bl	42c0 <__stack_chk_fail@plt>

000000000000c9cc <fnCa_verify_bmp@@Base>:
    c9cc:	d11183ff 	sub	sp, sp, #0x460
    c9d0:	b00000e1 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    c9d4:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    c9d8:	910003fd 	mov	x29, sp
    c9dc:	f947c023 	ldr	x3, [x1, #3968]
    c9e0:	52800001 	mov	w1, #0x0                   	// #0
    c9e4:	a9025bf5 	stp	x21, x22, [sp, #32]
    c9e8:	a90153f3 	stp	x19, x20, [sp, #16]
    c9ec:	910243b5 	add	x21, x29, #0x90
    c9f0:	f9400063 	ldr	x3, [x3]
    c9f4:	9102a3b3 	add	x19, x29, #0xa8
    c9f8:	f90037a2 	str	x2, [x29, #104]
    c9fc:	a90363f7 	stp	x23, x24, [sp, #48]
    ca00:	a9046bf9 	stp	x25, x26, [sp, #64]
    ca04:	a90573fb 	stp	x27, x28, [sp, #80]
    ca08:	aa0003f7 	mov	x23, x0
    ca0c:	d10043ff 	sub	sp, sp, #0x10
    ca10:	aa1303e0 	mov	x0, x19
    ca14:	d2808182 	mov	x2, #0x40c                 	// #1036
    ca18:	f9025fa3 	str	x3, [x29, #1208]
    ca1c:	97ffde8d 	bl	4450 <memset@plt>
    ca20:	f9000abf 	str	xzr, [x21, #16]
    ca24:	a9007ebf 	stp	xzr, xzr, [x21]
    ca28:	b4001b37 	cbz	x23, cd8c <fnCa_verify_bmp@@Base+0x3c0>
    ca2c:	aa1703e1 	mov	x1, x23
    ca30:	b0000022 	adrp	x2, 11000 <gf_dump_data_interface@@Base+0x760>
    ca34:	9109c05a 	add	x26, x2, #0x270
    ca38:	91003260 	add	x0, x19, #0xc
    ca3c:	f90047a0 	str	x0, [x29, #136]
    ca40:	b8404438 	ldr	w24, [x1], #4
    ca44:	f9003fa1 	str	x1, [x29, #120]
    ca48:	93407f02 	sxtw	x2, w24
    ca4c:	f90043a2 	str	x2, [x29, #128]
    ca50:	aa0203e0 	mov	x0, x2
    ca54:	97ffde77 	bl	4430 <malloc@plt>
    ca58:	aa0003fb 	mov	x27, x0
    ca5c:	f9403fa1 	ldr	x1, [x29, #120]
    ca60:	f94043a2 	ldr	x2, [x29, #128]
    ca64:	97ffde77 	bl	4440 <memcpy@plt>
    ca68:	90000041 	adrp	x1, 14000 <gf_dump_data_interface@@Base+0x3760>
    ca6c:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ca70:	91110026 	add	x6, x1, #0x440
    ca74:	aa1b03e5 	mov	x5, x27
    ca78:	910680dc 	add	x28, x6, #0x1a0
    ca7c:	2a1803e4 	mov	w4, w24
    ca80:	aa1c03e3 	mov	x3, x28
    ca84:	aa1a03e1 	mov	x1, x26
    ca88:	9137a042 	add	x2, x2, #0xde8
    ca8c:	52800060 	mov	w0, #0x3                   	// #3
    ca90:	97ffde24 	bl	4320 <__android_log_print@plt>
    ca94:	11001300 	add	w0, w24, #0x4
    ca98:	11001019 	add	w25, w0, #0x4
    ca9c:	b860caf4 	ldr	w20, [x23, w0, sxtw]
    caa0:	93407e82 	sxtw	x2, w20
    caa4:	f90043a2 	str	x2, [x29, #128]
    caa8:	aa0203e0 	mov	x0, x2
    caac:	97ffde61 	bl	4430 <malloc@plt>
    cab0:	aa0003f6 	mov	x22, x0
    cab4:	f94043a2 	ldr	x2, [x29, #128]
    cab8:	8b39c2e1 	add	x1, x23, w25, sxtw
    cabc:	0b140339 	add	w25, w25, w20
    cac0:	97ffde60 	bl	4440 <memcpy@plt>
    cac4:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cac8:	aa1c03e3 	mov	x3, x28
    cacc:	2a1403e4 	mov	w4, w20
    cad0:	aa1a03e1 	mov	x1, x26
    cad4:	91388042 	add	x2, x2, #0xe20
    cad8:	52800060 	mov	w0, #0x3                   	// #3
    cadc:	97ffde11 	bl	4320 <__android_log_print@plt>
    cae0:	11001321 	add	w1, w25, #0x4
    cae4:	b879caf9 	ldr	w25, [x23, w25, sxtw]
    cae8:	f9003fa1 	str	x1, [x29, #120]
    caec:	93407f22 	sxtw	x2, w25
    caf0:	f90043a2 	str	x2, [x29, #128]
    caf4:	aa0203e0 	mov	x0, x2
    caf8:	97ffde4e 	bl	4430 <malloc@plt>
    cafc:	f9003ba0 	str	x0, [x29, #112]
    cb00:	f94043a2 	ldr	x2, [x29, #128]
    cb04:	f9403fa1 	ldr	x1, [x29, #120]
    cb08:	8b21c2e1 	add	x1, x23, w1, sxtw
    cb0c:	97ffde4d 	bl	4440 <memcpy@plt>
    cb10:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cb14:	2a1903e4 	mov	w4, w25
    cb18:	aa1c03e3 	mov	x3, x28
    cb1c:	aa1a03e1 	mov	x1, x26
    cb20:	91392042 	add	x2, x2, #0xe48
    cb24:	52800060 	mov	w0, #0x3                   	// #3
    cb28:	97ffddfe 	bl	4320 <__android_log_print@plt>
    cb2c:	52800001 	mov	w1, #0x0                   	// #0
    cb30:	d2808182 	mov	x2, #0x40c                 	// #1036
    cb34:	aa1303e0 	mov	x0, x19
    cb38:	97ffde46 	bl	4450 <memset@plt>
    cb3c:	b9000a74 	str	w20, [x19, #8]
    cb40:	52800023 	mov	w3, #0x1                   	// #1
    cb44:	f94047a0 	ldr	x0, [x29, #136]
    cb48:	aa1603e1 	mov	x1, x22
    cb4c:	d2808002 	mov	x2, #0x400                 	// #1024
    cb50:	b9000263 	str	w3, [x19]
    cb54:	52808003 	mov	w3, #0x400                 	// #1024
    cb58:	b9000663 	str	w3, [x19, #4]
    cb5c:	97ffde39 	bl	4440 <memcpy@plt>
    cb60:	52800400 	mov	w0, #0x20                  	// #32
    cb64:	aa1303e1 	mov	x1, x19
    cb68:	52808182 	mov	w2, #0x40c                 	// #1036
    cb6c:	aa1503e3 	mov	x3, x21
    cb70:	52800304 	mov	w4, #0x18                  	// #24
    cb74:	97fff51e 	bl	9fec <gx_ta_send_command@@Base>
    cb78:	350006e0 	cbnz	w0, cc54 <fnCa_verify_bmp@@Base+0x288>
    cb7c:	7110029f 	cmp	w20, #0x400
    cb80:	5280801c 	mov	w28, #0x400                 	// #1024
    cb84:	f94047b7 	ldr	x23, [x29, #136]
    cb88:	5400028c 	b.gt	cbd8 <fnCa_verify_bmp@@Base+0x20c>
    cb8c:	1400001e 	b	cc04 <fnCa_verify_bmp@@Base+0x238>
    cb90:	52800063 	mov	w3, #0x3                   	// #3
    cb94:	2a1a03e2 	mov	w2, w26
    cb98:	aa1703e0 	mov	x0, x23
    cb9c:	8b3cc2c1 	add	x1, x22, w28, sxtw
    cba0:	b9000263 	str	w3, [x19]
    cba4:	0b1c035c 	add	w28, w26, w28
    cba8:	b900067a 	str	w26, [x19, #4]
    cbac:	b9000a74 	str	w20, [x19, #8]
    cbb0:	97ffde24 	bl	4440 <memcpy@plt>
    cbb4:	52800400 	mov	w0, #0x20                  	// #32
    cbb8:	aa1303e1 	mov	x1, x19
    cbbc:	52808182 	mov	w2, #0x40c                 	// #1036
    cbc0:	aa1503e3 	mov	x3, x21
    cbc4:	52800304 	mov	w4, #0x18                  	// #24
    cbc8:	97fff509 	bl	9fec <gx_ta_send_command@@Base>
    cbcc:	35000440 	cbnz	w0, cc54 <fnCa_verify_bmp@@Base+0x288>
    cbd0:	6b1c029f 	cmp	w20, w28
    cbd4:	5400018d 	b.le	cc04 <fnCa_verify_bmp@@Base+0x238>
    cbd8:	aa1303e0 	mov	x0, x19
    cbdc:	52800001 	mov	w1, #0x0                   	// #0
    cbe0:	d2808182 	mov	x2, #0x40c                 	// #1036
    cbe4:	4b1c029a 	sub	w26, w20, w28
    cbe8:	97ffde1a 	bl	4450 <memset@plt>
    cbec:	7110035f 	cmp	w26, #0x400
    cbf0:	54fffd0d 	b.le	cb90 <fnCa_verify_bmp@@Base+0x1c4>
    cbf4:	d2808002 	mov	x2, #0x400                 	// #1024
    cbf8:	52800043 	mov	w3, #0x2                   	// #2
    cbfc:	2a0203fa 	mov	w26, w2
    cc00:	17ffffe6 	b	cb98 <fnCa_verify_bmp@@Base+0x1cc>
    cc04:	52800001 	mov	w1, #0x0                   	// #0
    cc08:	d2808182 	mov	x2, #0x40c                 	// #1036
    cc0c:	aa1303e0 	mov	x0, x19
    cc10:	91003277 	add	x23, x19, #0xc
    cc14:	97ffde0f 	bl	4450 <memset@plt>
    cc18:	b9000679 	str	w25, [x19, #4]
    cc1c:	f9403ba1 	ldr	x1, [x29, #112]
    cc20:	528000e3 	mov	w3, #0x7                   	// #7
    cc24:	2a1903e2 	mov	w2, w25
    cc28:	aa1703e0 	mov	x0, x23
    cc2c:	b9000263 	str	w3, [x19]
    cc30:	b9000a74 	str	w20, [x19, #8]
    cc34:	97ffde03 	bl	4440 <memcpy@plt>
    cc38:	52800400 	mov	w0, #0x20                  	// #32
    cc3c:	aa1303e1 	mov	x1, x19
    cc40:	52808182 	mov	w2, #0x40c                 	// #1036
    cc44:	aa1503e3 	mov	x3, x21
    cc48:	52800304 	mov	w4, #0x18                  	// #24
    cc4c:	97fff4e8 	bl	9fec <gx_ta_send_command@@Base>
    cc50:	340002a0 	cbz	w0, cca4 <fnCa_verify_bmp@@Base+0x2d8>
    cc54:	aa1b03e0 	mov	x0, x27
    cc58:	97ffde0e 	bl	4490 <free@plt>
    cc5c:	aa1603e0 	mov	x0, x22
    cc60:	97ffde0c 	bl	4490 <free@plt>
    cc64:	12800000 	mov	w0, #0xffffffff            	// #-1
    cc68:	b00000e1 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    cc6c:	f9425fa2 	ldr	x2, [x29, #1208]
    cc70:	f947c021 	ldr	x1, [x1, #3968]
    cc74:	f9400021 	ldr	x1, [x1]
    cc78:	eb01005f 	cmp	x2, x1
    cc7c:	540009e1 	b.ne	cdb8 <fnCa_verify_bmp@@Base+0x3ec>  // b.any
    cc80:	910003bf 	mov	sp, x29
    cc84:	a94153f3 	ldp	x19, x20, [sp, #16]
    cc88:	a9425bf5 	ldp	x21, x22, [sp, #32]
    cc8c:	a94363f7 	ldp	x23, x24, [sp, #48]
    cc90:	a9446bf9 	ldp	x25, x26, [sp, #64]
    cc94:	a94573fb 	ldp	x27, x28, [sp, #80]
    cc98:	a8c67bfd 	ldp	x29, x30, [sp], #96
    cc9c:	911183ff 	add	sp, sp, #0x460
    cca0:	d65f03c0 	ret
    cca4:	b0000023 	adrp	x3, 11000 <gf_dump_data_interface@@Base+0x760>
    cca8:	52800001 	mov	w1, #0x0                   	// #0
    ccac:	d2808182 	mov	x2, #0x40c                 	// #1036
    ccb0:	aa1303e0 	mov	x0, x19
    ccb4:	9109c079 	add	x25, x3, #0x270
    ccb8:	97ffdde6 	bl	4450 <memset@plt>
    ccbc:	b9000a74 	str	w20, [x19, #8]
    ccc0:	52800083 	mov	w3, #0x4                   	// #4
    ccc4:	aa1b03e1 	mov	x1, x27
    ccc8:	2a1803e2 	mov	w2, w24
    cccc:	aa1703e0 	mov	x0, x23
    ccd0:	b9000263 	str	w3, [x19]
    ccd4:	b9000678 	str	w24, [x19, #4]
    ccd8:	97ffddda 	bl	4440 <memcpy@plt>
    ccdc:	90000040 	adrp	x0, 14000 <gf_dump_data_interface@@Base+0x3760>
    cce0:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cce4:	91110000 	add	x0, x0, #0x440
    cce8:	aa1903e1 	mov	x1, x25
    ccec:	91068014 	add	x20, x0, #0x1a0
    ccf0:	9139e042 	add	x2, x2, #0xe78
    ccf4:	aa1403e3 	mov	x3, x20
    ccf8:	aa1703e4 	mov	x4, x23
    ccfc:	52800060 	mov	w0, #0x3                   	// #3
    cd00:	97ffdd88 	bl	4320 <__android_log_print@plt>
    cd04:	aa1303e1 	mov	x1, x19
    cd08:	52808182 	mov	w2, #0x40c                 	// #1036
    cd0c:	aa1503e3 	mov	x3, x21
    cd10:	52800304 	mov	w4, #0x18                  	// #24
    cd14:	52800400 	mov	w0, #0x20                  	// #32
    cd18:	97fff4b5 	bl	9fec <gx_ta_send_command@@Base>
    cd1c:	2a0003f3 	mov	w19, w0
    cd20:	b9400aa5 	ldr	w5, [x21, #8]
    cd24:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cd28:	b94016a6 	ldr	w6, [x21, #20]
    cd2c:	aa1403e3 	mov	x3, x20
    cd30:	b90003e5 	str	w5, [sp]
    cd34:	52800060 	mov	w0, #0x3                   	// #3
    cd38:	b9000be6 	str	w6, [sp, #8]
    cd3c:	aa1903e1 	mov	x1, x25
    cd40:	b9400ea4 	ldr	w4, [x21, #12]
    cd44:	913aa042 	add	x2, x2, #0xea8
    cd48:	b94012a5 	ldr	w5, [x21, #16]
    cd4c:	b94002a6 	ldr	w6, [x21]
    cd50:	b94006a7 	ldr	w7, [x21, #4]
    cd54:	97ffdd73 	bl	4320 <__android_log_print@plt>
    cd58:	f94037a3 	ldr	x3, [x29, #104]
    cd5c:	b40000a3 	cbz	x3, cd70 <fnCa_verify_bmp@@Base+0x3a4>
    cd60:	a94006a0 	ldp	x0, x1, [x21]
    cd64:	f9400aa2 	ldr	x2, [x21, #16]
    cd68:	f9000862 	str	x2, [x3, #16]
    cd6c:	a9000460 	stp	x0, x1, [x3]
    cd70:	35fff733 	cbnz	w19, cc54 <fnCa_verify_bmp@@Base+0x288>
    cd74:	aa1b03e0 	mov	x0, x27
    cd78:	97ffddc6 	bl	4490 <free@plt>
    cd7c:	aa1603e0 	mov	x0, x22
    cd80:	97ffddc4 	bl	4490 <free@plt>
    cd84:	52800000 	mov	w0, #0x0                   	// #0
    cd88:	17ffffb8 	b	cc68 <fnCa_verify_bmp@@Base+0x29c>
    cd8c:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    cd90:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    cd94:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cd98:	91110063 	add	x3, x3, #0x440
    cd9c:	52800060 	mov	w0, #0x3                   	// #3
    cda0:	9109c021 	add	x1, x1, #0x270
    cda4:	91370042 	add	x2, x2, #0xdc0
    cda8:	91068063 	add	x3, x3, #0x1a0
    cdac:	97ffdd5d 	bl	4320 <__android_log_print@plt>
    cdb0:	12800000 	mov	w0, #0xffffffff            	// #-1
    cdb4:	17ffffad 	b	cc68 <fnCa_verify_bmp@@Base+0x29c>
    cdb8:	97ffdd42 	bl	42c0 <__stack_chk_fail@plt>

000000000000cdbc <fnCa_del_bmp_template@@Base>:
    cdbc:	a9ab7bfd 	stp	x29, x30, [sp, #-336]!
    cdc0:	d2801fe2 	mov	x2, #0xff                  	// #255
    cdc4:	910003fd 	mov	x29, sp
    cdc8:	a90153f3 	stp	x19, x20, [sp, #16]
    cdcc:	b00000f4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    cdd0:	910123b3 	add	x19, x29, #0x48
    cdd4:	a90363f7 	stp	x23, x24, [sp, #48]
    cdd8:	2a0103f7 	mov	w23, w1
    cddc:	aa0003f8 	mov	x24, x0
    cde0:	f947c283 	ldr	x3, [x20, #3968]
    cde4:	52800001 	mov	w1, #0x0                   	// #0
    cde8:	aa1303e0 	mov	x0, x19
    cdec:	b90047bf 	str	wzr, [x29, #68]
    cdf0:	a9025bf5 	stp	x21, x22, [sp, #32]
    cdf4:	f9400063 	ldr	x3, [x3]
    cdf8:	110006f6 	add	w22, w23, #0x1
    cdfc:	f900a7a3 	str	x3, [x29, #328]
    ce00:	910113b5 	add	x21, x29, #0x44
    ce04:	97ffdd93 	bl	4450 <memset@plt>
    ce08:	aa1803e1 	mov	x1, x24
    ce0c:	93407ee2 	sxtw	x2, w23
    ce10:	aa1303e0 	mov	x0, x19
    ce14:	97ffdd8b 	bl	4440 <memcpy@plt>
    ce18:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ce1c:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ce20:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ce24:	91110063 	add	x3, x3, #0x440
    ce28:	9109c021 	add	x1, x1, #0x270
    ce2c:	913c6042 	add	x2, x2, #0xf18
    ce30:	9106c063 	add	x3, x3, #0x1b0
    ce34:	2a1603e4 	mov	w4, w22
    ce38:	52800060 	mov	w0, #0x3                   	// #3
    ce3c:	aa1303e5 	mov	x5, x19
    ce40:	97ffdd38 	bl	4320 <__android_log_print@plt>
    ce44:	52800440 	mov	w0, #0x22                  	// #34
    ce48:	aa1303e1 	mov	x1, x19
    ce4c:	2a1603e2 	mov	w2, w22
    ce50:	aa1503e3 	mov	x3, x21
    ce54:	52800084 	mov	w4, #0x4                   	// #4
    ce58:	97fff465 	bl	9fec <gx_ta_send_command@@Base>
    ce5c:	35000180 	cbnz	w0, ce8c <fnCa_del_bmp_template@@Base+0xd0>
    ce60:	b94002a0 	ldr	w0, [x21]
    ce64:	f947c294 	ldr	x20, [x20, #3968]
    ce68:	f940a7a2 	ldr	x2, [x29, #328]
    ce6c:	f9400281 	ldr	x1, [x20]
    ce70:	eb01005f 	cmp	x2, x1
    ce74:	54000101 	b.ne	ce94 <fnCa_del_bmp_template@@Base+0xd8>  // b.any
    ce78:	a94153f3 	ldp	x19, x20, [sp, #16]
    ce7c:	a9425bf5 	ldp	x21, x22, [sp, #32]
    ce80:	a94363f7 	ldp	x23, x24, [sp, #48]
    ce84:	a8d57bfd 	ldp	x29, x30, [sp], #336
    ce88:	d65f03c0 	ret
    ce8c:	12800000 	mov	w0, #0xffffffff            	// #-1
    ce90:	17fffff5 	b	ce64 <fnCa_del_bmp_template@@Base+0xa8>
    ce94:	97ffdd0b 	bl	42c0 <__stack_chk_fail@plt>

000000000000ce98 <fnCa_get_hardware_info@@Base>:
    ce98:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    ce9c:	52800082 	mov	w2, #0x4                   	// #4
    cea0:	52800184 	mov	w4, #0xc                   	// #12
    cea4:	910003fd 	mov	x29, sp
    cea8:	a90153f3 	stp	x19, x20, [sp, #16]
    ceac:	b00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ceb0:	aa0003f4 	mov	x20, x0
    ceb4:	9100d3a1 	add	x1, x29, #0x34
    ceb8:	9100e3a3 	add	x3, x29, #0x38
    cebc:	52800460 	mov	w0, #0x23                  	// #35
    cec0:	f90013f5 	str	x21, [sp, #32]
    cec4:	f947c265 	ldr	x5, [x19, #3968]
    cec8:	f9001fbf 	str	xzr, [x29, #56]
    cecc:	b90043bf 	str	wzr, [x29, #64]
    ced0:	f94000a5 	ldr	x5, [x5]
    ced4:	f90027a5 	str	x5, [x29, #72]
    ced8:	97fff445 	bl	9fec <gx_ta_send_command@@Base>
    cedc:	2a0003f5 	mov	w21, w0
    cee0:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    cee4:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    cee8:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ceec:	91110063 	add	x3, x3, #0x440
    cef0:	b9403ba4 	ldr	w4, [x29, #56]
    cef4:	52800060 	mov	w0, #0x3                   	// #3
    cef8:	b9403fa5 	ldr	w5, [x29, #60]
    cefc:	9109c021 	add	x1, x1, #0x270
    cf00:	913d4042 	add	x2, x2, #0xf50
    cf04:	91074063 	add	x3, x3, #0x1d0
    cf08:	97ffdd06 	bl	4320 <__android_log_print@plt>
    cf0c:	b40000b4 	cbz	x20, cf20 <fnCa_get_hardware_info@@Base+0x88>
    cf10:	b9403ba0 	ldr	w0, [x29, #56]
    cf14:	b9000280 	str	w0, [x20]
    cf18:	b9403fa0 	ldr	w0, [x29, #60]
    cf1c:	b9000680 	str	w0, [x20, #4]
    cf20:	f947c273 	ldr	x19, [x19, #3968]
    cf24:	6b1f02bf 	cmp	w21, wzr
    cf28:	f94027a2 	ldr	x2, [x29, #72]
    cf2c:	5a9f03e0 	csetm	w0, ne	// ne = any
    cf30:	f9400261 	ldr	x1, [x19]
    cf34:	eb01005f 	cmp	x2, x1
    cf38:	540000a1 	b.ne	cf4c <fnCa_get_hardware_info@@Base+0xb4>  // b.any
    cf3c:	a94153f3 	ldp	x19, x20, [sp, #16]
    cf40:	f94013f5 	ldr	x21, [sp, #32]
    cf44:	a8c57bfd 	ldp	x29, x30, [sp], #80
    cf48:	d65f03c0 	ret
    cf4c:	97ffdcdd 	bl	42c0 <__stack_chk_fail@plt>

000000000000cf50 <fnca_get_max_enollnum@@Base>:
    cf50:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    cf54:	52800082 	mov	w2, #0x4                   	// #4
    cf58:	910003fd 	mov	x29, sp
    cf5c:	a90153f3 	stp	x19, x20, [sp, #16]
    cf60:	b00000f3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    cf64:	2a0203e4 	mov	w4, w2
    cf68:	aa0003f4 	mov	x20, x0
    cf6c:	9100c3a1 	add	x1, x29, #0x30
    cf70:	9100d3a3 	add	x3, x29, #0x34
    cf74:	52800880 	mov	w0, #0x44                  	// #68
    cf78:	f947c265 	ldr	x5, [x19, #3968]
    cf7c:	f90013f5 	str	x21, [sp, #32]
    cf80:	b90037bf 	str	wzr, [x29, #52]
    cf84:	f94000a5 	ldr	x5, [x5]
    cf88:	f9001fa5 	str	x5, [x29, #56]
    cf8c:	97fff418 	bl	9fec <gx_ta_send_command@@Base>
    cf90:	2a0003f5 	mov	w21, w0
    cf94:	90000043 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    cf98:	b0000021 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    cf9c:	90000042 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    cfa0:	91110063 	add	x3, x3, #0x440
    cfa4:	b94037a4 	ldr	w4, [x29, #52]
    cfa8:	52800060 	mov	w0, #0x3                   	// #3
    cfac:	9109c021 	add	x1, x1, #0x270
    cfb0:	913e2042 	add	x2, x2, #0xf88
    cfb4:	9107c063 	add	x3, x3, #0x1f0
    cfb8:	97ffdcda 	bl	4320 <__android_log_print@plt>
    cfbc:	b4000074 	cbz	x20, cfc8 <fnca_get_max_enollnum@@Base+0x78>
    cfc0:	b94037a0 	ldr	w0, [x29, #52]
    cfc4:	b9000280 	str	w0, [x20]
    cfc8:	f947c273 	ldr	x19, [x19, #3968]
    cfcc:	6b1f02bf 	cmp	w21, wzr
    cfd0:	f9401fa2 	ldr	x2, [x29, #56]
    cfd4:	5a9f03e0 	csetm	w0, ne	// ne = any
    cfd8:	f9400261 	ldr	x1, [x19]
    cfdc:	eb01005f 	cmp	x2, x1
    cfe0:	540000a1 	b.ne	cff4 <fnca_get_max_enollnum@@Base+0xa4>  // b.any
    cfe4:	a94153f3 	ldp	x19, x20, [sp, #16]
    cfe8:	f94013f5 	ldr	x21, [sp, #32]
    cfec:	a8c47bfd 	ldp	x29, x30, [sp], #64
    cff0:	d65f03c0 	ret
    cff4:	97ffdcb3 	bl	42c0 <__stack_chk_fail@plt>

000000000000cff8 <fnCa_get_supportgsc_info@@Base>:
    cff8:	100e0041 	adr	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
    cffc:	f947e821 	ldr	x1, [x1, #4048]
    d000:	b9401c21 	ldr	w1, [x1, #28]
    d004:	b9000001 	str	w1, [x0]
    d008:	52800000 	mov	w0, #0x0                   	// #0
    d00c:	d65f03c0 	ret
    d010:	14000400 	b	e010 <fnCa_mp_test@@Base>
    d014:	b9401c21 	ldr	w1, [x1, #28]
    d018:	17fffffb 	b	d004 <fnCa_get_supportgsc_info@@Base+0xc>
	...

000000000000e010 <fnCa_mp_test@@Base>:
    e010:	a9a77bfd 	stp	x29, x30, [sp, #-400]!
    e014:	d2802102 	mov	x2, #0x108                 	// #264
    e018:	910003fd 	mov	x29, sp
    e01c:	a90153f3 	stp	x19, x20, [sp, #16]
    e020:	f00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    e024:	910203b3 	add	x19, x29, #0x80
    e028:	a9025bf5 	stp	x21, x22, [sp, #32]
    e02c:	9101b3b5 	add	x21, x29, #0x6c
    e030:	f947c283 	ldr	x3, [x20, #3968]
    e034:	a90363f7 	stp	x23, x24, [sp, #48]
    e038:	a9046bf9 	stp	x25, x26, [sp, #64]
    e03c:	a90573fb 	stp	x27, x28, [sp, #80]
    e040:	f9400063 	ldr	x3, [x3]
    e044:	aa0103f8 	mov	x24, x1
    e048:	b90002a0 	str	w0, [x21]
    e04c:	52800001 	mov	w1, #0x0                   	// #0
    e050:	aa1303e0 	mov	x0, x19
    e054:	d0000039 	adrp	x25, 14000 <gf_dump_data_interface@@Base+0x3760>
    e058:	f900c7a3 	str	x3, [x29, #392]
    e05c:	f000001a 	adrp	x26, 11000 <gf_dump_data_interface@@Base+0x760>
    e060:	97ffd8fc 	bl	4450 <memset@plt>
    e064:	91110336 	add	x22, x25, #0x440
    e068:	9109c35b 	add	x27, x26, #0x270
    e06c:	910842d6 	add	x22, x22, #0x210
    e070:	b94002a4 	ldr	w4, [x21]
    e074:	d0000022 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    e078:	52800060 	mov	w0, #0x3                   	// #3
    e07c:	aa1b03e1 	mov	x1, x27
    e080:	913ec042 	add	x2, x2, #0xfb0
    e084:	aa1603e3 	mov	x3, x22
    e088:	97ffd8a6 	bl	4320 <__android_log_print@plt>
    e08c:	b94002b7 	ldr	w23, [x21]
    e090:	340003f7 	cbz	w23, e10c <fnCa_mp_test@@Base+0xfc>
    e094:	71000aff 	cmp	w23, #0x2
    e098:	54000740 	b.eq	e180 <fnCa_mp_test@@Base+0x170>  // b.none
    e09c:	710016ff 	cmp	w23, #0x5
    e0a0:	540004a0 	b.eq	e134 <fnCa_mp_test@@Base+0x124>  // b.none
    e0a4:	aa1503e1 	mov	x1, x21
    e0a8:	52800480 	mov	w0, #0x24                  	// #36
    e0ac:	52800082 	mov	w2, #0x4                   	// #4
    e0b0:	aa1303e3 	mov	x3, x19
    e0b4:	52802104 	mov	w4, #0x108                 	// #264
    e0b8:	97ffefcd 	bl	9fec <gx_ta_send_command@@Base>
    e0bc:	2a0003f5 	mov	w21, w0
    e0c0:	350005d5 	cbnz	w21, e178 <fnCa_mp_test@@Base+0x168>
    e0c4:	b40000b8 	cbz	x24, e0d8 <fnCa_mp_test@@Base+0xc8>
    e0c8:	aa1803e0 	mov	x0, x24
    e0cc:	aa1303e1 	mov	x1, x19
    e0d0:	d2802102 	mov	x2, #0x108                 	// #264
    e0d4:	97ffd8db 	bl	4440 <memcpy@plt>
    e0d8:	52800000 	mov	w0, #0x0                   	// #0
    e0dc:	f947c294 	ldr	x20, [x20, #3968]
    e0e0:	f940c7a2 	ldr	x2, [x29, #392]
    e0e4:	f9400281 	ldr	x1, [x20]
    e0e8:	eb01005f 	cmp	x2, x1
    e0ec:	54000a01 	b.ne	e22c <fnCa_mp_test@@Base+0x21c>  // b.any
    e0f0:	a94153f3 	ldp	x19, x20, [sp, #16]
    e0f4:	a9425bf5 	ldp	x21, x22, [sp, #32]
    e0f8:	a94363f7 	ldp	x23, x24, [sp, #48]
    e0fc:	a9446bf9 	ldp	x25, x26, [sp, #64]
    e100:	a94573fb 	ldp	x27, x28, [sp, #80]
    e104:	a8d97bfd 	ldp	x29, x30, [sp], #400
    e108:	d65f03c0 	ret
    e10c:	9101f3a5 	add	x5, x29, #0x7c
    e110:	52800480 	mov	w0, #0x24                  	// #36
    e114:	aa0503e1 	mov	x1, x5
    e118:	52800082 	mov	w2, #0x4                   	// #4
    e11c:	aa1303e3 	mov	x3, x19
    e120:	52802104 	mov	w4, #0x108                 	// #264
    e124:	b9007fbf 	str	wzr, [x29, #124]
    e128:	97ffefb1 	bl	9fec <gx_ta_send_command@@Base>
    e12c:	2a0003f5 	mov	w21, w0
    e130:	17ffffe4 	b	e0c0 <fnCa_mp_test@@Base+0xb0>
    e134:	b940ab05 	ldr	w5, [x24, #168]
    e138:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e13c:	aa1b03e1 	mov	x1, x27
    e140:	91000042 	add	x2, x2, #0x0
    e144:	aa1603e3 	mov	x3, x22
    e148:	2a0503e4 	mov	w4, w5
    e14c:	52800060 	mov	w0, #0x3                   	// #3
    e150:	9101f3b7 	add	x23, x29, #0x7c
    e154:	b9007fa5 	str	w5, [x29, #124]
    e158:	97ffd872 	bl	4320 <__android_log_print@plt>
    e15c:	528008a0 	mov	w0, #0x45                  	// #69
    e160:	aa1703e1 	mov	x1, x23
    e164:	52800082 	mov	w2, #0x4                   	// #4
    e168:	aa1303e3 	mov	x3, x19
    e16c:	52802104 	mov	w4, #0x108                 	// #264
    e170:	97ffef9f 	bl	9fec <gx_ta_send_command@@Base>
    e174:	34fff980 	cbz	w0, e0a4 <fnCa_mp_test@@Base+0x94>
    e178:	12800000 	mov	w0, #0xffffffff            	// #-1
    e17c:	17ffffd8 	b	e0dc <fnCa_mp_test@@Base+0xcc>
    e180:	9101f3bc 	add	x28, x29, #0x7c
    e184:	9101e3bb 	add	x27, x29, #0x78
    e188:	52800082 	mov	w2, #0x4                   	// #4
    e18c:	52800125 	mov	w5, #0x9                   	// #9
    e190:	52800480 	mov	w0, #0x24                  	// #36
    e194:	aa1c03e1 	mov	x1, x28
    e198:	aa1b03e3 	mov	x3, x27
    e19c:	2a0203e4 	mov	w4, w2
    e1a0:	b9000385 	str	w5, [x28]
    e1a4:	97ffef92 	bl	9fec <gx_ta_send_command@@Base>
    e1a8:	b9000397 	str	w23, [x28]
    e1ac:	b9400365 	ldr	w5, [x27]
    e1b0:	2a0003f5 	mov	w21, w0
    e1b4:	52800017 	mov	w23, #0x0                   	// #0
    e1b8:	6b1f00bf 	cmp	w5, wzr
    e1bc:	540001ed 	b.le	e1f8 <fnCa_mp_test@@Base+0x1e8>
    e1c0:	52800016 	mov	w22, #0x0                   	// #0
    e1c4:	52800480 	mov	w0, #0x24                  	// #36
    e1c8:	aa1c03e1 	mov	x1, x28
    e1cc:	52800082 	mov	w2, #0x4                   	// #4
    e1d0:	aa1303e3 	mov	x3, x19
    e1d4:	52802104 	mov	w4, #0x108                 	// #264
    e1d8:	110006d6 	add	w22, w22, #0x1
    e1dc:	97ffef84 	bl	9fec <gx_ta_send_command@@Base>
    e1e0:	b9400a60 	ldr	w0, [x19, #8]
    e1e4:	b9400365 	ldr	w5, [x27]
    e1e8:	7100041f 	cmp	w0, #0x1
    e1ec:	1a9716f7 	cinc	w23, w23, eq	// eq = none
    e1f0:	6b1600bf 	cmp	w5, w22
    e1f4:	54fffe8c 	b.gt	e1c4 <fnCa_mp_test@@Base+0x1b4>
    e1f8:	91110323 	add	x3, x25, #0x440
    e1fc:	d0000022 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    e200:	52800060 	mov	w0, #0x3                   	// #3
    e204:	9109c341 	add	x1, x26, #0x270
    e208:	913f6042 	add	x2, x2, #0xfd8
    e20c:	91084063 	add	x3, x3, #0x210
    e210:	2a1703e4 	mov	w4, w23
    e214:	97ffd843 	bl	4320 <__android_log_print@plt>
    e218:	b9400360 	ldr	w0, [x27]
    e21c:	6b17001f 	cmp	w0, w23
    e220:	1a9f17e0 	cset	w0, eq	// eq = none
    e224:	b9000a60 	str	w0, [x19, #8]
    e228:	17ffffa6 	b	e0c0 <fnCa_mp_test@@Base+0xb0>
    e22c:	97ffd825 	bl	42c0 <__stack_chk_fail@plt>

000000000000e230 <fnCa_update_template@@Base>:
    e230:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    e234:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    e238:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    e23c:	910003fd 	mov	x29, sp
    e240:	f9000bf3 	str	x19, [sp, #16]
    e244:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e248:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e24c:	91110063 	add	x3, x3, #0x440
    e250:	2a0003e4 	mov	w4, w0
    e254:	9109c021 	add	x1, x1, #0x270
    e258:	f947c265 	ldr	x5, [x19, #3968]
    e25c:	91008042 	add	x2, x2, #0x20
    e260:	b9002fa0 	str	w0, [x29, #44]
    e264:	91088063 	add	x3, x3, #0x220
    e268:	52800060 	mov	w0, #0x3                   	// #3
    e26c:	b90037bf 	str	wzr, [x29, #52]
    e270:	f94000a5 	ldr	x5, [x5]
    e274:	f9001fa5 	str	x5, [x29, #56]
    e278:	97ffd82a 	bl	4320 <__android_log_print@plt>
    e27c:	52800082 	mov	w2, #0x4                   	// #4
    e280:	528004e0 	mov	w0, #0x27                  	// #39
    e284:	9100b3a1 	add	x1, x29, #0x2c
    e288:	9100d3a3 	add	x3, x29, #0x34
    e28c:	2a0203e4 	mov	w4, w2
    e290:	97ffef57 	bl	9fec <gx_ta_send_command@@Base>
    e294:	35000140 	cbnz	w0, e2bc <fnCa_update_template@@Base+0x8c>
    e298:	b94037a0 	ldr	w0, [x29, #52]
    e29c:	f947c273 	ldr	x19, [x19, #3968]
    e2a0:	f9401fa2 	ldr	x2, [x29, #56]
    e2a4:	f9400261 	ldr	x1, [x19]
    e2a8:	eb01005f 	cmp	x2, x1
    e2ac:	540000c1 	b.ne	e2c4 <fnCa_update_template@@Base+0x94>  // b.any
    e2b0:	f9400bf3 	ldr	x19, [sp, #16]
    e2b4:	a8c47bfd 	ldp	x29, x30, [sp], #64
    e2b8:	d65f03c0 	ret
    e2bc:	12800000 	mov	w0, #0xffffffff            	// #-1
    e2c0:	17fffff7 	b	e29c <fnCa_update_template@@Base+0x6c>
    e2c4:	97ffd7ff 	bl	42c0 <__stack_chk_fail@plt>

000000000000e2c8 <fnCa_GetVersion@@Base>:
    e2c8:	a9af7bfd 	stp	x29, x30, [sp, #-272]!
    e2cc:	52800082 	mov	w2, #0x4                   	// #4
    e2d0:	52801884 	mov	w4, #0xc4                  	// #196
    e2d4:	910003fd 	mov	x29, sp
    e2d8:	a90153f3 	stp	x19, x20, [sp, #16]
    e2dc:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e2e0:	910103b4 	add	x20, x29, #0x40
    e2e4:	f90013f5 	str	x21, [sp, #32]
    e2e8:	9100f3a1 	add	x1, x29, #0x3c
    e2ec:	aa0003f5 	mov	x21, x0
    e2f0:	aa1403e3 	mov	x3, x20
    e2f4:	f947c265 	ldr	x5, [x19, #3968]
    e2f8:	52800540 	mov	w0, #0x2a                  	// #42
    e2fc:	b90103bf 	str	wzr, [x29, #256]
    e300:	a9047fbf 	stp	xzr, xzr, [x29, #64]
    e304:	f94000a5 	ldr	x5, [x5]
    e308:	f90087a5 	str	x5, [x29, #264]
    e30c:	a9057fbf 	stp	xzr, xzr, [x29, #80]
    e310:	a9067fbf 	stp	xzr, xzr, [x29, #96]
    e314:	a9077fbf 	stp	xzr, xzr, [x29, #112]
    e318:	a9087fbf 	stp	xzr, xzr, [x29, #128]
    e31c:	a9097fbf 	stp	xzr, xzr, [x29, #144]
    e320:	a90a7fbf 	stp	xzr, xzr, [x29, #160]
    e324:	a90b7fbf 	stp	xzr, xzr, [x29, #176]
    e328:	a90c7fbf 	stp	xzr, xzr, [x29, #192]
    e32c:	a90d7fbf 	stp	xzr, xzr, [x29, #208]
    e330:	a90e7fbf 	stp	xzr, xzr, [x29, #224]
    e334:	a90f7fbf 	stp	xzr, xzr, [x29, #240]
    e338:	97ffef2d 	bl	9fec <gx_ta_send_command@@Base>
    e33c:	35000240 	cbnz	w0, e384 <fnCa_GetVersion@@Base+0xbc>
    e340:	b40001f5 	cbz	x21, e37c <fnCa_GetVersion@@Base+0xb4>
    e344:	aa1503e0 	mov	x0, x21
    e348:	aa1403e1 	mov	x1, x20
    e34c:	d2801882 	mov	x2, #0xc4                  	// #196
    e350:	97ffd83c 	bl	4440 <memcpy@plt>
    e354:	52800000 	mov	w0, #0x0                   	// #0
    e358:	f947c273 	ldr	x19, [x19, #3968]
    e35c:	f94087a2 	ldr	x2, [x29, #264]
    e360:	f9400261 	ldr	x1, [x19]
    e364:	eb01005f 	cmp	x2, x1
    e368:	54000121 	b.ne	e38c <fnCa_GetVersion@@Base+0xc4>  // b.any
    e36c:	a94153f3 	ldp	x19, x20, [sp, #16]
    e370:	f94013f5 	ldr	x21, [sp, #32]
    e374:	a8d17bfd 	ldp	x29, x30, [sp], #272
    e378:	d65f03c0 	ret
    e37c:	52800000 	mov	w0, #0x0                   	// #0
    e380:	17fffff6 	b	e358 <fnCa_GetVersion@@Base+0x90>
    e384:	12800000 	mov	w0, #0xffffffff            	// #-1
    e388:	17fffff4 	b	e358 <fnCa_GetVersion@@Base+0x90>
    e38c:	97ffd7cd 	bl	42c0 <__stack_chk_fail@plt>

000000000000e390 <fnCa_SetEnrollCnt@@Base>:
    e390:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    e394:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    e398:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    e39c:	910003fd 	mov	x29, sp
    e3a0:	f9000bf3 	str	x19, [sp, #16]
    e3a4:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e3a8:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e3ac:	91110063 	add	x3, x3, #0x440
    e3b0:	2a0003e4 	mov	w4, w0
    e3b4:	9109c021 	add	x1, x1, #0x270
    e3b8:	f947c273 	ldr	x19, [x19, #3968]
    e3bc:	91012042 	add	x2, x2, #0x48
    e3c0:	b9002fa0 	str	w0, [x29, #44]
    e3c4:	91090063 	add	x3, x3, #0x240
    e3c8:	52800060 	mov	w0, #0x3                   	// #3
    e3cc:	b90037bf 	str	wzr, [x29, #52]
    e3d0:	f9400265 	ldr	x5, [x19]
    e3d4:	f9001fa5 	str	x5, [x29, #56]
    e3d8:	97ffd7d2 	bl	4320 <__android_log_print@plt>
    e3dc:	52800082 	mov	w2, #0x4                   	// #4
    e3e0:	9100b3a1 	add	x1, x29, #0x2c
    e3e4:	2a0203e4 	mov	w4, w2
    e3e8:	52800560 	mov	w0, #0x2b                  	// #43
    e3ec:	9100d3a3 	add	x3, x29, #0x34
    e3f0:	97ffeeff 	bl	9fec <gx_ta_send_command@@Base>
    e3f4:	6b1f001f 	cmp	w0, wzr
    e3f8:	f9401fa2 	ldr	x2, [x29, #56]
    e3fc:	5a9f03e0 	csetm	w0, ne	// ne = any
    e400:	f9400261 	ldr	x1, [x19]
    e404:	eb01005f 	cmp	x2, x1
    e408:	54000081 	b.ne	e418 <fnCa_SetEnrollCnt@@Base+0x88>  // b.any
    e40c:	f9400bf3 	ldr	x19, [sp, #16]
    e410:	a8c47bfd 	ldp	x29, x30, [sp], #64
    e414:	d65f03c0 	ret
    e418:	97ffd7aa 	bl	42c0 <__stack_chk_fail@plt>

000000000000e41c <fnCa_GetEnrollCnt@@Base>:
    e41c:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    e420:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e424:	910003fd 	mov	x29, sp
    e428:	a90153f3 	stp	x19, x20, [sp, #16]
    e42c:	f00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    e430:	d0000033 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    e434:	a9025bf5 	stp	x21, x22, [sp, #32]
    e438:	91110273 	add	x19, x19, #0x440
    e43c:	f0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    e440:	f947c284 	ldr	x4, [x20, #3968]
    e444:	910143b6 	add	x22, x29, #0x50
    e448:	9109c2b5 	add	x21, x21, #0x270
    e44c:	91098273 	add	x19, x19, #0x260
    e450:	f9001bf7 	str	x23, [sp, #48]
    e454:	aa1503e1 	mov	x1, x21
    e458:	f9400084 	ldr	x4, [x4]
    e45c:	9101c042 	add	x2, x2, #0x70
    e460:	aa1303e3 	mov	x3, x19
    e464:	aa0003f7 	mov	x23, x0
    e468:	52800060 	mov	w0, #0x3                   	// #3
    e46c:	b81f4edf 	str	wzr, [x22, #-12]!
    e470:	f90027a4 	str	x4, [x29, #72]
    e474:	97ffd7ab 	bl	4320 <__android_log_print@plt>
    e478:	52800082 	mov	w2, #0x4                   	// #4
    e47c:	52800580 	mov	w0, #0x2c                  	// #44
    e480:	aa1603e1 	mov	x1, x22
    e484:	910103a3 	add	x3, x29, #0x40
    e488:	2a0203e4 	mov	w4, w2
    e48c:	97ffeed8 	bl	9fec <gx_ta_send_command@@Base>
    e490:	350002e0 	cbnz	w0, e4ec <fnCa_GetEnrollCnt@@Base+0xd0>
    e494:	b4000297 	cbz	x23, e4e4 <fnCa_GetEnrollCnt@@Base+0xc8>
    e498:	b94043a4 	ldr	w4, [x29, #64]
    e49c:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e4a0:	b90002e4 	str	w4, [x23]
    e4a4:	52800060 	mov	w0, #0x3                   	// #3
    e4a8:	aa1503e1 	mov	x1, x21
    e4ac:	91024042 	add	x2, x2, #0x90
    e4b0:	aa1303e3 	mov	x3, x19
    e4b4:	97ffd79b 	bl	4320 <__android_log_print@plt>
    e4b8:	52800000 	mov	w0, #0x0                   	// #0
    e4bc:	f947c294 	ldr	x20, [x20, #3968]
    e4c0:	f94027a2 	ldr	x2, [x29, #72]
    e4c4:	f9400281 	ldr	x1, [x20]
    e4c8:	eb01005f 	cmp	x2, x1
    e4cc:	54000141 	b.ne	e4f4 <fnCa_GetEnrollCnt@@Base+0xd8>  // b.any
    e4d0:	a94153f3 	ldp	x19, x20, [sp, #16]
    e4d4:	a9425bf5 	ldp	x21, x22, [sp, #32]
    e4d8:	f9401bf7 	ldr	x23, [sp, #48]
    e4dc:	a8c57bfd 	ldp	x29, x30, [sp], #80
    e4e0:	d65f03c0 	ret
    e4e4:	52800000 	mov	w0, #0x0                   	// #0
    e4e8:	17fffff5 	b	e4bc <fnCa_GetEnrollCnt@@Base+0xa0>
    e4ec:	12800000 	mov	w0, #0xffffffff            	// #-1
    e4f0:	17fffff3 	b	e4bc <fnCa_GetEnrollCnt@@Base+0xa0>
    e4f4:	97ffd773 	bl	42c0 <__stack_chk_fail@plt>

000000000000e4f8 <fnCa_get_key_from_keymaster@@Base>:
    e4f8:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    e4fc:	910003fd 	mov	x29, sp
    e500:	b4000240 	cbz	x0, e548 <fnCa_get_key_from_keymaster@@Base+0x50>
    e504:	940004f9 	bl	f8e8 <getKeyFromKeymaster@@Base>
    e508:	2a0003e4 	mov	w4, w0
    e50c:	52800000 	mov	w0, #0x0                   	// #0
    e510:	35000064 	cbnz	w4, e51c <fnCa_get_key_from_keymaster@@Base+0x24>
    e514:	a8c17bfd 	ldp	x29, x30, [sp], #16
    e518:	d65f03c0 	ret
    e51c:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    e520:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    e524:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e528:	91110063 	add	x3, x3, #0x440
    e52c:	528000c0 	mov	w0, #0x6                   	// #6
    e530:	9109c021 	add	x1, x1, #0x270
    e534:	91036042 	add	x2, x2, #0xd8
    e538:	910a0063 	add	x3, x3, #0x280
    e53c:	97ffd779 	bl	4320 <__android_log_print@plt>
    e540:	12800000 	mov	w0, #0xffffffff            	// #-1
    e544:	17fffff4 	b	e514 <fnCa_get_key_from_keymaster@@Base+0x1c>
    e548:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    e54c:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    e550:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e554:	91110063 	add	x3, x3, #0x440
    e558:	52800060 	mov	w0, #0x3                   	// #3
    e55c:	9109c021 	add	x1, x1, #0x270
    e560:	9102e042 	add	x2, x2, #0xb8
    e564:	910a0063 	add	x3, x3, #0x280
    e568:	97ffd76e 	bl	4320 <__android_log_print@plt>
    e56c:	12800000 	mov	w0, #0xffffffff            	// #-1
    e570:	17ffffe9 	b	e514 <fnCa_get_key_from_keymaster@@Base+0x1c>

000000000000e574 <fnCa_gen_auth_token_hmac@@Base>:
    e574:	d11183ff 	sub	sp, sp, #0x460
    e578:	aa0003e4 	mov	x4, x0
    e57c:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    e580:	910003fd 	mov	x29, sp
    e584:	a90363f7 	stp	x23, x24, [sp, #48]
    e588:	f00000d8 	adrp	x24, 29000 <gf_dump_data_interface@@Base+0x18760>
    e58c:	f0000017 	adrp	x23, 11000 <gf_dump_data_interface@@Base+0x760>
    e590:	a90153f3 	stp	x19, x20, [sp, #16]
    e594:	d0000034 	adrp	x20, 14000 <gf_dump_data_interface@@Base+0x3760>
    e598:	f90033a2 	str	x2, [x29, #96]
    e59c:	f947c313 	ldr	x19, [x24, #3968]
    e5a0:	91110294 	add	x20, x20, #0x440
    e5a4:	a90573fb 	stp	x27, x28, [sp, #80]
    e5a8:	9109c2f7 	add	x23, x23, #0x270
    e5ac:	93407c3b 	sxtw	x27, w1
    e5b0:	f9400267 	ldr	x7, [x19]
    e5b4:	910a8294 	add	x20, x20, #0x2a0
    e5b8:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e5bc:	2a1b03e5 	mov	w5, w27
    e5c0:	a9046bf9 	stp	x25, x26, [sp, #64]
    e5c4:	f90037a0 	str	x0, [x29, #104]
    e5c8:	aa1703e1 	mov	x1, x23
    e5cc:	9103e042 	add	x2, x2, #0xf8
    e5d0:	aa0303fa 	mov	x26, x3
    e5d4:	52800060 	mov	w0, #0x3                   	// #3
    e5d8:	aa1403e3 	mov	x3, x20
    e5dc:	f9025fa7 	str	x7, [x29, #1208]
    e5e0:	d280801c 	mov	x28, #0x400                 	// #1024
    e5e4:	a9025bf5 	stp	x21, x22, [sp, #32]
    e5e8:	97ffd74e 	bl	4320 <__android_log_print@plt>
    e5ec:	9102e3b5 	add	x21, x29, #0xb8
    e5f0:	52800001 	mov	w1, #0x0                   	// #0
    e5f4:	aa1c03e2 	mov	x2, x28
    e5f8:	aa1503e0 	mov	x0, x21
    e5fc:	9101c3b3 	add	x19, x29, #0x70
    e600:	8b1b02b9 	add	x25, x21, x27
    e604:	97ffd793 	bl	4450 <memset@plt>
    e608:	f94037a6 	ldr	x6, [x29, #104]
    e60c:	aa1b03e2 	mov	x2, x27
    e610:	aa1503e0 	mov	x0, x21
    e614:	aa0603e1 	mov	x1, x6
    e618:	97ffd78a 	bl	4440 <memcpy@plt>
    e61c:	b900427f 	str	wzr, [x19, #64]
    e620:	a9007e7f 	stp	xzr, xzr, [x19]
    e624:	aa1903e0 	mov	x0, x25
    e628:	4b1b0381 	sub	w1, w28, w27
    e62c:	a9017e7f 	stp	xzr, xzr, [x19, #16]
    e630:	a9027e7f 	stp	xzr, xzr, [x19, #32]
    e634:	a9037e7f 	stp	xzr, xzr, [x19, #48]
    e638:	3901127f 	strb	wzr, [x19, #68]
    e63c:	940004ab 	bl	f8e8 <getKeyFromKeymaster@@Base>
    e640:	2a0003e4 	mov	w4, w0
    e644:	350005c0 	cbnz	w0, e6fc <fnCa_gen_auth_token_hmac@@Base+0x188>
    e648:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e64c:	aa1703e1 	mov	x1, x23
    e650:	9104a042 	add	x2, x2, #0x128
    e654:	aa1403e3 	mov	x3, x20
    e658:	52800060 	mov	w0, #0x3                   	// #3
    e65c:	97ffd731 	bl	4320 <__android_log_print@plt>
    e660:	b9400724 	ldr	w4, [x25, #4]
    e664:	52800660 	mov	w0, #0x33                  	// #51
    e668:	b9400b22 	ldr	w2, [x25, #8]
    e66c:	aa1503e1 	mov	x1, x21
    e670:	aa1303e3 	mov	x3, x19
    e674:	0b020082 	add	w2, w4, w2
    e678:	528008a4 	mov	w4, #0x45                  	// #69
    e67c:	0b040042 	add	w2, w2, w4
    e680:	97ffee5b 	bl	9fec <gx_ta_send_command@@Base>
    e684:	35000380 	cbnz	w0, e6f4 <fnCa_gen_auth_token_hmac@@Base+0x180>
    e688:	52800500 	mov	w0, #0x28                  	// #40
    e68c:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e690:	2a0003e4 	mov	w4, w0
    e694:	aa1703e1 	mov	x1, x23
    e698:	91054042 	add	x2, x2, #0x150
    e69c:	aa1403e3 	mov	x3, x20
    e6a0:	b9000340 	str	w0, [x26]
    e6a4:	52800060 	mov	w0, #0x3                   	// #3
    e6a8:	97ffd71e 	bl	4320 <__android_log_print@plt>
    e6ac:	f94033a0 	ldr	x0, [x29, #96]
    e6b0:	91007661 	add	x1, x19, #0x1d
    e6b4:	b9800342 	ldrsw	x2, [x26]
    e6b8:	97ffd762 	bl	4440 <memcpy@plt>
    e6bc:	52800000 	mov	w0, #0x0                   	// #0
    e6c0:	f947c301 	ldr	x1, [x24, #3968]
    e6c4:	f9425fa2 	ldr	x2, [x29, #1208]
    e6c8:	f9400021 	ldr	x1, [x1]
    e6cc:	eb01005f 	cmp	x2, x1
    e6d0:	54000261 	b.ne	e71c <fnCa_gen_auth_token_hmac@@Base+0x1a8>  // b.any
    e6d4:	a94153f3 	ldp	x19, x20, [sp, #16]
    e6d8:	a9425bf5 	ldp	x21, x22, [sp, #32]
    e6dc:	a94363f7 	ldp	x23, x24, [sp, #48]
    e6e0:	a9446bf9 	ldp	x25, x26, [sp, #64]
    e6e4:	a94573fb 	ldp	x27, x28, [sp, #80]
    e6e8:	a8c67bfd 	ldp	x29, x30, [sp], #96
    e6ec:	911183ff 	add	sp, sp, #0x460
    e6f0:	d65f03c0 	ret
    e6f4:	12800000 	mov	w0, #0xffffffff            	// #-1
    e6f8:	17fffff2 	b	e6c0 <fnCa_gen_auth_token_hmac@@Base+0x14c>
    e6fc:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e700:	528000c0 	mov	w0, #0x6                   	// #6
    e704:	aa1703e1 	mov	x1, x23
    e708:	91036042 	add	x2, x2, #0xd8
    e70c:	aa1403e3 	mov	x3, x20
    e710:	97ffd704 	bl	4320 <__android_log_print@plt>
    e714:	12800000 	mov	w0, #0xffffffff            	// #-1
    e718:	17ffffea 	b	e6c0 <fnCa_gen_auth_token_hmac@@Base+0x14c>
    e71c:	97ffd6e9 	bl	42c0 <__stack_chk_fail@plt>

000000000000e720 <fnCa_GetHbdBase@@Base>:
    e720:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    e724:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e728:	910003fd 	mov	x29, sp
    e72c:	a90153f3 	stp	x19, x20, [sp, #16]
    e730:	f00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    e734:	d0000033 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    e738:	a9025bf5 	stp	x21, x22, [sp, #32]
    e73c:	91110273 	add	x19, x19, #0x440
    e740:	f0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    e744:	f947c284 	ldr	x4, [x20, #3968]
    e748:	910143b6 	add	x22, x29, #0x50
    e74c:	9109c2b5 	add	x21, x21, #0x270
    e750:	910b0273 	add	x19, x19, #0x2c0
    e754:	f9001bf7 	str	x23, [sp, #48]
    e758:	aa1503e1 	mov	x1, x21
    e75c:	f9400084 	ldr	x4, [x4]
    e760:	aa0003f7 	mov	x23, x0
    e764:	9105c042 	add	x2, x2, #0x170
    e768:	aa1303e3 	mov	x3, x19
    e76c:	52800060 	mov	w0, #0x3                   	// #3
    e770:	b81f4edf 	str	wzr, [x22, #-12]!
    e774:	f90027a4 	str	x4, [x29, #72]
    e778:	97ffd6ea 	bl	4320 <__android_log_print@plt>
    e77c:	52800082 	mov	w2, #0x4                   	// #4
    e780:	528006c0 	mov	w0, #0x36                  	// #54
    e784:	aa1603e1 	mov	x1, x22
    e788:	aa1703e3 	mov	x3, x23
    e78c:	2a0203e4 	mov	w4, w2
    e790:	97ffee17 	bl	9fec <gx_ta_send_command@@Base>
    e794:	35000260 	cbnz	w0, e7e0 <fnCa_GetHbdBase@@Base+0xc0>
    e798:	b94002e4 	ldr	w4, [x23]
    e79c:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e7a0:	52800060 	mov	w0, #0x3                   	// #3
    e7a4:	aa1503e1 	mov	x1, x21
    e7a8:	91062042 	add	x2, x2, #0x188
    e7ac:	aa1303e3 	mov	x3, x19
    e7b0:	97ffd6dc 	bl	4320 <__android_log_print@plt>
    e7b4:	52800000 	mov	w0, #0x0                   	// #0
    e7b8:	f947c294 	ldr	x20, [x20, #3968]
    e7bc:	f94027a2 	ldr	x2, [x29, #72]
    e7c0:	f9400281 	ldr	x1, [x20]
    e7c4:	eb01005f 	cmp	x2, x1
    e7c8:	54000101 	b.ne	e7e8 <fnCa_GetHbdBase@@Base+0xc8>  // b.any
    e7cc:	a94153f3 	ldp	x19, x20, [sp, #16]
    e7d0:	a9425bf5 	ldp	x21, x22, [sp, #32]
    e7d4:	f9401bf7 	ldr	x23, [sp, #48]
    e7d8:	a8c57bfd 	ldp	x29, x30, [sp], #80
    e7dc:	d65f03c0 	ret
    e7e0:	12800000 	mov	w0, #0xffffffff            	// #-1
    e7e4:	17fffff5 	b	e7b8 <fnCa_GetHbdBase@@Base+0x98>
    e7e8:	97ffd6b6 	bl	42c0 <__stack_chk_fail@plt>

000000000000e7ec <fnCa_SetHbdSwitch@@Base>:
    e7ec:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    e7f0:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e7f4:	52800060 	mov	w0, #0x3                   	// #3
    e7f8:	910003fd 	mov	x29, sp
    e7fc:	a90153f3 	stp	x19, x20, [sp, #16]
    e800:	f00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    e804:	d0000033 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    e808:	a9025bf5 	stp	x21, x22, [sp, #32]
    e80c:	91110273 	add	x19, x19, #0x440
    e810:	f0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    e814:	f947c284 	ldr	x4, [x20, #3968]
    e818:	910103b6 	add	x22, x29, #0x40
    e81c:	9109c2b5 	add	x21, x21, #0x270
    e820:	910b4273 	add	x19, x19, #0x2d0
    e824:	aa1503e1 	mov	x1, x21
    e828:	9106c042 	add	x2, x2, #0x1b0
    e82c:	f9400084 	ldr	x4, [x4]
    e830:	aa1303e3 	mov	x3, x19
    e834:	b81f4edf 	str	wzr, [x22, #-12]!
    e838:	f9001fa4 	str	x4, [x29, #56]
    e83c:	97ffd6b9 	bl	4320 <__android_log_print@plt>
    e840:	52800082 	mov	w2, #0x4                   	// #4
    e844:	528006e0 	mov	w0, #0x37                  	// #55
    e848:	aa1603e1 	mov	x1, x22
    e84c:	9100c3a3 	add	x3, x29, #0x30
    e850:	2a0203e4 	mov	w4, w2
    e854:	97ffede6 	bl	9fec <gx_ta_send_command@@Base>
    e858:	35000240 	cbnz	w0, e8a0 <fnCa_SetHbdSwitch@@Base+0xb4>
    e85c:	b94033a4 	ldr	w4, [x29, #48]
    e860:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e864:	52800060 	mov	w0, #0x3                   	// #3
    e868:	aa1503e1 	mov	x1, x21
    e86c:	91074042 	add	x2, x2, #0x1d0
    e870:	aa1303e3 	mov	x3, x19
    e874:	97ffd6ab 	bl	4320 <__android_log_print@plt>
    e878:	52800000 	mov	w0, #0x0                   	// #0
    e87c:	f947c294 	ldr	x20, [x20, #3968]
    e880:	f9401fa2 	ldr	x2, [x29, #56]
    e884:	f9400281 	ldr	x1, [x20]
    e888:	eb01005f 	cmp	x2, x1
    e88c:	540000e1 	b.ne	e8a8 <fnCa_SetHbdSwitch@@Base+0xbc>  // b.any
    e890:	a94153f3 	ldp	x19, x20, [sp, #16]
    e894:	a9425bf5 	ldp	x21, x22, [sp, #32]
    e898:	a8c47bfd 	ldp	x29, x30, [sp], #64
    e89c:	d65f03c0 	ret
    e8a0:	12800000 	mov	w0, #0xffffffff            	// #-1
    e8a4:	17fffff6 	b	e87c <fnCa_SetHbdSwitch@@Base+0x90>
    e8a8:	97ffd686 	bl	42c0 <__stack_chk_fail@plt>

000000000000e8ac <fnCa_SetHbdConfig@@Base>:
    e8ac:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    e8b0:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    e8b4:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    e8b8:	910003fd 	mov	x29, sp
    e8bc:	a90153f3 	stp	x19, x20, [sp, #16]
    e8c0:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e8c4:	9100c3b4 	add	x20, x29, #0x30
    e8c8:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    e8cc:	91110063 	add	x3, x3, #0x440
    e8d0:	9109c021 	add	x1, x1, #0x270
    e8d4:	9107e042 	add	x2, x2, #0x1f8
    e8d8:	f947c273 	ldr	x19, [x19, #3968]
    e8dc:	910bc063 	add	x3, x3, #0x2f0
    e8e0:	52800060 	mov	w0, #0x3                   	// #3
    e8e4:	b81f4e9f 	str	wzr, [x20, #-12]!
    e8e8:	b90023bf 	str	wzr, [x29, #32]
    e8ec:	f9400264 	ldr	x4, [x19]
    e8f0:	f90017a4 	str	x4, [x29, #40]
    e8f4:	97ffd68b 	bl	4320 <__android_log_print@plt>
    e8f8:	52800082 	mov	w2, #0x4                   	// #4
    e8fc:	aa1403e1 	mov	x1, x20
    e900:	2a0203e4 	mov	w4, w2
    e904:	52800700 	mov	w0, #0x38                  	// #56
    e908:	910083a3 	add	x3, x29, #0x20
    e90c:	97ffedb8 	bl	9fec <gx_ta_send_command@@Base>
    e910:	6b1f001f 	cmp	w0, wzr
    e914:	f94017a2 	ldr	x2, [x29, #40]
    e918:	5a9f03e0 	csetm	w0, ne	// ne = any
    e91c:	f9400261 	ldr	x1, [x19]
    e920:	eb01005f 	cmp	x2, x1
    e924:	54000081 	b.ne	e934 <fnCa_SetHbdConfig@@Base+0x88>  // b.any
    e928:	a94153f3 	ldp	x19, x20, [sp, #16]
    e92c:	a8c37bfd 	ldp	x29, x30, [sp], #48
    e930:	d65f03c0 	ret
    e934:	97ffd663 	bl	42c0 <__stack_chk_fail@plt>

000000000000e938 <fnCa_GetNavResult@@Base>:
    e938:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    e93c:	52836005 	mov	w5, #0x1b00                	// #6912
    e940:	52800084 	mov	w4, #0x4                   	// #4
    e944:	910003fd 	mov	x29, sp
    e948:	f9000bf3 	str	x19, [sp, #16]
    e94c:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e950:	72a016e5 	movk	w5, #0xb7, lsl #16
    e954:	b90037a5 	str	w5, [x29, #52]
    e958:	f947c273 	ldr	x19, [x19, #3968]
    e95c:	b9002ba1 	str	w1, [x29, #40]
    e960:	9100a3a1 	add	x1, x29, #0x28
    e964:	b9002fa2 	str	w2, [x29, #44]
    e968:	52800202 	mov	w2, #0x10                  	// #16
    e96c:	f9400265 	ldr	x5, [x19]
    e970:	b90033a0 	str	w0, [x29, #48]
    e974:	52800820 	mov	w0, #0x41                  	// #65
    e978:	f9001fa5 	str	x5, [x29, #56]
    e97c:	97ffed9c 	bl	9fec <gx_ta_send_command@@Base>
    e980:	6b1f001f 	cmp	w0, wzr
    e984:	f9401fa2 	ldr	x2, [x29, #56]
    e988:	5a9f03e0 	csetm	w0, ne	// ne = any
    e98c:	f9400261 	ldr	x1, [x19]
    e990:	eb01005f 	cmp	x2, x1
    e994:	54000081 	b.ne	e9a4 <fnCa_GetNavResult@@Base+0x6c>  // b.any
    e998:	f9400bf3 	ldr	x19, [sp, #16]
    e99c:	a8c47bfd 	ldp	x29, x30, [sp], #64
    e9a0:	d65f03c0 	ret
    e9a4:	97ffd647 	bl	42c0 <__stack_chk_fail@plt>

000000000000e9a8 <fnCa_GetNavResultPoll@@Base>:
    e9a8:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    e9ac:	52800082 	mov	w2, #0x4                   	// #4
    e9b0:	52800104 	mov	w4, #0x8                   	// #8
    e9b4:	910003fd 	mov	x29, sp
    e9b8:	a90153f3 	stp	x19, x20, [sp, #16]
    e9bc:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    e9c0:	f90013f5 	str	x21, [sp, #32]
    e9c4:	aa0103f4 	mov	x20, x1
    e9c8:	aa0003f5 	mov	x21, x0
    e9cc:	9100f3a1 	add	x1, x29, #0x3c
    e9d0:	910103a3 	add	x3, x29, #0x40
    e9d4:	f947c273 	ldr	x19, [x19, #3968]
    e9d8:	52800840 	mov	w0, #0x42                  	// #66
    e9dc:	f90023bf 	str	xzr, [x29, #64]
    e9e0:	f9400265 	ldr	x5, [x19]
    e9e4:	f90027a5 	str	x5, [x29, #72]
    e9e8:	97ffed81 	bl	9fec <gx_ta_send_command@@Base>
    e9ec:	6b1f001f 	cmp	w0, wzr
    e9f0:	f94027a2 	ldr	x2, [x29, #72]
    e9f4:	5a9f03e0 	csetm	w0, ne	// ne = any
    e9f8:	f9400261 	ldr	x1, [x19]
    e9fc:	b94043a3 	ldr	w3, [x29, #64]
    ea00:	b90002a3 	str	w3, [x21]
    ea04:	eb01005f 	cmp	x2, x1
    ea08:	b94047a1 	ldr	w1, [x29, #68]
    ea0c:	b9000281 	str	w1, [x20]
    ea10:	540000a1 	b.ne	ea24 <fnCa_GetNavResultPoll@@Base+0x7c>  // b.any
    ea14:	a94153f3 	ldp	x19, x20, [sp, #16]
    ea18:	f94013f5 	ldr	x21, [sp, #32]
    ea1c:	a8c57bfd 	ldp	x29, x30, [sp], #80
    ea20:	d65f03c0 	ret
    ea24:	97ffd627 	bl	42c0 <__stack_chk_fail@plt>

000000000000ea28 <fnCa_preprossor_init@@Base>:
    ea28:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ea2c:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ea30:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ea34:	910003fd 	mov	x29, sp
    ea38:	a90153f3 	stp	x19, x20, [sp, #16]
    ea3c:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ea40:	9100c3b4 	add	x20, x29, #0x30
    ea44:	d0000022 	adrp	x2, 14000 <gf_dump_data_interface@@Base+0x3760>
    ea48:	91110063 	add	x3, x3, #0x440
    ea4c:	9109c021 	add	x1, x1, #0x270
    ea50:	9128e042 	add	x2, x2, #0xa38
    ea54:	f947c264 	ldr	x4, [x19, #3968]
    ea58:	910c4063 	add	x3, x3, #0x310
    ea5c:	52800060 	mov	w0, #0x3                   	// #3
    ea60:	b81f4e9f 	str	wzr, [x20, #-12]!
    ea64:	b90023bf 	str	wzr, [x29, #32]
    ea68:	f9400084 	ldr	x4, [x4]
    ea6c:	f90017a4 	str	x4, [x29, #40]
    ea70:	97ffd62c 	bl	4320 <__android_log_print@plt>
    ea74:	52800082 	mov	w2, #0x4                   	// #4
    ea78:	52800520 	mov	w0, #0x29                  	// #41
    ea7c:	aa1403e1 	mov	x1, x20
    ea80:	910083a3 	add	x3, x29, #0x20
    ea84:	2a0203e4 	mov	w4, w2
    ea88:	97ffed59 	bl	9fec <gx_ta_send_command@@Base>
    ea8c:	35000140 	cbnz	w0, eab4 <fnCa_preprossor_init@@Base+0x8c>
    ea90:	b94023a0 	ldr	w0, [x29, #32]
    ea94:	f947c273 	ldr	x19, [x19, #3968]
    ea98:	f94017a2 	ldr	x2, [x29, #40]
    ea9c:	f9400261 	ldr	x1, [x19]
    eaa0:	eb01005f 	cmp	x2, x1
    eaa4:	540000c1 	b.ne	eabc <fnCa_preprossor_init@@Base+0x94>  // b.any
    eaa8:	a94153f3 	ldp	x19, x20, [sp, #16]
    eaac:	a8c37bfd 	ldp	x29, x30, [sp], #48
    eab0:	d65f03c0 	ret
    eab4:	12800000 	mov	w0, #0xffffffff            	// #-1
    eab8:	17fffff7 	b	ea94 <fnCa_preprossor_init@@Base+0x6c>
    eabc:	97ffd601 	bl	42c0 <__stack_chk_fail@plt>

000000000000eac0 <fnCa_updateImageBase@@Base>:
    eac0:	a9b77bfd 	stp	x29, x30, [sp, #-144]!
    eac4:	910003fd 	mov	x29, sp
    eac8:	a90153f3 	stp	x19, x20, [sp, #16]
    eacc:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ead0:	2a0003f4 	mov	w20, w0
    ead4:	12800000 	mov	w0, #0xffffffff            	// #-1
    ead8:	b9006fa0 	str	w0, [x29, #108]
    eadc:	f9002fa1 	str	x1, [x29, #88]
    eae0:	f947c260 	ldr	x0, [x19, #3968]
    eae4:	a9025bf5 	stp	x21, x22, [sp, #32]
    eae8:	a90363f7 	stp	x23, x24, [sp, #48]
    eaec:	f9400000 	ldr	x0, [x0]
    eaf0:	f90023f9 	str	x25, [sp, #64]
    eaf4:	f90047a0 	str	x0, [x29, #136]
    eaf8:	97ffd791 	bl	493c <gf_irq_is_enabled@@Base>
    eafc:	b90073b4 	str	w20, [x29, #112]
    eb00:	f9402fa1 	ldr	x1, [x29, #88]
    eb04:	7100069f 	cmp	w20, #0x1
    eb08:	b90077a1 	str	w1, [x29, #116]
    eb0c:	54000640 	b.eq	ebd4 <fnCa_updateImageBase@@Base+0x114>  // b.none
    eb10:	35000454 	cbnz	w20, eb98 <fnCa_updateImageBase@@Base+0xd8>
    eb14:	9101c3b7 	add	x23, x29, #0x70
    eb18:	9101b3b6 	add	x22, x29, #0x6c
    eb1c:	d0000034 	adrp	x20, 14000 <gf_dump_data_interface@@Base+0x3760>
    eb20:	f0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    eb24:	91110284 	add	x4, x20, #0x440
    eb28:	9109c2b9 	add	x25, x21, #0x270
    eb2c:	910cc098 	add	x24, x4, #0x330
    eb30:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    eb34:	aa1903e1 	mov	x1, x25
    eb38:	9109e042 	add	x2, x2, #0x278
    eb3c:	aa1803e3 	mov	x3, x24
    eb40:	910d4084 	add	x4, x4, #0x350
    eb44:	52800060 	mov	w0, #0x3                   	// #3
    eb48:	97ffd5f6 	bl	4320 <__android_log_print@plt>
    eb4c:	52800520 	mov	w0, #0x29                  	// #41
    eb50:	aa1703e1 	mov	x1, x23
    eb54:	52800102 	mov	w2, #0x8                   	// #8
    eb58:	aa1603e3 	mov	x3, x22
    eb5c:	52800084 	mov	w4, #0x4                   	// #4
    eb60:	97ffed23 	bl	9fec <gx_ta_send_command@@Base>
    eb64:	35000320 	cbnz	w0, ebc8 <fnCa_updateImageBase@@Base+0x108>
    eb68:	b9406fa0 	ldr	w0, [x29, #108]
    eb6c:	7102041f 	cmp	w0, #0x81
    eb70:	540005a0 	b.eq	ec24 <fnCa_updateImageBase@@Base+0x164>  // b.none
    eb74:	b9006fbf 	str	wzr, [x29, #108]
    eb78:	52800004 	mov	w4, #0x0                   	// #0
    eb7c:	91110283 	add	x3, x20, #0x440
    eb80:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    eb84:	52800060 	mov	w0, #0x3                   	// #3
    eb88:	9109c2a1 	add	x1, x21, #0x270
    eb8c:	91092042 	add	x2, x2, #0x248
    eb90:	910cc063 	add	x3, x3, #0x330
    eb94:	97ffd5e3 	bl	4320 <__android_log_print@plt>
    eb98:	b9406fa0 	ldr	w0, [x29, #108]
    eb9c:	f947c273 	ldr	x19, [x19, #3968]
    eba0:	f94047a2 	ldr	x2, [x29, #136]
    eba4:	f9400261 	ldr	x1, [x19]
    eba8:	eb01005f 	cmp	x2, x1
    ebac:	54000641 	b.ne	ec74 <fnCa_updateImageBase@@Base+0x1b4>  // b.any
    ebb0:	a94153f3 	ldp	x19, x20, [sp, #16]
    ebb4:	a9425bf5 	ldp	x21, x22, [sp, #32]
    ebb8:	a94363f7 	ldp	x23, x24, [sp, #48]
    ebbc:	f94023f9 	ldr	x25, [sp, #64]
    ebc0:	a8c97bfd 	ldp	x29, x30, [sp], #144
    ebc4:	d65f03c0 	ret
    ebc8:	12800004 	mov	w4, #0xffffffff            	// #-1
    ebcc:	b9006fa4 	str	w4, [x29, #108]
    ebd0:	17ffffeb 	b	eb7c <fnCa_updateImageBase@@Base+0xbc>
    ebd4:	9101c3b7 	add	x23, x29, #0x70
    ebd8:	9101b3b6 	add	x22, x29, #0x6c
    ebdc:	52800780 	mov	w0, #0x3c                  	// #60
    ebe0:	aa1703e1 	mov	x1, x23
    ebe4:	52800102 	mov	w2, #0x8                   	// #8
    ebe8:	aa1603e3 	mov	x3, x22
    ebec:	52800084 	mov	w4, #0x4                   	// #4
    ebf0:	97ffecff 	bl	9fec <gx_ta_send_command@@Base>
    ebf4:	b9406fa0 	ldr	w0, [x29, #108]
    ebf8:	6b1f001f 	cmp	w0, wzr
    ebfc:	54fffd0d 	b.le	eb9c <fnCa_updateImageBase@@Base+0xdc>
    ec00:	5295f900 	mov	w0, #0xafc8                	// #45000
    ec04:	97ffd5ef 	bl	43c0 <usleep@plt>
    ec08:	9101e3a0 	add	x0, x29, #0x78
    ec0c:	97fff2ef 	bl	b7c8 <fnCa_GetStatus@@Base>
    ec10:	3941e7a0 	ldrb	w0, [x29, #121]
    ec14:	7103401f 	cmp	w0, #0xd0
    ec18:	54fff821 	b.ne	eb1c <fnCa_updateImageBase@@Base+0x5c>  // b.any
    ec1c:	2a1403e0 	mov	w0, w20
    ec20:	17ffffdf 	b	eb9c <fnCa_updateImageBase@@Base+0xdc>
    ec24:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ec28:	aa1903e1 	mov	x1, x25
    ec2c:	91086042 	add	x2, x2, #0x218
    ec30:	aa1803e3 	mov	x3, x24
    ec34:	52800060 	mov	w0, #0x3                   	// #3
    ec38:	910243b6 	add	x22, x29, #0x90
    ec3c:	97ffd5b9 	bl	4320 <__android_log_print@plt>
    ec40:	97ffd70d 	bl	4874 <gf_disable_irq@@Base>
    ec44:	97fff2a9 	bl	b6e8 <fnCa_CleanStatus@@Base>
    ec48:	52800020 	mov	w0, #0x1                   	// #1
    ec4c:	381dbec0 	strb	w0, [x22, #-37]!
    ec50:	aa1603e0 	mov	x0, x22
    ec54:	97fff3e7 	bl	bbf0 <fnCa_FWUpdate@@Base>
    ec58:	97ffd73c 	bl	4948 <gf_hw_reset@@Base>
    ec5c:	52800041 	mov	w1, #0x2                   	// #2
    ec60:	aa1603e0 	mov	x0, x22
    ec64:	3901afa1 	strb	w1, [x29, #107]
    ec68:	97fff3e2 	bl	bbf0 <fnCa_FWUpdate@@Base>
    ec6c:	97ffd6d1 	bl	47b0 <gf_enable_irq@@Base>
    ec70:	17ffffc1 	b	eb74 <fnCa_updateImageBase@@Base+0xb4>
    ec74:	97ffd593 	bl	42c0 <__stack_chk_fail@plt>

000000000000ec78 <fnCa_updateNavBase@@Base>:
    ec78:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    ec7c:	910003fd 	mov	x29, sp
    ec80:	a90153f3 	stp	x19, x20, [sp, #16]
    ec84:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ec88:	900000f4 	adrp	x20, 2a000 <gf_dump_data_interface@@Base+0x19760>
    ec8c:	a9025bf5 	stp	x21, x22, [sp, #32]
    ec90:	2a0003f5 	mov	w21, w0
    ec94:	12800000 	mov	w0, #0xffffffff            	// #-1
    ec98:	b9005fa0 	str	w0, [x29, #92]
    ec9c:	f947c260 	ldr	x0, [x19, #3968]
    eca0:	f90027a1 	str	x1, [x29, #72]
    eca4:	a90363f7 	stp	x23, x24, [sp, #48]
    eca8:	f9400000 	ldr	x0, [x0]
    ecac:	f90037a0 	str	x0, [x29, #104]
    ecb0:	97ffd723 	bl	493c <gf_irq_is_enabled@@Base>
    ecb4:	b90063b5 	str	w21, [x29, #96]
    ecb8:	f94027a1 	ldr	x1, [x29, #72]
    ecbc:	3959d280 	ldrb	w0, [x20, #1652]
    ecc0:	b90067a1 	str	w1, [x29, #100]
    ecc4:	34000640 	cbz	w0, ed8c <fnCa_updateNavBase@@Base+0x114>
    ecc8:	3919d29f 	strb	wzr, [x20, #1652]
    eccc:	710006bf 	cmp	w21, #0x1
    ecd0:	54000740 	b.eq	edb8 <fnCa_updateNavBase@@Base+0x140>  // b.none
    ecd4:	340001d5 	cbz	w21, ed0c <fnCa_updateNavBase@@Base+0x94>
    ecd8:	b9405fa0 	ldr	w0, [x29, #92]
    ecdc:	52800021 	mov	w1, #0x1                   	// #1
    ece0:	3919d281 	strb	w1, [x20, #1652]
    ece4:	f947c273 	ldr	x19, [x19, #3968]
    ece8:	f94037a2 	ldr	x2, [x29, #104]
    ecec:	f9400261 	ldr	x1, [x19]
    ecf0:	eb01005f 	cmp	x2, x1
    ecf4:	540007a1 	b.ne	ede8 <fnCa_updateNavBase@@Base+0x170>  // b.any
    ecf8:	a94153f3 	ldp	x19, x20, [sp, #16]
    ecfc:	a9425bf5 	ldp	x21, x22, [sp, #32]
    ed00:	a94363f7 	ldp	x23, x24, [sp, #48]
    ed04:	a8c77bfd 	ldp	x29, x30, [sp], #112
    ed08:	d65f03c0 	ret
    ed0c:	910183b8 	add	x24, x29, #0x60
    ed10:	910173b7 	add	x23, x29, #0x5c
    ed14:	d0000024 	adrp	x4, 14000 <gf_dump_data_interface@@Base+0x3760>
    ed18:	f0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
    ed1c:	91110084 	add	x4, x4, #0x440
    ed20:	9109c2b5 	add	x21, x21, #0x270
    ed24:	910dc096 	add	x22, x4, #0x370
    ed28:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ed2c:	aa1503e1 	mov	x1, x21
    ed30:	9109e042 	add	x2, x2, #0x278
    ed34:	aa1603e3 	mov	x3, x22
    ed38:	910e4084 	add	x4, x4, #0x390
    ed3c:	52800060 	mov	w0, #0x3                   	// #3
    ed40:	97ffd578 	bl	4320 <__android_log_print@plt>
    ed44:	aa1803e1 	mov	x1, x24
    ed48:	52800102 	mov	w2, #0x8                   	// #8
    ed4c:	aa1703e3 	mov	x3, x23
    ed50:	52800084 	mov	w4, #0x4                   	// #4
    ed54:	528007e0 	mov	w0, #0x3f                  	// #63
    ed58:	97ffeca5 	bl	9fec <gx_ta_send_command@@Base>
    ed5c:	6b1f001f 	cmp	w0, wzr
    ed60:	5a9f03e5 	csetm	w5, ne	// ne = any
    ed64:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ed68:	52800060 	mov	w0, #0x3                   	// #3
    ed6c:	aa1503e1 	mov	x1, x21
    ed70:	910b2042 	add	x2, x2, #0x2c8
    ed74:	aa1603e3 	mov	x3, x22
    ed78:	2a0503e4 	mov	w4, w5
    ed7c:	b9005fa5 	str	w5, [x29, #92]
    ed80:	97ffd568 	bl	4320 <__android_log_print@plt>
    ed84:	b9405fa0 	ldr	w0, [x29, #92]
    ed88:	17ffffd5 	b	ecdc <fnCa_updateNavBase@@Base+0x64>
    ed8c:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ed90:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ed94:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ed98:	91110063 	add	x3, x3, #0x440
    ed9c:	52800060 	mov	w0, #0x3                   	// #3
    eda0:	9109c021 	add	x1, x1, #0x270
    eda4:	910a4042 	add	x2, x2, #0x290
    eda8:	910dc063 	add	x3, x3, #0x370
    edac:	97ffd55d 	bl	4320 <__android_log_print@plt>
    edb0:	52800000 	mov	w0, #0x0                   	// #0
    edb4:	17ffffcc 	b	ece4 <fnCa_updateNavBase@@Base+0x6c>
    edb8:	910183b8 	add	x24, x29, #0x60
    edbc:	910173b7 	add	x23, x29, #0x5c
    edc0:	528007c0 	mov	w0, #0x3e                  	// #62
    edc4:	aa1803e1 	mov	x1, x24
    edc8:	52800102 	mov	w2, #0x8                   	// #8
    edcc:	aa1703e3 	mov	x3, x23
    edd0:	52800084 	mov	w4, #0x4                   	// #4
    edd4:	97ffec86 	bl	9fec <gx_ta_send_command@@Base>
    edd8:	b9405fa0 	ldr	w0, [x29, #92]
    eddc:	6b1f001f 	cmp	w0, wzr
    ede0:	54fff9ac 	b.gt	ed14 <fnCa_updateNavBase@@Base+0x9c>
    ede4:	17ffffbe 	b	ecdc <fnCa_updateNavBase@@Base+0x64>
    ede8:	97ffd536 	bl	42c0 <__stack_chk_fail@plt>

000000000000edec <fnCa_InitHBDetection@@Base>:
    edec:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    edf0:	52800082 	mov	w2, #0x4                   	// #4
    edf4:	52800600 	mov	w0, #0x30                  	// #48
    edf8:	910003fd 	mov	x29, sp
    edfc:	f9000bf3 	str	x19, [sp, #16]
    ee00:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    ee04:	910083a1 	add	x1, x29, #0x20
    ee08:	2a0203e4 	mov	w4, w2
    ee0c:	910093a3 	add	x3, x29, #0x24
    ee10:	b90023bf 	str	wzr, [x29, #32]
    ee14:	f947c273 	ldr	x19, [x19, #3968]
    ee18:	b90027bf 	str	wzr, [x29, #36]
    ee1c:	f9400265 	ldr	x5, [x19]
    ee20:	f90017a5 	str	x5, [x29, #40]
    ee24:	97ffec72 	bl	9fec <gx_ta_send_command@@Base>
    ee28:	6b1f001f 	cmp	w0, wzr
    ee2c:	f94017a2 	ldr	x2, [x29, #40]
    ee30:	5a9f03e0 	csetm	w0, ne	// ne = any
    ee34:	f9400261 	ldr	x1, [x19]
    ee38:	eb01005f 	cmp	x2, x1
    ee3c:	54000081 	b.ne	ee4c <fnCa_InitHBDetection@@Base+0x60>  // b.any
    ee40:	f9400bf3 	ldr	x19, [sp, #16]
    ee44:	a8c37bfd 	ldp	x29, x30, [sp], #48
    ee48:	d65f03c0 	ret
    ee4c:	97ffd51d 	bl	42c0 <__stack_chk_fail@plt>

000000000000ee50 <fnCa_read_hbd@@Base>:
    ee50:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    ee54:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    ee58:	2a0103e4 	mov	w4, w1
    ee5c:	910003fd 	mov	x29, sp
    ee60:	a90153f3 	stp	x19, x20, [sp, #16]
    ee64:	9100c3b3 	add	x19, x29, #0x30
    ee68:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ee6c:	91110063 	add	x3, x3, #0x440
    ee70:	aa0003f4 	mov	x20, x0
    ee74:	9109c021 	add	x1, x1, #0x270
    ee78:	910ec063 	add	x3, x3, #0x3b0
    ee7c:	381ffe62 	strb	w2, [x19, #-1]!
    ee80:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ee84:	910be042 	add	x2, x2, #0x2f8
    ee88:	52800060 	mov	w0, #0x3                   	// #3
    ee8c:	f90013a4 	str	x4, [x29, #32]
    ee90:	97ffd524 	bl	4320 <__android_log_print@plt>
    ee94:	f94013a4 	ldr	x4, [x29, #32]
    ee98:	aa1303e1 	mov	x1, x19
    ee9c:	aa1403e3 	mov	x3, x20
    eea0:	52800022 	mov	w2, #0x1                   	// #1
    eea4:	528005e0 	mov	w0, #0x2f                  	// #47
    eea8:	97ffec51 	bl	9fec <gx_ta_send_command@@Base>
    eeac:	6b1f001f 	cmp	w0, wzr
    eeb0:	a94153f3 	ldp	x19, x20, [sp, #16]
    eeb4:	5a9f03e0 	csetm	w0, ne	// ne = any
    eeb8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    eebc:	d65f03c0 	ret

000000000000eec0 <fnCa_read_image@@Base>:
    eec0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    eec4:	d0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    eec8:	f0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    eecc:	910003fd 	mov	x29, sp
    eed0:	a90153f3 	stp	x19, x20, [sp, #16]
    eed4:	f00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    eed8:	f0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    eedc:	91110063 	add	x3, x3, #0x440
    eee0:	53001c14 	uxtb	w20, w0
    eee4:	9109c021 	add	x1, x1, #0x270
    eee8:	910c4042 	add	x2, x2, #0x310
    eeec:	f947c273 	ldr	x19, [x19, #3968]
    eef0:	910f0063 	add	x3, x3, #0x3c0
    eef4:	52800060 	mov	w0, #0x3                   	// #3
    eef8:	b90023bf 	str	wzr, [x29, #32]
    eefc:	b90027bf 	str	wzr, [x29, #36]
    ef00:	f9400264 	ldr	x4, [x19]
    ef04:	f90017a4 	str	x4, [x29, #40]
    ef08:	97ffd506 	bl	4320 <__android_log_print@plt>
    ef0c:	9100c3a1 	add	x1, x29, #0x30
    ef10:	52800082 	mov	w2, #0x4                   	// #4
    ef14:	2a0203e4 	mov	w4, w2
    ef18:	52800cc0 	mov	w0, #0x66                  	// #102
    ef1c:	910083a3 	add	x3, x29, #0x20
    ef20:	b81f4c34 	str	w20, [x1, #-12]!
    ef24:	97ffec32 	bl	9fec <gx_ta_send_command@@Base>
    ef28:	6b1f001f 	cmp	w0, wzr
    ef2c:	f94017a2 	ldr	x2, [x29, #40]
    ef30:	5a9f03e0 	csetm	w0, ne	// ne = any
    ef34:	f9400261 	ldr	x1, [x19]
    ef38:	eb01005f 	cmp	x2, x1
    ef3c:	54000081 	b.ne	ef4c <fnCa_read_image@@Base+0x8c>  // b.any
    ef40:	a94153f3 	ldp	x19, x20, [sp, #16]
    ef44:	a8c37bfd 	ldp	x29, x30, [sp], #48
    ef48:	d65f03c0 	ret
    ef4c:	97ffd4dd 	bl	42c0 <__stack_chk_fail@plt>

000000000000ef50 <fnCa_GetHBData@@Base>:
    ef50:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    ef54:	52800082 	mov	w2, #0x4                   	// #4
    ef58:	52800384 	mov	w4, #0x1c                  	// #28
    ef5c:	910003fd 	mov	x29, sp
    ef60:	a90153f3 	stp	x19, x20, [sp, #16]
    ef64:	f00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    ef68:	9100e3b3 	add	x19, x29, #0x38
    ef6c:	f90013f5 	str	x21, [sp, #32]
    ef70:	9100d3a1 	add	x1, x29, #0x34
    ef74:	aa0003f5 	mov	x21, x0
    ef78:	aa1303e3 	mov	x3, x19
    ef7c:	f947c285 	ldr	x5, [x20, #3968]
    ef80:	528005e0 	mov	w0, #0x2f                  	// #47
    ef84:	b90037bf 	str	wzr, [x29, #52]
    ef88:	a9007e7f 	stp	xzr, xzr, [x19]
    ef8c:	f94000a5 	ldr	x5, [x5]
    ef90:	f90027bf 	str	xzr, [x29, #72]
    ef94:	f9002fa5 	str	x5, [x29, #88]
    ef98:	b90053bf 	str	wzr, [x29, #80]
    ef9c:	97ffec14 	bl	9fec <gx_ta_send_command@@Base>
    efa0:	35000260 	cbnz	w0, efec <fnCa_GetHBData@@Base+0x9c>
    efa4:	b4000215 	cbz	x21, efe4 <fnCa_GetHBData@@Base+0x94>
    efa8:	a9400e62 	ldp	x2, x3, [x19]
    efac:	f9400a64 	ldr	x4, [x19, #16]
    efb0:	b9401a61 	ldr	w1, [x19, #24]
    efb4:	f9000aa4 	str	x4, [x21, #16]
    efb8:	b9001aa1 	str	w1, [x21, #24]
    efbc:	a9000ea2 	stp	x2, x3, [x21]
    efc0:	f947c294 	ldr	x20, [x20, #3968]
    efc4:	f9402fa2 	ldr	x2, [x29, #88]
    efc8:	f9400281 	ldr	x1, [x20]
    efcc:	eb01005f 	cmp	x2, x1
    efd0:	54000121 	b.ne	eff4 <fnCa_GetHBData@@Base+0xa4>  // b.any
    efd4:	a94153f3 	ldp	x19, x20, [sp, #16]
    efd8:	f94013f5 	ldr	x21, [sp, #32]
    efdc:	a8c67bfd 	ldp	x29, x30, [sp], #96
    efe0:	d65f03c0 	ret
    efe4:	52800000 	mov	w0, #0x0                   	// #0
    efe8:	17fffff6 	b	efc0 <fnCa_GetHBData@@Base+0x70>
    efec:	12800000 	mov	w0, #0xffffffff            	// #-1
    eff0:	17fffff4 	b	efc0 <fnCa_GetHBData@@Base+0x70>
    eff4:	97ffd4b3 	bl	42c0 <__stack_chk_fail@plt>

000000000000eff8 <fnCa_getHBRawData@@Base>:
    eff8:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    effc:	52800082 	mov	w2, #0x4                   	// #4
    f000:	52800304 	mov	w4, #0x18                  	// #24
    f004:	910003fd 	mov	x29, sp
    f008:	a90153f3 	stp	x19, x20, [sp, #16]
    f00c:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f010:	910103b4 	add	x20, x29, #0x40
    f014:	f90013f5 	str	x21, [sp, #32]
    f018:	9100f3a1 	add	x1, x29, #0x3c
    f01c:	aa0003f5 	mov	x21, x0
    f020:	aa1403e3 	mov	x3, x20
    f024:	f947c265 	ldr	x5, [x19, #3968]
    f028:	52800d40 	mov	w0, #0x6a                  	// #106
    f02c:	b9003fbf 	str	wzr, [x29, #60]
    f030:	a9047fbf 	stp	xzr, xzr, [x29, #64]
    f034:	f94000a5 	ldr	x5, [x5]
    f038:	f9002fa5 	str	x5, [x29, #88]
    f03c:	f9002bbf 	str	xzr, [x29, #80]
    f040:	97ffebeb 	bl	9fec <gx_ta_send_command@@Base>
    f044:	35000240 	cbnz	w0, f08c <fnCa_getHBRawData@@Base+0x94>
    f048:	b40001f5 	cbz	x21, f084 <fnCa_getHBRawData@@Base+0x8c>
    f04c:	f9400a80 	ldr	x0, [x20, #16]
    f050:	a9400e82 	ldp	x2, x3, [x20]
    f054:	f9000aa0 	str	x0, [x21, #16]
    f058:	52800000 	mov	w0, #0x0                   	// #0
    f05c:	a9000ea2 	stp	x2, x3, [x21]
    f060:	f947c273 	ldr	x19, [x19, #3968]
    f064:	f9402fa2 	ldr	x2, [x29, #88]
    f068:	f9400261 	ldr	x1, [x19]
    f06c:	eb01005f 	cmp	x2, x1
    f070:	54000121 	b.ne	f094 <fnCa_getHBRawData@@Base+0x9c>  // b.any
    f074:	a94153f3 	ldp	x19, x20, [sp, #16]
    f078:	f94013f5 	ldr	x21, [sp, #32]
    f07c:	a8c67bfd 	ldp	x29, x30, [sp], #96
    f080:	d65f03c0 	ret
    f084:	52800000 	mov	w0, #0x0                   	// #0
    f088:	17fffff6 	b	f060 <fnCa_getHBRawData@@Base+0x68>
    f08c:	12800000 	mov	w0, #0xffffffff            	// #-1
    f090:	17fffff4 	b	f060 <fnCa_getHBRawData@@Base+0x68>
    f094:	97ffd48b 	bl	42c0 <__stack_chk_fail@plt>

000000000000f098 <fnCa_getGscHbdRet@@Base>:
    f098:	a9b97bfd 	stp	x29, x30, [sp, #-112]!
    f09c:	52800082 	mov	w2, #0x4                   	// #4
    f0a0:	52800504 	mov	w4, #0x28                  	// #40
    f0a4:	910003fd 	mov	x29, sp
    f0a8:	a90153f3 	stp	x19, x20, [sp, #16]
    f0ac:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f0b0:	910103b4 	add	x20, x29, #0x40
    f0b4:	f90013f5 	str	x21, [sp, #32]
    f0b8:	9100f3a1 	add	x1, x29, #0x3c
    f0bc:	aa0003f5 	mov	x21, x0
    f0c0:	aa1403e3 	mov	x3, x20
    f0c4:	f947c265 	ldr	x5, [x19, #3968]
    f0c8:	52800d60 	mov	w0, #0x6b                  	// #107
    f0cc:	b9003fbf 	str	wzr, [x29, #60]
    f0d0:	a9047fbf 	stp	xzr, xzr, [x29, #64]
    f0d4:	f94000a5 	ldr	x5, [x5]
    f0d8:	f90037a5 	str	x5, [x29, #104]
    f0dc:	a9057fbf 	stp	xzr, xzr, [x29, #80]
    f0e0:	f90033bf 	str	xzr, [x29, #96]
    f0e4:	97ffebc2 	bl	9fec <gx_ta_send_command@@Base>
    f0e8:	35000280 	cbnz	w0, f138 <fnCa_getGscHbdRet@@Base+0xa0>
    f0ec:	b4000235 	cbz	x21, f130 <fnCa_getGscHbdRet@@Base+0x98>
    f0f0:	f9401280 	ldr	x0, [x20, #32]
    f0f4:	a9401684 	ldp	x4, x5, [x20]
    f0f8:	a9410e82 	ldp	x2, x3, [x20, #16]
    f0fc:	f90012a0 	str	x0, [x21, #32]
    f100:	52800000 	mov	w0, #0x0                   	// #0
    f104:	a90016a4 	stp	x4, x5, [x21]
    f108:	a9010ea2 	stp	x2, x3, [x21, #16]
    f10c:	f947c273 	ldr	x19, [x19, #3968]
    f110:	f94037a2 	ldr	x2, [x29, #104]
    f114:	f9400261 	ldr	x1, [x19]
    f118:	eb01005f 	cmp	x2, x1
    f11c:	54000121 	b.ne	f140 <fnCa_getGscHbdRet@@Base+0xa8>  // b.any
    f120:	a94153f3 	ldp	x19, x20, [sp, #16]
    f124:	f94013f5 	ldr	x21, [sp, #32]
    f128:	a8c77bfd 	ldp	x29, x30, [sp], #112
    f12c:	d65f03c0 	ret
    f130:	52800000 	mov	w0, #0x0                   	// #0
    f134:	17fffff6 	b	f10c <fnCa_getGscHbdRet@@Base+0x74>
    f138:	12800000 	mov	w0, #0xffffffff            	// #-1
    f13c:	17fffff4 	b	f10c <fnCa_getGscHbdRet@@Base+0x74>
    f140:	97ffd460 	bl	42c0 <__stack_chk_fail@plt>

000000000000f144 <fnCa_recoverFwCfg@@Base>:
    f144:	a9bc7bfd 	stp	x29, x30, [sp, #-64]!
    f148:	52800082 	mov	w2, #0x4                   	// #4
    f14c:	910003fd 	mov	x29, sp
    f150:	a90153f3 	stp	x19, x20, [sp, #16]
    f154:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f158:	9100d3b4 	add	x20, x29, #0x34
    f15c:	f90013f5 	str	x21, [sp, #32]
    f160:	9100c3a1 	add	x1, x29, #0x30
    f164:	aa0003f5 	mov	x21, x0
    f168:	aa1403e3 	mov	x3, x20
    f16c:	f947c265 	ldr	x5, [x19, #3968]
    f170:	52800720 	mov	w0, #0x39                  	// #57
    f174:	2a0203e4 	mov	w4, w2
    f178:	b90033bf 	str	wzr, [x29, #48]
    f17c:	b90037bf 	str	wzr, [x29, #52]
    f180:	f94000a5 	ldr	x5, [x5]
    f184:	f9001fa5 	str	x5, [x29, #56]
    f188:	97ffeb99 	bl	9fec <gx_ta_send_command@@Base>
    f18c:	350001e0 	cbnz	w0, f1c8 <fnCa_recoverFwCfg@@Base+0x84>
    f190:	b4000195 	cbz	x21, f1c0 <fnCa_recoverFwCfg@@Base+0x7c>
    f194:	b9400281 	ldr	w1, [x20]
    f198:	b90002a1 	str	w1, [x21]
    f19c:	f947c273 	ldr	x19, [x19, #3968]
    f1a0:	f9401fa2 	ldr	x2, [x29, #56]
    f1a4:	f9400261 	ldr	x1, [x19]
    f1a8:	eb01005f 	cmp	x2, x1
    f1ac:	54000121 	b.ne	f1d0 <fnCa_recoverFwCfg@@Base+0x8c>  // b.any
    f1b0:	a94153f3 	ldp	x19, x20, [sp, #16]
    f1b4:	f94013f5 	ldr	x21, [sp, #32]
    f1b8:	a8c47bfd 	ldp	x29, x30, [sp], #64
    f1bc:	d65f03c0 	ret
    f1c0:	52800000 	mov	w0, #0x0                   	// #0
    f1c4:	17fffff6 	b	f19c <fnCa_recoverFwCfg@@Base+0x58>
    f1c8:	12800000 	mov	w0, #0xffffffff            	// #-1
    f1cc:	17fffff4 	b	f19c <fnCa_recoverFwCfg@@Base+0x58>
    f1d0:	97ffd43c 	bl	42c0 <__stack_chk_fail@plt>

000000000000f1d4 <fnCa_GetGscData@@Base>:
    f1d4:	a9b77bfd 	stp	x29, x30, [sp, #-144]!
    f1d8:	b0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    f1dc:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    f1e0:	910003fd 	mov	x29, sp
    f1e4:	f90013f5 	str	x21, [sp, #32]
    f1e8:	d00000d5 	adrp	x21, 29000 <gf_dump_data_interface@@Base+0x18760>
    f1ec:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f1f0:	91110063 	add	x3, x3, #0x440
    f1f4:	a90153f3 	stp	x19, x20, [sp, #16]
    f1f8:	f947c2a4 	ldr	x4, [x21, #3968]
    f1fc:	9109c021 	add	x1, x1, #0x270
    f200:	910ca042 	add	x2, x2, #0x328
    f204:	910f4063 	add	x3, x3, #0x3d0
    f208:	aa0003f4 	mov	x20, x0
    f20c:	52800060 	mov	w0, #0x3                   	// #3
    f210:	f9400084 	ldr	x4, [x4]
    f214:	910103b3 	add	x19, x29, #0x40
    f218:	f90047a4 	str	x4, [x29, #136]
    f21c:	97ffd441 	bl	4320 <__android_log_print@plt>
    f220:	b9003fbf 	str	wzr, [x29, #60]
    f224:	52800d20 	mov	w0, #0x69                  	// #105
    f228:	9100f3a1 	add	x1, x29, #0x3c
    f22c:	52800082 	mov	w2, #0x4                   	// #4
    f230:	aa1303e3 	mov	x3, x19
    f234:	52800904 	mov	w4, #0x48                  	// #72
    f238:	f90043bf 	str	xzr, [x29, #128]
    f23c:	a9047fbf 	stp	xzr, xzr, [x29, #64]
    f240:	a9057fbf 	stp	xzr, xzr, [x29, #80]
    f244:	a9067fbf 	stp	xzr, xzr, [x29, #96]
    f248:	a9077fbf 	stp	xzr, xzr, [x29, #112]
    f24c:	97ffeb68 	bl	9fec <gx_ta_send_command@@Base>
    f250:	35000300 	cbnz	w0, f2b0 <fnCa_GetGscData@@Base+0xdc>
    f254:	b40002b4 	cbz	x20, f2a8 <fnCa_GetGscData@@Base+0xd4>
    f258:	f9402260 	ldr	x0, [x19, #64]
    f25c:	a9401e66 	ldp	x6, x7, [x19]
    f260:	a9411664 	ldp	x4, x5, [x19, #16]
    f264:	a9420e62 	ldp	x2, x3, [x19, #32]
    f268:	a9432668 	ldp	x8, x9, [x19, #48]
    f26c:	f9002280 	str	x0, [x20, #64]
    f270:	52800000 	mov	w0, #0x0                   	// #0
    f274:	a9001e86 	stp	x6, x7, [x20]
    f278:	a9011684 	stp	x4, x5, [x20, #16]
    f27c:	a9020e82 	stp	x2, x3, [x20, #32]
    f280:	a9032688 	stp	x8, x9, [x20, #48]
    f284:	f947c2b5 	ldr	x21, [x21, #3968]
    f288:	f94047a2 	ldr	x2, [x29, #136]
    f28c:	f94002a1 	ldr	x1, [x21]
    f290:	eb01005f 	cmp	x2, x1
    f294:	54000121 	b.ne	f2b8 <fnCa_GetGscData@@Base+0xe4>  // b.any
    f298:	a94153f3 	ldp	x19, x20, [sp, #16]
    f29c:	f94013f5 	ldr	x21, [sp, #32]
    f2a0:	a8c97bfd 	ldp	x29, x30, [sp], #144
    f2a4:	d65f03c0 	ret
    f2a8:	52800000 	mov	w0, #0x0                   	// #0
    f2ac:	17fffff6 	b	f284 <fnCa_GetGscData@@Base+0xb0>
    f2b0:	12800000 	mov	w0, #0xffffffff            	// #-1
    f2b4:	17fffff4 	b	f284 <fnCa_GetGscData@@Base+0xb0>
    f2b8:	97ffd402 	bl	42c0 <__stack_chk_fail@plt>

000000000000f2bc <fnCa_enableGsc@@Base>:
    f2bc:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f2c0:	52800082 	mov	w2, #0x4                   	// #4
    f2c4:	910003fd 	mov	x29, sp
    f2c8:	f9000bf3 	str	x19, [sp, #16]
    f2cc:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f2d0:	910083a1 	add	x1, x29, #0x20
    f2d4:	2a0203e4 	mov	w4, w2
    f2d8:	b90023a0 	str	w0, [x29, #32]
    f2dc:	910093a3 	add	x3, x29, #0x24
    f2e0:	f947c273 	ldr	x19, [x19, #3968]
    f2e4:	52800ce0 	mov	w0, #0x67                  	// #103
    f2e8:	b90027bf 	str	wzr, [x29, #36]
    f2ec:	f9400265 	ldr	x5, [x19]
    f2f0:	f90017a5 	str	x5, [x29, #40]
    f2f4:	97ffeb3e 	bl	9fec <gx_ta_send_command@@Base>
    f2f8:	6b1f001f 	cmp	w0, wzr
    f2fc:	f94017a2 	ldr	x2, [x29, #40]
    f300:	5a9f03e0 	csetm	w0, ne	// ne = any
    f304:	f9400261 	ldr	x1, [x19]
    f308:	eb01005f 	cmp	x2, x1
    f30c:	54000081 	b.ne	f31c <fnCa_enableGsc@@Base+0x60>  // b.any
    f310:	f9400bf3 	ldr	x19, [sp, #16]
    f314:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f318:	d65f03c0 	ret
    f31c:	97ffd3e9 	bl	42c0 <__stack_chk_fail@plt>

000000000000f320 <fnCa_controlSampling@@Base>:
    f320:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f324:	52800082 	mov	w2, #0x4                   	// #4
    f328:	910003fd 	mov	x29, sp
    f32c:	f9000bf3 	str	x19, [sp, #16]
    f330:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f334:	910083a1 	add	x1, x29, #0x20
    f338:	2a0203e4 	mov	w4, w2
    f33c:	b90023a0 	str	w0, [x29, #32]
    f340:	910093a3 	add	x3, x29, #0x24
    f344:	f947c273 	ldr	x19, [x19, #3968]
    f348:	52800620 	mov	w0, #0x31                  	// #49
    f34c:	b90027bf 	str	wzr, [x29, #36]
    f350:	f9400265 	ldr	x5, [x19]
    f354:	f90017a5 	str	x5, [x29, #40]
    f358:	97ffeb25 	bl	9fec <gx_ta_send_command@@Base>
    f35c:	6b1f001f 	cmp	w0, wzr
    f360:	f94017a2 	ldr	x2, [x29, #40]
    f364:	5a9f03e0 	csetm	w0, ne	// ne = any
    f368:	f9400261 	ldr	x1, [x19]
    f36c:	eb01005f 	cmp	x2, x1
    f370:	54000081 	b.ne	f380 <fnCa_controlSampling@@Base+0x60>  // b.any
    f374:	f9400bf3 	ldr	x19, [sp, #16]
    f378:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f37c:	d65f03c0 	ret
    f380:	97ffd3d0 	bl	42c0 <__stack_chk_fail@plt>

000000000000f384 <fnCa_dump_data@@Base>:
    f384:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
    f388:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f38c:	910003fd 	mov	x29, sp
    f390:	a90153f3 	stp	x19, x20, [sp, #16]
    f394:	d00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
    f398:	b0000033 	adrp	x19, 14000 <gf_dump_data_interface@@Base+0x3760>
    f39c:	a9046bf9 	stp	x25, x26, [sp, #64]
    f3a0:	d0000019 	adrp	x25, 11000 <gf_dump_data_interface@@Base+0x760>
    f3a4:	9111027a 	add	x26, x19, #0x440
    f3a8:	f947c285 	ldr	x5, [x20, #3968]
    f3ac:	910d6042 	add	x2, x2, #0x358
    f3b0:	a9025bf5 	stp	x21, x22, [sp, #32]
    f3b4:	a90363f7 	stp	x23, x24, [sp, #48]
    f3b8:	2a0103f5 	mov	w21, w1
    f3bc:	f94000a5 	ldr	x5, [x5]
    f3c0:	9109c336 	add	x22, x25, #0x270
    f3c4:	910f8357 	add	x23, x26, #0x3e0
    f3c8:	aa0003f8 	mov	x24, x0
    f3cc:	aa1603e1 	mov	x1, x22
    f3d0:	52800060 	mov	w0, #0x3                   	// #3
    f3d4:	aa1703e3 	mov	x3, x23
    f3d8:	2a1503e4 	mov	w4, w21
    f3dc:	f9002fa5 	str	x5, [x29, #88]
    f3e0:	b90057bf 	str	wzr, [x29, #84]
    f3e4:	97ffd3cf 	bl	4320 <__android_log_print@plt>
    f3e8:	710036bf 	cmp	w21, #0xd
    f3ec:	54000688 	b.hi	f4bc <fnCa_dump_data@@Base+0x138>  // b.pmore
    f3f0:	b4000678 	cbz	x24, f4bc <fnCa_dump_data@@Base+0x138>
    f3f4:	d28e7980 	mov	x0, #0x73cc                	// #29644
    f3f8:	f2a00020 	movk	x0, #0x1, lsl #16
    f3fc:	97ffd40d 	bl	4430 <malloc@plt>
    f400:	aa0003f3 	mov	x19, x0
    f404:	b4000840 	cbz	x0, f50c <fnCa_dump_data@@Base+0x188>
    f408:	d28e7982 	mov	x2, #0x73cc                	// #29644
    f40c:	52800001 	mov	w1, #0x0                   	// #0
    f410:	f2a00022 	movk	x2, #0x1, lsl #16
    f414:	97ffd40f 	bl	4450 <memset@plt>
    f418:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f41c:	aa1603e1 	mov	x1, x22
    f420:	910ea042 	add	x2, x2, #0x3a8
    f424:	aa1703e3 	mov	x3, x23
    f428:	52800060 	mov	w0, #0x3                   	// #3
    f42c:	97ffd3bd 	bl	4320 <__android_log_print@plt>
    f430:	52800740 	mov	w0, #0x3a                  	// #58
    f434:	910153a1 	add	x1, x29, #0x54
    f438:	52800082 	mov	w2, #0x4                   	// #4
    f43c:	d2800003 	mov	x3, #0x0                   	// #0
    f440:	52800004 	mov	w4, #0x0                   	// #0
    f444:	aa1303e5 	mov	x5, x19
    f448:	97ffec08 	bl	a468 <gx_ta_send_command_ex@@Base>
    f44c:	350004c0 	cbnz	w0, f4e4 <fnCa_dump_data@@Base+0x160>
    f450:	91405e65 	add	x5, x19, #0x17, lsl #12
    f454:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f458:	aa1703e3 	mov	x3, x23
    f45c:	aa1603e1 	mov	x1, x22
    f460:	910f8042 	add	x2, x2, #0x3e0
    f464:	52800060 	mov	w0, #0x3                   	// #3
    f468:	b943c4a4 	ldr	w4, [x5, #964]
    f46c:	b943c8a5 	ldr	w5, [x5, #968]
    f470:	97ffd3ac 	bl	4320 <__android_log_print@plt>
    f474:	2a1503e1 	mov	w1, w21
    f478:	aa1803e2 	mov	x2, x24
    f47c:	aa1303e0 	mov	x0, x19
    f480:	94000508 	bl	108a0 <gf_dump_data_interface@@Base>
    f484:	aa1303e0 	mov	x0, x19
    f488:	97ffd402 	bl	4490 <free@plt>
    f48c:	52800000 	mov	w0, #0x0                   	// #0
    f490:	f947c294 	ldr	x20, [x20, #3968]
    f494:	f9402fa2 	ldr	x2, [x29, #88]
    f498:	f9400281 	ldr	x1, [x20]
    f49c:	eb01005f 	cmp	x2, x1
    f4a0:	54000481 	b.ne	f530 <fnCa_dump_data@@Base+0x1ac>  // b.any
    f4a4:	a94153f3 	ldp	x19, x20, [sp, #16]
    f4a8:	a9425bf5 	ldp	x21, x22, [sp, #32]
    f4ac:	a94363f7 	ldp	x23, x24, [sp, #48]
    f4b0:	a9446bf9 	ldp	x25, x26, [sp, #64]
    f4b4:	a8c67bfd 	ldp	x29, x30, [sp], #96
    f4b8:	d65f03c0 	ret
    f4bc:	91110264 	add	x4, x19, #0x440
    f4c0:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f4c4:	910f8083 	add	x3, x4, #0x3e0
    f4c8:	528000c0 	mov	w0, #0x6                   	// #6
    f4cc:	9109c321 	add	x1, x25, #0x270
    f4d0:	910de042 	add	x2, x2, #0x378
    f4d4:	910fc084 	add	x4, x4, #0x3f0
    f4d8:	97ffd392 	bl	4320 <__android_log_print@plt>
    f4dc:	12800000 	mov	w0, #0xffffffff            	// #-1
    f4e0:	17ffffec 	b	f490 <fnCa_dump_data@@Base+0x10c>
    f4e4:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f4e8:	aa1603e1 	mov	x1, x22
    f4ec:	910f0042 	add	x2, x2, #0x3c0
    f4f0:	aa1703e3 	mov	x3, x23
    f4f4:	528000c0 	mov	w0, #0x6                   	// #6
    f4f8:	97ffd38a 	bl	4320 <__android_log_print@plt>
    f4fc:	aa1303e0 	mov	x0, x19
    f500:	97ffd3e4 	bl	4490 <free@plt>
    f504:	12800000 	mov	w0, #0xffffffff            	// #-1
    f508:	17ffffe2 	b	f490 <fnCa_dump_data@@Base+0x10c>
    f50c:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f510:	528000c0 	mov	w0, #0x6                   	// #6
    f514:	aa1603e1 	mov	x1, x22
    f518:	910e4042 	add	x2, x2, #0x390
    f51c:	aa1703e3 	mov	x3, x23
    f520:	910fc344 	add	x4, x26, #0x3f0
    f524:	97ffd37f 	bl	4320 <__android_log_print@plt>
    f528:	12800000 	mov	w0, #0xffffffff            	// #-1
    f52c:	17ffffd9 	b	f490 <fnCa_dump_data@@Base+0x10c>
    f530:	97ffd364 	bl	42c0 <__stack_chk_fail@plt>

000000000000f534 <fnCa_set_active_group@@Base>:
    f534:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f538:	b0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    f53c:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    f540:	910003fd 	mov	x29, sp
    f544:	f9000bf3 	str	x19, [sp, #16]
    f548:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f54c:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f550:	91110063 	add	x3, x3, #0x440
    f554:	2a0003e5 	mov	w5, w0
    f558:	2a0003e4 	mov	w4, w0
    f55c:	f947c273 	ldr	x19, [x19, #3968]
    f560:	9109c021 	add	x1, x1, #0x270
    f564:	91100042 	add	x2, x2, #0x400
    f568:	91100063 	add	x3, x3, #0x400
    f56c:	52800060 	mov	w0, #0x3                   	// #3
    f570:	b90023a5 	str	w5, [x29, #32]
    f574:	f9400266 	ldr	x6, [x19]
    f578:	f90017a6 	str	x6, [x29, #40]
    f57c:	b90027bf 	str	wzr, [x29, #36]
    f580:	97ffd368 	bl	4320 <__android_log_print@plt>
    f584:	52800082 	mov	w2, #0x4                   	// #4
    f588:	910083a1 	add	x1, x29, #0x20
    f58c:	2a0203e4 	mov	w4, w2
    f590:	528007a0 	mov	w0, #0x3d                  	// #61
    f594:	910093a3 	add	x3, x29, #0x24
    f598:	97ffea95 	bl	9fec <gx_ta_send_command@@Base>
    f59c:	6b1f001f 	cmp	w0, wzr
    f5a0:	f94017a2 	ldr	x2, [x29, #40]
    f5a4:	5a9f03e0 	csetm	w0, ne	// ne = any
    f5a8:	f9400261 	ldr	x1, [x19]
    f5ac:	eb01005f 	cmp	x2, x1
    f5b0:	54000081 	b.ne	f5c0 <fnCa_set_active_group@@Base+0x8c>  // b.any
    f5b4:	f9400bf3 	ldr	x19, [sp, #16]
    f5b8:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f5bc:	d65f03c0 	ret
    f5c0:	97ffd340 	bl	42c0 <__stack_chk_fail@plt>

000000000000f5c4 <fnCa_GetIndexByFeatureID@@Base>:
    f5c4:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f5c8:	52800082 	mov	w2, #0x4                   	// #4
    f5cc:	910003fd 	mov	x29, sp
    f5d0:	9100c3a1 	add	x1, x29, #0x30
    f5d4:	f9000bf3 	str	x19, [sp, #16]
    f5d8:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f5dc:	910083a3 	add	x3, x29, #0x20
    f5e0:	2a0203e4 	mov	w4, w2
    f5e4:	b90023bf 	str	wzr, [x29, #32]
    f5e8:	b81f4c20 	str	w0, [x1, #-12]!
    f5ec:	52800860 	mov	w0, #0x43                  	// #67
    f5f0:	f947c265 	ldr	x5, [x19, #3968]
    f5f4:	f94000a5 	ldr	x5, [x5]
    f5f8:	f90017a5 	str	x5, [x29, #40]
    f5fc:	97ffea7c 	bl	9fec <gx_ta_send_command@@Base>
    f600:	35000140 	cbnz	w0, f628 <fnCa_GetIndexByFeatureID@@Base+0x64>
    f604:	b94023a0 	ldr	w0, [x29, #32]
    f608:	f947c273 	ldr	x19, [x19, #3968]
    f60c:	f94017a2 	ldr	x2, [x29, #40]
    f610:	f9400261 	ldr	x1, [x19]
    f614:	eb01005f 	cmp	x2, x1
    f618:	540000c1 	b.ne	f630 <fnCa_GetIndexByFeatureID@@Base+0x6c>  // b.any
    f61c:	f9400bf3 	ldr	x19, [sp, #16]
    f620:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f624:	d65f03c0 	ret
    f628:	12800000 	mov	w0, #0xffffffff            	// #-1
    f62c:	17fffff7 	b	f608 <fnCa_GetIndexByFeatureID@@Base+0x44>
    f630:	97ffd324 	bl	42c0 <__stack_chk_fail@plt>

000000000000f634 <fnCa_LoadAllFpData@@Base>:
    f634:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f638:	aa0003e3 	mov	x3, x0
    f63c:	910003fd 	mov	x29, sp
    f640:	f9000bf3 	str	x19, [sp, #16]
    f644:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f648:	b90027bf 	str	wzr, [x29, #36]
    f64c:	f947c260 	ldr	x0, [x19, #3968]
    f650:	f9400000 	ldr	x0, [x0]
    f654:	f90017a0 	str	x0, [x29, #40]
    f658:	b4000203 	cbz	x3, f698 <fnCa_LoadAllFpData@@Base+0x64>
    f65c:	52800da0 	mov	w0, #0x6d                  	// #109
    f660:	910093a1 	add	x1, x29, #0x24
    f664:	52800082 	mov	w2, #0x4                   	// #4
    f668:	52801004 	mov	w4, #0x80                  	// #128
    f66c:	97ffea60 	bl	9fec <gx_ta_send_command@@Base>
    f670:	6b1f001f 	cmp	w0, wzr
    f674:	5a9f03e0 	csetm	w0, ne	// ne = any
    f678:	f947c273 	ldr	x19, [x19, #3968]
    f67c:	f94017a2 	ldr	x2, [x29, #40]
    f680:	f9400261 	ldr	x1, [x19]
    f684:	eb01005f 	cmp	x2, x1
    f688:	540001e1 	b.ne	f6c4 <fnCa_LoadAllFpData@@Base+0x90>  // b.any
    f68c:	f9400bf3 	ldr	x19, [sp, #16]
    f690:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f694:	d65f03c0 	ret
    f698:	b0000023 	adrp	x3, 14000 <gf_dump_data_interface@@Base+0x3760>
    f69c:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    f6a0:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f6a4:	91110063 	add	x3, x3, #0x440
    f6a8:	52800060 	mov	w0, #0x3                   	// #3
    f6ac:	9109c021 	add	x1, x1, #0x270
    f6b0:	91106042 	add	x2, x2, #0x418
    f6b4:	91108063 	add	x3, x3, #0x420
    f6b8:	97ffd31a 	bl	4320 <__android_log_print@plt>
    f6bc:	12800000 	mov	w0, #0xffffffff            	// #-1
    f6c0:	17ffffee 	b	f678 <fnCa_LoadAllFpData@@Base+0x44>
    f6c4:	97ffd2ff 	bl	42c0 <__stack_chk_fail@plt>

000000000000f6c8 <fnCa_enable_stable_check@@Base>:
    f6c8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f6cc:	52800082 	mov	w2, #0x4                   	// #4
    f6d0:	910003fd 	mov	x29, sp
    f6d4:	9100c3a1 	add	x1, x29, #0x30
    f6d8:	f9000bf3 	str	x19, [sp, #16]
    f6dc:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f6e0:	910083a3 	add	x3, x29, #0x20
    f6e4:	2a0203e4 	mov	w4, w2
    f6e8:	b90023bf 	str	wzr, [x29, #32]
    f6ec:	b81f4c20 	str	w0, [x1, #-12]!
    f6f0:	52800dc0 	mov	w0, #0x6e                  	// #110
    f6f4:	f947c265 	ldr	x5, [x19, #3968]
    f6f8:	f94000a5 	ldr	x5, [x5]
    f6fc:	f90017a5 	str	x5, [x29, #40]
    f700:	97ffea3b 	bl	9fec <gx_ta_send_command@@Base>
    f704:	35000140 	cbnz	w0, f72c <fnCa_enable_stable_check@@Base+0x64>
    f708:	b94023a0 	ldr	w0, [x29, #32]
    f70c:	f947c273 	ldr	x19, [x19, #3968]
    f710:	f94017a2 	ldr	x2, [x29, #40]
    f714:	f9400261 	ldr	x1, [x19]
    f718:	eb01005f 	cmp	x2, x1
    f71c:	540000c1 	b.ne	f734 <fnCa_enable_stable_check@@Base+0x6c>  // b.any
    f720:	f9400bf3 	ldr	x19, [sp, #16]
    f724:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f728:	d65f03c0 	ret
    f72c:	12800000 	mov	w0, #0xffffffff            	// #-1
    f730:	17fffff7 	b	f70c <fnCa_enable_stable_check@@Base+0x44>
    f734:	97ffd2e3 	bl	42c0 <__stack_chk_fail@plt>

000000000000f738 <keymaster_ta_start@@Base>:
    f738:	a9bb7bfd 	stp	x29, x30, [sp, #-80]!
    f73c:	90000022 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    f740:	52800060 	mov	w0, #0x3                   	// #3
    f744:	910003fd 	mov	x29, sp
    f748:	a9025bf5 	stp	x21, x22, [sp, #32]
    f74c:	d0000016 	adrp	x22, 11000 <gf_dump_data_interface@@Base+0x760>
    f750:	d0000035 	adrp	x21, 15000 <gf_dump_data_interface@@Base+0x4760>
    f754:	a90153f3 	stp	x19, x20, [sp, #16]
    f758:	a90363f7 	stp	x23, x24, [sp, #48]
    f75c:	9110c2b4 	add	x20, x21, #0x430
    f760:	9109c2d8 	add	x24, x22, #0x270
    f764:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f768:	91008284 	add	x4, x20, #0x20
    f76c:	aa1803e1 	mov	x1, x24
    f770:	91384042 	add	x2, x2, #0xe10
    f774:	aa1403e3 	mov	x3, x20
    f778:	52800017 	mov	w23, #0x0                   	// #0
    f77c:	97ffd2e9 	bl	4320 <__android_log_print@plt>
    f780:	f947ca73 	ldr	x19, [x19, #3984]
    f784:	f9400264 	ldr	x4, [x19]
    f788:	b40001a4 	cbz	x4, f7bc <keymaster_ta_start@@Base+0x84>
    f78c:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f790:	9109c2c1 	add	x1, x22, #0x270
    f794:	9110c2a3 	add	x3, x21, #0x430
    f798:	9113a042 	add	x2, x2, #0x4e8
    f79c:	52800060 	mov	w0, #0x3                   	// #3
    f7a0:	97ffd2e0 	bl	4320 <__android_log_print@plt>
    f7a4:	2a1703e0 	mov	w0, w23
    f7a8:	a94153f3 	ldp	x19, x20, [sp, #16]
    f7ac:	a9425bf5 	ldp	x21, x22, [sp, #32]
    f7b0:	a94363f7 	ldp	x23, x24, [sp, #48]
    f7b4:	a8c57bfd 	ldp	x29, x30, [sp], #80
    f7b8:	d65f03c0 	ret
    f7bc:	d00000c2 	adrp	x2, 29000 <gf_dump_data_interface@@Base+0x18760>
    f7c0:	d00000c4 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    f7c4:	d0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
    f7c8:	aa1303e0 	mov	x0, x19
    f7cc:	9112c021 	add	x1, x1, #0x4b0
    f7d0:	f9478c42 	ldr	x2, [x2, #3864]
    f7d4:	f947e484 	ldr	x4, [x4, #4040]
    f7d8:	f90027a4 	str	x4, [x29, #72]
    f7dc:	b9400043 	ldr	w3, [x2]
    f7e0:	aa0403e2 	mov	x2, x4
    f7e4:	97ffd2a3 	bl	4270 <QSEECom_start_app@plt>
    f7e8:	2a0003f7 	mov	w23, w0
    f7ec:	97ffd289 	bl	4210 <__errno@plt>
    f7f0:	aa0003e3 	mov	x3, x0
    f7f4:	f94027a4 	ldr	x4, [x29, #72]
    f7f8:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f7fc:	52800060 	mov	w0, #0x3                   	// #3
    f800:	aa1803e1 	mov	x1, x24
    f804:	b9400066 	ldr	w6, [x3]
    f808:	91130042 	add	x2, x2, #0x4c0
    f80c:	aa1403e3 	mov	x3, x20
    f810:	2a1703e5 	mov	w5, w23
    f814:	97ffd2c3 	bl	4320 <__android_log_print@plt>
    f818:	f9400264 	ldr	x4, [x19]
    f81c:	17ffffdc 	b	f78c <keymaster_ta_start@@Base+0x54>

000000000000f820 <keymaster_ta_stop@@Base>:
    f820:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    f824:	910003fd 	mov	x29, sp
    f828:	f9000bf3 	str	x19, [sp, #16]
    f82c:	d00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
    f830:	f947ca73 	ldr	x19, [x19, #3984]
    f834:	f9400260 	ldr	x0, [x19]
    f838:	b4000500 	cbz	x0, f8d8 <keymaster_ta_stop@@Base+0xb8>
    f83c:	aa1303e0 	mov	x0, x19
    f840:	97ffd2ac 	bl	42f0 <QSEECom_shutdown_app@plt>
    f844:	2a0003e5 	mov	w5, w0
    f848:	35000220 	cbnz	w0, f88c <keymaster_ta_stop@@Base+0x6c>
    f84c:	d00000c4 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    f850:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    f854:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    f858:	90000022 	adrp	x2, 13000 <gf_dump_data_interface@@Base+0x2760>
    f85c:	9110c063 	add	x3, x3, #0x430
    f860:	9109c021 	add	x1, x1, #0x270
    f864:	f947e484 	ldr	x4, [x4, #4040]
    f868:	913c0042 	add	x2, x2, #0xf00
    f86c:	91010063 	add	x3, x3, #0x40
    f870:	52800060 	mov	w0, #0x3                   	// #3
    f874:	f900027f 	str	xzr, [x19]
    f878:	97ffd2aa 	bl	4320 <__android_log_print@plt>
    f87c:	f9400bf3 	ldr	x19, [sp, #16]
    f880:	52800000 	mov	w0, #0x0                   	// #0
    f884:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f888:	d65f03c0 	ret
    f88c:	f90017a5 	str	x5, [x29, #40]
    f890:	97ffd260 	bl	4210 <__errno@plt>
    f894:	d00000c4 	adrp	x4, 29000 <gf_dump_data_interface@@Base+0x18760>
    f898:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    f89c:	b9400006 	ldr	w6, [x0]
    f8a0:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    f8a4:	f94017a5 	ldr	x5, [x29, #40]
    f8a8:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    f8ac:	f947e484 	ldr	x4, [x4, #4040]
    f8b0:	9110c063 	add	x3, x3, #0x430
    f8b4:	9109c021 	add	x1, x1, #0x270
    f8b8:	91140042 	add	x2, x2, #0x500
    f8bc:	91010063 	add	x3, x3, #0x40
    f8c0:	528000c0 	mov	w0, #0x6                   	// #6
    f8c4:	97ffd297 	bl	4320 <__android_log_print@plt>
    f8c8:	f9400bf3 	ldr	x19, [sp, #16]
    f8cc:	12800000 	mov	w0, #0xffffffff            	// #-1
    f8d0:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f8d4:	d65f03c0 	ret
    f8d8:	f9400bf3 	ldr	x19, [sp, #16]
    f8dc:	52800000 	mov	w0, #0x0                   	// #0
    f8e0:	a8c37bfd 	ldp	x29, x30, [sp], #48
    f8e4:	d65f03c0 	ret

000000000000f8e8 <getKeyFromKeymaster@@Base>:
    f8e8:	d10243ff 	sub	sp, sp, #0x90
    f8ec:	a9017bfd 	stp	x29, x30, [sp, #16]
    f8f0:	910043fd 	add	x29, sp, #0x10
    f8f4:	a90253f3 	stp	x19, x20, [sp, #32]
    f8f8:	aa0003f3 	mov	x19, x0
    f8fc:	d00000c0 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    f900:	a90463f7 	stp	x23, x24, [sp, #64]
    f904:	d00000d8 	adrp	x24, 29000 <gf_dump_data_interface@@Base+0x18760>
    f908:	f947c000 	ldr	x0, [x0, #3968]
    f90c:	a9056bf9 	stp	x25, x26, [sp, #80]
    f910:	a9035bf5 	stp	x21, x22, [sp, #48]
    f914:	f9400000 	ldr	x0, [x0]
    f918:	2a0103fa 	mov	w26, w1
    f91c:	a90673fb 	stp	x27, x28, [sp, #96]
    f920:	f9003fa0 	str	x0, [x29, #120]
    f924:	97ffff85 	bl	f738 <keymaster_ta_start@@Base>
    f928:	f947cb00 	ldr	x0, [x24, #3984]
    f92c:	f9400000 	ldr	x0, [x0]
    f930:	b4000b60 	cbz	x0, fa9c <getKeyFromKeymaster@@Base+0x1b4>
    f934:	d0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
    f938:	52800015 	mov	w21, #0x0                   	// #0
    f93c:	9110c037 	add	x23, x1, #0x430
    f940:	d0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
    f944:	9116e021 	add	x1, x1, #0x5b8
    f948:	9101c3bc 	add	x28, x29, #0x70
    f94c:	d0000019 	adrp	x25, 11000 <gf_dump_data_interface@@Base+0x760>
    f950:	d000003b 	adrp	x27, 15000 <gf_dump_data_interface@@Base+0x4760>
    f954:	910182f7 	add	x23, x23, #0x60
    f958:	f90037a1 	str	x1, [x29, #104]
    f95c:	528040a5 	mov	w5, #0x205                 	// #517
    f960:	aa1c03e1 	mov	x1, x28
    f964:	52800102 	mov	w2, #0x8                   	// #8
    f968:	aa1303e3 	mov	x3, x19
    f96c:	2a1a03e4 	mov	w4, w26
    f970:	b90073a5 	str	w5, [x29, #112]
    f974:	52800045 	mov	w5, #0x2                   	// #2
    f978:	b90077a5 	str	w5, [x29, #116]
    f97c:	9109c336 	add	x22, x25, #0x270
    f980:	97ffd220 	bl	4200 <QSEECom_send_cmd@plt>
    f984:	2a0003f4 	mov	w20, w0
    f988:	b9400a63 	ldr	w3, [x19, #8]
    f98c:	52800060 	mov	w0, #0x3                   	// #3
    f990:	b9400266 	ldr	w6, [x19]
    f994:	aa1603e1 	mov	x1, x22
    f998:	b9400667 	ldr	w7, [x19, #4]
    f99c:	9114c362 	add	x2, x27, #0x530
    f9a0:	b90003e3 	str	w3, [sp]
    f9a4:	2a1403e4 	mov	w4, w20
    f9a8:	aa1703e3 	mov	x3, x23
    f9ac:	aa1303e5 	mov	x5, x19
    f9b0:	97ffd25c 	bl	4320 <__android_log_print@plt>
    f9b4:	710016bf 	cmp	w21, #0x5
    f9b8:	540004ec 	b.gt	fa54 <getKeyFromKeymaster@@Base+0x16c>
    f9bc:	340004d4 	cbz	w20, fa54 <getKeyFromKeymaster@@Base+0x16c>
    f9c0:	f94037a2 	ldr	x2, [x29, #104]
    f9c4:	aa1603e1 	mov	x1, x22
    f9c8:	aa1703e3 	mov	x3, x23
    f9cc:	52800060 	mov	w0, #0x3                   	// #3
    f9d0:	110006b5 	add	w21, w21, #0x1
    f9d4:	97ffd253 	bl	4320 <__android_log_print@plt>
    f9d8:	97ffff92 	bl	f820 <keymaster_ta_stop@@Base>
    f9dc:	5290d400 	mov	w0, #0x86a0                	// #34464
    f9e0:	72a00020 	movk	w0, #0x1, lsl #16
    f9e4:	97ffd277 	bl	43c0 <usleep@plt>
    f9e8:	f947cb16 	ldr	x22, [x24, #3984]
    f9ec:	f90002df 	str	xzr, [x22]
    f9f0:	97ffff52 	bl	f738 <keymaster_ta_start@@Base>
    f9f4:	f94002c0 	ldr	x0, [x22]
    f9f8:	b5fffb20 	cbnz	x0, f95c <getKeyFromKeymaster@@Base+0x74>
    f9fc:	d0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
    fa00:	52800001 	mov	w1, #0x0                   	// #0
    fa04:	9117a000 	add	x0, x0, #0x5e8
    fa08:	97ffd2aa 	bl	44b0 <property_get_int32@plt>
    fa0c:	7100041f 	cmp	w0, #0x1
    fa10:	54000420 	b.eq	fa94 <getKeyFromKeymaster@@Base+0x1ac>  // b.none
    fa14:	d00000c0 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
    fa18:	f9403fa2 	ldr	x2, [x29, #120]
    fa1c:	f947c001 	ldr	x1, [x0, #3968]
    fa20:	2a1403e0 	mov	w0, w20
    fa24:	f9400021 	ldr	x1, [x1]
    fa28:	eb01005f 	cmp	x2, x1
    fa2c:	540004c1 	b.ne	fac4 <getKeyFromKeymaster@@Base+0x1dc>  // b.any
    fa30:	d10043bf 	sub	sp, x29, #0x10
    fa34:	a94253f3 	ldp	x19, x20, [sp, #32]
    fa38:	a9435bf5 	ldp	x21, x22, [sp, #48]
    fa3c:	a94463f7 	ldp	x23, x24, [sp, #64]
    fa40:	a9456bf9 	ldp	x25, x26, [sp, #80]
    fa44:	a94673fb 	ldp	x27, x28, [sp, #96]
    fa48:	a9417bfd 	ldp	x29, x30, [sp, #16]
    fa4c:	910243ff 	add	sp, sp, #0x90
    fa50:	d65f03c0 	ret
    fa54:	710016bf 	cmp	w21, #0x5
    fa58:	d0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
    fa5c:	9110c003 	add	x3, x0, #0x430
    fa60:	5400022c 	b.gt	faa4 <getKeyFromKeymaster@@Base+0x1bc>
    fa64:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    fa68:	9109c321 	add	x1, x25, #0x270
    fa6c:	91168042 	add	x2, x2, #0x5a0
    fa70:	91018063 	add	x3, x3, #0x60
    fa74:	52800060 	mov	w0, #0x3                   	// #3
    fa78:	97ffd22a 	bl	4320 <__android_log_print@plt>
    fa7c:	d0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
    fa80:	52800001 	mov	w1, #0x0                   	// #0
    fa84:	9117a000 	add	x0, x0, #0x5e8
    fa88:	97ffd28a 	bl	44b0 <property_get_int32@plt>
    fa8c:	7100041f 	cmp	w0, #0x1
    fa90:	54fffc21 	b.ne	fa14 <getKeyFromKeymaster@@Base+0x12c>  // b.any
    fa94:	97ffff63 	bl	f820 <keymaster_ta_stop@@Base>
    fa98:	17ffffdf 	b	fa14 <getKeyFromKeymaster@@Base+0x12c>
    fa9c:	52800014 	mov	w20, #0x0                   	// #0
    faa0:	17ffffd7 	b	f9fc <getKeyFromKeymaster@@Base+0x114>
    faa4:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    faa8:	9109c321 	add	x1, x25, #0x270
    faac:	91162042 	add	x2, x2, #0x588
    fab0:	91018063 	add	x3, x3, #0x60
    fab4:	528000c0 	mov	w0, #0x6                   	// #6
    fab8:	12800014 	mov	w20, #0xffffffff            	// #-1
    fabc:	97ffd219 	bl	4320 <__android_log_print@plt>
    fac0:	17ffffcf 	b	f9fc <getKeyFromKeymaster@@Base+0x114>
    fac4:	97ffd1ff 	bl	42c0 <__stack_chk_fail@plt>
    fac8:	52800000 	mov	w0, #0x0                   	// #0
    facc:	d65f03c0 	ret
    fad0:	17ffec57 	b	ac2c <fnCa_OpenSession@@Base>
    fad4:	17ffe0b6 	b	7dac <device_enable@@Base>
    fad8:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
    fadc:	910003fd 	mov	x29, sp
    fae0:	a90153f3 	stp	x19, x20, [sp, #16]
    fae4:	f90013f5 	str	x21, [sp, #32]
    fae8:	aa0203f4 	mov	x20, x2
    faec:	aa0003f5 	mov	x21, x0
    faf0:	b40023a2 	cbz	x2, ff64 <getKeyFromKeymaster@@Base+0x67c>
    faf4:	d2806200 	mov	x0, #0x310                 	// #784
    faf8:	97ffd24e 	bl	4430 <malloc@plt>
    fafc:	aa0003f3 	mov	x19, x0
    fb00:	52800001 	mov	w1, #0x0                   	// #0
    fb04:	d2806202 	mov	x2, #0x310                 	// #784
    fb08:	97ffd252 	bl	4450 <memset@plt>
    fb0c:	f9000675 	str	x21, [x19, #8]
    fb10:	52888a80 	mov	w0, #0x4454                	// #17492
    fb14:	72a90ae0 	movk	w0, #0x4857, lsl #16
    fb18:	b9000260 	str	w0, [x19]
    fb1c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb20:	91163000 	add	x0, x0, #0x58c
    fb24:	f9003a60 	str	x0, [x19, #112]
    fb28:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    fb2c:	912b4000 	add	x0, x0, #0xad0
    fb30:	f9004660 	str	x0, [x19, #136]
    fb34:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    fb38:	913e3000 	add	x0, x0, #0xf8c
    fb3c:	f9004a60 	str	x0, [x19, #144]
    fb40:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb44:	9115f000 	add	x0, x0, #0x57c
    fb48:	f9004e60 	str	x0, [x19, #152]
    fb4c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb50:	9115e000 	add	x0, x0, #0x578
    fb54:	f9005260 	str	x0, [x19, #160]
    fb58:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb5c:	910e6000 	add	x0, x0, #0x398
    fb60:	f9005660 	str	x0, [x19, #168]
    fb64:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb68:	9115c000 	add	x0, x0, #0x570
    fb6c:	f9005a60 	str	x0, [x19, #176]
    fb70:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb74:	9115b000 	add	x0, x0, #0x56c
    fb78:	f9005e60 	str	x0, [x19, #184]
    fb7c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb80:	91159000 	add	x0, x0, #0x564
    fb84:	f9006260 	str	x0, [x19, #192]
    fb88:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb8c:	91158000 	add	x0, x0, #0x560
    fb90:	f9006660 	str	x0, [x19, #200]
    fb94:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fb98:	91154000 	add	x0, x0, #0x550
    fb9c:	f9006a60 	str	x0, [x19, #208]
    fba0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fba4:	91150000 	add	x0, x0, #0x540
    fba8:	f9006e60 	str	x0, [x19, #216]
    fbac:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbb0:	9114c000 	add	x0, x0, #0x530
    fbb4:	f9007260 	str	x0, [x19, #224]
    fbb8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbbc:	91147000 	add	x0, x0, #0x51c
    fbc0:	f9007660 	str	x0, [x19, #232]
    fbc4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbc8:	91146000 	add	x0, x0, #0x518
    fbcc:	f9007a60 	str	x0, [x19, #240]
    fbd0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbd4:	91143000 	add	x0, x0, #0x50c
    fbd8:	f9007e60 	str	x0, [x19, #248]
    fbdc:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbe0:	91140000 	add	x0, x0, #0x500
    fbe4:	f9008260 	str	x0, [x19, #256]
    fbe8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbec:	9113b000 	add	x0, x0, #0x4ec
    fbf0:	f9008660 	str	x0, [x19, #264]
    fbf4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fbf8:	91138000 	add	x0, x0, #0x4e0
    fbfc:	f9008a60 	str	x0, [x19, #272]
    fc00:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc04:	91137000 	add	x0, x0, #0x4dc
    fc08:	f9008e60 	str	x0, [x19, #280]
    fc0c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc10:	91131000 	add	x0, x0, #0x4c4
    fc14:	f900d660 	str	x0, [x19, #424]
    fc18:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc1c:	91130000 	add	x0, x0, #0x4c0
    fc20:	f9009260 	str	x0, [x19, #288]
    fc24:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc28:	9112b000 	add	x0, x0, #0x4ac
    fc2c:	f900de60 	str	x0, [x19, #440]
    fc30:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc34:	91127000 	add	x0, x0, #0x49c
    fc38:	f900e260 	str	x0, [x19, #448]
    fc3c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc40:	91123000 	add	x0, x0, #0x48c
    fc44:	f900e660 	str	x0, [x19, #456]
    fc48:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc4c:	91122000 	add	x0, x0, #0x488
    fc50:	f900f260 	str	x0, [x19, #480]
    fc54:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc58:	9111f000 	add	x0, x0, #0x47c
    fc5c:	f900ea60 	str	x0, [x19, #464]
    fc60:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc64:	9111b000 	add	x0, x0, #0x46c
    fc68:	f900ee60 	str	x0, [x19, #472]
    fc6c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc70:	91118000 	add	x0, x0, #0x460
    fc74:	f900f660 	str	x0, [x19, #488]
    fc78:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc7c:	91116000 	add	x0, x0, #0x458
    fc80:	f900fa60 	str	x0, [x19, #496]
    fc84:	52802000 	mov	w0, #0x100                 	// #256
    fc88:	b9000660 	str	w0, [x19, #4]
    fc8c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc90:	91114000 	add	x0, x0, #0x450
    fc94:	f900fe60 	str	x0, [x19, #504]
    fc98:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fc9c:	91112000 	add	x0, x0, #0x448
    fca0:	f9010260 	str	x0, [x19, #512]
    fca4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fca8:	9110f000 	add	x0, x0, #0x43c
    fcac:	f9010660 	str	x0, [x19, #520]
    fcb0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fcb4:	9110d000 	add	x0, x0, #0x434
    fcb8:	f9011660 	str	x0, [x19, #552]
    fcbc:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fcc0:	9110b000 	add	x0, x0, #0x42c
    fcc4:	f9011a60 	str	x0, [x19, #560]
    fcc8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fccc:	91109000 	add	x0, x0, #0x424
    fcd0:	f9013260 	str	x0, [x19, #608]
    fcd4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fcd8:	91108000 	add	x0, x0, #0x420
    fcdc:	f9013660 	str	x0, [x19, #616]
    fce0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fce4:	91107000 	add	x0, x0, #0x41c
    fce8:	f9013a60 	str	x0, [x19, #624]
    fcec:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fcf0:	91105000 	add	x0, x0, #0x414
    fcf4:	f9010a60 	str	x0, [x19, #528]
    fcf8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fcfc:	91102000 	add	x0, x0, #0x408
    fd00:	f9010e60 	str	x0, [x19, #536]
    fd04:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd08:	9116c000 	add	x0, x0, #0x5b0
    fd0c:	f9011260 	str	x0, [x19, #544]
    fd10:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd14:	91101000 	add	x0, x0, #0x404
    fd18:	f9016660 	str	x0, [x19, #712]
    fd1c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd20:	910e8000 	add	x0, x0, #0x3a0
    fd24:	f9016a60 	str	x0, [x19, #720]
    fd28:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd2c:	910e4000 	add	x0, x0, #0x390
    fd30:	f9009a60 	str	x0, [x19, #304]
    fd34:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd38:	910e2000 	add	x0, x0, #0x388
    fd3c:	f9009e60 	str	x0, [x19, #312]
    fd40:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    fd44:	912b5000 	add	x0, x0, #0xad4
    fd48:	f900a260 	str	x0, [x19, #320]
    fd4c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd50:	910e1000 	add	x0, x0, #0x384
    fd54:	f900a660 	str	x0, [x19, #328]
    fd58:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd5c:	910d4000 	add	x0, x0, #0x350
    fd60:	f900aa60 	str	x0, [x19, #336]
    fd64:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd68:	910c7000 	add	x0, x0, #0x31c
    fd6c:	f900ae60 	str	x0, [x19, #344]
    fd70:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd74:	910c4000 	add	x0, x0, #0x310
    fd78:	f900b260 	str	x0, [x19, #352]
    fd7c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd80:	910c2000 	add	x0, x0, #0x308
    fd84:	f900b660 	str	x0, [x19, #360]
    fd88:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd8c:	910c0000 	add	x0, x0, #0x300
    fd90:	f900ba60 	str	x0, [x19, #368]
    fd94:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fd98:	910be000 	add	x0, x0, #0x2f8
    fd9c:	f900be60 	str	x0, [x19, #376]
    fda0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fda4:	910bc000 	add	x0, x0, #0x2f0
    fda8:	f900c660 	str	x0, [x19, #392]
    fdac:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fdb0:	910ba000 	add	x0, x0, #0x2e8
    fdb4:	f900ca60 	str	x0, [x19, #400]
    fdb8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fdbc:	910b8000 	add	x0, x0, #0x2e0
    fdc0:	f900ce60 	str	x0, [x19, #408]
    fdc4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fdc8:	910b7000 	add	x0, x0, #0x2dc
    fdcc:	f900d260 	str	x0, [x19, #416]
    fdd0:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    fdd4:	912b2000 	add	x0, x0, #0xac8
    fdd8:	f9009660 	str	x0, [x19, #296]
    fddc:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fde0:	910b1000 	add	x0, x0, #0x2c4
    fde4:	f900da60 	str	x0, [x19, #432]
    fde8:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fdec:	910af000 	add	x0, x0, #0x2bc
    fdf0:	f9011e60 	str	x0, [x19, #568]
    fdf4:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fdf8:	9109c000 	add	x0, x0, #0x270
    fdfc:	f9012260 	str	x0, [x19, #576]
    fe00:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe04:	9108b000 	add	x0, x0, #0x22c
    fe08:	f9012660 	str	x0, [x19, #584]
    fe0c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe10:	9107a000 	add	x0, x0, #0x1e8
    fe14:	f9012a60 	str	x0, [x19, #592]
    fe18:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe1c:	91069000 	add	x0, x0, #0x1a4
    fe20:	f9012e60 	str	x0, [x19, #600]
    fe24:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe28:	91057000 	add	x0, x0, #0x15c
    fe2c:	f9013e60 	str	x0, [x19, #632]
    fe30:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe34:	f9000293 	str	x19, [x20]
    fe38:	91056000 	add	x0, x0, #0x158
    fe3c:	f9014260 	str	x0, [x19, #640]
    fe40:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe44:	91055000 	add	x0, x0, #0x154
    fe48:	f9014660 	str	x0, [x19, #648]
    fe4c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe50:	91054000 	add	x0, x0, #0x150
    fe54:	f9014a60 	str	x0, [x19, #656]
    fe58:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe5c:	91052000 	add	x0, x0, #0x148
    fe60:	f9014e60 	str	x0, [x19, #664]
    fe64:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe68:	9104f000 	add	x0, x0, #0x13c
    fe6c:	f9015260 	str	x0, [x19, #672]
    fe70:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe74:	9104b000 	add	x0, x0, #0x12c
    fe78:	f9015660 	str	x0, [x19, #680]
    fe7c:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe80:	91038000 	add	x0, x0, #0xe0
    fe84:	f9015a60 	str	x0, [x19, #688]
    fe88:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe8c:	91026000 	add	x0, x0, #0x98
    fe90:	f9015e60 	str	x0, [x19, #696]
    fe94:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fe98:	91015000 	add	x0, x0, #0x54
    fe9c:	f9016e60 	str	x0, [x19, #728]
    fea0:	b0000000 	adrp	x0, 10000 <getKeyFromKeymaster@@Base+0x718>
    fea4:	91003000 	add	x0, x0, #0xc
    fea8:	f9016260 	str	x0, [x19, #704]
    feac:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    feb0:	913f1000 	add	x0, x0, #0xfc4
    feb4:	f9017260 	str	x0, [x19, #736]
    feb8:	90000000 	adrp	x0, f000 <fnCa_getHBRawData@@Base+0x8>
    febc:	913e4000 	add	x0, x0, #0xf90
    fec0:	f9017660 	str	x0, [x19, #744]
    fec4:	97ffeb5a 	bl	ac2c <fnCa_OpenSession@@Base>
    fec8:	2a0003e4 	mov	w4, w0
    fecc:	35000200 	cbnz	w0, ff0c <getKeyFromKeymaster@@Base+0x624>
    fed0:	97ffdfb7 	bl	7dac <device_enable@@Base>
    fed4:	35000300 	cbnz	w0, ff34 <getKeyFromKeymaster@@Base+0x64c>
    fed8:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    fedc:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    fee0:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    fee4:	52800060 	mov	w0, #0x3                   	// #3
    fee8:	9109c021 	add	x1, x1, #0x270
    feec:	91224042 	add	x2, x2, #0x890
    fef0:	91180063 	add	x3, x3, #0x600
    fef4:	97ffd10b 	bl	4320 <__android_log_print@plt>
    fef8:	52800000 	mov	w0, #0x0                   	// #0
    fefc:	a94153f3 	ldp	x19, x20, [sp, #16]
    ff00:	f94013f5 	ldr	x21, [sp, #32]
    ff04:	a8c37bfd 	ldp	x29, x30, [sp], #48
    ff08:	d65f03c0 	ret
    ff0c:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ff10:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff14:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff18:	52800060 	mov	w0, #0x3                   	// #3
    ff1c:	9109c021 	add	x1, x1, #0x270
    ff20:	91210042 	add	x2, x2, #0x840
    ff24:	91180063 	add	x3, x3, #0x600
    ff28:	97ffd0fe 	bl	4320 <__android_log_print@plt>
    ff2c:	12800000 	mov	w0, #0xffffffff            	// #-1
    ff30:	17fffff3 	b	fefc <getKeyFromKeymaster@@Base+0x614>
    ff34:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ff38:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff3c:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff40:	2a0003e4 	mov	w4, w0
    ff44:	9109c021 	add	x1, x1, #0x270
    ff48:	91218042 	add	x2, x2, #0x860
    ff4c:	91180063 	add	x3, x3, #0x600
    ff50:	52800060 	mov	w0, #0x3                   	// #3
    ff54:	97ffd0f3 	bl	4320 <__android_log_print@plt>
    ff58:	97ffeb53 	bl	aca4 <fnCa_CloseSession@@Base>
    ff5c:	12800000 	mov	w0, #0xffffffff            	// #-1
    ff60:	17ffffe7 	b	fefc <getKeyFromKeymaster@@Base+0x614>
    ff64:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ff68:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff6c:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff70:	52800060 	mov	w0, #0x3                   	// #3
    ff74:	9109c021 	add	x1, x1, #0x270
    ff78:	91208042 	add	x2, x2, #0x820
    ff7c:	91180063 	add	x3, x3, #0x600
    ff80:	97ffd0e8 	bl	4320 <__android_log_print@plt>
    ff84:	128002a0 	mov	w0, #0xffffffea            	// #-22
    ff88:	17ffffdd 	b	fefc <getKeyFromKeymaster@@Base+0x614>
    ff8c:	17ffeb46 	b	aca4 <fnCa_CloseSession@@Base>
    ff90:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
    ff94:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    ff98:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ff9c:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ffa0:	91180063 	add	x3, x3, #0x600
    ffa4:	910003fd 	mov	x29, sp
    ffa8:	9109c021 	add	x1, x1, #0x270
    ffac:	9122e042 	add	x2, x2, #0x8b8
    ffb0:	91008063 	add	x3, x3, #0x20
    ffb4:	52800060 	mov	w0, #0x3                   	// #3
    ffb8:	97ffd0da 	bl	4320 <__android_log_print@plt>
    ffbc:	a8c17bfd 	ldp	x29, x30, [sp], #16
    ffc0:	17ffd39b 	b	4e2c <restart_sensor@@Base>
    ffc4:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
    ffc8:	d0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
    ffcc:	d0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
    ffd0:	910003fd 	mov	x29, sp
    ffd4:	f9000bf3 	str	x19, [sp, #16]
    ffd8:	91180063 	add	x3, x3, #0x600
    ffdc:	2a0103f3 	mov	w19, w1
    ffe0:	d0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
    ffe4:	2a1303e4 	mov	w4, w19
    ffe8:	9109c021 	add	x1, x1, #0x270
    ffec:	91238042 	add	x2, x2, #0x8e0
    fff0:	91010063 	add	x3, x3, #0x40
    fff4:	52800060 	mov	w0, #0x3                   	// #3
    fff8:	97ffd0ca 	bl	4320 <__android_log_print@plt>
    fffc:	2a1303e0 	mov	w0, w19
   10000:	f9400bf3 	ldr	x19, [sp, #16]
   10004:	a8c27bfd 	ldp	x29, x30, [sp], #32
   10008:	17fffdb0 	b	f6c8 <fnCa_enable_stable_check@@Base>
   1000c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   10010:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10014:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10018:	910003fd 	mov	x29, sp
   1001c:	f9000bf3 	str	x19, [sp, #16]
   10020:	91180063 	add	x3, x3, #0x600
   10024:	2a0103f3 	mov	w19, w1
   10028:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   1002c:	2a1303e4 	mov	w4, w19
   10030:	9109c021 	add	x1, x1, #0x270
   10034:	91240042 	add	x2, x2, #0x900
   10038:	91018063 	add	x3, x3, #0x60
   1003c:	52800060 	mov	w0, #0x3                   	// #3
   10040:	97ffd0b8 	bl	4320 <__android_log_print@plt>
   10044:	2a1303e0 	mov	w0, w19
   10048:	f9400bf3 	ldr	x19, [sp, #16]
   1004c:	a8c27bfd 	ldp	x29, x30, [sp], #32
   10050:	17fffd5d 	b	f5c4 <fnCa_GetIndexByFeatureID@@Base>
   10054:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   10058:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   1005c:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10060:	910003fd 	mov	x29, sp
   10064:	f9000bf3 	str	x19, [sp, #16]
   10068:	91180063 	add	x3, x3, #0x600
   1006c:	aa0103f3 	mov	x19, x1
   10070:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   10074:	9109c021 	add	x1, x1, #0x270
   10078:	9124a042 	add	x2, x2, #0x928
   1007c:	91024063 	add	x3, x3, #0x90
   10080:	52800060 	mov	w0, #0x3                   	// #3
   10084:	97ffd0a7 	bl	4320 <__android_log_print@plt>
   10088:	aa1303e0 	mov	x0, x19
   1008c:	f9400bf3 	ldr	x19, [sp, #16]
   10090:	a8c27bfd 	ldp	x29, x30, [sp], #32
   10094:	17fffd68 	b	f634 <fnCa_LoadAllFpData@@Base>
   10098:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   1009c:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   100a0:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   100a4:	910003fd 	mov	x29, sp
   100a8:	f9000bf3 	str	x19, [sp, #16]
   100ac:	91180063 	add	x3, x3, #0x600
   100b0:	2a0103f3 	mov	w19, w1
   100b4:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   100b8:	2a1303e4 	mov	w4, w19
   100bc:	9109c021 	add	x1, x1, #0x270
   100c0:	91100042 	add	x2, x2, #0x400
   100c4:	9102c063 	add	x3, x3, #0xb0
   100c8:	52800060 	mov	w0, #0x3                   	// #3
   100cc:	97ffd095 	bl	4320 <__android_log_print@plt>
   100d0:	2a1303e0 	mov	w0, w19
   100d4:	f9400bf3 	ldr	x19, [sp, #16]
   100d8:	a8c27bfd 	ldp	x29, x30, [sp], #32
   100dc:	17fffd16 	b	f534 <fnCa_set_active_group@@Base>
   100e0:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   100e4:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   100e8:	52800060 	mov	w0, #0x3                   	// #3
   100ec:	910003fd 	mov	x29, sp
   100f0:	a90153f3 	stp	x19, x20, [sp, #16]
   100f4:	91180063 	add	x3, x3, #0x600
   100f8:	aa0103f4 	mov	x20, x1
   100fc:	2a0203f3 	mov	w19, w2
   10100:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   10104:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10108:	9109c021 	add	x1, x1, #0x270
   1010c:	91254042 	add	x2, x2, #0x950
   10110:	91034063 	add	x3, x3, #0xd0
   10114:	97ffd083 	bl	4320 <__android_log_print@plt>
   10118:	aa1403e0 	mov	x0, x20
   1011c:	2a1303e1 	mov	w1, w19
   10120:	a94153f3 	ldp	x19, x20, [sp, #16]
   10124:	a8c27bfd 	ldp	x29, x30, [sp], #32
   10128:	17fffc97 	b	f384 <fnCa_dump_data@@Base>
   1012c:	2a0103e0 	mov	w0, w1
   10130:	2a0203e1 	mov	w1, w2
   10134:	2a0303e2 	mov	w2, w3
   10138:	17ffe2ac 	b	8be8 <device_enableNavClick@@Base>
   1013c:	2a0103e0 	mov	w0, w1
   10140:	2a0203e1 	mov	w1, w2
   10144:	17ffe2a4 	b	8bd4 <device_enableKeyMode@@Base>
   10148:	2a0103e0 	mov	w0, w1
   1014c:	17ffe2a1 	b	8bd0 <device_enableGsc@@Base>
   10150:	17ffe474 	b	9320 <device_InitialHBAlgorithmBuffer@@Base>
   10154:	17ffe463 	b	92e0 <device_cancel_waitHB@@Base>
   10158:	17ffe295 	b	8bac <device_HBCheckUp@@Base>
   1015c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   10160:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10164:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10168:	910003fd 	mov	x29, sp
   1016c:	f9000bf3 	str	x19, [sp, #16]
   10170:	91180063 	add	x3, x3, #0x600
   10174:	2a0103f3 	mov	w19, w1
   10178:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   1017c:	2a1303e4 	mov	w4, w19
   10180:	9109c021 	add	x1, x1, #0x270
   10184:	9125c042 	add	x2, x2, #0x970
   10188:	9103c063 	add	x3, x3, #0xf0
   1018c:	52800060 	mov	w0, #0x3                   	// #3
   10190:	97ffd064 	bl	4320 <__android_log_print@plt>
   10194:	2a1303e0 	mov	w0, w19
   10198:	f9400bf3 	ldr	x19, [sp, #16]
   1019c:	a8c27bfd 	ldp	x29, x30, [sp], #32
   101a0:	17ffe1c9 	b	88c4 <device_waitHB@@Base>
   101a4:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   101a8:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   101ac:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   101b0:	910003fd 	mov	x29, sp
   101b4:	f9000bf3 	str	x19, [sp, #16]
   101b8:	91180063 	add	x3, x3, #0x600
   101bc:	aa0103f3 	mov	x19, x1
   101c0:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   101c4:	9109c021 	add	x1, x1, #0x270
   101c8:	91266042 	add	x2, x2, #0x998
   101cc:	91044063 	add	x3, x3, #0x110
   101d0:	52800060 	mov	w0, #0x3                   	// #3
   101d4:	97ffd053 	bl	4320 <__android_log_print@plt>
   101d8:	aa1303e0 	mov	x0, x19
   101dc:	f9400bf3 	ldr	x19, [sp, #16]
   101e0:	a8c27bfd 	ldp	x29, x30, [sp], #32
   101e4:	17ffe271 	b	8ba8 <device_recoverFwCfg@@Base>
   101e8:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   101ec:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   101f0:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   101f4:	910003fd 	mov	x29, sp
   101f8:	f9000bf3 	str	x19, [sp, #16]
   101fc:	91180063 	add	x3, x3, #0x600
   10200:	aa0103f3 	mov	x19, x1
   10204:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   10208:	9109c021 	add	x1, x1, #0x270
   1020c:	91270042 	add	x2, x2, #0x9c0
   10210:	91050063 	add	x3, x3, #0x140
   10214:	52800060 	mov	w0, #0x3                   	// #3
   10218:	97ffd042 	bl	4320 <__android_log_print@plt>
   1021c:	aa1303e0 	mov	x0, x19
   10220:	f9400bf3 	ldr	x19, [sp, #16]
   10224:	a8c27bfd 	ldp	x29, x30, [sp], #32
   10228:	17ffe25f 	b	8ba4 <device_getGscHbdRet@@Base>
   1022c:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   10230:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10234:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10238:	910003fd 	mov	x29, sp
   1023c:	f9000bf3 	str	x19, [sp, #16]
   10240:	91180063 	add	x3, x3, #0x600
   10244:	aa0103f3 	mov	x19, x1
   10248:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   1024c:	9109c021 	add	x1, x1, #0x270
   10250:	9127a042 	add	x2, x2, #0x9e8
   10254:	9105c063 	add	x3, x3, #0x170
   10258:	52800060 	mov	w0, #0x3                   	// #3
   1025c:	97ffd031 	bl	4320 <__android_log_print@plt>
   10260:	aa1303e0 	mov	x0, x19
   10264:	f9400bf3 	ldr	x19, [sp, #16]
   10268:	a8c27bfd 	ldp	x29, x30, [sp], #32
   1026c:	17ffe24d 	b	8ba0 <device_getHBRawData@@Base>
   10270:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
   10274:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10278:	52800060 	mov	w0, #0x3                   	// #3
   1027c:	910003fd 	mov	x29, sp
   10280:	a90153f3 	stp	x19, x20, [sp, #16]
   10284:	91180063 	add	x3, x3, #0x600
   10288:	aa0103f4 	mov	x20, x1
   1028c:	2a0203f3 	mov	w19, w2
   10290:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   10294:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10298:	9109c021 	add	x1, x1, #0x270
   1029c:	91284042 	add	x2, x2, #0xa10
   102a0:	91068063 	add	x3, x3, #0x1a0
   102a4:	97ffd01f 	bl	4320 <__android_log_print@plt>
   102a8:	aa1403e0 	mov	x0, x20
   102ac:	2a1303e1 	mov	w1, w19
   102b0:	a94153f3 	ldp	x19, x20, [sp, #16]
   102b4:	a8c27bfd 	ldp	x29, x30, [sp], #32
   102b8:	17fffbc7 	b	f1d4 <fnCa_GetGscData@@Base>
   102bc:	aa0103e0 	mov	x0, x1
   102c0:	17ffe237 	b	8b9c <device_getHBData@@Base>
   102c4:	aa0103e0 	mov	x0, x1
   102c8:	2a0203e1 	mov	w1, w2
   102cc:	aa0303e2 	mov	x2, x3
   102d0:	aa0403e3 	mov	x3, x4
   102d4:	aa0503e4 	mov	x4, x5
   102d8:	17ffeec5 	b	bdec <fnCa_Fido_Recognize@@Base>
   102dc:	17ffe3f1 	b	92a0 <device_cancel_waitfinger@@Base>
   102e0:	aa0103e0 	mov	x0, x1
   102e4:	17ffe3eb 	b	9290 <device_notify@@Base>
   102e8:	aa0103e0 	mov	x0, x1
   102ec:	17ffe3ca 	b	9214 <device_getMode@@Base>
   102f0:	2a0103e0 	mov	w0, w1
   102f4:	17ffe5d3 	b	9a40 <device_irq_control@@Base>
   102f8:	2a0103e0 	mov	w0, w1
   102fc:	17ffe5b6 	b	99d4 <device_mp_pin@@Base>
   10300:	2a0103e0 	mov	w0, w1
   10304:	17ffe08e 	b	853c <device_waitForFingerUp@@Base>
   10308:	2a0103e0 	mov	w0, w1
   1030c:	17ffdfb6 	b	81e4 <device_waitForFinger@@Base>
   10310:	2a0103e0 	mov	w0, w1
   10314:	aa0203e1 	mov	x1, x2
   10318:	17ffe3cd 	b	924c <device_action@@Base>
   1031c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
   10320:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10324:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   10328:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   1032c:	91180063 	add	x3, x3, #0x600
   10330:	910003fd 	mov	x29, sp
   10334:	9109c021 	add	x1, x1, #0x270
   10338:	91290042 	add	x2, x2, #0xa40
   1033c:	91070063 	add	x3, x3, #0x1c0
   10340:	52800060 	mov	w0, #0x3                   	// #3
   10344:	97ffcff7 	bl	4320 <__android_log_print@plt>
   10348:	a8c17bfd 	ldp	x29, x30, [sp], #16
   1034c:	17ffdfa5 	b	81e0 <irq_disable@@Base>
   10350:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
   10354:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10358:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   1035c:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10360:	91180063 	add	x3, x3, #0x600
   10364:	910003fd 	mov	x29, sp
   10368:	9109c021 	add	x1, x1, #0x270
   1036c:	91298042 	add	x2, x2, #0xa60
   10370:	91078063 	add	x3, x3, #0x1e0
   10374:	52800060 	mov	w0, #0x3                   	// #3
   10378:	97ffcfea 	bl	4320 <__android_log_print@plt>
   1037c:	a8c17bfd 	ldp	x29, x30, [sp], #16
   10380:	17ffdf97 	b	81dc <irq_enable@@Base>
   10384:	17ffdf68 	b	8124 <device_disable@@Base>
   10388:	aa0103e0 	mov	x0, x1
   1038c:	17ffe3af 	b	9248 <device_getVersion@@Base>
   10390:	2a0103e0 	mov	w0, w1
   10394:	17ffe353 	b	90e0 <device_setMode@@Base>
   10398:	2a0103e0 	mov	w0, w1
   1039c:	17ffe351 	b	90e0 <device_setMode@@Base>
   103a0:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
   103a4:	910003fd 	mov	x29, sp
   103a8:	a90153f3 	stp	x19, x20, [sp, #16]
   103ac:	aa0303f3 	mov	x19, x3
   103b0:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   103b4:	a9025bf5 	stp	x21, x22, [sp, #32]
   103b8:	aa0203f4 	mov	x20, x2
   103bc:	2a0103f5 	mov	w21, w1
   103c0:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   103c4:	b0000001 	adrp	x1, 11000 <gf_dump_data_interface@@Base+0x760>
   103c8:	91180063 	add	x3, x3, #0x600
   103cc:	aa0003f6 	mov	x22, x0
   103d0:	9109c021 	add	x1, x1, #0x270
   103d4:	912a0042 	add	x2, x2, #0xa80
   103d8:	91080063 	add	x3, x3, #0x200
   103dc:	52800060 	mov	w0, #0x3                   	// #3
   103e0:	97ffcfd0 	bl	4320 <__android_log_print@plt>
   103e4:	aa1603e0 	mov	x0, x22
   103e8:	2a1503e1 	mov	w1, w21
   103ec:	aa1403e2 	mov	x2, x20
   103f0:	aa1303e3 	mov	x3, x19
   103f4:	a9425bf5 	ldp	x21, x22, [sp, #32]
   103f8:	a94153f3 	ldp	x19, x20, [sp, #16]
   103fc:	a8c37bfd 	ldp	x29, x30, [sp], #48
   10400:	17fff85d 	b	e574 <fnCa_gen_auth_token_hmac@@Base>
   10404:	17fff83d 	b	e4f8 <fnCa_get_key_from_keymaster@@Base>
   10408:	52800000 	mov	w0, #0x0                   	// #0
   1040c:	52800001 	mov	w1, #0x0                   	// #0
   10410:	17fff9ac 	b	eac0 <fnCa_updateImageBase@@Base>
   10414:	2a0103e0 	mov	w0, w1
   10418:	17fff786 	b	e230 <fnCa_update_template@@Base>
   1041c:	17fff924 	b	e8ac <fnCa_SetHbdConfig@@Base>
   10420:	17fff8f3 	b	e7ec <fnCa_SetHbdSwitch@@Base>
   10424:	aa0103e0 	mov	x0, x1
   10428:	17fff8be 	b	e720 <fnCa_GetHbdBase@@Base>
   1042c:	aa0103e0 	mov	x0, x1
   10430:	17fff7fb 	b	e41c <fnCa_GetEnrollCnt@@Base>
   10434:	2a0103e0 	mov	w0, w1
   10438:	17fff7d6 	b	e390 <fnCa_SetEnrollCnt@@Base>
   1043c:	2a0103e0 	mov	w0, w1
   10440:	aa0203e1 	mov	x1, x2
   10444:	17fff6f3 	b	e010 <fnCa_mp_test@@Base>
   10448:	aa0103e0 	mov	x0, x1
   1044c:	17fff2eb 	b	cff8 <fnCa_get_supportgsc_info@@Base>
   10450:	aa0103e0 	mov	x0, x1
   10454:	17fff2bf 	b	cf50 <fnca_get_max_enollnum@@Base>
   10458:	aa0103e0 	mov	x0, x1
   1045c:	17fff28f 	b	ce98 <fnCa_get_hardware_info@@Base>
   10460:	aa0103e0 	mov	x0, x1
   10464:	2a0203e1 	mov	w1, w2
   10468:	17fff255 	b	cdbc <fnCa_del_bmp_template@@Base>
   1046c:	aa0103e0 	mov	x0, x1
   10470:	2a0203e1 	mov	w1, w2
   10474:	aa0303e2 	mov	x2, x3
   10478:	17fff155 	b	c9cc <fnCa_verify_bmp@@Base>
   1047c:	aa0103e0 	mov	x0, x1
   10480:	2a0203e1 	mov	w1, w2
   10484:	17fff10b 	b	c8b0 <fnCa_reg_save@@Base>
   10488:	17fff0f1 	b	c84c <fnCa_reg_from_bmp_cancel@@Base>
   1048c:	aa0103e0 	mov	x0, x1
   10490:	2a0203e1 	mov	w1, w2
   10494:	aa0303e2 	mov	x2, x3
   10498:	17fff007 	b	c4b4 <fnCa_reg_from_bmp_in_enrollpic_test@@Base>
   1049c:	aa0103e0 	mov	x0, x1
   104a0:	2a0203e1 	mov	w1, w2
   104a4:	aa0303e2 	mov	x2, x3
   104a8:	17ffef78 	b	c288 <fnCa_reg_from_bmp@@Base>
   104ac:	aa0103e0 	mov	x0, x1
   104b0:	aa0203e1 	mov	x1, x2
   104b4:	aa0303e2 	mov	x2, x3
   104b8:	2a0403e3 	mov	w3, w4
   104bc:	17ffeeb8 	b	bf9c <fnCa_GetBitmap@@Base>
   104c0:	17ffee2f 	b	bd7c <fnCa_DriverTest@@Base>
   104c4:	2a0103e0 	mov	w0, w1
   104c8:	aa0203e1 	mov	x1, x2
   104cc:	2a0303e2 	mov	w2, w3
   104d0:	aa0403e3 	mov	x3, x4
   104d4:	aa0503e4 	mov	x4, x5
   104d8:	17ffed3c 	b	b9c8 <fnCa_ali_invoke_command@@Base>
   104dc:	17ffec68 	b	b67c <fnCa_LoadFpAlogParams@@Base>
   104e0:	aa0103e0 	mov	x0, x1
   104e4:	2a0203e1 	mov	w1, w2
   104e8:	17ffec49 	b	b60c <fnCa_VerifyFpPassword@@Base>
   104ec:	aa0103e0 	mov	x0, x1
   104f0:	2a0203e1 	mov	w1, w2
   104f4:	aa0303e2 	mov	x2, x3
   104f8:	2a0403e3 	mov	w3, w4
   104fc:	17ffec0f 	b	b538 <fnCa_ChangeFpPassword@@Base>
   10500:	aa0103e0 	mov	x0, x1
   10504:	aa0203e1 	mov	x1, x2
   10508:	17ffebd5 	b	b45c <fnCa_GetFpTemplateIdList@@Base>
   1050c:	aa0103e0 	mov	x0, x1
   10510:	2a0203e1 	mov	w1, w2
   10514:	17ffeb96 	b	b36c <fnCa_DelFpTemplates@@Base>
   10518:	17ffeb77 	b	b2f4 <fnCa_CancelRecognize@@Base>
   1051c:	aa0103e0 	mov	x0, x1
   10520:	2a0203e1 	mov	w1, w2
   10524:	aa0303e2 	mov	x2, x3
   10528:	aa0403e3 	mov	x3, x4
   1052c:	17ffeb1e 	b	b1a4 <fnCa_Recognize@@Base>
   10530:	2a0103e0 	mov	w0, w1
   10534:	aa0203e1 	mov	x1, x2
   10538:	2a0303e2 	mov	w2, w3
   1053c:	17ffeb0c 	b	b16c <fnCa_ChangeFpNameById@@Base>
   10540:	2a0103e0 	mov	w0, w1
   10544:	aa0203e1 	mov	x1, x2
   10548:	aa0303e2 	mov	x2, x3
   1054c:	17ffeafa 	b	b134 <fnCa_GetFpNameById@@Base>
   10550:	aa0103e0 	mov	x0, x1
   10554:	aa0203e1 	mov	x1, x2
   10558:	aa0303e2 	mov	x2, x3
   1055c:	17ffeab2 	b	b024 <fnCa_SaveRegisteredFp@@Base>
   10560:	17ffea96 	b	afb8 <fnCa_CancelRegister@@Base>
   10564:	aa0103e0 	mov	x0, x1
   10568:	17ffea6e 	b	af20 <fnCa_Register@@Base>
   1056c:	17ffea6b 	b	af18 <fnCa_SetModeCancel@@Base>
   10570:	aa0103e0 	mov	x0, x1
   10574:	17ffea4b 	b	aea0 <fnCa_GetMode@@Base>
   10578:	17ffe9fd 	b	ad6c <fnCa_Reset@@Base>
   1057c:	2a0103e0 	mov	w0, w1
   10580:	b00000c1 	adrp	x1, 29000 <gf_dump_data_interface@@Base+0x18760>
   10584:	f947e821 	ldr	x1, [x1, #4048]
   10588:	17ffe9e7 	b	ad24 <fnCa_Init@@Base>
   1058c:	a9bf7bfd 	stp	x29, x30, [sp, #-16]!
   10590:	910003fd 	mov	x29, sp
   10594:	b40000a0 	cbz	x0, 105a8 <getKeyFromKeymaster@@Base+0xcc0>
   10598:	97ffcfbe 	bl	4490 <free@plt>
   1059c:	52800000 	mov	w0, #0x0                   	// #0
   105a0:	a8c17bfd 	ldp	x29, x30, [sp], #16
   105a4:	d65f03c0 	ret
   105a8:	12800000 	mov	w0, #0xffffffff            	// #-1
   105ac:	17fffffd 	b	105a0 <getKeyFromKeymaster@@Base+0xcb8>
   105b0:	b00000c0 	adrp	x0, 29000 <gf_dump_data_interface@@Base+0x18760>
   105b4:	f947e800 	ldr	x0, [x0, #4048]
   105b8:	b9403800 	ldr	w0, [x0, #56]
   105bc:	35000060 	cbnz	w0, 105c8 <getKeyFromKeymaster@@Base+0xce0>
   105c0:	52800000 	mov	w0, #0x0                   	// #0
   105c4:	d65f03c0 	ret
   105c8:	52800000 	mov	w0, #0x0                   	// #0
   105cc:	52800001 	mov	w1, #0x0                   	// #0
   105d0:	17fff9aa 	b	ec78 <fnCa_updateNavBase@@Base>
   105d4:	a9bd7bfd 	stp	x29, x30, [sp, #-48]!
   105d8:	910003fd 	mov	x29, sp
   105dc:	a90153f3 	stp	x19, x20, [sp, #16]
   105e0:	f90013f5 	str	x21, [sp, #32]
   105e4:	b4000040 	cbz	x0, 105ec <getKeyFromKeymaster@@Base+0xd04>
   105e8:	b50000c1 	cbnz	x1, 10600 <getKeyFromKeymaster@@Base+0xd18>
   105ec:	52807d20 	mov	w0, #0x3e9                 	// #1001
   105f0:	a94153f3 	ldp	x19, x20, [sp, #16]
   105f4:	f94013f5 	ldr	x21, [sp, #32]
   105f8:	a8c37bfd 	ldp	x29, x30, [sp], #48
   105fc:	d65f03c0 	ret
   10600:	aa0103f3 	mov	x19, x1
   10604:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10608:	912e0021 	add	x1, x1, #0xb80
   1060c:	2a0203f5 	mov	w21, w2
   10610:	97ffcf94 	bl	4460 <fopen@plt>
   10614:	aa0003f4 	mov	x20, x0
   10618:	b40001e0 	cbz	x0, 10654 <getKeyFromKeymaster@@Base+0xd6c>
   1061c:	2a1503e2 	mov	w2, w21
   10620:	aa0003e3 	mov	x3, x0
   10624:	d2800021 	mov	x1, #0x1                   	// #1
   10628:	aa1303e0 	mov	x0, x19
   1062c:	97ffcf91 	bl	4470 <fwrite@plt>
   10630:	aa1403e0 	mov	x0, x20
   10634:	97ffcf1f 	bl	42b0 <fflush@plt>
   10638:	aa1403e0 	mov	x0, x20
   1063c:	97ffcf19 	bl	42a0 <fclose@plt>
   10640:	f94013f5 	ldr	x21, [sp, #32]
   10644:	52800000 	mov	w0, #0x0                   	// #0
   10648:	a94153f3 	ldp	x19, x20, [sp, #16]
   1064c:	a8c37bfd 	ldp	x29, x30, [sp], #48
   10650:	d65f03c0 	ret
   10654:	52800000 	mov	w0, #0x0                   	// #0
   10658:	17ffffe6 	b	105f0 <getKeyFromKeymaster@@Base+0xd08>

000000000001065c <gf_dump_image_to_bmp_file@@Base>:
   1065c:	a9b87bfd 	stp	x29, x30, [sp, #-128]!
   10660:	910003fd 	mov	x29, sp
   10664:	a90153f3 	stp	x19, x20, [sp, #16]
   10668:	b00000d4 	adrp	x20, 29000 <gf_dump_data_interface@@Base+0x18760>
   1066c:	a9025bf5 	stp	x21, x22, [sp, #32]
   10670:	aa0103f6 	mov	x22, x1
   10674:	2a0203f5 	mov	w21, w2
   10678:	f947c281 	ldr	x1, [x20, #3968]
   1067c:	a90363f7 	stp	x23, x24, [sp, #48]
   10680:	a9046bf9 	stp	x25, x26, [sp, #64]
   10684:	f9400021 	ldr	x1, [x1]
   10688:	2a0303f8 	mov	w24, w3
   1068c:	a90573fb 	stp	x27, x28, [sp, #80]
   10690:	f9003fa1 	str	x1, [x29, #120]
   10694:	b4000080 	cbz	x0, 106a4 <gf_dump_image_to_bmp_file@@Base+0x48>
   10698:	b4000076 	cbz	x22, 106a4 <gf_dump_image_to_bmp_file@@Base+0x48>
   1069c:	34000042 	cbz	w2, 106a4 <gf_dump_image_to_bmp_file@@Base+0x48>
   106a0:	350001c3 	cbnz	w3, 106d8 <gf_dump_image_to_bmp_file@@Base+0x7c>
   106a4:	52807d20 	mov	w0, #0x3e9                 	// #1001
   106a8:	f947c294 	ldr	x20, [x20, #3968]
   106ac:	f9403fa2 	ldr	x2, [x29, #120]
   106b0:	f9400281 	ldr	x1, [x20]
   106b4:	eb01005f 	cmp	x2, x1
   106b8:	54000f21 	b.ne	1089c <gf_dump_image_to_bmp_file@@Base+0x240>  // b.any
   106bc:	a94153f3 	ldp	x19, x20, [sp, #16]
   106c0:	a9425bf5 	ldp	x21, x22, [sp, #32]
   106c4:	a94363f7 	ldp	x23, x24, [sp, #48]
   106c8:	a9446bf9 	ldp	x25, x26, [sp, #64]
   106cc:	a94573fb 	ldp	x27, x28, [sp, #80]
   106d0:	a8c87bfd 	ldp	x29, x30, [sp], #128
   106d4:	d65f03c0 	ret
   106d8:	11000c57 	add	w23, w2, #0x3
   106dc:	d00000d3 	adrp	x19, 2a000 <gf_dump_data_interface@@Base+0x19760>
   106e0:	121e76f7 	and	w23, w23, #0xfffffffc
   106e4:	911ec27b 	add	x27, x19, #0x7b0
   106e8:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   106ec:	528086c4 	mov	w4, #0x436                 	// #1078
   106f0:	1b037ee2 	mul	w2, w23, w3
   106f4:	912e0021 	add	x1, x1, #0xb80
   106f8:	b800a364 	stur	w4, [x27, #10]
   106fc:	1110d843 	add	w3, w2, #0x436
   10700:	b8002363 	stur	w3, [x27, #2]
   10704:	52800503 	mov	w3, #0x28                  	// #40
   10708:	b9001775 	str	w21, [x27, #20]
   1070c:	b9001363 	str	w3, [x27, #16]
   10710:	9100437c 	add	x28, x27, #0x10
   10714:	b9001b78 	str	w24, [x27, #24]
   10718:	b9002762 	str	w2, [x27, #36]
   1071c:	97ffcf51 	bl	4460 <fopen@plt>
   10720:	aa0003f3 	mov	x19, x0
   10724:	b4000b80 	cbz	x0, 10894 <gf_dump_image_to_bmp_file@@Base+0x238>
   10728:	aa0003e3 	mov	x3, x0
   1072c:	d2800021 	mov	x1, #0x1                   	// #1
   10730:	d2800042 	mov	x2, #0x2                   	// #2
   10734:	aa1b03e0 	mov	x0, x27
   10738:	910203b9 	add	x25, x29, #0x80
   1073c:	9101afba 	add	x26, x29, #0x6b
   10740:	97ffcf4c 	bl	4470 <fwrite@plt>
   10744:	d2800021 	mov	x1, #0x1                   	// #1
   10748:	d2800082 	mov	x2, #0x4                   	// #4
   1074c:	aa1303e3 	mov	x3, x19
   10750:	91000b60 	add	x0, x27, #0x2
   10754:	97ffcf47 	bl	4470 <fwrite@plt>
   10758:	d2800021 	mov	x1, #0x1                   	// #1
   1075c:	d2800042 	mov	x2, #0x2                   	// #2
   10760:	aa1303e3 	mov	x3, x19
   10764:	91001b60 	add	x0, x27, #0x6
   10768:	97ffcf42 	bl	4470 <fwrite@plt>
   1076c:	d2800021 	mov	x1, #0x1                   	// #1
   10770:	d2800042 	mov	x2, #0x2                   	// #2
   10774:	aa1303e3 	mov	x3, x19
   10778:	91002360 	add	x0, x27, #0x8
   1077c:	97ffcf3d 	bl	4470 <fwrite@plt>
   10780:	d2800021 	mov	x1, #0x1                   	// #1
   10784:	d2800082 	mov	x2, #0x4                   	// #4
   10788:	aa1303e3 	mov	x3, x19
   1078c:	91002b60 	add	x0, x27, #0xa
   10790:	97ffcf38 	bl	4470 <fwrite@plt>
   10794:	aa1c03e0 	mov	x0, x28
   10798:	d2800021 	mov	x1, #0x1                   	// #1
   1079c:	d2800502 	mov	x2, #0x28                  	// #40
   107a0:	aa1303e3 	mov	x3, x19
   107a4:	97ffcf33 	bl	4470 <fwrite@plt>
   107a8:	3901afbf 	strb	wzr, [x29, #107]
   107ac:	b81ecf3f 	str	wzr, [x25, #-20]!
   107b0:	d2800021 	mov	x1, #0x1                   	// #1
   107b4:	aa1303e3 	mov	x3, x19
   107b8:	aa0103e2 	mov	x2, x1
   107bc:	aa1903e0 	mov	x0, x25
   107c0:	97ffcf2c 	bl	4470 <fwrite@plt>
   107c4:	d2800021 	mov	x1, #0x1                   	// #1
   107c8:	aa1303e3 	mov	x3, x19
   107cc:	aa0103e2 	mov	x2, x1
   107d0:	aa1903e0 	mov	x0, x25
   107d4:	97ffcf27 	bl	4470 <fwrite@plt>
   107d8:	d2800021 	mov	x1, #0x1                   	// #1
   107dc:	aa1303e3 	mov	x3, x19
   107e0:	aa0103e2 	mov	x2, x1
   107e4:	aa1903e0 	mov	x0, x25
   107e8:	97ffcf22 	bl	4470 <fwrite@plt>
   107ec:	d2800021 	mov	x1, #0x1                   	// #1
   107f0:	aa1a03e0 	mov	x0, x26
   107f4:	aa1303e3 	mov	x3, x19
   107f8:	aa0103e2 	mov	x2, x1
   107fc:	97ffcf1d 	bl	4470 <fwrite@plt>
   10800:	b9406fa0 	ldr	w0, [x29, #108]
   10804:	11000400 	add	w0, w0, #0x1
   10808:	b9006fa0 	str	w0, [x29, #108]
   1080c:	7103fc1f 	cmp	w0, #0xff
   10810:	54fffd0d 	b.le	107b0 <gf_dump_image_to_bmp_file@@Base+0x154>
   10814:	51000700 	sub	w0, w24, #0x1
   10818:	b9006fa0 	str	w0, [x29, #108]
   1081c:	2a1503f8 	mov	w24, w21
   10820:	9101c3ba 	add	x26, x29, #0x70
   10824:	4b1502f9 	sub	w25, w23, w21
   10828:	36f800c0 	tbz	w0, #31, 10840 <gf_dump_image_to_bmp_file@@Base+0x1e4>
   1082c:	14000014 	b	1087c <gf_dump_image_to_bmp_file@@Base+0x220>
   10830:	b9406fa0 	ldr	w0, [x29, #108]
   10834:	51000400 	sub	w0, w0, #0x1
   10838:	b9006fa0 	str	w0, [x29, #108]
   1083c:	37f80200 	tbnz	w0, #31, 1087c <gf_dump_image_to_bmp_file@@Base+0x220>
   10840:	1b007ea0 	mul	w0, w21, w0
   10844:	d2800021 	mov	x1, #0x1                   	// #1
   10848:	aa1803e2 	mov	x2, x24
   1084c:	8b0002c0 	add	x0, x22, x0
   10850:	aa1303e3 	mov	x3, x19
   10854:	97ffcf07 	bl	4470 <fwrite@plt>
   10858:	6b1702bf 	cmp	w21, w23
   1085c:	54fffea2 	b.cs	10830 <gf_dump_image_to_bmp_file@@Base+0x1d4>  // b.hs, b.nlast
   10860:	aa1a03e0 	mov	x0, x26
   10864:	d2800021 	mov	x1, #0x1                   	// #1
   10868:	aa1903e2 	mov	x2, x25
   1086c:	aa1303e3 	mov	x3, x19
   10870:	b90073bf 	str	wzr, [x29, #112]
   10874:	97ffceff 	bl	4470 <fwrite@plt>
   10878:	17ffffee 	b	10830 <gf_dump_image_to_bmp_file@@Base+0x1d4>
   1087c:	aa1303e0 	mov	x0, x19
   10880:	97ffce8c 	bl	42b0 <fflush@plt>
   10884:	aa1303e0 	mov	x0, x19
   10888:	97ffce86 	bl	42a0 <fclose@plt>
   1088c:	52800000 	mov	w0, #0x0                   	// #0
   10890:	17ffff86 	b	106a8 <gf_dump_image_to_bmp_file@@Base+0x4c>
   10894:	52800000 	mov	w0, #0x0                   	// #0
   10898:	17ffff84 	b	106a8 <gf_dump_image_to_bmp_file@@Base+0x4c>
   1089c:	97ffce89 	bl	42c0 <__stack_chk_fail@plt>

00000000000108a0 <gf_dump_data_interface@@Base>:
   108a0:	d121c3ff 	sub	sp, sp, #0x870
   108a4:	a9ba7bfd 	stp	x29, x30, [sp, #-96]!
   108a8:	910003fd 	mov	x29, sp
   108ac:	a90153f3 	stp	x19, x20, [sp, #16]
   108b0:	b00000d3 	adrp	x19, 29000 <gf_dump_data_interface@@Base+0x18760>
   108b4:	a90363f7 	stp	x23, x24, [sp, #48]
   108b8:	910323b8 	add	x24, x29, #0xc8
   108bc:	2a0103f7 	mov	w23, w1
   108c0:	f947c263 	ldr	x3, [x19, #3968]
   108c4:	52800001 	mov	w1, #0x0                   	// #0
   108c8:	a9025bf5 	stp	x21, x22, [sp, #32]
   108cc:	a9046bf9 	stp	x25, x26, [sp, #64]
   108d0:	f9400063 	ldr	x3, [x3]
   108d4:	aa0203f9 	mov	x25, x2
   108d8:	a90573fb 	stp	x27, x28, [sp, #80]
   108dc:	d2802002 	mov	x2, #0x100                 	// #256
   108e0:	d10043ff 	sub	sp, sp, #0x10
   108e4:	aa0003f6 	mov	x22, x0
   108e8:	aa1803e0 	mov	x0, x24
   108ec:	f90467a3 	str	x3, [x29, #2248]
   108f0:	910723ba 	add	x26, x29, #0x1c8
   108f4:	97ffced7 	bl	4450 <memset@plt>
   108f8:	b0000015 	adrp	x21, 11000 <gf_dump_data_interface@@Base+0x760>
   108fc:	52800001 	mov	w1, #0x0                   	// #0
   10900:	d2802002 	mov	x2, #0x100                 	// #256
   10904:	aa1a03e0 	mov	x0, x26
   10908:	b000003c 	adrp	x28, 15000 <gf_dump_data_interface@@Base+0x4760>
   1090c:	912c0394 	add	x20, x28, #0xb00
   10910:	9109c2bb 	add	x27, x21, #0x270
   10914:	97ffcecf 	bl	4450 <memset@plt>
   10918:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   1091c:	aa1b03e1 	mov	x1, x27
   10920:	52800060 	mov	w0, #0x3                   	// #3
   10924:	912e2042 	add	x2, x2, #0xb88
   10928:	aa1403e3 	mov	x3, x20
   1092c:	91008284 	add	x4, x20, #0x20
   10930:	97ffce7c 	bl	4320 <__android_log_print@plt>
   10934:	710036ff 	cmp	w23, #0xd
   10938:	1a9f97e1 	cset	w1, hi	// hi = pmore
   1093c:	eb1f033f 	cmp	x25, xzr
   10940:	1a9f17e0 	cset	w0, eq	// eq = none
   10944:	2a000020 	orr	w0, w1, w0
   10948:	350005c0 	cbnz	w0, 10a00 <gf_dump_data_interface@@Base+0x160>
   1094c:	b40005b6 	cbz	x22, 10a00 <gf_dump_data_interface@@Base+0x160>
   10950:	91405ec0 	add	x0, x22, #0x17, lsl #12
   10954:	f9003ba0 	str	x0, [x29, #112]
   10958:	9102c3a7 	add	x7, x29, #0xb0
   1095c:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10960:	910b23aa 	add	x10, x29, #0x2c8
   10964:	aa1b03e1 	mov	x1, x27
   10968:	b943c405 	ldr	w5, [x0, #964]
   1096c:	912f0042 	add	x2, x2, #0xbc0
   10970:	b943c800 	ldr	w0, [x0, #968]
   10974:	aa1403e3 	mov	x3, x20
   10978:	2a0503e8 	mov	w8, w5
   1097c:	2a1703e4 	mov	w4, w23
   10980:	2a0003e9 	mov	w9, w0
   10984:	2a0803e6 	mov	w6, w8
   10988:	b9009ba5 	str	w5, [x29, #152]
   1098c:	aa1903e5 	mov	x5, x25
   10990:	1b087d28 	mul	w8, w9, w8
   10994:	b90087a0 	str	w0, [x29, #132]
   10998:	52800060 	mov	w0, #0x3                   	// #3
   1099c:	f90053a7 	str	x7, [x29, #160]
   109a0:	2a0903e7 	mov	w7, w9
   109a4:	b9009fa8 	str	w8, [x29, #156]
   109a8:	f90057aa 	str	x10, [x29, #168]
   109ac:	97ffce5d 	bl	4320 <__android_log_print@plt>
   109b0:	d2800000 	mov	x0, #0x0                   	// #0
   109b4:	97ffce37 	bl	4290 <time@plt>
   109b8:	f94053a7 	ldr	x7, [x29, #160]
   109bc:	52800001 	mov	w1, #0x0                   	// #0
   109c0:	d2802002 	mov	x2, #0x100                 	// #256
   109c4:	f90000e0 	str	x0, [x7]
   109c8:	f94057a0 	ldr	x0, [x29, #168]
   109cc:	97ffcea1 	bl	4450 <memset@plt>
   109d0:	b9409fa8 	ldr	w8, [x29, #156]
   109d4:	5284a400 	mov	w0, #0x2520                	// #9504
   109d8:	6b00011f 	cmp	w8, w0
   109dc:	540003e9 	b.ls	10a58 <gf_dump_data_interface@@Base+0x1b8>  // b.plast
   109e0:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   109e4:	528000c0 	mov	w0, #0x6                   	// #6
   109e8:	aa1b03e1 	mov	x1, x27
   109ec:	91300042 	add	x2, x2, #0xc00
   109f0:	aa1403e3 	mov	x3, x20
   109f4:	97ffce4b 	bl	4320 <__android_log_print@plt>
   109f8:	12800000 	mov	w0, #0xffffffff            	// #-1
   109fc:	14000009 	b	10a20 <gf_dump_data_interface@@Base+0x180>
   10a00:	912c0383 	add	x3, x28, #0xb00
   10a04:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10a08:	528000c0 	mov	w0, #0x6                   	// #6
   10a0c:	9109c2a1 	add	x1, x21, #0x270
   10a10:	912e8042 	add	x2, x2, #0xba0
   10a14:	91008064 	add	x4, x3, #0x20
   10a18:	97ffce42 	bl	4320 <__android_log_print@plt>
   10a1c:	52807d20 	mov	w0, #0x3e9                 	// #1001
   10a20:	f947c273 	ldr	x19, [x19, #3968]
   10a24:	f94467a2 	ldr	x2, [x29, #2248]
   10a28:	f9400261 	ldr	x1, [x19]
   10a2c:	eb01005f 	cmp	x2, x1
   10a30:	54003481 	b.ne	110c0 <gf_dump_data_interface@@Base+0x820>  // b.any
   10a34:	910003bf 	mov	sp, x29
   10a38:	a94153f3 	ldp	x19, x20, [sp, #16]
   10a3c:	a9425bf5 	ldp	x21, x22, [sp, #32]
   10a40:	a94363f7 	ldp	x23, x24, [sp, #48]
   10a44:	a9446bf9 	ldp	x25, x26, [sp, #64]
   10a48:	a94573fb 	ldp	x27, x28, [sp, #80]
   10a4c:	a8c67bfd 	ldp	x29, x30, [sp], #96
   10a50:	9121c3ff 	add	sp, sp, #0x870
   10a54:	d65f03c0 	ret
   10a58:	f94053a0 	ldr	x0, [x29, #160]
   10a5c:	9102e3bb 	add	x27, x29, #0xb8
   10a60:	97ffce6c 	bl	4410 <localtime@plt>
   10a64:	aa0003f4 	mov	x20, x0
   10a68:	d2800001 	mov	x1, #0x0                   	// #0
   10a6c:	aa1b03e0 	mov	x0, x27
   10a70:	97ffce18 	bl	42d0 <gettimeofday@plt>
   10a74:	b9401682 	ldr	w2, [x20, #20]
   10a78:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10a7c:	b9401283 	ldr	w3, [x20, #16]
   10a80:	9130a021 	add	x1, x1, #0xc28
   10a84:	b9400e84 	ldr	w4, [x20, #12]
   10a88:	111db042 	add	w2, w2, #0x76c
   10a8c:	b9400a85 	ldr	w5, [x20, #8]
   10a90:	11000463 	add	w3, w3, #0x1
   10a94:	b9400686 	ldr	w6, [x20, #4]
   10a98:	b9400287 	ldr	w7, [x20]
   10a9c:	f9400768 	ldr	x8, [x27, #8]
   10aa0:	f94057a0 	ldr	x0, [x29, #168]
   10aa4:	f90003e8 	str	x8, [sp]
   10aa8:	97ffce2e 	bl	4360 <sprintf@plt>
   10aac:	710006ff 	cmp	w23, #0x1
   10ab0:	54002a09 	b.ls	10ff0 <gf_dump_data_interface@@Base+0x750>  // b.plast
   10ab4:	710022ff 	cmp	w23, #0x8
   10ab8:	52800014 	mov	w20, #0x0                   	// #0
   10abc:	54000140 	b.eq	10ae4 <gf_dump_data_interface@@Base+0x244>  // b.none
   10ac0:	912c0383 	add	x3, x28, #0xb00
   10ac4:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10ac8:	52800060 	mov	w0, #0x3                   	// #3
   10acc:	9109c2a1 	add	x1, x21, #0x270
   10ad0:	913a2042 	add	x2, x2, #0xe88
   10ad4:	91008064 	add	x4, x3, #0x20
   10ad8:	97ffce12 	bl	4320 <__android_log_print@plt>
   10adc:	2a1403e0 	mov	w0, w20
   10ae0:	17ffffd0 	b	10a20 <gf_dump_data_interface@@Base+0x180>
   10ae4:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10ae8:	9131c000 	add	x0, x0, #0xc70
   10aec:	a9400c02 	ldp	x2, x3, [x0]
   10af0:	b9401004 	ldr	w4, [x0, #16]
   10af4:	79402801 	ldrh	w1, [x0, #20]
   10af8:	39405800 	ldrb	w0, [x0, #22]
   10afc:	b9001304 	str	w4, [x24, #16]
   10b00:	a9000f02 	stp	x2, x3, [x24]
   10b04:	79002b01 	strh	w1, [x24, #20]
   10b08:	39005b00 	strb	w0, [x24, #22]
   10b0c:	aa1803e0 	mov	x0, x24
   10b10:	52803da1 	mov	w1, #0x1ed                 	// #493
   10b14:	97ffce0b 	bl	4340 <fs_mkdirs@plt>
   10b18:	2a0003e6 	mov	w6, w0
   10b1c:	912c0383 	add	x3, x28, #0xb00
   10b20:	37f82806 	tbnz	w6, #31, 11020 <gf_dump_data_interface@@Base+0x780>
   10b24:	b9409fa5 	ldr	w5, [x29, #156]
   10b28:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10b2c:	91018064 	add	x4, x3, #0x60
   10b30:	912e2002 	add	x2, x0, #0xb88
   10b34:	531f78a5 	lsl	w5, w5, #1
   10b38:	91010063 	add	x3, x3, #0x40
   10b3c:	9109c2a1 	add	x1, x21, #0x270
   10b40:	52800060 	mov	w0, #0x3                   	// #3
   10b44:	b90083a5 	str	w5, [x29, #128]
   10b48:	910f23bb 	add	x27, x29, #0x3c8
   10b4c:	97ffcdf5 	bl	4320 <__android_log_print@plt>
   10b50:	911323b4 	add	x20, x29, #0x4c8
   10b54:	52800001 	mov	w1, #0x0                   	// #0
   10b58:	d2802002 	mov	x2, #0x100                 	// #256
   10b5c:	aa1b03e0 	mov	x0, x27
   10b60:	97ffce3c 	bl	4450 <memset@plt>
   10b64:	f94057a3 	ldr	x3, [x29, #168]
   10b68:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10b6c:	91334021 	add	x1, x1, #0xcd0
   10b70:	aa1803e2 	mov	x2, x24
   10b74:	aa1b03e0 	mov	x0, x27
   10b78:	97ffcdfa 	bl	4360 <sprintf@plt>
   10b7c:	b94083a2 	ldr	w2, [x29, #128]
   10b80:	914026c1 	add	x1, x22, #0x9, lsl #12
   10b84:	91137021 	add	x1, x1, #0x4dc
   10b88:	aa1b03e0 	mov	x0, x27
   10b8c:	97fffe92 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10b90:	f94057a3 	ldr	x3, [x29, #168]
   10b94:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10b98:	9133a021 	add	x1, x1, #0xce8
   10b9c:	aa1803e2 	mov	x2, x24
   10ba0:	aa1b03e0 	mov	x0, x27
   10ba4:	97ffcdef 	bl	4360 <sprintf@plt>
   10ba8:	b94083a2 	ldr	w2, [x29, #128]
   10bac:	aa1b03e0 	mov	x0, x27
   10bb0:	910172c1 	add	x1, x22, #0x5c
   10bb4:	97fffe88 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10bb8:	f94057a3 	ldr	x3, [x29, #168]
   10bbc:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10bc0:	9133e021 	add	x1, x1, #0xcf8
   10bc4:	aa1803e2 	mov	x2, x24
   10bc8:	aa1b03e0 	mov	x0, x27
   10bcc:	97ffcde5 	bl	4360 <sprintf@plt>
   10bd0:	b94083a2 	ldr	w2, [x29, #128]
   10bd4:	914012c1 	add	x1, x22, #0x4, lsl #12
   10bd8:	912a7021 	add	x1, x1, #0xa9c
   10bdc:	aa1b03e0 	mov	x0, x27
   10be0:	97fffe7d 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10be4:	b90067a0 	str	w0, [x29, #100]
   10be8:	52800001 	mov	w1, #0x0                   	// #0
   10bec:	d2808002 	mov	x2, #0x400                 	// #1024
   10bf0:	aa1403e0 	mov	x0, x20
   10bf4:	97ffce17 	bl	4450 <memset@plt>
   10bf8:	f94057a3 	ldr	x3, [x29, #168]
   10bfc:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10c00:	91342021 	add	x1, x1, #0xd08
   10c04:	aa1803e2 	mov	x2, x24
   10c08:	aa1b03e0 	mov	x0, x27
   10c0c:	97ffcdd5 	bl	4360 <sprintf@plt>
   10c10:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10c14:	aa1b03e0 	mov	x0, x27
   10c18:	912e0021 	add	x1, x1, #0xb80
   10c1c:	97ffce11 	bl	4460 <fopen@plt>
   10c20:	aa0003fb 	mov	x27, x0
   10c24:	b4000fc0 	cbz	x0, 10e1c <gf_dump_data_interface@@Base+0x57c>
   10c28:	aa0003e3 	mov	x3, x0
   10c2c:	910012c4 	add	x4, x22, #0x4
   10c30:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10c34:	d2800021 	mov	x1, #0x1                   	// #1
   10c38:	d28001c2 	mov	x2, #0xe                   	// #14
   10c3c:	f90053a4 	str	x4, [x29, #160]
   10c40:	91348000 	add	x0, x0, #0xd20
   10c44:	910122c4 	add	x4, x22, #0x48
   10c48:	f90037a4 	str	x4, [x29, #104]
   10c4c:	97ffce09 	bl	4470 <fwrite@plt>
   10c50:	f94053a4 	ldr	x4, [x29, #160]
   10c54:	910162c0 	add	x0, x22, #0x58
   10c58:	f9004ba4 	str	x4, [x29, #144]
   10c5c:	f90047a0 	str	x0, [x29, #136]
   10c60:	aa0403e0 	mov	x0, x4
   10c64:	f94037a4 	ldr	x4, [x29, #104]
   10c68:	f90053a4 	str	x4, [x29, #160]
   10c6c:	97ffcdd9 	bl	43d0 <strlen@plt>
   10c70:	aa0003e2 	mov	x2, x0
   10c74:	f9404ba1 	ldr	x1, [x29, #144]
   10c78:	aa1b03e3 	mov	x3, x27
   10c7c:	aa0103e0 	mov	x0, x1
   10c80:	d2800021 	mov	x1, #0x1                   	// #1
   10c84:	97ffcdfb 	bl	4470 <fwrite@plt>
   10c88:	d2800021 	mov	x1, #0x1                   	// #1
   10c8c:	d0000000 	adrp	x0, 12000 <gf_dump_data_interface@@Base+0x1760>
   10c90:	aa0103e2 	mov	x2, x1
   10c94:	aa1b03e3 	mov	x3, x27
   10c98:	91108000 	add	x0, x0, #0x420
   10c9c:	97ffcdf5 	bl	4470 <fwrite@plt>
   10ca0:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10ca4:	d2800021 	mov	x1, #0x1                   	// #1
   10ca8:	9134c000 	add	x0, x0, #0xd30
   10cac:	d2800162 	mov	x2, #0xb                   	// #11
   10cb0:	aa1b03e3 	mov	x3, x27
   10cb4:	97ffcdef 	bl	4470 <fwrite@plt>
   10cb8:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10cbc:	f94053a4 	ldr	x4, [x29, #160]
   10cc0:	91350000 	add	x0, x0, #0xd40
   10cc4:	f9004ba0 	str	x0, [x29, #144]
   10cc8:	38401482 	ldrb	w2, [x4], #1
   10ccc:	aa1403e0 	mov	x0, x20
   10cd0:	f9404ba1 	ldr	x1, [x29, #144]
   10cd4:	f90053a4 	str	x4, [x29, #160]
   10cd8:	f9003fa4 	str	x4, [x29, #120]
   10cdc:	97ffcda1 	bl	4360 <sprintf@plt>
   10ce0:	aa1403e0 	mov	x0, x20
   10ce4:	97ffcdbb 	bl	43d0 <strlen@plt>
   10ce8:	aa0003e2 	mov	x2, x0
   10cec:	d2800021 	mov	x1, #0x1                   	// #1
   10cf0:	aa1403e0 	mov	x0, x20
   10cf4:	aa1b03e3 	mov	x3, x27
   10cf8:	97ffcdde 	bl	4470 <fwrite@plt>
   10cfc:	f94047a0 	ldr	x0, [x29, #136]
   10d00:	f94053a4 	ldr	x4, [x29, #160]
   10d04:	eb00009f 	cmp	x4, x0
   10d08:	54fffe01 	b.ne	10cc8 <gf_dump_data_interface@@Base+0x428>  // b.any
   10d0c:	d2800021 	mov	x1, #0x1                   	// #1
   10d10:	d0000000 	adrp	x0, 12000 <gf_dump_data_interface@@Base+0x1760>
   10d14:	910112c4 	add	x4, x22, #0x44
   10d18:	aa0103e2 	mov	x2, x1
   10d1c:	aa1b03e3 	mov	x3, x27
   10d20:	91108000 	add	x0, x0, #0x420
   10d24:	f90053a4 	str	x4, [x29, #160]
   10d28:	97ffcdd2 	bl	4470 <fwrite@plt>
   10d2c:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10d30:	d2800021 	mov	x1, #0x1                   	// #1
   10d34:	91354000 	add	x0, x0, #0xd50
   10d38:	d2800162 	mov	x2, #0xb                   	// #11
   10d3c:	aa1b03e3 	mov	x3, x27
   10d40:	97ffcdcc 	bl	4470 <fwrite@plt>
   10d44:	f94053a4 	ldr	x4, [x29, #160]
   10d48:	38401482 	ldrb	w2, [x4], #1
   10d4c:	aa1403e0 	mov	x0, x20
   10d50:	f9404ba1 	ldr	x1, [x29, #144]
   10d54:	f90053a4 	str	x4, [x29, #160]
   10d58:	f90047a4 	str	x4, [x29, #136]
   10d5c:	97ffcd81 	bl	4360 <sprintf@plt>
   10d60:	aa1403e0 	mov	x0, x20
   10d64:	97ffcd9b 	bl	43d0 <strlen@plt>
   10d68:	aa0003e2 	mov	x2, x0
   10d6c:	d2800021 	mov	x1, #0x1                   	// #1
   10d70:	aa1403e0 	mov	x0, x20
   10d74:	aa1b03e3 	mov	x3, x27
   10d78:	97ffcdbe 	bl	4470 <fwrite@plt>
   10d7c:	f94037a0 	ldr	x0, [x29, #104]
   10d80:	f94053a4 	ldr	x4, [x29, #160]
   10d84:	eb00009f 	cmp	x4, x0
   10d88:	54fffe01 	b.ne	10d48 <gf_dump_data_interface@@Base+0x4a8>  // b.any
   10d8c:	d0000000 	adrp	x0, 12000 <gf_dump_data_interface@@Base+0x1760>
   10d90:	d2800021 	mov	x1, #0x1                   	// #1
   10d94:	91108004 	add	x4, x0, #0x420
   10d98:	aa0103e2 	mov	x2, x1
   10d9c:	aa0403e0 	mov	x0, x4
   10da0:	aa1b03e3 	mov	x3, x27
   10da4:	f90053a4 	str	x4, [x29, #160]
   10da8:	97ffcdb2 	bl	4470 <fwrite@plt>
   10dac:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   10db0:	aa1b03e3 	mov	x3, x27
   10db4:	d2800021 	mov	x1, #0x1                   	// #1
   10db8:	d2800162 	mov	x2, #0xb                   	// #11
   10dbc:	91358000 	add	x0, x0, #0xd60
   10dc0:	97ffcdac 	bl	4470 <fwrite@plt>
   10dc4:	b9405ac2 	ldr	w2, [x22, #88]
   10dc8:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10dcc:	9135c021 	add	x1, x1, #0xd70
   10dd0:	aa1403e0 	mov	x0, x20
   10dd4:	97ffcd63 	bl	4360 <sprintf@plt>
   10dd8:	aa1403e0 	mov	x0, x20
   10ddc:	97ffcd7d 	bl	43d0 <strlen@plt>
   10de0:	aa0003e2 	mov	x2, x0
   10de4:	d2800021 	mov	x1, #0x1                   	// #1
   10de8:	aa1b03e3 	mov	x3, x27
   10dec:	aa1403e0 	mov	x0, x20
   10df0:	97ffcda0 	bl	4470 <fwrite@plt>
   10df4:	f94053a4 	ldr	x4, [x29, #160]
   10df8:	d2800021 	mov	x1, #0x1                   	// #1
   10dfc:	aa1b03e3 	mov	x3, x27
   10e00:	aa0103e2 	mov	x2, x1
   10e04:	aa0403e0 	mov	x0, x4
   10e08:	97ffcd9a 	bl	4470 <fwrite@plt>
   10e0c:	aa1b03e0 	mov	x0, x27
   10e10:	97ffcd28 	bl	42b0 <fflush@plt>
   10e14:	aa1b03e0 	mov	x0, x27
   10e18:	97ffcd22 	bl	42a0 <fclose@plt>
   10e1c:	b94067a5 	ldr	w5, [x29, #100]
   10e20:	912c0384 	add	x4, x28, #0xb00
   10e24:	b0000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   10e28:	91010083 	add	x3, x4, #0x40
   10e2c:	9109c2a1 	add	x1, x21, #0x270
   10e30:	9135e042 	add	x2, x2, #0xd78
   10e34:	91018084 	add	x4, x4, #0x60
   10e38:	52800060 	mov	w0, #0x3                   	// #3
   10e3c:	91404ad4 	add	x20, x22, #0x12, lsl #12
   10e40:	97ffcd38 	bl	4320 <__android_log_print@plt>
   10e44:	f94057bb 	ldr	x27, [x29, #168]
   10e48:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10e4c:	aa1903e4 	mov	x4, x25
   10e50:	aa1b03e3 	mov	x3, x27
   10e54:	91366021 	add	x1, x1, #0xd98
   10e58:	aa1803e2 	mov	x2, x24
   10e5c:	aa1a03e0 	mov	x0, x26
   10e60:	91257294 	add	x20, x20, #0x95c
   10e64:	97ffcd3f 	bl	4360 <sprintf@plt>
   10e68:	914036c1 	add	x1, x22, #0xd, lsl #12
   10e6c:	b94083a2 	ldr	w2, [x29, #128]
   10e70:	913c7021 	add	x1, x1, #0xf1c
   10e74:	aa1a03e0 	mov	x0, x26
   10e78:	914052d6 	add	x22, x22, #0x14, lsl #12
   10e7c:	97fffdd6 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10e80:	9139f2d6 	add	x22, x22, #0xe7c
   10e84:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10e88:	aa1b03e3 	mov	x3, x27
   10e8c:	aa1903e4 	mov	x4, x25
   10e90:	9136c021 	add	x1, x1, #0xdb0
   10e94:	aa1803e2 	mov	x2, x24
   10e98:	aa1a03e0 	mov	x0, x26
   10e9c:	97ffcd31 	bl	4360 <sprintf@plt>
   10ea0:	b9409fa2 	ldr	w2, [x29, #156]
   10ea4:	aa1403e1 	mov	x1, x20
   10ea8:	aa1a03e0 	mov	x0, x26
   10eac:	97fffdca 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10eb0:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10eb4:	aa1903e4 	mov	x4, x25
   10eb8:	91372021 	add	x1, x1, #0xdc8
   10ebc:	aa1803e2 	mov	x2, x24
   10ec0:	aa1b03e3 	mov	x3, x27
   10ec4:	aa1a03e0 	mov	x0, x26
   10ec8:	97ffcd26 	bl	4360 <sprintf@plt>
   10ecc:	b9409ba2 	ldr	w2, [x29, #152]
   10ed0:	aa1403e1 	mov	x1, x20
   10ed4:	b94087a3 	ldr	w3, [x29, #132]
   10ed8:	aa1a03e0 	mov	x0, x26
   10edc:	97fffde0 	bl	1065c <gf_dump_image_to_bmp_file@@Base>
   10ee0:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10ee4:	aa1b03e3 	mov	x3, x27
   10ee8:	aa1903e4 	mov	x4, x25
   10eec:	91378021 	add	x1, x1, #0xde0
   10ef0:	aa1803e2 	mov	x2, x24
   10ef4:	aa1a03e0 	mov	x0, x26
   10ef8:	97ffcd1a 	bl	4360 <sprintf@plt>
   10efc:	b9409fa2 	ldr	w2, [x29, #156]
   10f00:	aa1603e1 	mov	x1, x22
   10f04:	aa1a03e0 	mov	x0, x26
   10f08:	97fffdb3 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10f0c:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10f10:	aa1903e4 	mov	x4, x25
   10f14:	9137e021 	add	x1, x1, #0xdf8
   10f18:	aa1803e2 	mov	x2, x24
   10f1c:	aa1b03e3 	mov	x3, x27
   10f20:	aa1a03e0 	mov	x0, x26
   10f24:	97ffcd0f 	bl	4360 <sprintf@plt>
   10f28:	b9409ba2 	ldr	w2, [x29, #152]
   10f2c:	aa1a03e0 	mov	x0, x26
   10f30:	b94087a3 	ldr	w3, [x29, #132]
   10f34:	aa1603e1 	mov	x1, x22
   10f38:	97fffdc9 	bl	1065c <gf_dump_image_to_bmp_file@@Base>
   10f3c:	f9403ba0 	ldr	x0, [x29, #112]
   10f40:	b9439c00 	ldr	w0, [x0, #924]
   10f44:	6b1f001f 	cmp	w0, wzr
   10f48:	9a960294 	csel	x20, x20, x22, eq	// eq = none
   10f4c:	710006ff 	cmp	w23, #0x1
   10f50:	54000a20 	b.eq	11094 <gf_dump_data_interface@@Base+0x7f4>  // b.none
   10f54:	710022ff 	cmp	w23, #0x8
   10f58:	54000760 	b.eq	11044 <gf_dump_data_interface@@Base+0x7a4>  // b.none
   10f5c:	f9403ba3 	ldr	x3, [x29, #112]
   10f60:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10f64:	aa1a03e0 	mov	x0, x26
   10f68:	91396021 	add	x1, x1, #0xe58
   10f6c:	aa1803e2 	mov	x2, x24
   10f70:	b943a065 	ldr	w5, [x3, #928]
   10f74:	b943a466 	ldr	w6, [x3, #932]
   10f78:	b943b867 	ldr	w7, [x3, #952]
   10f7c:	b943bc64 	ldr	w4, [x3, #956]
   10f80:	b943c068 	ldr	w8, [x3, #960]
   10f84:	f94057a3 	ldr	x3, [x29, #168]
   10f88:	b90003e4 	str	w4, [sp]
   10f8c:	aa1903e4 	mov	x4, x25
   10f90:	b9000be8 	str	w8, [sp, #8]
   10f94:	97ffccf3 	bl	4360 <sprintf@plt>
   10f98:	b9409ba2 	ldr	w2, [x29, #152]
   10f9c:	aa1403e1 	mov	x1, x20
   10fa0:	b94087a3 	ldr	w3, [x29, #132]
   10fa4:	aa1a03e0 	mov	x0, x26
   10fa8:	97fffdad 	bl	1065c <gf_dump_image_to_bmp_file@@Base>
   10fac:	b0000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   10fb0:	aa1a03e0 	mov	x0, x26
   10fb4:	9139e021 	add	x1, x1, #0xe78
   10fb8:	97ffccfe 	bl	43b0 <strstr@plt>
   10fbc:	aa0003e4 	mov	x4, x0
   10fc0:	b0000023 	adrp	x3, 15000 <gf_dump_data_interface@@Base+0x4760>
   10fc4:	b9409fa2 	ldr	w2, [x29, #156]
   10fc8:	913a0063 	add	x3, x3, #0xe80
   10fcc:	aa1403e1 	mov	x1, x20
   10fd0:	aa1a03e0 	mov	x0, x26
   10fd4:	b9400065 	ldr	w5, [x3]
   10fd8:	39401063 	ldrb	w3, [x3, #4]
   10fdc:	b9000085 	str	w5, [x4]
   10fe0:	39001083 	strb	w3, [x4, #4]
   10fe4:	97fffd7c 	bl	105d4 <getKeyFromKeymaster@@Base+0xcec>
   10fe8:	2a0003f4 	mov	w20, w0
   10fec:	17fffeb5 	b	10ac0 <gf_dump_data_interface@@Base+0x220>
   10ff0:	54000400 	b.eq	11070 <gf_dump_data_interface@@Base+0x7d0>  // b.none
   10ff4:	710022ff 	cmp	w23, #0x8
   10ff8:	54ffd760 	b.eq	10ae4 <gf_dump_data_interface@@Base+0x244>  // b.none
   10ffc:	b0000020 	adrp	x0, 15000 <gf_dump_data_interface@@Base+0x4760>
   11000:	91322000 	add	x0, x0, #0xc88
   11004:	a9400c02 	ldp	x2, x3, [x0]
   11008:	f9400801 	ldr	x1, [x0, #16]
   1100c:	b9401800 	ldr	w0, [x0, #24]
   11010:	f9000b01 	str	x1, [x24, #16]
   11014:	b9001b00 	str	w0, [x24, #24]
   11018:	a9000f02 	stp	x2, x3, [x24]
   1101c:	17fffebc 	b	10b0c <gf_dump_data_interface@@Base+0x26c>
   11020:	90000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   11024:	9109c2a1 	add	x1, x21, #0x270
   11028:	9132a042 	add	x2, x2, #0xca8
   1102c:	91008064 	add	x4, x3, #0x20
   11030:	aa1803e5 	mov	x5, x24
   11034:	528000c0 	mov	w0, #0x6                   	// #6
   11038:	52800014 	mov	w20, #0x0                   	// #0
   1103c:	97ffccb9 	bl	4320 <__android_log_print@plt>
   11040:	17fffea0 	b	10ac0 <gf_dump_data_interface@@Base+0x220>
   11044:	f9403ba0 	ldr	x0, [x29, #112]
   11048:	90000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   1104c:	f94057a3 	ldr	x3, [x29, #168]
   11050:	9138e021 	add	x1, x1, #0xe38
   11054:	aa1803e2 	mov	x2, x24
   11058:	aa1903e4 	mov	x4, x25
   1105c:	b943a005 	ldr	w5, [x0, #928]
   11060:	b943a406 	ldr	w6, [x0, #932]
   11064:	aa1a03e0 	mov	x0, x26
   11068:	97ffccbe 	bl	4360 <sprintf@plt>
   1106c:	17ffffcb 	b	10f98 <gf_dump_data_interface@@Base+0x6f8>
   11070:	f9403ba0 	ldr	x0, [x29, #112]
   11074:	90000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   11078:	90000022 	adrp	x2, 15000 <gf_dump_data_interface@@Base+0x4760>
   1107c:	91314021 	add	x1, x1, #0xc50
   11080:	91316042 	add	x2, x2, #0xc58
   11084:	b943b003 	ldr	w3, [x0, #944]
   11088:	aa1803e0 	mov	x0, x24
   1108c:	97ffccb5 	bl	4360 <sprintf@plt>
   11090:	17fffe9f 	b	10b0c <gf_dump_data_interface@@Base+0x26c>
   11094:	f9403ba3 	ldr	x3, [x29, #112]
   11098:	90000021 	adrp	x1, 15000 <gf_dump_data_interface@@Base+0x4760>
   1109c:	aa1a03e0 	mov	x0, x26
   110a0:	91384021 	add	x1, x1, #0xe10
   110a4:	aa1803e2 	mov	x2, x24
   110a8:	b943a065 	ldr	w5, [x3, #928]
   110ac:	b943a466 	ldr	w6, [x3, #932]
   110b0:	b943ac67 	ldr	w7, [x3, #940]
   110b4:	b943a864 	ldr	w4, [x3, #936]
   110b8:	b943b468 	ldr	w8, [x3, #948]
   110bc:	17ffffb2 	b	10f84 <gf_dump_data_interface@@Base+0x6e4>
   110c0:	97ffcc80 	bl	42c0 <__stack_chk_fail@plt>
