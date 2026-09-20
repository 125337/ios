// FUN_003e311c @ 003e311c

undefined4 FUN_003e311c(undefined4 param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (DAT_028ca428 == (code *)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    uVar1 = param_2;
    FUN_003e32c8();
    if ((uVar1 & 1) == 0) {
      local_14 = param_1;
      (*DAT_028ca428)(param_1,param_2);
    }
    else {
      FUN_003e3274(0x4014000000000000);
      local_14 = 0;
    }
  }
  return local_14;
}

