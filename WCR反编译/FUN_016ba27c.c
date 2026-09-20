// FUN_016ba27c @ 016ba27c

byte FUN_016ba27c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  int local_40;
  cfstringStruct *local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = &cf_VoiceMessageCellView;
  _NSClassFromString();
  local_30 = pcVar2;
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     (uVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2),
     (uVar3 & 1) != 0)) {
    local_11 = 1;
    local_40 = 1;
    goto LAB_016ba564;
  }
  local_48 = 0;
  if ((local_28 != 0) &&
     (uVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
     (uVar3 & 1) != 0)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  iVar1 = 0;
  if (local_48 == 0) {
LAB_016ba4f0:
    local_40 = 0;
  }
  else {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_IsVoiceMsg_0269f100);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_IsVoiceMsg_0269f100),
       (uVar3 & 1) == 0)) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
      iVar1 = (int)uVar3;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_uiMessageType_0269d0a8);
        iVar1 = (int)uVar3 + -0x22;
        if (iVar1 == 0) {
          iVar1 = 1;
          local_11 = 1;
          local_40 = 1;
          goto LAB_016ba4f8;
        }
      }
      goto LAB_016ba4f0;
    }
    iVar1 = 1;
    local_11 = 1;
    local_40 = 1;
  }
LAB_016ba4f8:
  _objc_storeStrong(iVar1,&local_48,0);
  if (local_40 == 0) {
    local_11 = 0;
    local_40 = 1;
  }
LAB_016ba564:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

