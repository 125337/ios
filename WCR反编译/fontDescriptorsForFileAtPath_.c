// fontDescriptorsForFileAtPath: @ 019d77e0

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontBeautifyViewController::fontDescriptorsForFileAtPath_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_308;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b0;
  undefined *local_260;
  undefined *local_258;
  uint local_21c;
  cfstringStruct *local_218;
  bool local_209;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  cfstringStruct *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  undefined *local_160;
  undefined4 local_158;
  byte local_151;
  undefined *local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  local_151 = 0;
  local_21c = 1;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_150 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_21c = (uint)puVar3 ^ 1;
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  if ((local_21c & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_168 = 0;
    local_160 = puVar3;
    _CTFontManagerRegisterFontsForURL(puVar3,1,&local_168);
    if (local_168 != 0) {
      _CFRelease(local_168);
    }
    puVar3 = local_160;
    _CTFontManagerCreateFontDescriptorsFromURL();
    local_170 = puVar3;
    local_100 = puVar3;
    _objc_autoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_178 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar4;
    _memset(auStack_1c8,0,0x40);
    puVar3 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar6 = *local_1b8;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar6,puVar3);
          }
          pcVar7 = *(cfstringStruct **)(local_1c0 + (long)local_260 * 8);
          local_1d0 = pcVar7;
          local_188 = pcVar7;
          _CTFontDescriptorCopyAttribute(pcVar7,*(undefined8 *)PTR__kCTFontNameAttribute_02578310);
          local_108 = pcVar7;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_1d0;
          local_1d8 = pcVar7;
          _CTFontDescriptorCopyAttribute
                    (local_1d0,*(undefined8 *)PTR__kCTFontFamilyNameAttribute_02578308);
          local_110 = pcVar2;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_1d0;
          local_1e0 = pcVar2;
          _CTFontDescriptorCopyAttribute
                    (local_1d0,*(undefined8 *)PTR__kCTFontStyleNameAttribute_02578318);
          local_118 = pcVar7;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_1d0;
          local_1e8 = pcVar7;
          _CTFontDescriptorCopyAttribute
                    (local_1d0,*(undefined8 *)PTR__kCTFontDisplayNameAttribute_02578300);
          local_120 = pcVar2;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_1d0;
          local_1f0 = pcVar2;
          _CTFontDescriptorCopyAttribute
                    (local_1d0,*(undefined8 *)PTR__kCTFontTraitsAttribute_02578320);
          local_128 = pcVar7;
          _objc_autoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_1f8 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_209 = false;
          bVar1 = ((ulong)pcVar7 & 1) == 0;
          if (bVar1) {
            local_2b0 = (cfstringStruct *)0x0;
          }
          else {
            local_2b0 = local_1f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCTFontWeightTrait_02578328);
            _objc_retainAutoreleasedReturnValue();
            local_208 = local_2b0;
          }
          local_209 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_200 = local_2b0;
          if ((local_209 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_208);
          }
          pcVar2 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_158 = 3;
          }
          else {
            pcVar2 = local_1e0;
            FUN_019d8014(local_1e0,local_1e8,local_1f0,local_1d8,local_200);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_180;
            local_f8 = &cf_postScriptName;
            if (local_1d8 == (cfstringStruct *)0x0) {
              local_2d0 = &::cf___;
            }
            else {
              local_2d0 = local_1d8;
            }
            local_d0 = local_2d0;
            local_f0 = &cf_familyName;
            if (local_1e0 == (cfstringStruct *)0x0) {
              local_2e0 = &::cf___;
            }
            else {
              local_2e0 = local_1e0;
            }
            local_c8 = local_2e0;
            local_e8 = &cf_styleName;
            if (local_1e8 == (cfstringStruct *)0x0) {
              local_2f0 = &::cf___;
            }
            else {
              local_2f0 = local_1e8;
            }
            local_c0 = local_2f0;
            local_e0 = &cf_displayName;
            local_218 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_2f8 = local_1d8;
            }
            else {
              local_2f8 = local_218;
            }
            local_b8 = local_2f8;
            local_d8 = &cf_path;
            if (local_148 == (cfstringStruct *)0x0) {
              local_308 = &::cf___;
            }
            else {
              local_308 = local_148;
            }
            local_b0 = local_308;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d0,&local_f8,5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_storeStrong(&local_218,0);
            local_158 = 0;
          }
          _objc_storeStrong(&local_200);
          _objc_storeStrong(&local_1f8,0);
          _objc_storeStrong(&local_1f0,0);
          _objc_storeStrong(&local_1e8,0);
          _objc_storeStrong(&local_1e0,0);
          _objc_storeStrong(&local_1d8,0);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_copy_0269d150);
    local_158 = 1;
    local_130 = puVar3;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_160,0);
  }
  else {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = 1;
    local_130 = puVar3;
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

