// FUN_00ebdfa4 @ 00ebdfa4

void FUN_00ebdfa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong local_650;
  ulong local_648;
  void *local_550;
  void *local_548;
  ulong local_508;
  ulong local_500;
  ulong local_4c0;
  ulong local_4b8;
  long local_470;
  undefined1 auStack_468 [8];
  long local_460;
  long *local_458;
  long local_428;
  undefined *local_420;
  undefined *local_418;
  undefined4 local_410;
  undefined4 local_40c;
  code *local_408;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  ulong local_3d8;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  ulong local_390;
  long local_388;
  long local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  long local_338;
  long local_330;
  undefined4 local_324;
  long local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  long local_2d8;
  ulong local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [128];
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2b0 = 0;
  _objc_storeStrong(&local_2b0,param_1);
  local_2b8 = 0;
  _objc_storeStrong(&local_2b8,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_2c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_2b8;
  local_2c8 = puVar2;
  FUN_00ec599c();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = local_2b0;
  uVar4 = local_2b8;
  local_2d0 = uVar3;
  FUN_00ec8bd8(local_2b8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00ec8494(uVar12,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_2b0;
  local_2b0 = uVar12;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _memset(auStack_318,0,0x40);
  uVar12 = local_2b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_4b8 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,0x10);
  if (local_4b8 != 0) {
    lVar10 = *local_308;
    local_4c0 = 0;
    do {
      do {
        if (*local_308 - lVar10 != 0) {
          _objc_enumerationMutation(*local_308 - lVar10,uVar12);
        }
        lVar11 = *(long *)(local_310 + local_4c0 * 8);
        local_2d8 = lVar11;
        FUN_00ec135c();
        _objc_retainAutoreleasedReturnValue();
        local_320 = lVar11;
        if (lVar11 == 0) {
          local_324 = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_2c8;
          local_330 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_containsObject__0269cbb8,lVar11);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_addObject__0269d180,local_330);
            (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_addObject__0269d180,local_320);
            local_324 = 0;
          }
          else {
            local_324 = 3;
          }
          _objc_storeStrong(&local_330,0);
        }
        _objc_storeStrong(&local_320,0);
        local_4c0 = local_4c0 + 1;
      } while (local_4c0 < local_4b8);
      local_4b8 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_a8,0x10)
      ;
      local_4c0 = 0;
    } while (local_4b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar12);
  _memset(auStack_378,0,0x40);
  uVar12 = local_2b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_500 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_128,0x10);
  if (local_500 != 0) {
    lVar10 = *local_368;
    local_508 = 0;
    do {
      do {
        if (*local_368 - lVar10 != 0) {
          _objc_enumerationMutation(*local_368 - lVar10,uVar12);
        }
        lVar11 = *(long *)(local_370 + local_508 * 8);
        local_338 = lVar11;
        FUN_00ec90a8(lVar11,local_2d0);
        _objc_retainAutoreleasedReturnValue();
        local_380 = lVar11;
        if (lVar11 == 0) {
          local_324 = 5;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_2c8;
          local_388 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_containsObject__0269cbb8,lVar11);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_addObject__0269d180,local_388);
            (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_addObject__0269d180,local_380);
            local_324 = 0;
          }
          else {
            local_324 = 5;
          }
          _objc_storeStrong(&local_388,0);
        }
        _objc_storeStrong(&local_380,0);
        local_508 = local_508 + 1;
      } while (local_508 < local_500);
      local_500 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_128,0x10
                );
      local_508 = 0;
    } while (local_500 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar12);
  pvVar5 = _memset(auStack_3d0,0,0x40);
  FUN_00ec93ec();
  _objc_retainAutoreleasedReturnValue();
  local_548 = pvVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_548 != (void *)0x0) {
    lVar10 = *local_3c0;
    local_550 = (void *)0x0;
    do {
      do {
        if (*local_3c0 - lVar10 != 0) {
          _objc_enumerationMutation(*local_3c0 - lVar10,pvVar5);
        }
        uVar12 = *(ulong *)(local_3c8 + (long)local_550 * 8);
        local_390 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_2c8;
        local_3d8 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_containsObject__0269cbb8,uVar12);
        if (((ulong)puVar1 & 1) == 0) {
          uVar12 = local_3d8;
          FUN_00ec96fc();
          if ((uVar12 & 1) == 0) {
            local_324 = 7;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_addObject__0269d180,local_3d8);
            puVar1 = local_2c0;
            uVar12 = local_390;
            FUN_00ec135c();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar12);
            local_324 = 0;
          }
        }
        else {
          local_324 = 7;
        }
        _objc_storeStrong(&local_3d8,0);
        local_550 = (void *)((long)local_550 + 1);
      } while (local_550 < local_548);
      local_548 = pvVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,auStack_1a8,0x10
                );
      local_550 = (void *)0x0;
    } while (local_548 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar5);
  puVar1 = local_2c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_2c8,PTR_s_containsObject__0269cbb8,
             &cf_wcr_attach_toolbar_wcr_builtin_attachment_manage);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_addObject__0269d180);
    puVar1 = local_2c0;
    local_218 = &cf_id;
    local_1e0 = &cf_wcr_attach_toolbar_wcr_builtin_attachment_manage;
    local_210 = &cf_title;
    local_1d8 = &cf_DN_t;
    local_208 = &cf_sourceTitle;
    local_1d0 = &cf_DN_t;
    local_200 = &cf_icon;
    local_1c8 = &cf_icons_filled_wrench;
    local_1f8 = &cf_enabled;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = &cf_kind;
    local_1b8 = &cf_toolbar;
    local_1e8 = &cf_action;
    local_1b0 = &cf_wcr_builtin_attachment_manage;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_1c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1e0,&local_218,7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_00ec135c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  pcVar8 = &cf_wcr_attach_;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,
             &cf_toolbar_wcr_builtin_voice_pack);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = &cf_wcr_attach_;
  local_228 = pcVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,
             &cf_toolbar_wcr_builtin_small_signal);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_220 = pcVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_228,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_3e0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar8);
  puVar6 = local_2c0;
  puVar1 = local_3e0;
  local_418 = PTR___NSConcreteGlobalBlock_02578658;
  local_410 = 0xd0800000;
  local_40c = 0;
  local_408 = FUN_00ec98a4;
  local_400 = &DAT_02581d80;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_2c8;
  local_3f8 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_3f0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_418);
  _objc_retainAutoreleasedReturnValue();
  local_3e8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
  if (puVar6 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_2c0,PTR_s_removeObjectsAtIndexes__026a2c98,local_3e8);
  }
  uVar12 = local_2b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_count_0269cfe0);
  if (uVar12 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_420 = puVar1;
    _memset(auStack_468,0,0x40);
    uVar12 = local_2b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_648 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_2a8,0x10);
    if (local_648 != 0) {
      lVar10 = *local_458;
      local_650 = 0;
      do {
        do {
          if (*local_458 - lVar10 != 0) {
            _objc_enumerationMutation(*local_458 - lVar10,uVar12);
          }
          lVar11 = *(long *)(local_460 + local_650 * 8);
          local_428 = lVar11;
          FUN_00ec5d9c(lVar11,local_2d0);
          _objc_retainAutoreleasedReturnValue();
          local_470 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
          if (lVar11 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_420,PTR_s_addObject__0269d180,local_470);
          }
          _objc_storeStrong(&local_470,0);
          local_650 = local_650 + 1;
        } while (local_650 < local_648);
        local_648 = uVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_468,auStack_2a8,
                   0x10);
        local_650 = 0;
      } while (local_648 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar12);
    puVar1 = local_2c0;
    puVar2 = local_2c0;
    FUN_00ec9a20(local_2c0,local_420);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setArray__026a30c0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_420,0);
  }
  puVar1 = local_2c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_324 = 1;
  _objc_storeStrong(&local_3e8);
  _objc_storeStrong(&local_3f0,0);
  _objc_storeStrong(&local_3f8,0);
  _objc_storeStrong(&local_3e0,0);
  _objc_storeStrong(&local_2d0,0);
  _objc_storeStrong(&local_2c8,0);
  _objc_storeStrong(&local_2c0,0);
  _objc_storeStrong(&local_2b8,0);
  _objc_storeStrong(&local_2b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

