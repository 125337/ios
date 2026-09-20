// setSessionStatsCustomTitle:forPageID:mode: @ 021347d0

/* Function Stack Size: 0x28 bytes */

void WCRefineConfig::setSessionStatsCustomTitle_forPageID_mode_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *local_f0;
  cfstringStruct *local_c0;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  bool local_71;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  long_long local_48;
  ulong local_40;
  cfstringStruct *local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar4 = local_38, uVar3 == 0)) {
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_c0 = local_38;
    local_61 = 0;
    local_71 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_c0 = &::cf___;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c0;
    }
    local_71 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c0;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld___);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_28;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sessionStatsCardTitles_026ca418);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_90 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f0;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_removeObjectForKey__0269d700,local_80);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,local_80);
    }
    if ((local_48 == 0) || (local_48 == 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_removeObjectForKey__0269d700,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setSessionStatsCardTitles__026ca420,local_88);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

