// FUN_004df680 @ 004df680

void FUN_004df680(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_004ea4a8(param_1,&cf_onTouchDownRepeat);
  if ((uVar1 & 1) == 0) {
    (*DAT_028cad88)(param_1,param_2);
  }
  return;
}

