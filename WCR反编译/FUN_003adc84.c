// FUN_003adc84 @ 003adc84

void FUN_003adc84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  long lVar5;
  double dVar6;
  undefined *local_270;
  undefined *local_268;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [128];
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _WCRefineHomeGroupingReloadGateCache();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar1;
  _memset(auStack_198,0,0x40);
  local_b8 = _WCRefineGroupAuthorizationDidResolveNotification;
  local_b0 = &cf_WCRefineRemoteUpdateInfoDidChange;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_200 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_200 != (undefined *)0x0) {
    lVar5 = *local_188;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_188 - lVar5 != 0) {
          _objc_enumerationMutation(*local_188 - lVar5,puVar1);
        }
        local_158 = *(undefined8 *)(local_190 + (long)local_208 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_addObserverForName_object_queue__026ca4b0,local_158,0,0,
                   &PTR___NSConcreteGlobalBlock_0257c9c8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_1e0,0,0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4000000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 8.0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_268 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_138,0x10);
  if (local_268 != (undefined *)0x0) {
    lVar5 = *local_1d0;
    local_270 = (undefined *)0x0;
    do {
      do {
        if (*local_1d0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar5,puVar3);
        }
        local_1a0 = *(undefined8 *)(local_1d8 + (long)local_270 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_doubleValue_026ca608);
        dVar6 = dVar6 * 1000000000.0;
        dVar4 = _dispatch_time(0,(long)dVar6);
        puVar1 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar4,puVar1,&PTR___NSConcreteGlobalBlock_0257c9e8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_138,0x10
                );
      local_270 = (undefined *)0x0;
    } while (local_268 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

