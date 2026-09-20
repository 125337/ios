// findFramePairsInDirectory:pairs: @ 01d6acb4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameLibraryViewController::findFramePairsInDirectory_pairs_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_378;
  undefined *local_338;
  undefined *local_330;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  ulong local_228;
  ulong local_220;
  ulong local_218;
  byte local_209;
  undefined8 local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined4 local_19c;
  undefined *local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  SEL local_178;
  ID local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = 0;
  local_178 = param_2;
  local_170 = param_1;
  _objc_storeStrong(&local_180,param_3);
  local_188 = 0;
  _objc_storeStrong(&local_188,param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_180,0);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_19c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = puVar2;
    _memset(auStack_200,0,0x40);
    puVar2 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,0x10);
    if (local_2d0 != (undefined *)0x0) {
      lVar8 = *local_1f0;
      local_2d8 = (undefined *)0x0;
      do {
        do {
          if (*local_1f0 - lVar8 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar8,puVar2);
          }
          uVar9 = *(ulong *)(local_1f8 + (long)local_2d8 * 8);
          local_1c0 = uVar9;
          FUN_01d6b61c();
          if ((uVar9 & 1) == 0) {
            uVar4 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_stringByAppendingPathComponent__026cab30,local_1c0);
            _objc_retainAutoreleasedReturnValue();
            local_209 = 0;
            local_208 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar4,&local_209);
            if ((local_209 & 1) == 0) {
              uVar9 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_218 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar9);
              uVar9 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_stringByDeletingPathExtension_0269fd18);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_218;
              local_220 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_218,PTR_s_isEqualToString__0269ccc8,&cf_png);
              if ((uVar5 & 1) == 0) {
                uVar9 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_isEqualToString__0269ccc8,&cf_cfg);
                if ((uVar9 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_208,
                             local_220);
                }
              }
              else {
                uVar5 = local_220;
                (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_hasSuffix__0269d018,&cf__dark)
                ;
                uVar9 = local_220;
                if ((uVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_208,
                             local_220);
                }
                else {
                  uVar5 = local_220;
                  (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar9,PTR_s_substringToIndex__0269d6c0,uVar5 - 5);
                  _objc_retainAutoreleasedReturnValue();
                  local_228 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b0,PTR_s_setObject_forKeyedSubscript__0269d248,local_208,uVar9);
                  _objc_storeStrong(&local_228,0);
                }
              }
              _objc_storeStrong(&local_220);
              _objc_storeStrong(&local_218,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_findFramePairsInDirectory_pairs__026a77a0,local_208,
                         local_188);
            }
            _objc_storeStrong(&local_208,0);
          }
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                   0x10);
        local_2d8 = (undefined *)0x0;
      } while (local_2d0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_270,0,0x40);
    puVar2 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_330 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,0x10);
    if (local_330 != (undefined *)0x0) {
      lVar8 = *local_260;
      local_338 = (undefined *)0x0;
      do {
        do {
          if (*local_260 - lVar8 != 0) {
            _objc_enumerationMutation(*local_260 - lVar8,puVar2);
          }
          local_230 = *(undefined8 *)(local_268 + (long)local_338 * 8);
          puVar3 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,local_230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar3 != (undefined *)0x0) {
            puVar3 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,local_230);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_188;
            local_168 = &cf_png;
            puVar6 = local_1a8;
            local_278 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_objectForKeyedSubscript__0269d098,local_230);
            _objc_retainAutoreleasedReturnValue();
            local_160 = &cf_darkPng;
            bVar1 = local_278 == (undefined *)0x0;
            local_148 = puVar6;
            if (bVar1) {
              local_378 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_280 = local_378;
            }
            else {
              local_378 = local_278;
            }
            local_140 = local_378;
            local_158 = &cf_cfg;
            puVar3 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,local_230);
            _objc_retainAutoreleasedReturnValue();
            local_150 = &cf_name;
            local_130 = local_230;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_138 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_148,&local_168,4);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_280);
            }
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_storeStrong(&local_278,0);
          }
          local_338 = local_338 + 1;
        } while (local_338 < local_330);
        local_330 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                   0x10);
        local_338 = (undefined *)0x0;
      } while (local_330 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1a8,0);
    local_19c = 0;
  }
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

