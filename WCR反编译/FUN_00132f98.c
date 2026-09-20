// FUN_00132f98 @ 00132f98

byte FUN_00132f98(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_48;
  ulong local_40;
  int local_38;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_VoiceMessageCellView;
  _NSClassFromString();
  local_28 = pcVar1;
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) != 0)) {
    local_11 = 1;
    local_38 = 1;
    goto LAB_00133298;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  local_40 = uVar2;
  if ((uVar2 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
     (uVar2 & 1) != 0)) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  iVar4 = 0;
  if (local_48 == 0) {
LAB_00133214:
    local_38 = 0;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_IsVoiceMsg_0269f100);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_IsVoiceMsg_0269f100),
       (uVar2 & 1) == 0)) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_uiMessageType_0269d0a8);
      iVar4 = (int)uVar2 + -0x22;
      if (iVar4 != 0) goto LAB_00133214;
      iVar4 = 1;
      local_11 = 1;
      local_38 = 1;
    }
    else {
      iVar4 = 1;
      local_11 = 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_48);
  _objc_storeStrong(&local_40,0);
  if (local_38 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
LAB_00133298:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

