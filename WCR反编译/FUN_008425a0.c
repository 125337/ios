// FUN_008425a0 @ 008425a0

void FUN_008425a0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  (*DAT_028cd380)(param_1,param_2,param_3 & 1);
  _objc_storeStrong(&DAT_026f4830,&cf_willAppear);
  uVar1 = _WCRPageBackgroundSceneMoments;
  _CFAbsoluteTimeGetCurrent();
  FUN_0081501c(param_1,&cf_moments_enter,uVar1,&cf___,&cf___,&cf___);
  FUN_00843730(param_1);
  return;
}

