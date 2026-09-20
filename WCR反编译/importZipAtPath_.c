// importZipAtPath: @ 01e0a668

/* Function Stack Size: 0x18 bytes */

long_long WCRefineSuperFloatBallWarehouseViewController::importZipAtPath_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_538;
  undefined *local_530;
  undefined *local_4e8;
  undefined *local_4e0;
  undefined *local_478;
  undefined *local_470;
  undefined *local_418;
  undefined *local_410;
  undefined *local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  undefined8 local_380;
  byte local_371;
  ulong local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  ulong local_328;
  ID local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  byte local_2c9;
  ulong local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  long_long local_260;
  ulong local_258;
  undefined4 local_24c;
  ulong local_248;
  SEL local_240;
  ID local_238;
  long_long local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_248 = 0;
  local_240 = param_2;
  local_238 = param_1;
  _objc_storeStrong(&local_248,param_3);
  uVar8 = local_248;
  (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
  if (uVar8 == 0) {
    local_230 = 0;
    local_24c = 1;
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_WCRSFBallZip___);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_258 = uVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    uVar8 = local_248;
    FUN_01e0b2fc(local_248,local_258);
    if ((uVar8 & 1) == 0) {
      local_230 = 0;
      local_24c = 1;
    }
    else {
      local_260 = 0;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_268 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_268;
      local_270 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_enumeratorAtPath__026ad0c8,local_258);
      _objc_retainAutoreleasedReturnValue();
      local_278 = puVar3;
      _memset(auStack_2c0,0,0x40);
      puVar3 = local_278;
      (*(code *)PTR__objc_retain_02578638)();
      local_410 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,0x10)
      ;
      if (local_410 != (undefined *)0x0) {
        lVar7 = *local_2b0;
        local_418 = (undefined *)0x0;
        do {
          do {
            if (*local_2b0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_2b0 - lVar7,puVar3);
            }
            uVar8 = *(ulong *)(local_2b8 + (long)local_418 * 8);
            local_280 = uVar8;
            FUN_01e0b5e4();
            if ((uVar8 & 1) == 0) {
              uVar8 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar8);
              uVar8 = local_258;
              if ((uVar4 & 1) != 0) {
                uVar4 = local_280;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_stringByDeletingLastPathComponen_0269fb90);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_stringByAppendingPathComponent__026cab30);
                _objc_retainAutoreleasedReturnValue();
                local_2c8 = uVar8;
                (*(code *)PTR__objc_release_02578630)(uVar4);
                local_2c9 = 0;
                _memset(auStack_318,0,0x40);
                puVar1 = local_270;
                (*(code *)PTR__objc_retain_02578638)();
                local_470 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,
                           auStack_128,0x10);
                if (local_470 != (undefined *)0x0) {
                  lVar9 = *local_308;
                  local_478 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_308 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_308 - lVar9,puVar1);
                      }
                      local_2d8 = *(undefined8 *)(local_310 + (long)local_478 * 8);
                      uVar8 = local_2c8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2c8,PTR_s_hasPrefix__0269d320,local_2d8);
                      if ((uVar8 & 1) != 0) {
                        local_2c9 = 1;
                        local_24c = 4;
                        goto LAB_01e0ab7c;
                      }
                      local_478 = local_478 + 1;
                    } while (local_478 < local_470);
                    local_470 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,
                               auStack_128,0x10);
                    local_478 = (undefined *)0x0;
                  } while (local_470 != (undefined *)0x0);
                }
                local_24c = 0;
LAB_01e0ab7c:
                (*(code *)PTR__objc_release_02578630)(puVar1);
                IVar5 = local_238;
                uVar8 = local_2c8;
                if ((local_2c9 & 1) == 0) {
                  uVar4 = local_2c8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar5,PTR_s_importPetDirectoryAtPath_preferr_026c5cb8,uVar8);
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  puVar1 = local_270;
                  local_320 = IVar5;
                  if (0 < (long)IVar5) {
                    local_260 = local_260 + IVar5;
                    uVar8 = local_2c8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2c8,PTR_s_stringByAppendingString__0269d398,&cf__);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(uVar8);
                  }
                  local_24c = 0;
                }
                else {
                  local_24c = 3;
                }
                _objc_storeStrong(&local_2c8,0);
              }
            }
            local_418 = local_418 + 1;
          } while (local_418 < local_410);
          local_410 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_a8,
                     0x10);
          local_418 = (undefined *)0x0;
        } while (local_410 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar1 = local_268;
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_enumeratorAtPath__026ad0c8,local_258);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_278;
      local_278 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _memset(auStack_368,0,0x40);
      puVar3 = local_278;
      (*(code *)PTR__objc_retain_02578638)();
      local_4e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_1a8,0x10
                );
      if (local_4e0 != (undefined *)0x0) {
        lVar7 = *local_358;
        local_4e8 = (undefined *)0x0;
        do {
          do {
            if (*local_358 - lVar7 != 0) {
              _objc_enumerationMutation(*local_358 - lVar7,puVar3);
            }
            uVar8 = *(ulong *)(local_360 + (long)local_4e8 * 8);
            local_328 = uVar8;
            FUN_01e0b5e4();
            if ((uVar8 & 1) == 0) {
              uVar8 = local_328;
              (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar8;
              FUN_01dfde78();
              (*(code *)PTR__objc_release_02578630)(uVar8);
              if ((uVar4 & 1) != 0) {
                uVar8 = local_258;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_258,PTR_s_stringByAppendingPathComponent__026cab30,local_328);
                _objc_retainAutoreleasedReturnValue();
                local_371 = 0;
                local_370 = uVar8;
                _memset(auStack_3c0,0,0x40);
                puVar1 = local_270;
                (*(code *)PTR__objc_retain_02578638)();
                local_530 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,
                           auStack_228,0x10);
                if (local_530 != (undefined *)0x0) {
                  lVar9 = *local_3b0;
                  local_538 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_3b0 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_3b0 - lVar9,puVar1);
                      }
                      local_380 = *(undefined8 *)(local_3b8 + (long)local_538 * 8);
                      uVar8 = local_370;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_370,PTR_s_hasPrefix__0269d320,local_380);
                      if ((uVar8 & 1) != 0) {
                        local_371 = 1;
                        local_24c = 8;
                        goto LAB_01e0b02c;
                      }
                      local_538 = local_538 + 1;
                    } while (local_538 < local_530);
                    local_530 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,
                               auStack_228,0x10);
                    local_538 = (undefined *)0x0;
                  } while (local_530 != (undefined *)0x0);
                }
                local_24c = 0;
LAB_01e0b02c:
                (*(code *)PTR__objc_release_02578630)(puVar1);
                if ((local_371 & 1) == 0) {
                  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSData_026ce1d0,
                             PTR_s_dataWithContentsOfFile__0269e0b8,local_370);
                  _objc_retainAutoreleasedReturnValue();
                  IVar5 = local_238;
                  uVar8 = local_328;
                  local_3c8 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = local_328;
                  (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar5,PTR_s_saveImportedData_preferredExt_ap_026c5bd0,puVar1,uVar8,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  (*(code *)PTR__objc_release_02578630)(uVar6);
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  if (IVar5 != 0) {
                    local_260 = local_260 + 1;
                  }
                  _objc_storeStrong(&local_3c8,0);
                  local_24c = 0;
                }
                else {
                  local_24c = 7;
                }
                _objc_storeStrong(&local_370,0);
              }
            }
            local_4e8 = local_4e8 + 1;
          } while (local_4e8 < local_4e0);
          local_4e0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_368,auStack_1a8,
                     0x10);
          local_4e8 = (undefined *)0x0;
        } while (local_4e0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,PTR_s_removeItemAtPath_error__0269f910,local_258);
      local_230 = local_260;
      local_24c = 1;
      _objc_storeStrong(&local_278,0);
      _objc_storeStrong(&local_270,0);
      _objc_storeStrong(&local_268,0);
    }
    _objc_storeStrong(&local_258,0);
  }
  _objc_storeStrong(&local_248,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_230;
}

