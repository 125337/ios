// FUN_0049ce38 @ 0049ce38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0049ce38(void)

{
  uint uVar1;
  
  uVar1 = (DAT_026e2088 | ~DAT_026e2084 ^ 0xffffffff) + 0xe66b126d;
  uVar1 = (~uVar1 | uVar1 ^ 0xffffffff) ^ 0xffffffff;
  switch(((uVar1 | 0x1cadff6f) & (~(uVar1 | 0x1cadff6f) ^ 0xffffffff)) != 0x90543802) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0049dcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e7f60)();
    return;
  case true:
    uVar1 = (DAT_026e208c & DAT_026e2090) + (DAT_026e208c | DAT_026e2090);
                    /* WARNING: Could not recover jumptable at 0x0049d758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f1168 +
                (long)(int)(uint)((((uVar1 ^ 0x3abaf6c3) & uVar1 ^ 0xffffffff) & 0x504c5777 ^
                                   0xffffffff | 0x9bd3b94c) == 0xbedfb141) * 8))();
    return;
  }
}

