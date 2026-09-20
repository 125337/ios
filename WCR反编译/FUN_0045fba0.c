// FUN_0045fba0 @ 0045fba0

undefined8 FUN_0045fba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_80;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_3;
  _objc_storeStrong(&local_30,param_4);
  if (local_20 != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
      local_18 = param_1;
      goto LAB_0045fcc8;
    }
  }
  if (local_30 == 0) {
    local_80 = 0;
  }
  else {
    (**(code **)(local_30 + 0x10))();
    local_80 = param_1;
  }
  local_18 = local_80;
LAB_0045fcc8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

