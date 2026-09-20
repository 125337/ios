// FUN_00808f58 @ 00808f58

void FUN_00808f58(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_028ccfb0;
  if ((DAT_028ccfb0 & 1) != 0) {
    uVar1 = (uint)DAT_028ccfb1;
    FUN_0080949c();
    uVar1 = (uVar1 & 1) - param_1;
    if (uVar1 == 0) {
      return;
    }
  }
  FUN_0080956c(uVar1);
  return;
}

