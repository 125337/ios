// resolvedFontPathForPostScriptName:preferredPath: @ 019d855c

/* Function Stack Size: 0x20 bytes */

ID WCRefineFontBeautifyViewController::resolvedFontPathForPostScriptName_preferredPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  double local_338;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b8;
  ulong local_290;
  ulong local_288;
  ID local_270;
  uint local_23c;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  double local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  undefined4 local_160;
  byte local_159;
  undefined *local_158;
  cfstringStruct *local_150;
  long local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_150,param_4);
  pcVar5 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  local_159 = 0;
  local_23c = 0;
  if (pcVar5 != (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_159 = 1;
    local_158 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_23c = (uint)puVar1;
  }
  if ((local_159 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_158);
  }
  pcVar5 = local_150;
  if ((local_23c & 1) == 0) {
    lVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = &::cf___;
      local_160 = 1;
    }
    else {
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_168 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar1;
      _memset(auStack_1b8,0,0x40);
      IVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_fontItems_026bae98);
      _objc_retainAutoreleasedReturnValue();
      local_270 = IVar2;
      if (IVar2 == 0) {
        local_270 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_288 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                 0x10);
      if (local_288 != 0) {
        lVar4 = *local_1a8;
        local_290 = 0;
        do {
          do {
            if (*local_1a8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar4,local_270);
            }
            pcVar5 = *(cfstringStruct **)(local_1b0 + local_290 * 8);
            local_178 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
            _objc_retainAutoreleasedReturnValue();
            local_2b8 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_2b8 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1c0 = local_2b8;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_isEqualToString__0269ccc8,local_148);
            if (((ulong)pcVar5 & 1) == 0) {
              local_160 = 3;
            }
            else {
              pcVar5 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
              _objc_retainAutoreleasedReturnValue();
              local_2d0 = pcVar5;
              if (pcVar5 == (cfstringStruct *)0x0) {
                local_2d0 = &::cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1c8 = local_2d0;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
              if ((pcVar5 == (cfstringStruct *)0x0) ||
                 (puVar1 = local_170,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_170,PTR_s_containsObject__0269cbb8,local_1c8),
                 ((ulong)puVar1 & 1) != 0)) {
                local_160 = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1c8)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_1c8)
                ;
                local_160 = 0;
              }
              _objc_storeStrong(&local_1c8,0);
            }
            _objc_storeStrong(&local_1c0,0);
            local_290 = local_290 + 1;
          } while (local_290 < local_288);
          local_288 = local_270;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,
                     auStack_a8,0x10);
          local_290 = 0;
        } while (local_288 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_270);
      pcVar5 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = &::cf___;
        local_160 = 1;
      }
      else {
        pcVar5 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
        if (pcVar5 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
          pcVar5 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_160 = 1;
          local_130 = pcVar5;
        }
        else {
          pcVar5 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_338 = 0.0;
          local_1d8 = 0.0;
          puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_1d0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = puVar1;
          _memset(auStack_228,0,0x40);
          pcVar5 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_308 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                     0x10);
          if (local_308 != (cfstringStruct *)0x0) {
            lVar4 = *local_218;
            local_310 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_218 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_218 - lVar4,pcVar5);
                }
                local_1e8 = *(undefined8 *)(local_220 + (long)local_310 * 8);
                puVar1 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e0,PTR_s_attributesOfItemAtPath_error__0269db08,local_1e8,0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_230 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                if (local_230 == (undefined *)0x0) {
                  local_338 = 0.0;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_timeIntervalSince1970_0269cfc8);
                }
                if (local_1d8 <= local_338) {
                  local_1d8 = local_338;
                  _objc_storeStrong(&local_1d0,local_1e8);
                }
                _objc_storeStrong(&local_230,0);
                local_310 = (cfstringStruct *)((long)&local_310->field0_0x0 + 1);
              } while (local_310 < local_308);
              local_308 = pcVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                         auStack_128,0x10);
              local_310 = (cfstringStruct *)0x0;
            } while (local_308 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_1d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = pcVar5;
          local_160 = 1;
          _objc_storeStrong(&local_1e0);
          _objc_storeStrong(&local_1d0,0);
        }
      }
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_168,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = pcVar5;
    local_160 = 1;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

