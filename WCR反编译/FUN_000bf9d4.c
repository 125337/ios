// FUN_000bf9d4 @ 000bf9d4

void FUN_000bf9d4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000bfbf8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c80e0)(param_1,param_2,param_3);
  }
  else {
    (*DAT_028c80e0)(param_1,param_2,0);
  }
  return;
}

