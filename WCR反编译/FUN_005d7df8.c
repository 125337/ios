// FUN_005d7df8 @ 005d7df8

undefined8 FUN_005d7df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  pcVar1 = DAT_028cb7a0;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar2,local_20,local_28,local_30);
  local_38 = uVar2;
  _WCRMomentsTailResetPostSession();
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

