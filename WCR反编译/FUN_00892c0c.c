// FUN_00892c0c @ 00892c0c

void FUN_00892c0c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd968)(param_1,param_2,param_3);
  }
  return;
}

