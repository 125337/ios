// propagateNameplatePathChange:to: @ 010d7cc8

/* Function Stack Size: 0x20 bytes */

long_long WCRefineNameplateHelper::propagateNameplatePathChange_to_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_588;
  undefined *local_580;
  void *local_518;
  void *local_510;
  undefined *local_4c8;
  undefined *local_4c0;
  void *local_458;
  void *local_450;
  cfstringStruct *local_428;
  undefined1 auStack_418 [8];
  long local_410;
  long *local_408;
  ulong local_3d8;
  byte local_3c9;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined1 auStack_3b0 [8];
  long local_3a8;
  long *local_3a0;
  undefined8 local_370;
  undefined *local_368;
  undefined *local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  undefined8 local_318;
  byte local_309;
  undefined *local_308;
  undefined *local_300 [5];
  undefined *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  long_long local_288;
  undefined *local_280;
  bool local_271;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  undefined4 local_25c;
  cfstringStruct *local_258;
  long local_250;
  undefined8 local_248;
  SEL local_240;
  cfstringStruct *local_238;
  long_long local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_248 = 0;
  local_240 = param_2;
  local_238 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_248,param_3);
  local_250 = 0;
  _objc_storeStrong(&local_250,param_4);
  pcVar1 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_normalizedRelativePath__026ae7b8,local_248);
  _objc_retainAutoreleasedReturnValue();
  local_258 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_230 = 0;
    local_25c = 1;
  }
  else {
    lVar7 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
    local_271 = false;
    if (lVar7 == 0) {
      local_428 = &::cf___;
    }
    else {
      local_428 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_238,PTR_s_normalizedRelativePath__026ae7b8,local_250);
      _objc_retainAutoreleasedReturnValue();
      local_270 = local_428;
    }
    local_271 = lVar7 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_268 = local_428;
    if ((local_271 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_270);
    }
    pcVar1 = local_258;
    (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_isEqualToString__0269ccc8,local_268);
    if (((ulong)pcVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_288 = 0;
      local_280 = puVar2;
      pvVar3 = _memset(auStack_2d0,0,0x40);
      FUN_010d8c08();
      _objc_retainAutoreleasedReturnValue();
      local_450 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_450 != (void *)0x0) {
        lVar7 = *local_2c0;
        local_458 = (void *)0x0;
        do {
          do {
            if (*local_2c0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_2c0 - lVar7,pvVar3);
            }
            local_290 = *(undefined8 *)(local_2c8 + (long)local_458 * 8);
            local_2d8 = (undefined *)0x0;
            puVar4 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_valueForKey__0269d128,local_290);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_2d8;
            local_2d8 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_2d8;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((ulong)puVar2 & 1) == 0) {
              local_25c = 3;
            }
            else {
              pcVar1 = local_238;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_238,PTR_s_normalizedRelativePath__026ae7b8,local_2d8);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              if (((ulong)pcVar5 & 1) == 0) {
                local_25c = 3;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_280,PTR_s_setValue_forKey__0269d300,local_268,local_290);
                local_288 = local_288 + 1;
                local_25c = 0;
              }
            }
            _objc_storeStrong(&local_2d8,0);
            local_458 = (void *)((long)local_458 + 1);
          } while (local_458 < local_450);
          local_450 = pvVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_a8,
                     0x10);
          local_458 = (void *)0x0;
        } while (local_450 != (void *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pvVar3);
      puVar2 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_nameplateSpecialUserConfigs_026ae7c8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_300[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)puVar2 & 1) != 0) &&
         (puVar2 = local_300[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_300[0],PTR_s_count_0269cfe0),
         puVar2 != (undefined *)0x0)) {
        puVar2 = local_300[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_300[0],PTR_s_mutableCopy_0269d8a0);
        local_309 = 0;
        local_308 = puVar2;
        _memset(auStack_358,0,0x40);
        puVar2 = local_300[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_4c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_128,
                   0x10);
        if (local_4c0 != (undefined *)0x0) {
          lVar7 = *local_348;
          local_4c8 = (undefined *)0x0;
          do {
            do {
              if (*local_348 - lVar7 != 0) {
                _objc_enumerationMutation(*local_348 - lVar7,puVar2);
              }
              local_318 = *(undefined8 *)(local_350 + (long)local_4c8 * 8);
              puVar4 = local_300[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_300[0],PTR_s_objectForKeyedSubscript__0269d098,local_318);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_360 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
              if (((ulong)puVar4 & 1) == 0) {
                local_25c = 7;
              }
              else {
                local_368 = (undefined *)0x0;
                pvVar3 = _memset(auStack_3b0,0,0x40);
                FUN_010d8c7c();
                _objc_retainAutoreleasedReturnValue();
                local_510 = pvVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (local_510 != (void *)0x0) {
                  lVar8 = *local_3a0;
                  local_518 = (void *)0x0;
                  do {
                    do {
                      if (*local_3a0 - lVar8 != 0) {
                        _objc_enumerationMutation(*local_3a0 - lVar8,pvVar3);
                      }
                      local_370 = *(undefined8 *)(local_3a8 + (long)local_518 * 8);
                      puVar4 = local_360;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_360,PTR_s_objectForKeyedSubscript__0269d098,local_370);
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                      local_3b8 = puVar4;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
                      if (((ulong)puVar4 & 1) == 0) {
                        local_25c = 9;
                      }
                      else {
                        pcVar1 = local_238;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_238,PTR_s_normalizedRelativePath__026ae7b8,local_3b8);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar5 = pcVar1;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                        if (((ulong)pcVar5 & 1) == 0) {
                          local_25c = 9;
                        }
                        else {
                          if (local_368 == (undefined *)0x0) {
                            puVar6 = local_360;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_360,PTR_s_mutableCopy_0269d8a0);
                            puVar4 = local_368;
                            local_368 = puVar6;
                            (*(code *)PTR__objc_release_02578630)(puVar4);
                          }
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_368,PTR_s_setObject_forKeyedSubscript__0269d248,local_268
                                     ,local_370);
                          local_288 = local_288 + 1;
                          local_25c = 0;
                        }
                      }
                      _objc_storeStrong(&local_3b8,0);
                      local_518 = (void *)((long)local_518 + 1);
                    } while (local_518 < local_510);
                    local_510 = pvVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3b0,
                               auStack_1a8,0x10);
                    local_518 = (void *)0x0;
                  } while (local_510 != (void *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(pvVar3);
                if (local_368 != (undefined *)0x0) {
                  puVar4 = local_368;
                  (*(code *)PTR__objc_msgSend_02578628)(local_368,PTR_s_copy_0269d150);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_308,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_318)
                  ;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  local_309 = 1;
                }
                _objc_storeStrong(&local_368,0);
                local_25c = 0;
              }
              _objc_storeStrong(&local_360,0);
              local_4c8 = local_4c8 + 1;
            } while (local_4c8 < local_4c0);
            local_4c0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,
                       auStack_128,0x10);
            local_4c8 = (undefined *)0x0;
          } while (local_4c0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_309 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_280,PTR_s_setNameplateSpecialUserConfigs__026ae7d0,local_308);
        }
        _objc_storeStrong(&local_308,0);
      }
      puVar2 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_nameplateToppedList_026ae7d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_3c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)puVar2 & 1) != 0) &&
         (puVar4 = local_3c0, (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_count_0269cfe0),
         puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088, puVar4 != (undefined *)0x0)) {
        puVar4 = local_3c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
        _objc_retainAutoreleasedReturnValue();
        local_3c9 = 0;
        local_3c8 = puVar2;
        _memset(auStack_418,0,0x40);
        puVar2 = local_3c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_580 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_418,auStack_228,
                   0x10);
        if (local_580 != (undefined *)0x0) {
          lVar7 = *local_408;
          local_588 = (undefined *)0x0;
          do {
            do {
              if (*local_408 - lVar7 != 0) {
                _objc_enumerationMutation(*local_408 - lVar7,puVar2);
              }
              uVar9 = *(ulong *)(local_410 + (long)local_588 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_3d8 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar9 & 1) != 0) {
                pcVar1 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_238,PTR_s_normalizedRelativePath__026ae7b8,local_3d8);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = pcVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                if (((ulong)pcVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_3c8,PTR_s_addObject__0269d180,local_3d8);
                }
                else {
                  local_3c9 = 1;
                  pcVar1 = local_268;
                  (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_length_0269cca0);
                  if ((pcVar1 != (cfstringStruct *)0x0) &&
                     (puVar4 = local_3c8,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_3c8,PTR_s_containsObject__0269cbb8,local_268),
                     ((ulong)puVar4 & 1) == 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_3c8,PTR_s_addObject__0269d180,local_268);
                  }
                }
              }
              local_588 = local_588 + 1;
            } while (local_588 < local_580);
            local_580 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_418,
                       auStack_228,0x10);
            local_588 = (undefined *)0x0;
          } while (local_580 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if ((local_3c9 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_280,PTR_s_setNameplateToppedList__026ae7e0,local_3c8);
          local_288 = local_288 + 1;
        }
        _objc_storeStrong(&local_3c8,0);
      }
      local_230 = local_288;
      local_25c = 1;
      _objc_storeStrong(&local_3c0);
      _objc_storeStrong(local_300,0);
      _objc_storeStrong(&local_280,0);
    }
    else {
      local_230 = 0;
      local_25c = 1;
    }
    _objc_storeStrong(&local_268,0);
  }
  _objc_storeStrong(&local_258);
  _objc_storeStrong(&local_250,0);
  _objc_storeStrong(&local_248,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_230;
}

