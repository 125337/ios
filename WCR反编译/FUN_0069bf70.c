// FUN_0069bf70 @ 0069bf70

uint FUN_0069bf70(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_1c = 0;
  if (local_18 != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
    local_1c = 0;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78);
      local_1c = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

