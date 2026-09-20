// FUN_008418e8 @ 008418e8

void FUN_008418e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028cd300)(param_1,param_2);
  uVar1 = param_1;
  FUN_00843e24();
  if ((uVar1 & 1) == 0) {
    _objc_storeStrong(&DAT_026f4830,&cf_didLayout);
    FUN_008437a4(param_1);
  }
  return;
}

