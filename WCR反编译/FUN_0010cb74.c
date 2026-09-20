// FUN_0010cb74 @ 0010cb74

void FUN_0010cb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_130;
  cfstringStruct *local_110;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  cfstringStruct *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_38;
  local_48 = (cfstringStruct *)0x0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar3 = local_38;
  if (((ulong)pcVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_hasPrefix__0269d320,&cf_WCRefineLeaveColor___);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_hasPrefix__0269d320,&cf_WCRefineLeaveUser___);
    pcVar2 = local_48;
    if (((ulong)pcVar3 & 1) == 0) {
      if (DAT_028c85a0 != (code *)0x0) {
        (*DAT_028c85a0)(local_28,local_30,local_38,local_40);
      }
      local_58 = 0;
    }
    else {
      pcVar3 = &cf_WCRefineLeaveUser___;
      (*(code *)PTR__objc_msgSend_02578628)(&cf_WCRefineLeaveUser___,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00128f60();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_user);
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_110 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_110;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_130 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_130;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        FUN_001294c4(pcVar2,local_28,local_68,local_70);
      }
      local_58 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
  }
  else {
    local_58 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

