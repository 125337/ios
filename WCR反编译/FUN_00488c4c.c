// FUN_00488c4c @ 00488c4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00488c4c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ~(DAT_026e1af4 - DAT_026e1af8 & 0xd4ec5facU) &
          (DAT_026e1af4 - DAT_026e1af8 & 0xd4ec5facU ^ 0xffffffff);
  uVar2 = uVar1 ^ 0x167b6453;
  switch((uVar2 | 0xca2d5a90) * (uVar2 & 0xca2d5a90) +
         (uVar2 & 0x35d2a56f) * ((uVar1 ^ 0xe9849bac) & 0xca2d5a90) != 0x4302ae54) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0048a448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e63b0)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0048ba84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026eefe0)();
    return;
  }
}

