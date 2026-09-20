// handleAirDropThemeStockSave @ 01743200

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::handleAirDropThemeStockSave(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  dispatch_time_t dVar5;
  cfstringStruct *local_160;
  cfstringStruct *local_130;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_7c;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3fa3);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_28;
  local_38 = (cfstringStruct *)param_1;
  _objc_getAssociatedObject(local_28,&DAT_028e3fa4);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_40 = pcVar1;
  _objc_getAssociatedObject(local_28,&DAT_028e3fa1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &::cf___;
  if (local_38 != (cfstringStruct *)0x0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      _objc_storeStrong(&local_58,&::cf___);
    }
    pcVar1 = local_58;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = &::cf___;
  if (local_40 != (cfstringStruct *)0x0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      _objc_storeStrong(&local_68,&::cf___);
    }
    pcVar1 = local_68;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_60;
    local_60 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_68,0);
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_130 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_130 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_130;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingThemeIndex_026b3fd0);
  local_78 = pcVar1;
  if ((long)pcVar1 < 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissAirDropSheetAnimated__026b3fc8,1);
    local_7c = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_91 = 0;
    local_160 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_160 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_160;
    }
    local_91 = pcVar4 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_mutableCopy_0269d8a0);
    local_88 = local_160;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_78;
    pcVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
    if (pcVar1 < pcVar2) {
      pcVar1 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_name);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,&cf_codes);
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_removeObjectForKey__0269d700,&cf_linkedMsgRepoCode);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,
                   &cf_linkedMsgRepoCode);
      }
      pcVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_valid);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar1 == (cfstringStruct *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_valid);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar1 = local_a0;
      FUN_01743c20(local_a0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_provider);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar1,local_78);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_resignFirstResponder_0269ea18);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_resignFirstResponder_0269ea18);
      _objc_initWeak(auStack_a8,local_28);
      dVar5 = _dispatch_time(0,280000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_01743d6c;
      local_b8 = &DAT_0257be28;
      _objc_copyWeak(auStack_b0,auStack_a8);
      _dispatch_after(dVar5,puVar3,&local_d0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
      _objc_storeStrong(&local_a0,0);
      local_7c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissAirDropSheetAnimated__026b3fc8,1);
      local_7c = 1;
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

