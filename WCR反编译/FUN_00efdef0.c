// FUN_00efdef0 @ 00efdef0

void FUN_00efdef0(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_468;
  undefined *local_460;
  undefined *local_410;
  undefined *local_408;
  undefined *local_398;
  undefined *local_390;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  undefined8 local_2a8;
  cfstringStruct *local_2a0 [2];
  char *local_290 [3];
  char *local_278;
  char *local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  char *local_218;
  undefined *local_210;
  char *local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined **local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar2 = DAT_028e2ad8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if (DAT_028e2ad8 == (undefined *)0x0) {
    _WCRChatToolbarEnsureRegistrationHost();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1c1 = 0;
    ppuVar4 = &local_200;
    local_200 = PTR___NSConcreteStackBlock_02578660;
    local_1f8 = 0xc2000000;
    local_1f4 = 0;
    local_1f0 = FUN_00efece4;
    local_1e8 = &DAT_02582128;
    local_1c0 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_1b8;
    local_1e0 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar2;
    _objc_retainBlock();
    pcVar5 = "MiYouConfig";
    local_1d0 = ppuVar4;
    _objc_getClass();
    local_208 = pcVar5;
    if ((pcVar5 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_sharedConfig_026ab9a0),
       ((ulong)pcVar5 & 1) != 0)) {
      local_1c1 = 1;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_208;
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_sharedConfig_026ab9a0);
      _objc_retainAutoreleasedReturnValue();
      local_218 = pcVar5;
      FUN_00eee4f4(pcVar5,&cf_toolActions);
      _objc_retainAutoreleasedReturnValue();
      FUN_00eff184();
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      _memset(auStack_260,0,0x40);
      puVar2 = local_210;
      (*(code *)PTR__objc_retain_02578638)();
      local_390 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,0x10)
      ;
      if (local_390 != (undefined *)0x0) {
        lVar8 = *local_250;
        local_398 = (undefined *)0x0;
        do {
          do {
            if (*local_250 - lVar8 != 0) {
              _objc_enumerationMutation(*local_250 - lVar8,puVar2);
            }
            local_220 = *(undefined8 *)(local_258 + (long)local_398 * 8);
            (*(code *)local_1d0[2])(local_1d0,local_220,&cf_MiYou);
            local_398 = local_398 + 1;
          } while (local_398 < local_390);
          local_390 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,
                     0x10);
          local_398 = (undefined *)0x0;
        } while (local_390 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_218);
      _objc_storeStrong(&local_210,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "MYActionsViewController";
    local_268 = puVar2;
    _objc_getClass();
    local_270 = pcVar5;
    if (pcVar5 != (char *)0x0) {
      _objc_alloc_init();
      local_278 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_initData_0269ec58);
      if (((ulong)pcVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_initData_0269ec58);
      }
      pcVar5 = local_278;
      FUN_00eee4f4(local_278,&cf_dataSource);
      _objc_retainAutoreleasedReturnValue();
      local_290[0] = pcVar5;
      FUN_00eff184(pcVar5,local_268);
      _objc_storeStrong(local_290);
      _objc_storeStrong(&local_278,0);
    }
    pcVar1 = &cf_MiYou;
    if ((local_1c1 & 1) == 0) {
      pcVar1 = &cf_lQcS;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_2a0[0] = pcVar1;
    _memset(auStack_2e8,0,0x40);
    puVar2 = local_268;
    (*(code *)PTR__objc_retain_02578638)();
    local_408 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,0x10);
    if (local_408 != (undefined *)0x0) {
      lVar8 = *local_2d8;
      local_410 = (undefined *)0x0;
      do {
        do {
          if (*local_2d8 - lVar8 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar8,puVar2);
          }
          local_2a8 = *(undefined8 *)(local_2e0 + (long)local_410 * 8);
          (*(code *)local_1d0[2])(local_1d0,local_2a8,local_2a0[0]);
          local_410 = local_410 + 1;
        } while (local_410 < local_408);
        local_408 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,
                   0x10);
        local_410 = (undefined *)0x0;
      } while (local_408 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)();
    local_2f0 = (undefined *)0x0;
    FUN_00eef27c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    _objc_sync_enter();
    FUN_00eef27c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = local_2f0;
    local_2f0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_sync_exit(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_338,0,0x40);
    puVar2 = local_2f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_460 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,0x10);
    if (local_460 != (undefined *)0x0) {
      lVar8 = *local_328;
      local_468 = (undefined *)0x0;
      do {
        do {
          if (*local_328 - lVar8 != 0) {
            _objc_enumerationMutation(*local_328 - lVar8,puVar2);
          }
          local_2f8 = *(undefined8 *)(local_330 + (long)local_468 * 8);
          (*(code *)local_1d0[2])(local_1d0,local_2f8,&cf_lQcS);
          local_468 = local_468 + 1;
        } while (local_468 < local_460);
        local_460 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,
                   0x10);
        local_468 = (undefined *)0x0;
      } while (local_460 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_copy_0269d150);
    puVar2 = DAT_028e2ad8;
    DAT_028e2ad8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar2;
    _objc_storeStrong(&local_2f0);
    _objc_storeStrong(local_2a0,0);
    _objc_storeStrong(&local_268,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1b8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

