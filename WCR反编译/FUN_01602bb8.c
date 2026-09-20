// FUN_01602bb8 @ 01602bb8

void FUN_01602bb8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR___NSConcreteGlobalBlock_025875a8;
  local_c0 = puVar1;
  _objc_retainBlock();
  local_c8 = ppuVar2;
  _memset(auStack_110,0,0x40);
  local_b8 = _WCRefineGroupAuthorizationDidResolveNotification;
  local_b0 = &cf_WCRefineRemoteUpdateInfoDidChange;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != (undefined *)0x0) {
    lVar6 = *local_100;
    local_138 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,puVar1);
        }
        puVar5 = local_c0;
        uVar7 = *(undefined8 *)(local_108 + (long)local_138 * 8);
        puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
        local_d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_addObserverForName_object_queue__026ca4b0,uVar7,0,puVar3,local_c8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_138 = (undefined *)0x0;
    } while (local_130 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar4 = _dispatch_time(0,2000000000);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar5 = puVar1;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar4,puVar5,&PTR___NSConcreteGlobalBlock_025875c8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  dVar4 = _dispatch_time(0,8000000000);
  _objc_retainAutoreleaseReturnValue(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar4,puVar1,&PTR___NSConcreteGlobalBlock_025875e8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

