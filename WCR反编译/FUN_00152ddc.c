// FUN_00152ddc @ 00152ddc

void FUN_00152ddc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_398;
  undefined *local_390;
  undefined *local_368;
  undefined *local_318;
  undefined *local_2f0;
  undefined *local_2e8;
  cfstringStruct *local_2b0;
  long local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  long local_238;
  undefined *local_230;
  long local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  uint local_198;
  byte local_181;
  cfstringStruct *local_180;
  long local_178;
  long local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = 0;
  _objc_storeStrong(&local_178,param_1);
  local_180 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_180,param_2);
  lVar6 = local_178;
  local_181 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_170 = 0;
    local_198 = 1;
  }
  else {
    pcVar2 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_2b0 = &cf__;
    }
    else {
      local_2b0 = local_180;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = local_2b0;
    local_68 = &cf_png;
    local_60 = &cf_jpg;
    local_58 = &cf_gif;
    local_50 = &cf_webp;
    local_48 = &cf_bmp;
    local_40 = &cf_mp4;
    local_38 = &cf_mov;
    local_30 = &cf_m4v;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_1a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar4;
    _memset(auStack_1f8,0,0x40);
    puVar3 = local_1a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_e8,0x10);
    if (local_2e8 != (undefined *)0x0) {
      lVar6 = *local_1e8;
      local_2f0 = (undefined *)0x0;
      do {
        do {
          if (*local_1e8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar6,puVar3);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2f0 * 8);
          local_209 = 0;
          local_219 = 0;
          local_318 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if ((local_181 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf______);
            _objc_retainAutoreleasedReturnValue();
            local_219 = 1;
            local_218 = local_318;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf____dark___);
            _objc_retainAutoreleasedReturnValue();
            local_209 = 1;
            local_208 = local_318;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_200 = local_318;
          if ((local_219 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_218);
          }
          if ((local_209 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_208);
          }
          lVar5 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_stringByAppendingPathComponent__026cab30,local_200);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_1b0;
          local_228 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_fileExistsAtPath__026ca630,lVar5);
          lVar5 = local_228;
          bVar1 = ((ulong)puVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_170 = lVar5;
          }
          local_198 = (uint)bVar1;
          _objc_storeStrong(&local_228);
          _objc_storeStrong(&local_200,0);
          if (local_198 != 0) goto LAB_0015339c;
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_e8,
                   0x10);
        local_2f0 = (undefined *)0x0;
      } while (local_2e8 != (undefined *)0x0);
    }
    local_198 = 0;
LAB_0015339c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_198 == 0) {
      puVar3 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_178,0);
      _objc_retainAutoreleasedReturnValue();
      local_368 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_368 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_230 = local_368;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _memset(auStack_278,0,0x40);
      puVar3 = local_230;
      (*(code *)PTR__objc_retain_02578638)();
      local_390 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_168,0x10
                );
      if (local_390 != (undefined *)0x0) {
        lVar6 = *local_268;
        local_398 = (undefined *)0x0;
        do {
          do {
            if (*local_268 - lVar6 != 0) {
              _objc_enumerationMutation(*local_268 - lVar6,puVar3);
            }
            lVar7 = *(long *)(local_270 + (long)local_398 * 8);
            local_238 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_280 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar7);
            lVar5 = local_280;
            FUN_00155344();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar5);
            if (lVar7 == 0) {
              local_198 = 5;
            }
            else {
              lVar5 = local_178;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_178,PTR_s_stringByAppendingPathComponent__026cab30,local_238);
              _objc_retainAutoreleasedReturnValue();
              local_198 = 1;
              local_170 = lVar5;
            }
            _objc_storeStrong(&local_280,0);
            if (local_198 != 5) goto LAB_0015375c;
            local_398 = local_398 + 1;
          } while (local_398 < local_390);
          local_390 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_168,
                     0x10);
          local_398 = (undefined *)0x0;
        } while (local_390 != (undefined *)0x0);
      }
      local_198 = 0;
LAB_0015375c:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_198 == 0) {
        local_170 = 0;
        local_198 = 1;
      }
      _objc_storeStrong(&local_230,0);
    }
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_1a0,0);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

