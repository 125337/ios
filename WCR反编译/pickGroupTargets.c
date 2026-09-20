// pickGroupTargets @ 01d3a7c8

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickGroupTargets(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_348;
  undefined *local_340;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  code *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  undefined8 local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  undefined1 local_1e1;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [8];
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_148;
  undefined1 auStack_140 [8];
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _objc_initWeak(auStack_140,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_1a0,0,0x40);
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_homeGroupIDs_026c4608);
  _objc_retainAutoreleasedReturnValue();
  local_298 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_298 != (undefined *)0x0) {
    lVar5 = *local_190;
    local_2a0 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar5 != 0) {
          _objc_enumerationMutation(*local_190 - lVar5,puVar2);
        }
        uVar6 = *(undefined8 *)(local_198 + (long)local_2a0 * 8);
        local_160 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = PTR_WCRefineScheduledTask_026ce850;
        local_1a8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScheduledTask_026ce850,PTR_s_displayNameForHomeGroupID__026af4d0,
                   uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_148;
        puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
        local_1e0 = PTR___NSConcreteStackBlock_02578660;
        local_1d8 = 0xc2000000;
        local_1d4 = 0;
        local_1d0 = FUN_01d3af6c;
        local_1c8 = &DAT_02579c60;
        local_1b0 = puVar3;
        _objc_copyWeak(auStack_1b8,auStack_140);
        uVar6 = local_1a8;
        local_1e1 = 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_handler__026b9738,puVar3,&local_1e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        local_1e1 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_1c0);
        _objc_destroyWeak(auStack_1b8);
        _objc_storeStrong(&local_1b0,0);
        _objc_storeStrong(&local_1a8,0);
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      local_2a0 = (undefined *)0x0;
    } while (local_298 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_230,0,0x40);
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_allContactTagNames_026c4628);
  _objc_retainAutoreleasedReturnValue();
  local_340 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_340 != (undefined *)0x0) {
    lVar5 = *local_220;
    local_348 = (undefined *)0x0;
    do {
      do {
        if (*local_220 - lVar5 != 0) {
          _objc_enumerationMutation(*local_220 - lVar5,puVar2);
        }
        uVar6 = *(undefined8 *)(local_228 + (long)local_348 * 8);
        local_1f0 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        puVar1 = local_148;
        puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_238 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_268 = PTR___NSConcreteStackBlock_02578660;
        local_260 = 0xc2000000;
        local_25c = 0;
        local_258 = FUN_01d3afd0;
        local_250 = &DAT_02579c60;
        _objc_copyWeak(auStack_240,auStack_140);
        uVar6 = local_238;
        (*(code *)PTR__objc_retain_02578638)();
        local_248 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_actionWithTitle_handler__026b9738,puVar3,&local_268);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_248);
        _objc_destroyWeak(auStack_240);
        _objc_storeStrong(&local_238,0);
        local_348 = local_348 + 1;
      } while (local_348 < local_340);
      local_340 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10
                );
      local_348 = (undefined *)0x0;
    } while (local_340 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feSR_);
  }
  else {
    FUN_01d38174(local_130,&cf_bR_SY_k,&cf_wcrSTGroup,local_148);
  }
  _objc_storeStrong(&local_148,0);
  _objc_destroyWeak(auStack_140);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

