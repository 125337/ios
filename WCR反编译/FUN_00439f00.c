// FUN_00439f00 @ 00439f00

void FUN_00439f00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
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
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  local_b8 = _WCRefineGroupAuthorizationDidResolveNotification;
  local_b0 = &cf_WCRefineRemoteUpdateInfoDidChange;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != (undefined *)0x0) {
    lVar4 = *local_f8;
    local_140 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,puVar1);
        }
        puVar3 = local_c0;
        uVar5 = *(undefined8 *)(local_100 + (long)local_140 * 8);
        puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,uVar5,0,puVar2,
                   &PTR___NSConcreteGlobalBlock_0257d3c8);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_140 = (undefined *)0x0;
    } while (local_138 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

