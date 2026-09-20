// FUN_008941b8 @ 008941b8

void FUN_008941b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cda88)(param_1,param_2);
  }
  return;
}

