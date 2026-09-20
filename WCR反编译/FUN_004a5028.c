// FUN_004a5028 @ 004a5028

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004a5028(void)

{
  uint uVar1;
  
  uVar1 = (DAT_026e24e4 | DAT_026e24e8) & (DAT_026e24e4 ^ DAT_026e24e8 ^ 0xffffffff);
  switch(((uVar1 | 0xbafc0ee9) * (uVar1 & 0xbafc0ee9) + ~(uVar1 | 0x4503f116) * (uVar1 & 0x4503f116)
         ) / 0xdad56aff == 0x2eae5f8) {
  case false:
    uVar1 = DAT_026e24ec * DAT_026e24f0;
                    /* WARNING: Could not recover jumptable at 0x004a72b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f1b38 +
                (long)(int)(uint)(((uVar1 | 0x60384ce3) * (uVar1 & 0x60384ce3) +
                                   (uVar1 & 0x9fc7b31c) * ((uVar1 ^ 0xffffffff) & 0x60384ce3) +
                                  -0x48058a0) * -0x447b64fb < 0x93f35cda) * 8))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x004a5b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e8930)();
    return;
  }
}

