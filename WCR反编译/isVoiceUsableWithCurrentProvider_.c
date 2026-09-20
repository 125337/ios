// isVoiceUsableWithCurrentProvider: @ 0158dd58

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneHelper::isVoiceUsableWithCurrentProvider_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_b0;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  undefined1 local_35;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalog);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = 0;
    local_51 = 0;
    bVar1 = true;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      bVar1 = false;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = pcVar4 != (cfstringStruct *)0x0;
      }
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_35 = bVar1;
    if (bVar1) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_69 = ((ulong)pcVar4 & 1) == 0;
      if (local_69) {
        local_b0 = &::cf___;
      }
      else {
        local_b0 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b0;
      }
      local_69 = !local_69;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b0;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcr_catalogProviderUsable__026b09f0,local_60);
      local_11 = (byte)IVar5 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

