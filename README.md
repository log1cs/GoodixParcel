## Automated script to patch Goodix blobs after Android Q

## The problem
"Parcel object increased from 104 to 120 bytes, and many functions in both libraries had two Parcel objects next to each other in their stack.

Each of those functions had their stack modified to be increased by 32 bytes to accommodate for the increased Parcel object size. The stack pointer offsets for the 2nd Parcel, along with any other items in the stack after the Parcels (which was just the stack canary), were also adjusted to accomodate for the change in Parcel size."

Source: https://github.com/jabashque/proprietary_vendor_leeco/commit/652378f8839f2851a65334a0c659d7ba06fd29cc (@jabashque)

## Summary

On Android 14, Goodix just straight showing a stack corruption in the logcat everytime it tries to 
read fingerprint in Fingerprint setup:

```
--------- beginning of crash
F libc    : stack corruption detected (-fstack-protector)
F libc    : Fatal signal 6 (SIGABRT), code -1 (SI_QUEUE) in tid 1498 (android.hardwar), pid 1498 (android.hardwar)
F DEBUG   : *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***
F DEBUG   : Build fingerprint: 'Nokia/TA-1004_00WW/NB1:8.1.0/OPR1.170623.026/00WW_4_88B:user/release-keys'
F DEBUG   : Revision: '0'
F DEBUG   : ABI: 'arm64'
F DEBUG   : Timestamp: 1974-12-17 06:27:08.153688959+0100
F DEBUG   : Process uptime: 3s
F DEBUG   : Cmdline: /vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service
F DEBUG   : pid: 1498, tid: 1498, name: android.hardwar  >>> /vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service <<<
F DEBUG   : uid: 1000
F DEBUG   : signal 6 (SIGABRT), code -1 (SI_QUEUE), fault addr --------
F DEBUG   : Abort message: 'stack corruption detected (-fstack-protector)'
F DEBUG   :     x0  0000000000000000  x1  00000000000005da  x2  0000000000000006  x3  0000007ffe25efb0
F DEBUG   :     x4  607372652c271f63  x5  607372652c271f63  x6  607372652c271f63  x7  7f7f7f7f7f7f7f7f
F DEBUG   :     x8  00000000000000f0  x9  0000007385260e28  x10 0000000000000001  x11 00000073852d9e20
F DEBUG   :     x12 0000000000000018  x13 000000001c3df18c  x14 0005c3055f263c3b  x15 00000000000018fe
F DEBUG   :     x16 00000073853429f0  x17 000000738531cfb0  x18 0000007386996000  x19 00000000000005da
F DEBUG   :     x20 00000000000005da  x21 00000000ffffffff  x22 0000007385558590  x23 0000007ffe25f0c8
F DEBUG   :     x24 0000007ffe25f220  x25 000000737e00c200  x26 0000000000000000  x27 0000000000000000
F DEBUG   :     x28 00000072fdb22fa0  x29 0000007ffe25f030
F DEBUG   :     lr  00000073852cb7b8  sp  0000007ffe25ef90  pc  00000073852cb7e4  pst 0000000000000000
F DEBUG   : 11 total frames
F DEBUG   : backtrace:
F DEBUG   :       #00 pc 00000000000927e4  /apex/com.android.runtime/lib64/bionic/libc.so (abort+164) (BuildId: bbbe5750122b349e49dac3085bb24953)
F DEBUG   :       #01 pc 00000000000a7b5c  /apex/com.android.runtime/lib64/bionic/libc.so (__stack_chk_fail+20) (BuildId: bbbe5750122b349e49dac3085bb24953)
F DEBUG   :       #02 pc 0000000000019124  /vendor/lib64/libfp_client.so (BpFingerPrintService::connect(android::sp<android::IFingerPrintClient> const&, int)+388) (BuildId: 3eadc9c3617ea1d96f75b815145b53e889b9d111)
F DEBUG   :       #03 pc 0000000000013aa8  /vendor/lib64/libfp_client.so (android::Fp::connect(int)+204) (BuildId: 3eadc9c3617ea1d96f75b815145b53e889b9d111)
F DEBUG   :       #04 pc 000000000000aff8  /vendor/lib64/hw/fingerprint.msm8998.so (goodix_sensor_init+368) (BuildId: cd1a431095b806c2d41101654467f3436e55960c)
F DEBUG   :       #05 pc 000000000000b244  /vendor/lib64/hw/fingerprint.msm8998.so (goodix_sensor_set_active_group+96) (BuildId: cd1a431095b806c2d41101654467f3436e55960c)
F DEBUG   :       #06 pc 0000000000007f24  /vendor/lib64/hw/fingerprint.msm8998.so (BuildId: cd1a431095b806c2d41101654467f3436e55960c)
F DEBUG   :       #07 pc 00000000000030e4  /vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service (android::hardware::biometrics::fingerprint::V2_1::implementation::BiometricsFingerprint::openHal()+144) (BuildId: a2041c9cf6813aee7ad784cec3edd176)
F DEBUG   :       #08 pc 0000000000003708  /vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service (android::hardware::biometrics::fingerprint::V2_1::implementation::BiometricsFingerprint::getInstance()+84) (BuildId: a2041c9cf6813aee7ad784cec3edd176)
F DEBUG   :       #09 pc 0000000000003d18  /vendor/bin/hw/android.hardware.biometrics.fingerprint@2.1-service (main+28) (BuildId: a2041c9cf6813aee7ad784cec3edd176)
F DEBUG   :       #10 pc 000000000008b3f8  /apex/com.android.runtime/lib64/bionic/libc.so (__libc_init+104) (BuildId: bbbe5750122b349e49dac3085bb24953)
```

Let's roll.

## Requirements 

* Python 3.10, pwnlib installed.

* Ghidra

* 2 brain cells

pwnlibs installation guide:

```
sudo apt-get update
sudo apt-get install python3 python3-pip python3-dev git libssl-dev libffi-dev build-essential
python3 -m pip install --upgrade pip
python3 -m pip install --upgrade pwntools
```

## Tutorial

## Section A.

* Open Ghidra.

* Create a new project and import all of the Goodix fingerprint libraries into that project.

* You have to analyze all of them. It's required.

* Export the library to C/C++ (Go to File -> Export Program...)

  Use these configuration:

  * Format: C/C++

  * Output File: Wherever you want to export the codes to. In my case, I'll extract to `exported` folder.

* After all blobs are exported into C format, you will get a file that ends in .c format.

* Run this for each file.

```
grep -B10 "Parcel aPStack" <path_to_exported_library>.c | grep "//" > <output_path>_f
```

This may returns line with `Warning` in, so remove every line contains that.

## Section B.

* Now you have to disassemble all libraries.

* First of all, let's install AARCH64 toolchain.

```
sudo apt-get install binutils-aarch64-linux-gnu
```

* Then disassemble every file using this command:

```
aarch64-linux-gnu-objdump -d <path_to_library>.so > <path_to_output_asm>.asm
```

## Section C.

* Replace config lines in `script.py` for each file.

```
asm_file = "<path_to_output_asm>.asm"
functions_file = "<output_path>_f"
output_file = "<path_to_library>.so"
```

* Run the script:

```
python script.py
```

This will overwrite `<path_to_library>`.

There might be something like `FAIL` or `FAIL1`, but just ignore it because it won't damage anything.

And that's it, now you got Goodix fingerprint blobs patched and ready to go!

## References:

https://github.com/h2o64/goodix-parcel-patcher

https://github.com/jabashque/proprietary_vendor_leeco/commit/652378f8839f2851a65334a0c659d7ba06fd29cc
