// FUN_008dbac8 @ 008dbac8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008dbac8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_468;
  undefined *local_460;
  undefined *local_410;
  undefined *local_408;
  cfstringStruct *local_3b0;
  cfstringStruct *local_370;
  byte local_309;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  cfstringStruct *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  long local_238;
  undefined *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined *local_218;
  undefined *local_210;
  int local_208;
  ulong local_1f8;
  ulong local_1f0;
  cfstringStruct *local_1e8;
  undefined1 auStack_1e0 [128];
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1f0 = 0;
  _objc_storeStrong(&local_1f0,param_1);
  uVar2 = local_1f0;
  FUN_008cb6a0();
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = &cf___;
    local_208 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_210 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_1f8;
    local_218 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar2 & 1) == 0) {
      pcVar5 = (cfstringStruct *)0x9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_370 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_370 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = local_370;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_220;
      (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0);
      puVar3 = local_218;
      pcVar6 = (cfstringStruct *)0x0;
      if (pcVar5 != (cfstringStruct *)0x0) {
        pcVar6 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,PTR_s_stringByAppendingPathComponent__026cab30,local_1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)();
      }
      _NSHomeDirectory();
      _objc_retainAutoreleasedReturnValue();
      local_3b0 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_3b0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = local_3b0;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
      puVar3 = local_218;
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar6 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_228,PTR_s_stringByAppendingPathComponent__026cab30,local_1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_addObject__0269d180,local_1f8);
      _objc_storeStrong(&local_228);
      _objc_storeStrong(&local_220,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_addObject__0269d180,local_1f8);
    }
    puVar3 = local_218;
    (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_copy_0269d150);
    local_230 = puVar3;
    _memset(auStack_278,0,0x40);
    puVar3 = local_230;
    (*(code *)PTR__objc_retain_02578638)();
    local_408 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,0x10);
    if (local_408 != (undefined *)0x0) {
      lVar7 = *local_268;
      local_410 = (undefined *)0x0;
      do {
        do {
          if (*local_268 - lVar7 != 0) {
            _objc_enumerationMutation(*local_268 - lVar7,puVar3);
          }
          lVar9 = *(long *)(local_270 + (long)local_410 * 8);
          local_238 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar9);
          if (lVar8 == 0) {
            _memset(auStack_2c0,0,0x40);
            local_160 = &cf_aud;
            local_158 = &cf_silk;
            local_150 = &cf_slk;
            local_148 = &cf_amr;
            local_140 = &cf_mp3;
            local_138 = &cf_wav;
            local_130 = &cf_m4a;
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_160,7);
            _objc_retainAutoreleasedReturnValue();
            local_460 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_460 != (undefined *)0x0) {
              lVar8 = *local_2b0;
              local_468 = (undefined *)0x0;
              do {
                do {
                  if (*local_2b0 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_2b0 - lVar8,puVar4);
                  }
                  puVar1 = local_218;
                  local_280 = *(undefined8 *)(local_2b8 + (long)local_468 * 8);
                  lVar9 = local_238;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_238,PTR_s_stringByAppendingPathExtension__026a4580,local_280);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(lVar9);
                  local_468 = local_468 + 1;
                } while (local_468 < local_460);
                local_460 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                           auStack_128,0x10);
                local_468 = (undefined *)0x0;
              } while (local_460 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          local_410 = local_410 + 1;
        } while (local_410 < local_408);
        local_408 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_a8,
                   0x10);
        local_410 = (undefined *)0x0;
      } while (local_408 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _memset(auStack_308,0,0x40);
    puVar3 = local_218;
    (*(code *)PTR__objc_retain_02578638)();
    local_4c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_1e0,0x10);
    if (local_4c8 != (undefined *)0x0) {
      lVar7 = *local_2f8;
      local_4d0 = (undefined *)0x0;
      do {
        do {
          if (*local_2f8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2f8 - lVar7,puVar3);
          }
          local_2c8 = *(cfstringStruct **)(local_300 + (long)local_4d0 * 8);
          local_309 = 0;
          puVar4 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_210,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_2c8,&local_309);
          pcVar6 = local_2c8;
          if ((((ulong)puVar4 & 1) != 0) && ((local_309 & 1) == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1e8 = pcVar6;
            local_208 = 1;
            goto LAB_008dc6c0;
          }
          local_4d0 = local_4d0 + 1;
        } while (local_4d0 < local_4c8);
        local_4c8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,auStack_1e0,
                   0x10);
        local_4d0 = (undefined *)0x0;
      } while (local_4c8 != (undefined *)0x0);
    }
    local_208 = 0;
LAB_008dc6c0:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_208 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = &cf___;
      local_208 = 1;
    }
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_218,0);
    _objc_storeStrong(&local_210,0);
  }
  _objc_storeStrong(&local_1f8);
  _objc_storeStrong(&local_1f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

