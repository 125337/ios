// FUN_0092f3cc @ 0092f3cc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0092f3cc(undefined8 param_1)

{
  dispatch_object_t dVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  dispatch_queue_t queue;
  dispatch_object_t dVar8;
  long lVar9;
  double dVar10;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_1;
  local_c8 = param_1;
  FUN_0092f900();
  _NSGetUncaughtExceptionHandler();
  pcVar2 = FUN_0092fa40;
  DAT_028ce398 = param_1;
  _NSSetUncaughtExceptionHandler();
  FUN_0092fda8();
  FUN_0092fe18();
  FUN_0092ff80();
  if (((ulong)pcVar2 & 1) != 0) {
    std::get_terminate();
    DAT_028ce3a0 = pcVar2;
    std::set_terminate(FUN_0092ff8c);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_118,0,0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4000000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4014000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
            );
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 12.0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_198 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_198 != (undefined *)0x0) {
    lVar9 = *local_108;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar9 != 0) {
          _objc_enumerationMutation(*local_108 - lVar9,puVar6);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_1a0 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_doubleValue_026ca608);
        dVar10 = dVar10 * 1000000000.0;
        dVar7 = _dispatch_time(0,(long)dVar10);
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar7,puVar3,&PTR___NSConcreteGlobalBlock_02581190);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  queue = (dispatch_queue_t)PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  dVar8._os_obj =
       (_os_object_s *)
       _dispatch_source_create
                 ((dispatch_source_type_t)PTR___dispatch_source_type_timer_02578698,0,0,queue);
  dVar1 = DAT_028ce3a8;
  DAT_028ce3a8 = (dispatch_object_t)(dispatch_object_t)dVar8._os_obj;
  (*(code *)PTR__objc_release_02578630)(dVar1._os_obj);
  (*(code *)PTR__objc_release_02578630)(queue);
  dVar1 = DAT_028ce3a8;
  if (DAT_028ce3a8._os_obj != (_os_object_s *)0x0) {
    dVar7 = _dispatch_time(0,20000000000);
    _dispatch_source_set_timer((dispatch_source_t)dVar1._os_obj,dVar7,20000000000,1000000000);
    _dispatch_source_set_event_handler(DAT_028ce3a8._os_obj,&PTR___NSConcreteGlobalBlock_025811b0);
    _dispatch_resume(DAT_028ce3a8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

