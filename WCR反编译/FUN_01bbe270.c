// FUN_01bbe270 @ 01bbe270

void FUN_01bbe270(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_updateRuleWithBlock__026c0568);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

