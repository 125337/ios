// FUN_00841770 @ 00841770

void FUN_00841770(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028cd2e8)(param_1,param_2);
  uVar1 = param_1;
  FUN_00810910();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    FUN_0082e450();
    if ((uVar1 & 1) != 0) {
      _objc_storeStrong(&DAT_026f4830,&cf_didLayout);
      FUN_008437a4(param_1);
    }
  }
  return;
}

