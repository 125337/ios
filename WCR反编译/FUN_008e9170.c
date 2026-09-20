// FUN_008e9170 @ 008e9170

void FUN_008e9170(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  undefined *local_780;
  undefined *local_778;
  undefined *local_728;
  undefined *local_720;
  undefined *local_6f8;
  cfstringStruct *local_6e0;
  undefined *local_5d0;
  undefined *local_5c8;
  undefined *local_578;
  undefined *local_570;
  undefined *local_548;
  cfstringStruct *local_530;
  cfstringStruct *local_4f0;
  undefined1 auStack_4e8 [8];
  long local_4e0;
  long *local_4d8;
  undefined8 local_4a8;
  byte local_499;
  undefined *local_498;
  byte local_489;
  cfstringStruct *local_488;
  undefined1 auStack_480 [8];
  long local_478;
  long *local_470;
  cfstringStruct *local_440;
  undefined *local_438;
  cfstringStruct *local_430;
  cfstringStruct *local_428;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  int local_40c;
  cfstringStruct *local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  undefined8 local_3c0;
  byte local_3b1;
  undefined *local_3b0;
  byte local_3a1;
  cfstringStruct *local_3a0;
  undefined1 auStack_398 [8];
  long local_390;
  long *local_388;
  cfstringStruct *local_358;
  undefined *local_340;
  undefined8 *local_338;
  undefined *local_330;
  cfstringStruct *local_328;
  cfstringStruct *local_320;
  undefined8 local_318;
  undefined1 auStack_310 [128];
  cfstringStruct *local_290;
  undefined *local_288;
  undefined1 auStack_280 [128];
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [128];
  cfstringStruct *local_f8;
  undefined *local_f0;
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
  local_328 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_328,param_1);
  local_330 = (undefined *)0x0;
  _objc_storeStrong(&local_330,param_2);
  local_338 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_338 = &cf___;
  }
  local_68 = &cf_m_nsAppMediaDataUrl;
  local_60 = &cf_m_nsAppMediaLowBandDataUrl;
  local_58 = &cf_musicDataUrl;
  local_50 = &cf_dataUrl;
  local_48 = &cf_songPlayUrl;
  local_40 = &cf_playUrl;
  local_38 = &cf_m_nsDataUrl;
  local_30 = &cf_downloadUrl;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  local_340 = puVar4;
  _memset(auStack_398,0,0x40);
  local_3a1 = 0;
  bVar1 = local_328 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_530 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_3a0 = local_530;
  }
  else {
    local_530 = local_328;
  }
  local_f8 = local_530;
  local_3b1 = 0;
  bVar2 = local_330 == (undefined *)0x0;
  local_3a1 = bVar1;
  if (bVar2) {
    local_548 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_3b0 = local_548;
  }
  else {
    local_548 = local_330;
  }
  local_f0 = local_548;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_3b1 = bVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,2);
  _objc_retainAutoreleasedReturnValue();
  if ((local_3b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_3b0);
  }
  if ((local_3a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_3a0);
  }
  local_570 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_e8,0x10);
  if (local_570 != (undefined *)0x0) {
    lVar7 = *local_388;
    local_578 = (undefined *)0x0;
    do {
      do {
        if (*local_388 - lVar7 != 0) {
          _objc_enumerationMutation(*local_388 - lVar7,puVar4);
        }
        pcVar8 = *(cfstringStruct **)(local_390 + (long)local_578 * 8);
        pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
        local_358 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar8 != pcVar5) {
          _memset(auStack_400,0,0x40);
          puVar3 = local_340;
          (*(code *)PTR__objc_retain_02578638)();
          local_5c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_178,
                     0x10);
          if (local_5c8 != (undefined *)0x0) {
            lVar9 = *local_3f0;
            local_5d0 = (undefined *)0x0;
            do {
              do {
                if (*local_3f0 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_3f0 - lVar9,puVar3);
                }
                pcVar5 = local_358;
                local_3c0 = *(undefined8 *)(local_3f8 + (long)local_5d0 * 8);
                puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_180 = local_3c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_180,1);
                _objc_retainAutoreleasedReturnValue();
                FUN_008eb4dc();
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = pcVar5;
                FUN_008efb90();
                _objc_retainAutoreleasedReturnValue();
                local_408 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                pcVar5 = local_408;
                (*(code *)PTR__objc_msgSend_02578628)(local_408,PTR_s_length_0269cca0);
                if (pcVar5 == (cfstringStruct *)0x0) {
                  local_40c = 5;
                }
                else {
                  if (local_338 != (undefined8 *)0x0) {
                    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf______);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_autorelease();
                    *local_338 = puVar6;
                  }
                  pcVar5 = local_408;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_320 = pcVar5;
                  local_40c = 1;
                }
                _objc_storeStrong(&local_408,0);
                if (local_40c != 5) goto LAB_008e9920;
                local_5d0 = local_5d0 + 1;
              } while (local_5d0 < local_5c8);
              local_5c8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,
                         auStack_178,0x10);
              local_5d0 = (undefined *)0x0;
            } while (local_5c8 != (undefined *)0x0);
          }
          local_40c = 0;
LAB_008e9920:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_40c != 0) goto LAB_008e99b4;
        }
        local_578 = local_578 + 1;
      } while (local_578 < local_570);
      local_570 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_398,auStack_e8,0x10)
      ;
      local_578 = (undefined *)0x0;
    } while (local_570 != (undefined *)0x0);
  }
  local_40c = 0;
LAB_008e99b4:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar5 = local_328;
  if (local_40c == 0) {
    local_190 = &cf_m_nsContent;
    local_188 = &cf_content;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_190,
               2);
    _objc_retainAutoreleasedReturnValue();
    FUN_008eb4dc();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar5;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    local_418 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = local_418;
    local_420 = &cf___;
    local_1d0 = &cf_dataurl;
    local_1c8 = &cf_lowdataurl;
    local_1c0 = &cf_musicdataurl;
    local_1b8 = &cf_songurl;
    local_1b0 = &cf_songplayurl;
    local_1a8 = &cf_playurl;
    local_1a0 = &cf_lowurl;
    local_198 = &cf_url;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1d0,
               8);
    _objc_retainAutoreleasedReturnValue();
    local_430 = local_420;
    FUN_008ef444(pcVar5,puVar4,&local_430);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_420,local_430);
    local_428 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar8 = local_428;
    (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_length_0269cca0);
    pcVar5 = local_420;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_200 = &cf_m_nsAppMediaUrl;
      local_1f8 = &cf_m_nsAppMediaLowUrl;
      local_1f0 = &cf_mediaUrl;
      local_1e8 = &cf_musicUrl;
      local_1e0 = &cf_m_url;
      local_1d8 = &cf_url;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_200,6);
      _objc_retainAutoreleasedReturnValue();
      local_438 = puVar4;
      _memset(auStack_480,0,0x40);
      local_489 = 0;
      bVar1 = local_328 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_6e0 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_488 = local_6e0;
      }
      else {
        local_6e0 = local_328;
      }
      local_290 = local_6e0;
      local_499 = 0;
      bVar2 = local_330 == (undefined *)0x0;
      local_489 = bVar1;
      if (bVar2) {
        local_6f8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_498 = local_6f8;
      }
      else {
        local_6f8 = local_330;
      }
      local_288 = local_6f8;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_499 = bVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_290,2);
      _objc_retainAutoreleasedReturnValue();
      if ((local_499 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_498);
      }
      if ((local_489 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_488);
      }
      local_720 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_480,auStack_280,0x10
                );
      if (local_720 != (undefined *)0x0) {
        lVar7 = *local_470;
        local_728 = (undefined *)0x0;
        do {
          do {
            if (*local_470 - lVar7 != 0) {
              _objc_enumerationMutation(*local_470 - lVar7,puVar4);
            }
            pcVar8 = *(cfstringStruct **)(local_478 + (long)local_728 * 8);
            pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSNull_026ce0e8;
            local_440 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (pcVar8 != pcVar5) {
              _memset(auStack_4e8,0,0x40);
              puVar3 = local_438;
              (*(code *)PTR__objc_retain_02578638)();
              local_778 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4e8,
                         auStack_310,0x10);
              if (local_778 != (undefined *)0x0) {
                lVar9 = *local_4d8;
                local_780 = (undefined *)0x0;
                do {
                  do {
                    if (*local_4d8 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_4d8 - lVar9,puVar3);
                    }
                    pcVar5 = local_440;
                    local_4a8 = *(undefined8 *)(local_4e0 + (long)local_780 * 8);
                    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    local_318 = local_4a8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_318,1);
                    _objc_retainAutoreleasedReturnValue();
                    FUN_008eb4dc();
                    _objc_retainAutoreleasedReturnValue();
                    pcVar8 = pcVar5;
                    FUN_008efb90();
                    _objc_retainAutoreleasedReturnValue();
                    local_4f0 = pcVar8;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    pcVar5 = local_4f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_4f0,PTR_s_length_0269cca0);
                    if (pcVar5 == (cfstringStruct *)0x0) {
                      local_40c = 9;
                    }
                    else {
                      if (local_338 != (undefined8 *)0x0) {
                        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,
                                   PTR_s_stringWithFormat__0269cca8,&cf_fallback______);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_autorelease();
                        *local_338 = puVar6;
                      }
                      pcVar5 = local_4f0;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_320 = pcVar5;
                      local_40c = 1;
                    }
                    _objc_storeStrong(&local_4f0,0);
                    if (local_40c != 9) goto LAB_008ea3e4;
                    local_780 = local_780 + 1;
                  } while (local_780 < local_778);
                  local_778 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4e8,
                             auStack_310,0x10);
                  local_780 = (undefined *)0x0;
                } while (local_778 != (undefined *)0x0);
              }
              local_40c = 0;
LAB_008ea3e4:
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (local_40c != 0) goto LAB_008ea478;
            }
            local_728 = local_728 + 1;
          } while (local_728 < local_720);
          local_720 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_480,auStack_280,
                     0x10);
          local_728 = (undefined *)0x0;
        } while (local_720 != (undefined *)0x0);
      }
      local_40c = 0;
LAB_008ea478:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_40c == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_320 = &cf___;
        local_40c = 1;
      }
      _objc_storeStrong(&local_438,0);
    }
    else {
      if (local_338 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_338 = pcVar5;
      }
      pcVar5 = local_428;
      (*(code *)PTR__objc_retain_02578638)();
      local_320 = pcVar5;
      local_40c = 1;
    }
    _objc_storeStrong(&local_428);
    _objc_storeStrong(&local_420,0);
    _objc_storeStrong(&local_418,0);
  }
  _objc_storeStrong(&local_340);
  _objc_storeStrong(&local_330,0);
  _objc_storeStrong(&local_328,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_320);
  return;
}

