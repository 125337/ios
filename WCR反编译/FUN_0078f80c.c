// FUN_0078f80c @ 0078f80c

byte FUN_0078f80c(undefined8 param_1)

{
  ulong uVar1;
  byte local_5c;
  ulong local_40;
  undefined1 local_35;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatroom_0269e248);
      local_35 = (undefined1)uVar1;
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        local_24 = 1;
        goto LAB_0078f9c4;
      }
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    local_5c = 0;
    if (uVar1 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_5c = (byte)uVar1;
    }
    local_11 = local_5c & 1;
    local_24 = 1;
    _objc_storeStrong(&local_40,0);
  }
LAB_0078f9c4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

