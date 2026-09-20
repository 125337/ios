// FUN_00699170 @ 00699170

void FUN_00699170(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  long lVar6;
  double dVar7;
  undefined *local_188;
  undefined *local_180;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containerEnabled_026a6540);
  if (((ulong)puVar1 & 1) == 0) {
    local_cc = 1;
  }
  else {
    FUN_00699530();
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 1.0;
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
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_c0,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar6 = *local_110;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,puVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_188 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_doubleValue_026ca608);
          dVar7 = dVar7 * 1000000000.0;
          dVar5 = _dispatch_time(0,(long)dVar7);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar5,puVar2,&PTR___NSConcreteGlobalBlock_0257eac8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_c0,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

