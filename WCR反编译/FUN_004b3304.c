// FUN_004b3304 @ 004b3304

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b3304(void)

{
  uint uVar1;
  
  uVar1 = (DAT_026e2b74 ^ DAT_026e2b78) + (DAT_026e2b74 & DAT_026e2b78) * 2 + 0x8e5324ef;
  switch((((uVar1 ^ 0xffffffff) & 0xd6b69644 | uVar1 & 0x294969bb) ^ 0xf4c4d23c | 0xca5ae597) !=
         0xc2eaeca9) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x004b45c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e9c10)();
    return;
  case true:
    uVar1 = (DAT_026e2b7c | DAT_026e2b80) * (DAT_026e2b7c & DAT_026e2b80) +
            ~(DAT_026e2b7c | DAT_026e2b80 ^ 0xffffffff) *
            (DAT_026e2b7c & (DAT_026e2b80 ^ 0xffffffff)) + 0xd2dcdf57;
    uVar1 = (uVar1 + (uVar1 ^ 0x9f7f745)) - (uVar1 & 0xf60808ba);
                    /* WARNING: Could not recover jumptable at 0x004b55b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f3078 +
                (long)(int)(uint)(((~uVar1 & (uVar1 ^ 0xffffffff) ^ 0xffffffff) & 0xf1e68d5d |
                                  (uVar1 | 0xf1e68d5d) ^ 0xffffffff) == 0x1dab37e5) * 8))();
    return;
  }
}

