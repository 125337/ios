// FUN_004a203c @ 004a203c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004a203c(void)

{
  uint uVar1;
  
  uVar1 = (DAT_026e2334 ^ DAT_026e2338) + 0x52e5ee85;
  switch(((uVar1 ^ 0x247f9632) & 0x5051bb11 | uVar1 ^ 0x742e2d23) < 0x59c50e6d) {
  case false:
    uVar1 = ((DAT_026e233c | DAT_026e2340) * (DAT_026e233c & DAT_026e2340) +
            ~(DAT_026e233c | DAT_026e2340 ^ 0xffffffff) *
            (DAT_026e233c & (DAT_026e2340 ^ 0xffffffff))) * -0x77486e6b;
                    /* WARNING: Could not recover jumptable at 0x004a31f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_026f1788 +
                (long)(int)(uint)((uVar1 | 0xfbf57e3f) * ((uVar1 | 0x71b05619) & 0x9ae57c26) +
                                  ~(uVar1 | 0x75bad7d9) * ((uVar1 | 0x71b05619) & 0x651a83d9) <
                                 0xdb8c1ab0) * 8))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x004a485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_026e8580)();
    return;
  }
}

