// FUN_00f757d8 @ 00f757d8

byte FUN_00f757d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_74;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  FUN_00f7c4c8();
  local_39 = 0;
  local_74 = 1;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = (uint)uVar2;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_74 & 1) == 0) {
    if (local_20 == 0) {
      local_11 = false;
      local_40 = 1;
    }
    else {
      local_48 = 0;
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactByName__0269d178,local_30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_48;
      FUN_00f7c6f0();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_48;
        FUN_00f7d040();
        if ((uVar2 & 1) == 0) {
          local_11 = false;
        }
        else {
          uVar2 = local_48;
          FUN_00f7d17c();
          puVar1 = PTR_s_isInContactList__0269efe0;
          if ((uVar2 & 1) == 0) {
            local_11 = false;
          }
          else {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0);
            if ((uVar2 & 1) == 0) {
              local_11 = local_48 != 0;
            }
            else {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,local_30);
              local_11 = (bool)((byte)uVar2 & 1);
            }
          }
        }
      }
      else {
        local_11 = false;
      }
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    local_11 = false;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

