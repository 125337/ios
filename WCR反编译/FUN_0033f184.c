// FUN_0033f184 @ 0033f184

void FUN_0033f184(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_0033f294(local_18,local_28,0);
  if (param_4 != (code *)0x0) {
    (*param_4)(local_18,local_20,local_28);
  }
  if ((uVar1 & 1) != 0) {
    WCRefineHDMomentsResetFlow();
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

