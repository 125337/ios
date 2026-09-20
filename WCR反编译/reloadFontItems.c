// reloadFontItems @ 019d90c8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontBeautifyViewController::reloadFontItems(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *local_360;
  long local_350;
  cfstringStruct *local_308;
  cfstringStruct *local_300;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  long local_278;
  undefined8 local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  cfstringStruct *local_220;
  bool local_211;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  undefined *local_200;
  cfstringStruct *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  SEL local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  long local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_198 = param_2;
  local_190 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar3;
  _memset(auStack_1f0,0,0x40);
  pcVar4 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_availableFontFileNames_026baee0);
  _objc_retainAutoreleasedReturnValue();
  local_298 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_298 != (cfstringStruct *)0x0) {
    lVar7 = *local_1e0;
    local_2a0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_1e0 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar7,pcVar4);
        }
        local_1b0 = *(long *)(local_1e8 + (long)local_2a0 * 8);
        pcVar5 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_fontBasePath_026baec0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar2 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a8,PTR_s_attributesOfItemAtPath_error__0269db08,local_1f8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_200 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_2d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        local_211 = false;
        bVar1 = local_200 == (undefined *)0x0;
        if (bVar1) {
          local_2d0 = &::cf_0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_timeIntervalSince1970_0269cfc8);
          (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_stringWithFormat__0269cca8,&cf___0f)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_210 = local_2d0;
        }
        local_211 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_208 = local_2d0;
        if ((local_211 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
        pcVar5 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_fontDescriptorsForFileAtPath__026baee8,local_1f8);
        _objc_retainAutoreleasedReturnValue();
        local_220 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_count_0269cfe0);
        if (pcVar5 == (cfstringStruct *)0x0) {
          lVar8 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_stringByDeletingPathExtension_0269fd18);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_1a0;
          local_188 = &cf_postScriptName;
          local_158 = &::cf___;
          local_180 = &cf_familyName;
          local_150 = &::cf___;
          local_178 = &cf_styleName;
          local_148 = &::cf___;
          local_170 = &cf_displayName;
          local_350 = lVar8;
          if (lVar8 == 0) {
            local_350 = local_1b0;
          }
          local_140 = local_350;
          local_168 = &cf_path;
          if (local_1f8 == (cfstringStruct *)0x0) {
            local_360 = &::cf___;
          }
          else {
            local_360 = local_1f8;
          }
          local_138 = local_360;
          local_160 = &cf_mtime;
          local_130 = local_208;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_278 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_188,6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_278,0);
        }
        else {
          _memset(auStack_268,0,0x40);
          pcVar5 = local_220;
          (*(code *)PTR__objc_retain_02578638)();
          local_300 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,
                     0x10);
          if (local_300 != (cfstringStruct *)0x0) {
            lVar8 = *local_258;
            local_308 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_258 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar8,pcVar5);
                }
                uVar9 = *(undefined8 *)(local_260 + (long)local_308 * 8);
                local_228 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_mutableCopy_0269d8a0);
                local_270 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_setObject_forKeyedSubscript__0269d248,local_208,&cf_mtime);
                puVar2 = local_1a0;
                uVar9 = local_270;
                (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(uVar9);
                _objc_storeStrong(&local_270,0);
                local_308 = (cfstringStruct *)((long)&local_308->field0_0x0 + 1);
              } while (local_308 < local_300);
              local_300 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_128,0x10);
              local_308 = (cfstringStruct *)0x0;
            } while (local_300 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_208,0);
        _objc_storeStrong(&local_200,0);
        _objc_storeStrong(&local_1f8,0);
        local_2a0 = (cfstringStruct *)((long)&local_2a0->field0_0x0 + 1);
      } while (local_2a0 < local_298);
      local_298 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10)
      ;
      local_2a0 = (cfstringStruct *)0x0;
    } while (local_298 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  puVar2 = local_1a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFontItems__026baef0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_migrateFontSelectionPathIfNeeded_026baef8);
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

