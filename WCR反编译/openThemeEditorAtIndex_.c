// openThemeEditorAtIndex: @ 0173c8ec

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropViewController::openThemeEditorAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = (cfstringStruct *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  if (((long)local_28 < 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     pcVar3 <= pcVar2)) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingThemeIndex__026b3db8,local_28);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_51 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_69 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_b8 = &::cf___;
    }
    else {
      local_b8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_b8;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_b8;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &::cf___;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_linkedMsgRepoCode);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      _objc_storeStrong(&local_78,local_80);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentThemeStockPluginStyleShee_026b3f18,&cf___N_X_,local_48,local_78
               ,local_60);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

