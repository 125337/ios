// FUN_0049edd0 @ 0049edd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0049edd0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_026e2154 + DAT_026e2158 ^ 0xffffffffU | 0x2eec926;
  uVar1 = uVar2 ^ 0x2e01b2e3;
  switch(0x4d845442 < (uVar1 + (uVar2 ^ 0x374d8919)) - (uVar1 & 0xe6b3c405)) {
  case false:
    uVar2 = (uint)(DAT_026e215c - DAT_026e2160) / 0x4b408902;
    uVar1 = uVar2 | 0xe30d2f48;
                    /* WARNING: Could not recover jumptable at 0x0049f8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f1338 +
                (long)(int)(uint)((~(uVar2 | 0xf79def49) |
                                  (~uVar1 & (uVar1 ^ 0xffffffff) | 0x49673db6) ^ 0xffffffff) !=
                                 0x92e0ba2a) * 8))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0049fab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e8130)();
    return;
  }
}

