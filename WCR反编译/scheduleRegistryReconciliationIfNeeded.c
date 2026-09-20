// scheduleRegistryReconciliationIfNeeded @ 017706d8

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::scheduleRegistryReconciliationIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  long lVar6;
  double dVar7;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  SEL local_d0;
  ID local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_2;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_registryReconciliationScheduled_026b4410);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_setRegistryReconciliationSchedul_026b4418,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4008000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 6.5;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_120,0,0x40);
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_c0,0x10);
    if (local_1b0 != (undefined *)0x0) {
      lVar6 = *local_110;
      local_1b8 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,puVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_1b8 * 8);
          _objc_initWeak(auStack_128,local_c8);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_doubleValue_026ca608);
          dVar7 = dVar7 * 1000000000.0;
          dVar5 = _dispatch_time(0,(long)dVar7);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_01770ac4;
          local_148 = &DAT_0257be28;
          _objc_copyWeak();
          _dispatch_after(dVar5,puVar2,&local_160);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_destroyWeak(auStack_140);
          _objc_destroyWeak(auStack_128);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_c0,
                   0x10);
        local_1b8 = (undefined *)0x0;
      } while (local_1b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

