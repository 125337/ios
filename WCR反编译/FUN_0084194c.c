// FUN_0084194c @ 0084194c

void FUN_0084194c(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028cd308)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  FUN_00843e24();
  if ((uVar1 & 1) == 0) {
    _objc_storeStrong(&DAT_026f4830,&cf_didAppear);
    FUN_008437a4(param_1);
    FUN_00815824(param_1,1);
  }
  return;
}

