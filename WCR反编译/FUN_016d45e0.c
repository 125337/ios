// FUN_016d45e0 @ 016d45e0

void FUN_016d45e0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_110;
  cfstringStruct *local_68;
  undefined *local_60 [2];
  int local_4c;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_016ae6d4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if ((local_30 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    local_28 = (undefined *)0x0;
    local_48 = 1;
  }
  else {
    local_4c = 0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (int)pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_4c == 0) {
      local_28 = (undefined *)0x0;
      local_48 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,&cf_type);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_valid);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,&cf_filehelper,
                 &cf_sessionUserName);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_4c)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_localId);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_numberWithInt__0269d810,(ulong)pcVar1 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_msgType);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_110 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_110,&cf_content);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_voice);
      if ((((ulong)pcVar1 & 1) != 0) &&
         (pcVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getVoicePath_026a4578);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_68 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((((ulong)pcVar1 & 1) != 0) &&
           (pcVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0)
           , pcVar1 != (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf_voicePath)
          ;
        }
        _objc_storeStrong(&local_68,0);
      }
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_uiCreateTime)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                 (ulong)pcVar2 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_createTime);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_copy_0269d150);
      local_48 = 1;
      local_28 = puVar3;
      _objc_storeStrong(local_60,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

