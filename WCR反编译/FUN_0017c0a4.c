// FUN_0017c0a4 @ 0017c0a4

undefined4 FUN_0017c0a4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (param_2 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar1 & 1) == 0)) {
    local_14 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    local_14 = (undefined4)uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

