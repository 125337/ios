// senderIDFromWrap:roomId: @ 00ed2254

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::senderIDFromWrap_roomId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  cfstringStruct *local_40;
  long local_38;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_stringValue_key__026ab628,local_30,&cf_m_nsRealChatUsr);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_40),
     pcVar1 = local_40, ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
    goto LAB_00ed25fc;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_stringValue_key__026ab628,local_30,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_50),
     pcVar1 = local_50, ((ulong)pcVar2 & 1) != 0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_stringValue_key__026ab628,local_30,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_rangeOfString__0269d838;
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_rangeOfString__0269d838,&cf__);
    local_68 = pcVar1;
    local_60 = puVar4;
    if ((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) ||
       ((pcVar1 == (cfstringStruct *)0x0 || ((cfstringStruct *)0x50 < pcVar1)))) {
LAB_00ed2540:
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_50);
      if ((((ulong)pcVar1 & 1) == 0) ||
         (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
         lVar3 == 0)) {
        pcVar1 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
        local_44 = 1;
      }
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringToIndex__0269d6c0,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((pcVar1 = local_70,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_containsString__0269d0b0,&::cf_space_s_),
          ((ulong)pcVar1 & 1) != 0 ||
          (pcVar2 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_70),
          pcVar1 = local_70, ((ulong)pcVar2 & 1) != 0)))) {
        local_44 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_44 = 1;
      }
      _objc_storeStrong(&local_70,0);
      if (local_44 == 0) goto LAB_00ed2540;
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_00ed25fc:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

