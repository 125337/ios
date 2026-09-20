// groupRowForPath:items: @ 019d1654

/* Function Stack Size: 0x20 bytes */

ID WCRefineFontListViewController::groupRowForPath_items_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *local_160;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_deduplicatedFontItems__026bae30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_90 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_a0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_a0 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    local_90 = local_a0;
    local_58 = pcVar3;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_90;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b0 = local_40;
  }
  else {
    local_b0 = local_48;
  }
  FUN_019d1db0(local_b0,local_38);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_48;
  local_68 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  local_69 = (cfstringStruct *)0x1 < pcVar2;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_group,&cf_rowType);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,&cf_postScriptName);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_familyName);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_familyName);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_styleName);
  if (local_68 == (cfstringStruct *)0x0) {
    local_e8 = &cf__g_TTW_SO;
  }
  else {
    local_e8 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_e8,&cf_displayName);
  if (local_38 == (cfstringStruct *)0x0) {
    local_f8 = &::cf___;
  }
  else {
    local_f8 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,&cf_path);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_mtime);
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_108 = &::cf_0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_108,&cf_mtime);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_48 == (cfstringStruct *)0x0) {
    local_118 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  else {
    local_118 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,&cf_children);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_faceCount);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_69 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_expandable);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar5 = *(ulong *)((long)&local_28->field0_0x0 + (long)_expandedPaths);
  if (local_38 == (cfstringStruct *)0x0) {
    local_160 = &::cf___;
  }
  else {
    local_160 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8,local_160);
  bVar1 = 0;
  if (((uVar5 & 1) != 0) && (bVar1 = 0, (local_69 & 1) != 0)) {
    bVar1 = *(byte *)((long)&local_28->field0_0x0 + (long)_multiSelectMode) ^ 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInt__0269d810,bVar1 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_expanded);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar4;
}

