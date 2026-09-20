// sessionIDFromWrap:sessionHint: @ 00ed2024

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::sessionIDFromWrap_sessionHint_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_38);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,pcVar1);
  pcVar1 = local_40;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_stringValue_key__026ab628,local_30,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_20;
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_stringValue_key__026ab628,local_30,&cf_m_nsToUsr);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_20;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_50);
    pcVar1 = local_50;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_58);
      pcVar1 = local_58;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

