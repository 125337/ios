// FUN_008b50d8 @ 008b50d8

byte FUN_008b50d8(undefined8 param_1)

{
  ulong uVar1;
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
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
      if ((int)uVar1 == 0x22) {
        local_11 = 1;
        goto LAB_008b5244;
      }
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsVoiceMsg_0269f100);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsVoiceMsg_0269f100);
      local_11 = (byte)uVar1 & 1;
    }
  }
LAB_008b5244:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

