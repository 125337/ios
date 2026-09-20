// inviterWxidForUser:inRoom: @ 00ed2b14

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::inviterWxidForUser_inRoom_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_trimmedString__0269ec98,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_38),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_44 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_contactForName__026ab630,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_m_ChatRoomData;
    local_50 = pcVar2;
    _NSSelectorFromString();
    local_58 = pcVar1;
    if ((local_50 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar1),
       ((ulong)pcVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_44 = 1;
    }
    else {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_getInviterNameForUsername_;
      local_60 = pcVar2;
      _NSSelectorFromString();
      if ((local_60 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar1),
         pcVar2 = local_20, ((ulong)pcVar3 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
      }
      else {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar1,local_40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_trimmedString__0269ec98);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_44 = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

