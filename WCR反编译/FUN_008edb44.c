// FUN_008edb44 @ 008edb44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008edb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_450;
  undefined *local_378;
  undefined *local_370;
  undefined *local_320;
  undefined *local_318;
  undefined *local_2e0;
  undefined *local_2c8;
  bool local_291;
  cfstringStruct *local_290;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  int local_274;
  cfstringStruct *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  undefined *local_1a0;
  cfstringStruct *local_198;
  undefined *local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_188 = (undefined *)0x0;
  _objc_storeStrong(&local_188,param_1);
  local_190 = (undefined *)0x0;
  _objc_storeStrong(&local_190,param_2);
  local_198 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_198,param_3);
  local_2c8 = local_188;
  local_1b9 = 0;
  bVar1 = local_188 == (undefined *)0x0;
  if (bVar1) {
    local_2c8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_2c8;
  }
  local_38 = local_2c8;
  local_2e0 = local_190;
  local_1c9 = 0;
  bVar2 = local_190 == (undefined *)0x0;
  local_1b9 = bVar1;
  if (bVar2) {
    local_2e0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = local_2e0;
  }
  local_30 = local_2e0;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_1c9 = bVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar4;
  if ((local_1c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c8);
  }
  if ((local_1b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b8);
  }
  local_70 = &cf_m_nsAppFileName;
  local_68 = &cf_m_nsTitle;
  local_60 = &cf_titleText;
  local_58 = &cf_fileName;
  local_50 = &cf_filename;
  local_48 = &cf_name;
  local_40 = &cf_title;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,7);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar4;
  _memset(auStack_220,0,0x40);
  puVar4 = local_1a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_318 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_f0,0x10);
  if (local_318 != (undefined *)0x0) {
    lVar8 = *local_210;
    local_320 = (undefined *)0x0;
    do {
      do {
        if (*local_210 - lVar8 != 0) {
          _objc_enumerationMutation(*local_210 - lVar8,puVar4);
        }
        pcVar10 = *(cfstringStruct **)(local_218 + (long)local_320 * 8);
        pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_1e0 = pcVar10;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar10 != pcVar5) {
          _memset(auStack_268,0,0x40);
          puVar3 = local_1d8;
          (*(code *)PTR__objc_retain_02578638)();
          local_370 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_170,
                     0x10);
          if (local_370 != (undefined *)0x0) {
            lVar9 = *local_258;
            local_378 = (undefined *)0x0;
            do {
              do {
                if (*local_258 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar9,puVar3);
                }
                pcVar5 = local_1e0;
                local_228 = *(undefined8 *)(local_260 + (long)local_378 * 8);
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_178 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_178,1);
                _objc_retainAutoreleasedReturnValue();
                FUN_008eb4dc();
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = pcVar5;
                FUN_008e5574();
                _objc_retainAutoreleasedReturnValue();
                local_270 = pcVar10;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                pcVar10 = local_270;
                (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_length_0269cca0);
                pcVar5 = local_1e0;
                if (pcVar10 == (cfstringStruct *)0x0) {
                  uVar7 = local_228;
                  _NSSelectorFromString();
                  FUN_008e6088(pcVar5,uVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_280 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6)
                  ;
                  if ((((ulong)pcVar5 & 1) == 0) ||
                     (pcVar5 = local_280,
                     (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
                     pcVar5 == (cfstringStruct *)0x0)) {
                    local_274 = 0;
                  }
                  else {
                    pcVar10 = local_280;
                    FUN_008ee758(pcVar5);
                    _objc_retainAutoreleasedReturnValue();
                    local_274 = 1;
                    local_180 = pcVar10;
                  }
                  _objc_storeStrong(&local_280,0);
                }
                else {
                  pcVar5 = local_270;
                  FUN_008ee758(pcVar10);
                  _objc_retainAutoreleasedReturnValue();
                  local_274 = 1;
                  local_180 = pcVar5;
                }
                _objc_storeStrong(&local_270,0);
                if (local_274 != 0) goto LAB_008ee3f0;
                local_378 = local_378 + 1;
              } while (local_378 < local_370);
              local_370 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_170,0x10);
              local_378 = (undefined *)0x0;
            } while (local_370 != (undefined *)0x0);
          }
          local_274 = 0;
LAB_008ee3f0:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_274 != 0) goto LAB_008ee484;
        }
        local_320 = local_320 + 1;
      } while (local_320 < local_318);
      local_318 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_f0,0x10)
      ;
      local_320 = (undefined *)0x0;
    } while (local_318 != (undefined *)0x0);
  }
  local_274 = 0;
LAB_008ee484:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_274 == 0) {
    pcVar5 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar5;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    local_288 = pcVar10;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_288;
    (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_450 = &cf___;
    }
    else {
      local_450 = local_288;
      FUN_008ee758(pcVar5);
      _objc_retainAutoreleasedReturnValue();
      local_290 = local_450;
    }
    local_291 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = local_450;
    if (local_291) {
      (*(code *)PTR__objc_release_02578630)(local_290);
    }
    local_274 = 1;
    _objc_storeStrong(&local_288,0);
  }
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1a0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_180);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

