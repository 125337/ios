// FUN_000f7348 @ 000f7348

void FUN_000f7348(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000ffa84();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c83e0)(param_1,param_2,param_3 & 1);
  }
  return;
}

