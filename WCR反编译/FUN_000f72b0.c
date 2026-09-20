// FUN_000f72b0 @ 000f72b0

void FUN_000f72b0(ulong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  ulong uVar1;
  
  if ((param_4 & 1) == 0) {
    uVar1 = param_1;
    FUN_000ffa84();
    if ((uVar1 & 1) == 0) {
      (*DAT_028c83d8)(param_1,param_2,param_3 & 1,param_4 & 1);
    }
  }
  else {
    (*DAT_028c83d8)(param_1,param_2,param_3 & 1,param_4 & 1);
  }
  return;
}

