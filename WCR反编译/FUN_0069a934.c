// FUN_0069a934 @ 0069a934

byte FUN_0069a934(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  byte local_29;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_21 = param_2;
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
    local_29 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionCount_026a0b70);
    local_38 = uVar1;
    for (local_40 = 0; local_40 < local_38; local_40 = local_40 + 1) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
      if ((((uVar1 & 1) == 0) ||
          (uVar1 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
          (uVar1 & 1) == 0)) ||
         (uVar1 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
         (uVar1 & 1) == 0)) {
        local_28 = 4;
      }
      else {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getCellCount_026a0b78);
        local_50 = uVar1;
        local_58 = uVar1;
        while (local_58 = local_58 - 1, -1 < (long)local_58) {
          uVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getCellAt__026a0b80,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar1;
          FUN_0069c608();
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar1;
          FUN_0069c980();
          if ((uVar1 & 1) == 0) {
            local_28 = 7;
          }
          else if (((local_21 & 1) == 0) || (uVar1 = local_60, FUN_0069c4b4(), (uVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeCellAt__026a0b88,local_58);
            local_29 = 1;
            local_28 = 0;
          }
          else {
            local_28 = 7;
          }
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_60,0);
        }
        local_28 = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
    local_11 = local_29 & 1;
  }
  local_28 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

