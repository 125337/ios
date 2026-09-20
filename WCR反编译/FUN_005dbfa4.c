// FUN_005dbfa4 @ 005dbfa4

void FUN_005dbfa4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong local_58;
  byte local_49;
  ulong local_48;
  long local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  ulong uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*DAT_028cb7f0)(local_18,local_20,local_28);
  uVar1 = (uint)uVar2;
  FUN_005dc250();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else if ((local_28 == 0) ||
          (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
          uVar2 == 0)) {
    local_38 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_005dc2ec();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_uiMessageType_0269d0a8);
      local_40 = (long)(int)uVar2;
      uVar2 = local_18;
      FUN_005dc4a4();
      local_49 = local_40 == 0x4c || uVar2 == 0x4c;
      local_48 = uVar2;
      if (local_40 != 0x4c && uVar2 != 0x4c) {
        uVar2 = local_28;
        FUN_005dc58c();
        local_49 = (byte)uVar2;
      }
      if ((local_49 & 1) == 0) {
        local_38 = 1;
      }
      else {
        uVar2 = local_18;
        FUN_005dc608();
        if ((uVar2 & 1) == 0) {
          local_38 = 1;
        }
        else {
          uVar2 = local_28;
          FUN_005dca80();
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar2;
          if ((uVar2 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_28),
             (uVar2 & 1) == 0)) {
            (*DAT_028cb7f0)(local_18,local_20,local_58);
          }
          _objc_storeStrong(&local_58,0);
          local_38 = 0;
        }
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

