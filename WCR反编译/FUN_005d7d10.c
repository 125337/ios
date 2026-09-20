// FUN_005d7d10 @ 005d7d10

undefined8 FUN_005d7d10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = DAT_028cb798;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(param_1,local_20);
  local_28 = param_1;
  _WCRMomentsTailResetPostSession();
  uVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

