// handleSaveURLOnly: @ 01e352e8

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::handleSaveURLOnly_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_2d8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_250;
  int local_22c;
  cfstringStruct *local_218;
  cfstringStruct *local_200;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c8;
  undefined *local_198;
  long local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  long local_120;
  long local_118;
  byte local_109;
  cfstringStruct *local_108;
  byte local_fa;
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  bool local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  int local_94;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  SEL local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_80,param_3);
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_textFromSender__026b1b18,local_80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setActiveAlert__026b1ad0,0);
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_editingIndex_026c6368);
  local_90 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setEditingIndex__026c62e8,DAT_0233a538);
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U);
    local_94 = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a9 = 0;
    local_1c8 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_1c8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_1c8;
    }
    local_a9 = pcVar5 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1c8;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_90;
    if (((long)local_90 < 0) ||
       (pcVar5 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0),
       (long)pcVar5 <= (long)pcVar3)) {
      local_94 = 1;
    }
    else {
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_c9 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_1e8 = (cfstringStruct *)0x0;
      }
      else {
        local_1e8 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_1e8;
      }
      local_c9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_1e8;
      if ((local_c9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_e1 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_200 = local_88;
      }
      else {
        local_200 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_200;
      }
      local_e1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_200;
      if ((local_e1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_f9 = false;
      bVar1 = ((ulong)pcVar5 & 1) == 0;
      if (bVar1) {
        local_218 = &cf_icons_outlined_link;
      }
      else {
        local_218 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_218;
      }
      local_f9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_218;
      if ((local_f9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      local_109 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_22c = 1;
      }
      else {
        pcVar5 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        local_109 = 1;
        local_108 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_22c = (int)pcVar5;
      }
      if ((local_109 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_fa = local_22c != 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_removeObjectAtIndex__0269d530,local_90);
      local_118 = 0x7fffffffffffffff;
      for (local_120 = 0; lVar2 = local_120, pcVar3 = local_a0,
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0), lVar2 < (long)pcVar3
          ; local_120 = local_120 + 1) {
        pcVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_120);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_128 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar3 & 1) == 0) {
          local_94 = 4;
        }
        else {
          pcVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_139 = false;
          bVar1 = ((ulong)pcVar5 & 1) == 0;
          if (bVar1) {
            local_250 = &::cf___;
          }
          else {
            local_250 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            local_138 = local_250;
          }
          local_139 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = local_250;
          if ((local_139 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isEqualToString__0269ccc8,local_88);
          if (((ulong)pcVar3 & 1) == 0) {
            local_94 = 0;
          }
          else {
            local_118 = local_120;
            local_94 = 2;
          }
          _objc_storeStrong(&local_130,0);
        }
        _objc_storeStrong(&local_128,0);
        if ((local_94 != 0) && (local_94 == 2)) break;
      }
      local_68 = &cf_title;
      pcVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_268 = local_88;
      }
      else {
        local_268 = local_d8;
      }
      local_48 = local_268;
      local_60 = &cf_url;
      local_40 = local_88;
      local_58 = &cf_icon;
      pcVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_270 = &cf_icons_outlined_link;
      }
      else {
        local_270 = local_f0;
      }
      local_38 = local_270;
      local_50 = &cf_enabled;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_fa & 1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_a0;
      puVar4 = local_148;
      if (local_118 == 0x7fffffffffffffff) {
        local_150 = local_90;
        pcVar5 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
        local_2a0 = pcVar5;
        if ((long)local_150 < (long)pcVar5) {
          local_2a0 = local_150;
        }
        local_160 = local_2a0;
        local_158 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_insertObject_atIndex__0269eac0,puVar4,local_2a0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setObject_atIndexedSubscript__0269e970,local_148,local_118);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_a0);
      pcVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if ((pcVar3 != (cfstringStruct *)0x0) &&
         (pcVar3 = local_c0,
         (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,local_88),
         ((ulong)pcVar3 & 1) == 0)) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_168 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
        local_170 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_profileActions_026b1a38);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_181 = 0;
        local_2d8 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          local_2d8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_180 = local_2d8;
        }
        local_181 = puVar6 == (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = local_2d8;
        if ((local_181 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_180);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        for (local_190 = 0; lVar2 = local_190, puVar4 = local_178,
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0),
            lVar2 < (long)puVar4; local_190 = local_190 + 1) {
          puVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          puVar7 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (((ulong)puVar7 & 1) != 0) {
            puVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_198 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (((ulong)puVar6 & 1) == 0) {
              local_94 = 7;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_170,
                         _WCRSuperFloatActionKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,
                         _WCRSuperFloatTitleKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,
                         _WCRSuperFloatIconKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,
                         _WCRSuperFloatCustomPayloadKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_url,
                         _WCRSuperFloatCustomKindKey);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_setObject_atIndexedSubscript__0269e970,local_198,local_190)
              ;
              local_94 = 5;
            }
            _objc_storeStrong(&local_198,0);
            if (local_94 == 5) break;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,
                   local_178);
        _objc_storeStrong(&local_178);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_168,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U);
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      local_94 = 0;
    }
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

