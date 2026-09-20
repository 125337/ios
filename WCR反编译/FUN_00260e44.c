// FUN_00260e44 @ 00260e44

void FUN_00260e44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028c9490)(param_1,param_2);
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_002644f0(param_1,&cf_after_enableLongPressDetect);
  }
  return;
}

