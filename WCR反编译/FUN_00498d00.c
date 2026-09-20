// FUN_00498d00 @ 00498d00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00498d00(void)

{
  uint uVar1;
  
  uVar1 = DAT_026e1f04 | DAT_026e1f08;
  uVar1 = (uVar1 & 0xbc7df945 | ~((~uVar1 | uVar1 ^ 0xffffffff) & 0x438206ba) ^ 0xffffffff) /
          0x66d0e077;
  switch((uVar1 ^ 0x976cd476) + (uVar1 & 0x976cd476) * 2 == 0x1a0145e9) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00499c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f0b88 +
                (long)(int)(uint)(0xbbb6b530 <
                                 -(-0x76329bd9 -
                                  (((DAT_026e1f0c | DAT_026e1f10) * (DAT_026e1f0c & DAT_026e1f10) +
                                   ~(DAT_026e1f0c | DAT_026e1f10 ^ 0xffffffff) *
                                   (DAT_026e1f0c & (DAT_026e1f10 ^ 0xffffffff))) - 0xdf4657 |
                                  0x32823d9))) * 8))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00499380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e7a40)();
    return;
  }
}

