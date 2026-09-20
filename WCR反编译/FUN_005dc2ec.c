// FUN_005dc2ec @ 005dc2ec

byte FUN_005dc2ec(undefined8 param_1)

{
  ulong uVar1;
  byte local_50;
  uint local_44;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileMsg_0269da48);
    if ((uVar1 & 1) == 0) {
      local_44 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsFileMsg_0269da48);
      local_44 = (uint)uVar1;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileUploadingMsg_0269daa8);
    if ((uVar1 & 1) == 0) {
      local_50 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsFileUploadingMsg_0269daa8);
      local_50 = (byte)uVar1;
    }
    local_11 = 1;
    if ((local_44 & 1) == 0) {
      local_11 = local_50 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

