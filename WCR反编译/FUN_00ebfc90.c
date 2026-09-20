// FUN_00ebfc90 @ 00ebfc90

undefined8 FUN_00ebfc90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_indexOfObjectPassingTest__026a27f8);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

