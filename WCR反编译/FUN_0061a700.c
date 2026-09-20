// FUN_0061a700 @ 0061a700

byte FUN_0061a700(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_a0;
  ulong local_50;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_insertSection_At_;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_50 = 0;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
      if ((uVar2 & 1) != 0) {
        local_50 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionCount_026a0b70);
      }
      if ((long)local_50 < 1) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_50;
      }
      uVar2 = local_20;
      FUN_0061d240(local_20,local_a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1,local_28,uVar2);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

