// FUN_006b2384 @ 006b2384

byte FUN_006b2384(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_48;
  int local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    pcVar1 = &cf_CMessageWrap;
    _NSClassFromString();
    local_30 = pcVar1;
    if (((pcVar1 == (cfstringStruct *)0x0) ||
        ((*(code *)PTR__objc_msgSend_02578628)
                   (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
        ((ulong)pcVar1 & 1) == 0)) ||
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSenderFromMsgWrap__0269d558,local_20),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = &cf_SendPatMgr;
      _NSClassFromString();
      local_38 = pcVar1;
      if (((pcVar1 == (cfstringStruct *)0x0) ||
          ((*(code *)PTR__objc_msgSend_02578628)
                     (pcVar1,PTR_s_respondsToSelector__026ca818,
                      PTR_s_isMessageWrapPatMessage__026a6820), ((ulong)pcVar1 & 1) == 0)) ||
         (pcVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_isMessageWrapPatMessage__026a6820,local_20),
         ((ulong)pcVar1 & 1) == 0)) {
        local_3c = 0;
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_unsignedIntValue_0269db10);
          local_3c = (int)uVar2;
        }
        _objc_storeStrong(&local_48,0);
        local_11 = true;
        if ((local_3c != 10000) && (local_11 = true, local_3c != 0x2711)) {
          local_11 = local_3c == 0x2712;
        }
      }
      else {
        local_11 = true;
      }
    }
    else {
      local_11 = true;
    }
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

