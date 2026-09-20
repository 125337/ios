// showAirDropSummary @ 01741760

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::showAirDropSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_390;
  undefined *local_388;
  cfstringStruct *local_330;
  cfstringStruct *local_320;
  cfstringStruct *local_308;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2a0;
  char *local_288;
  uint local_27c;
  char *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  bool local_1f9;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  bool local_1e1;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  bool local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  long local_170;
  undefined *local_168;
  undefined *local_160;
  SEL local_158;
  ID local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_2a0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_2a0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_2a0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_170 = 0;
  local_168 = puVar2;
  _memset(auStack_1b8,0,0x40);
  puVar2 = local_160;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
  if (local_2c8 != (undefined *)0x0) {
    lVar7 = *local_1a8;
    local_2d0 = (undefined *)0x0;
    do {
      do {
        if (*local_1a8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1a8 - lVar7,puVar2);
        }
        pcVar8 = *(cfstringStruct **)(local_1b0 + (long)local_2d0 * 8);
        local_178 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        if (((ulong)pcVar4 & 1) != 0) {
          local_170 = local_170 + 1;
          pcVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_1c9 = false;
          bVar1 = ((ulong)pcVar8 & 1) == 0;
          if (bVar1) {
            local_308 = &::cf___;
          }
          else {
            local_308 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = local_308;
          }
          local_1c9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1c0 = local_308;
          if ((local_1c9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1c8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_1e1 = false;
          bVar1 = ((ulong)pcVar8 & 1) == 0;
          if (bVar1) {
            local_320 = &::cf___;
          }
          else {
            local_320 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = local_320;
          }
          local_1e1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1d8 = local_320;
          if ((local_1e1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            _objc_storeStrong(&local_1c0,&cf__);
          }
          pcVar4 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
          local_1f9 = false;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_330 = local_1c0;
          }
          else {
            local_330 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_______);
            _objc_retainAutoreleasedReturnValue();
            local_1f8 = local_330;
          }
          local_1f9 = pcVar4 != (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1f0 = local_330;
          if ((local_1f9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1f8);
          }
          puVar3 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_1f0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_208 = puVar5 + 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                     puVar5 + 1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_1f0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_1f0);
          _objc_storeStrong(&local_1d8,0);
          _objc_storeStrong(&local_1c0,0);
        }
        local_2d0 = local_2d0 + 1;
      } while (local_2d0 < local_2c8);
      local_2c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      local_2d0 = (undefined *)0x0;
    } while (local_2c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf_qQ_N_bRzzb);
  puVar2 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    puVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_218 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_260,0,0x40);
    puVar2 = local_218;
    (*(code *)PTR__objc_retain_02578638)();
    local_388 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,0x10);
    if (local_388 != (undefined *)0x0) {
      lVar7 = *local_250;
      local_390 = (undefined *)0x0;
      do {
        do {
          if (*local_250 - lVar7 != 0) {
            _objc_enumerationMutation(*local_250 - lVar7,puVar2);
          }
          puVar3 = local_210;
          local_220 = *(undefined8 *)(local_258 + (long)local_390 * 8);
          puVar5 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,local_220);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&::cf__);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_390 = local_390 + 1;
        } while (local_390 < local_388);
        local_388 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,
                   0x10);
        local_390 = (undefined *)0x0;
      } while (local_388 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_hasSuffix__0269d018,&::cf_newline_s_);
    puVar2 = local_210;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_length_0269cca0);
      local_270 = puVar3 + -1;
      local_148 = 1;
      local_130 = 1;
      local_268 = 1;
      local_140 = local_270;
      local_138 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_deleteCharactersInRange__026a84a8,local_270,1);
    }
    _objc_storeStrong(&local_218,0);
  }
  pcVar6 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar6 != (char *)0x0;
  local_278 = pcVar6;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_288 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_addBtnTitle_target_sel__0269d278,&cf_TT,local_150);
    (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_show_0269d280);
    _objc_storeStrong(&local_288,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_210);
  }
  local_27c = (uint)!bVar1;
  _objc_storeStrong(&local_210);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

