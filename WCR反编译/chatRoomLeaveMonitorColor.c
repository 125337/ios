// chatRoomLeaveMonitorColor @ 020893a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatRoomLeaveMonitorColor(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = (cfstringStruct *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  pcVar3 = local_38;
  if (local_38 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    while( true ) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
      if (((ulong)pcVar3 & 1) == 0) break;
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_66CD00);
    pcVar3 = local_30;
    local_18 = local_38;
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      SVar1 = local_28;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setObject_forKey__026ca9e8);
      (*(code *)PTR__objc_release_02578630)(SVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_retain_02578638)(&::cf___);
      local_18 = &::cf___;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

