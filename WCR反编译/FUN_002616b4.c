// FUN_002616b4 @ 002616b4

void FUN_002616b4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028c94c0)(param_1,param_2);
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_00266860(param_1,&cf_WXBase_onDomReady);
  }
  return;
}

