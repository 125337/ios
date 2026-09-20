// FUN_005530b4 @ 005530b4

byte FUN_005530b4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_11 = false;
    local_30 = 1;
  }
  else {
    FUN_0054c4ec();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      local_11 = false;
      local_30 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isInContactList__0269efe0,local_20),
         (uVar1 & 1) == 0)) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        if (uVar1 == 0) {
          local_11 = false;
        }
        else {
          FUN_0054f8e4(uVar1,&cf_m_uiFriendScene,0);
          local_11 = uVar1 != 0;
        }
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_11 = true;
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

