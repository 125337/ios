// FUN_001feef4 @ 001feef4

void FUN_001feef4(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *local_5d0;
  undefined *local_5c8;
  undefined *local_590;
  undefined *local_588;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4a0;
  undefined *local_498;
  undefined8 local_428;
  undefined1 auStack_420 [8];
  long local_418;
  long *local_410;
  undefined8 local_3e0;
  undefined1 auStack_3d8 [8];
  long local_3d0;
  long *local_3c8;
  ulong local_398;
  undefined1 local_389;
  ulong local_388;
  ulong local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  ulong local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  ulong local_2f0;
  undefined *local_2e8;
  long local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  long local_2b8;
  int local_2b0;
  undefined *local_2a0;
  byte local_291;
  long local_290;
  long local_288;
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
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
  local_290 = 0;
  _objc_storeStrong(&local_290,param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_291 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_2a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_290);
  if (((ulong)puVar2 & 1) == 0) {
    local_288 = 0;
    local_2b0 = 1;
  }
  else {
    local_2b8 = 0;
    local_2c8 = 0;
    puVar2 = local_2a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2a0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_290,&local_2c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_2b8,local_2c8);
    local_2c0 = puVar2;
    if ((local_2b8 == 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0),
       puVar2 != (undefined *)0x0)) {
      local_40 = &cf_mp4;
      local_38 = &cf_mov;
      local_30 = &cf_m4v;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_70 = &cf_png;
      local_68 = &cf_jpg;
      local_60 = &cf_jpeg;
      local_58 = &cf_gif;
      local_50 = &cf_bmp;
      local_48 = &cf_webp;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_2d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = 0;
      local_80 = local_2d0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_2d8 = puVar3;
      local_78 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = puVar2;
      _memset(auStack_330,0,0x40);
      puVar2 = local_2e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_498 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_100,0x10
                );
      if (local_498 != (undefined *)0x0) {
        lVar7 = *local_320;
        local_4a0 = (undefined *)0x0;
        do {
          do {
            if (*local_320 - lVar7 != 0) {
              _objc_enumerationMutation(*local_320 - lVar7,puVar2);
            }
            local_2f0 = *(ulong *)(local_328 + (long)local_4a0 * 8);
            _memset(auStack_378,0,0x40);
            puVar3 = local_2c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_4d8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                       auStack_180,0x10);
            if (local_4d8 != (undefined *)0x0) {
              lVar8 = *local_368;
              local_4e0 = (undefined *)0x0;
              do {
                do {
                  if (*local_368 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_368 - lVar8,puVar3);
                  }
                  uVar9 = *(ulong *)(local_370 + (long)local_4e0 * 8);
                  local_338 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_380 = uVar4;
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                  uVar4 = local_2f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_containsObject__0269cbb8,local_380);
                  if ((uVar4 & 1) == 0) {
                    local_2b0 = 5;
                  }
                  else {
                    uVar4 = local_338;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_338,PTR_s_stringByDeletingPathExtension_0269fd18);
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar4;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_388 = uVar9;
                    (*(code *)PTR__objc_release_02578630)(uVar4);
                    uVar4 = local_388;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_388,PTR_s_containsString__0269d0b0,&cf__dark);
                    local_389 = (undefined1)uVar4;
                    if ((((local_291 & 1) == 0) || ((uVar4 & 1) == 0)) &&
                       (((local_291 & 1) != 0 || ((uVar4 & 1) != 0)))) {
                      local_2b0 = 0;
                    }
                    else {
                      lVar5 = local_290;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_290,PTR_s_stringByAppendingPathComponent__026cab30,local_338)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      lVar1 = local_2e0;
                      local_2e0 = lVar5;
                      (*(code *)PTR__objc_release_02578630)(lVar1);
                      local_2b0 = 4;
                    }
                    _objc_storeStrong(&local_388,0);
                  }
                  _objc_storeStrong(&local_380,0);
                  if ((local_2b0 != 0) && (local_2b0 != 5)) goto LAB_001ff68c;
                  local_4e0 = local_4e0 + 1;
                } while (local_4e0 < local_4d8);
                local_4d8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                           auStack_180,0x10);
                local_4e0 = (undefined *)0x0;
              } while (local_4d8 != (undefined *)0x0);
            }
            local_2b0 = 0;
LAB_001ff68c:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            lVar8 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
            if (lVar8 != 0) {
              local_2b0 = 2;
              goto LAB_001ff784;
            }
            local_4a0 = local_4a0 + 1;
          } while (local_4a0 < local_498);
          local_498 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_100,
                     0x10);
          local_4a0 = (undefined *)0x0;
        } while (local_498 != (undefined *)0x0);
      }
      local_2b0 = 0;
LAB_001ff784:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar7 = local_2e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
      if (lVar7 == 0) {
        _memset(auStack_3d8,0,0x40);
        puVar2 = local_2e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_588 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d8,auStack_200,
                   0x10);
        if (local_588 != (undefined *)0x0) {
          lVar7 = *local_3c8;
          local_590 = (undefined *)0x0;
          do {
            do {
              if (*local_3c8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_3c8 - lVar7,puVar2);
              }
              local_398 = *(ulong *)(local_3d0 + (long)local_590 * 8);
              _memset(auStack_420,0,0x40);
              puVar3 = local_2c0;
              (*(code *)PTR__objc_retain_02578638)();
              local_5c8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_420,
                         auStack_280,0x10);
              if (local_5c8 != (undefined *)0x0) {
                lVar8 = *local_410;
                local_5d0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_410 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_410 - lVar8,puVar3);
                    }
                    uVar10 = *(undefined8 *)(local_418 + (long)local_5d0 * 8);
                    local_3e0 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_pathExtension_0269e090);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar10;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_428 = uVar6;
                    (*(code *)PTR__objc_release_02578630)(uVar10);
                    uVar4 = local_398;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_398,PTR_s_containsObject__0269cbb8,local_428);
                    if ((uVar4 & 1) == 0) {
                      local_2b0 = 9;
                    }
                    else {
                      lVar5 = local_290;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_290,PTR_s_stringByAppendingPathComponent__026cab30,local_3e0)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      lVar1 = local_2e0;
                      local_2e0 = lVar5;
                      (*(code *)PTR__objc_release_02578630)(lVar1);
                      local_2b0 = 8;
                    }
                    _objc_storeStrong(&local_428,0);
                    if (local_2b0 != 9) goto LAB_001ffb74;
                    local_5d0 = local_5d0 + 1;
                  } while (local_5d0 < local_5c8);
                  local_5c8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_420,
                             auStack_280,0x10);
                  local_5d0 = (undefined *)0x0;
                } while (local_5c8 != (undefined *)0x0);
              }
              local_2b0 = 0;
LAB_001ffb74:
              (*(code *)PTR__objc_release_02578630)(puVar3);
              lVar8 = local_2e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
              if (lVar8 != 0) {
                local_2b0 = 6;
                goto LAB_001ffc5c;
              }
              local_590 = local_590 + 1;
            } while (local_590 < local_588);
            local_588 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d8,
                       auStack_200,0x10);
            local_590 = (undefined *)0x0;
          } while (local_588 != (undefined *)0x0);
        }
        local_2b0 = 0;
LAB_001ffc5c:
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      lVar7 = local_2e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_288 = lVar7;
      local_2b0 = 1;
      _objc_storeStrong(&local_2e8);
      _objc_storeStrong(&local_2e0,0);
      _objc_storeStrong(&local_2d8,0);
      _objc_storeStrong(&local_2d0,0);
    }
    else {
      local_288 = 0;
      local_2b0 = 1;
    }
    _objc_storeStrong(&local_2c0);
    _objc_storeStrong(&local_2b8,0);
  }
  _objc_storeStrong(&local_2a0);
  _objc_storeStrong(&local_290,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_288);
  return;
}

