// browseImagePathsForRecord:mediaIndex: @ 010bc484

/* Function Stack Size: 0x20 bytes */

ID WCRefineMomentsMonitor::browseImagePathsForRecord_mediaIndex_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_350;
  undefined *local_348;
  cfstringStruct *local_330;
  cfstringStruct *local_320;
  undefined *local_2f8;
  undefined *local_2f0;
  cfstringStruct *local_2c0;
  long local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  long local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  bool local_1b9;
  cfstringStruct *local_1b8;
  byte local_1a9;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  SEL local_168;
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
  local_170 = (cfstringStruct *)0x0;
  local_168 = param_2;
  local_160 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_170,param_3);
  pcVar1 = local_160;
  local_178 = (cfstringStruct *)param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1;
  FUN_010bcd08(pcVar1,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_180,PTR_s_stringByAppendingPathComponent__026cab30,&cf_manifest_json);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_010bced8();
  _objc_retainAutoreleasedReturnValue();
  local_188 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_188;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,local_178
            );
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_190 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar1 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_198 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_178;
  pcVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0);
  local_1a9 = 0;
  local_1b9 = false;
  if (pcVar2 <= pcVar1) {
    local_2c0 = (cfstringStruct *)0x0;
  }
  else {
    local_2c0 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_objectAtIndexedSubscript__0269cc78,local_178);
    _objc_retainAutoreleasedReturnValue();
    local_1a9 = 1;
    local_1a8 = local_2c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_2c0;
  }
  local_1b9 = pcVar2 > pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = local_2c0;
  if ((local_1b9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b8);
  }
  if ((local_1a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a8);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar5;
  _memset(auStack_210,0,0x40);
  local_c8 = &cf_hd;
  local_c0 = &cf_data;
  local_b8 = &cf_exist;
  local_b0 = &cf_preview;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_2f0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2f0 != (undefined *)0x0) {
    lVar7 = *local_200;
    local_2f8 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar7 != 0) {
          _objc_enumerationMutation(*local_200 - lVar7,puVar5);
        }
        local_1d0 = *(undefined8 *)(local_208 + (long)local_2f8 * 8);
        _memset(auStack_258,0,0x40);
        pcVar1 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_objectForKeyedSubscript__0269d098,local_1d0);
        _objc_retainAutoreleasedReturnValue();
        local_320 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_320 = &::cf___;
        }
        local_158 = local_320;
        pcVar2 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_objectForKeyedSubscript__0269d098,local_1d0);
        _objc_retainAutoreleasedReturnValue();
        local_330 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_330 = &::cf___;
        }
        local_150 = local_330;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_158,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_348 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_148,
                   0x10);
        if (local_348 != (undefined *)0x0) {
          lVar8 = *local_248;
          local_350 = (undefined *)0x0;
          do {
            do {
              if (*local_248 - lVar8 != 0) {
                _objc_enumerationMutation(*local_248 - lVar8,puVar6);
              }
              lVar9 = *(long *)(local_250 + (long)local_350 * 8);
              local_218 = lVar9;
              FUN_010bd1a0(lVar9,local_180);
              _objc_retainAutoreleasedReturnValue();
              local_260 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
              if (lVar9 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_260)
                ;
              }
              _objc_storeStrong(&local_260,0);
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,
                       auStack_148,0x10);
            local_350 = (undefined *)0x0;
          } while (local_348 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_2f8 = local_2f8 + 1;
      } while (local_2f8 < local_2f0);
      local_2f0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,0x10)
      ;
      local_2f8 = (undefined *)0x0;
    } while (local_2f0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

