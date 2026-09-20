// FUN_01ad9e98 @ 01ad9e98

byte FUN_01ad9e98(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint local_54;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = false;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    local_54 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__im_chatroom);
      local_54 = (uint)uVar1;
    }
    local_11 = (bool)((byte)local_54 & 1);
    if (local_28 == 1) {
      local_11 = (bool)(local_11 ^ 1);
    }
    else if (local_28 != 2) {
      if ((((uint)local_28 >> 1 & 1) == 0) || ((local_54 & 1) == 0)) {
        if (((local_28 & 1) == 0) || ((local_54 & 1) != 0)) {
          local_11 = local_28 == 0x1f;
        }
        else {
          local_11 = true;
        }
      }
      else {
        local_11 = true;
      }
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

