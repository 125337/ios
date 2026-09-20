// FUN_0069a66c @ 0069a66c

byte FUN_0069a66c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_25;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) ||
      (uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70),
      (uVar1 & 1) == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    local_25 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionCount_026a0b70);
    local_30 = uVar1;
    for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
      if ((((uVar1 & 1) == 0) ||
          (uVar1 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
          (uVar1 & 1) == 0)) ||
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
         (uVar1 & 1) == 0)) {
        local_24 = 4;
      }
      else {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCellCount_026a0b78);
        local_48 = uVar1;
        local_50 = uVar1;
        while (local_50 = local_50 - 1, -1 < (long)local_50) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCellAt__026a0b80,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar1;
          FUN_0069c4b4();
          if ((uVar1 & 1) == 0) {
            local_24 = 7;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeCellAt__026a0b88,local_50);
            local_25 = 1;
            local_24 = 0;
          }
          _objc_storeStrong(&local_58,0);
        }
        local_24 = 0;
      }
      _objc_storeStrong(&local_40,0);
    }
    local_11 = local_25 & 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

