// FUN_020bdd94 @ 020bdd94

void FUN_020bdd94(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_450;
  undefined *local_448;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3b8;
  undefined *local_3b0;
  ulong local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  ulong local_300;
  ulong local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  ulong local_2b0;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  ulong local_258;
  ulong local_250;
  ulong local_248;
  undefined *local_240;
  ulong local_238;
  undefined4 local_22c;
  ulong local_228;
  undefined *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  undefined1 auStack_1e8 [128];
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_228 = 0;
  _objc_storeStrong(&local_228,param_1);
  uVar1 = local_228;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_228;
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_22c = 1;
    local_220 = puVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_238 = uVar4;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_238;
    local_240 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_configured);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_248 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_248;
      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,uVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_configured);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatPageEnabled);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_250 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,local_250,&cf_chatPageEnabled
                );
    }
    uVar1 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListEnabled);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_258 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,local_258,&cf_chatListEnabled
                );
    }
    _memset(auStack_2a0,0,0x40);
    local_c8 = &cf_chatPagePath;
    local_c0 = &cf_chatPageNightPath;
    local_b8 = &cf_chatListPath;
    local_b0 = &cf_chatListNightPath;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3b0 != (undefined *)0x0) {
      lVar5 = *local_290;
      local_3b8 = (undefined *)0x0;
      do {
        do {
          if (*local_290 - lVar5 != 0) {
            _objc_enumerationMutation(*local_290 - lVar5,puVar2);
          }
          local_260 = *(undefined8 *)(local_298 + (long)local_3b8 * 8);
          uVar1 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_objectForKeyedSubscript__0269d098,local_260);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_2a8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,local_2a8,local_260);
          }
          _objc_storeStrong(&local_2a8,0);
          local_3b8 = local_3b8 + 1;
        } while (local_3b8 < local_3b0);
        local_3b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,
                   0x10);
        local_3b8 = (undefined *)0x0;
      } while (local_3b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_2f0,0,0x40);
    local_168 = &cf_chatPageRandomMode;
    local_160 = &cf_chatPageAddMode;
    local_158 = &cf_chatListRandomMode;
    local_150 = &cf_chatListAddMode;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_168,
               4);
    _objc_retainAutoreleasedReturnValue();
    local_3f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_3f8 != (undefined *)0x0) {
      lVar5 = *local_2e0;
      local_400 = (undefined *)0x0;
      do {
        do {
          if (*local_2e0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_2e0 - lVar5,puVar2);
          }
          local_2b0 = *(ulong *)(local_2e8 + (long)local_400 * 8);
          uVar1 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_objectForKeyedSubscript__0269d098,local_2b0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_2f8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_2f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_integerValue_026ca750);
            uVar4 = local_2b0;
            local_300 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2b0,PTR_s_containsString__0269d0b0,&cf_RandomMode);
            if ((uVar4 & 1) == 0) {
              if (((long)local_300 < 0) || (1 < (long)local_300)) {
                local_300 = 0;
              }
            }
            else if (((long)local_300 < 0) || (2 < (long)local_300)) {
              local_300 = 0;
            }
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_300);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_2b0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          _objc_storeStrong(&local_2f8,0);
          local_400 = local_400 + 1;
        } while (local_400 < local_3f8);
        local_3f8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_148,
                   0x10);
        local_400 = (undefined *)0x0;
      } while (local_3f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_348,0,0x40);
    local_218 = &cf_chatPageOffsetX;
    local_210 = &cf_chatPageOffsetY;
    local_208 = &cf_chatPageScale;
    local_200 = &cf_chatListOffsetX;
    local_1f8 = &cf_chatListOffsetY;
    local_1f0 = &cf_chatListScale;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_218,
               6);
    _objc_retainAutoreleasedReturnValue();
    local_448 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_448 != (undefined *)0x0) {
      lVar5 = *local_338;
      local_450 = (undefined *)0x0;
      do {
        do {
          if (*local_338 - lVar5 != 0) {
            _objc_enumerationMutation(*local_338 - lVar5,puVar2);
          }
          local_308 = *(undefined8 *)(local_340 + (long)local_450 * 8);
          uVar1 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_238,PTR_s_objectForKeyedSubscript__0269d098,local_308);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_350 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_doubleValue_026ca608);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_240,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_308);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          _objc_storeStrong(&local_350,0);
          local_450 = local_450 + 1;
        } while (local_450 < local_448);
        local_448 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_1e8,
                   0x10);
        local_450 = (undefined *)0x0;
      } while (local_448 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_copy_0269d150);
    local_22c = 1;
    local_220 = puVar2;
    _objc_storeStrong(&local_258);
    _objc_storeStrong(&local_250,0);
    _objc_storeStrong(&local_248,0);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_238,0);
  }
  _objc_storeStrong(&local_228,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_220);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

