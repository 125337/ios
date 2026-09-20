// FUN_000c0c24 @ 000c0c24

void FUN_000c0c24(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000c151c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8140)(param_1,param_2,param_3);
  }
  else {
    (*DAT_028c8140)(param_1,param_2,0);
  }
  return;
}

