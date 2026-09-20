// FUN_00066250 @ 00066250

void FUN_00066250(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong local_80;
  ulong local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_30 == 0)) {
    local_40 = 1;
  }
  else {
    if (local_18 == 0) {
      local_80 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_80 = local_18;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_mutableCopy_0269d8a0);
    local_48 = local_80;
    if ((local_19 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObject__0269d678,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsObject__0269cbb8,local_28);
      if ((local_80 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_28);
      }
    }
    (**(code **)(local_30 + 0x10))(local_30,local_48);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

