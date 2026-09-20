// FUN_003417a8 @ 003417a8

void FUN_003417a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  FUN_0033f294(local_18,local_28,local_30);
  if (((((uVar1 & 1) == 0) && ((DAT_028c9ee1 & 1) == 0)) && ((DAT_028c9ee0 & 1) == 0)) &&
     (uVar2 = local_28, FUN_0033f024(), (uVar2 & 1) == 0)) {
    FUN_0033f024();
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(local_18,local_20,local_28,local_30);
  }
  if ((uVar1 & 1) != 0) {
    WCRefineHDMomentsResetFlow();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

