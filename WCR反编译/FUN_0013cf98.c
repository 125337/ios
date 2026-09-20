// FUN_0013cf98 @ 0013cf98

void FUN_0013cf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  dispatch_time_t dVar5;
  long lVar6;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_278;
  undefined *local_270;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined **local_1a0 [3];
  undefined *local_188;
  undefined *local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [128];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_15c = (undefined4)param_1;
  local_170 = param_3;
  local_168 = param_2;
  _objc_autoreleasePoolPush();
  pcVar1 = "MiYouMessageToolBar";
  _objc_getClass();
  local_178 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0013d620,&DAT_028c86a0);
  }
  FUN_0013d6c4();
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  local_180 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR___NSConcreteGlobalBlock_0257a4d8;
  local_188 = puVar3;
  _objc_retainBlock();
  local_1a0[0] = ppuVar4;
  _memset(auStack_1e8,0,0x40);
  local_c8 = *(undefined8 *)PTR__UIKeyboardWillShowNotification_025781d8;
  local_c0 = *(undefined8 *)PTR__UIKeyboardDidShowNotification_025781b8;
  local_b8 = *(undefined8 *)PTR__UIKeyboardWillHideNotification_025781d0;
  local_b0 = *(undefined8 *)PTR__UIKeyboardDidHideNotification_025781b0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_270 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_270 != (undefined *)0x0) {
    lVar6 = *local_1d8;
    local_278 = (undefined *)0x0;
    do {
      do {
        if (*local_1d8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1d8 - lVar6,puVar2);
        }
        local_1a8 = *(undefined8 *)(local_1e0 + (long)local_278 * 8);
        puVar3 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_addObserverForName_object_queue__026ca4b0,local_1a8,0,local_188,
                   local_1a0[0]);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        local_278 = local_278 + 1;
      } while (local_278 < local_270);
      local_270 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,0x10)
      ;
      local_278 = (undefined *)0x0;
    } while (local_270 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_230,0,0x40);
  local_158 = _WCRefineGroupAuthorizationDidResolveNotification;
  local_150 = &cf_WCRefineRemoteUpdateInfoDidChange;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_158,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_2c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2c0 != (undefined *)0x0) {
    lVar6 = *local_220;
    local_2c8 = (undefined *)0x0;
    do {
      do {
        if (*local_220 - lVar6 != 0) {
          _objc_enumerationMutation(*local_220 - lVar6,puVar2);
        }
        local_1f0 = *(undefined8 *)(local_228 + (long)local_2c8 * 8);
        puVar3 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_addObserverForName_object_queue__026ca4b0,local_1f0,0,local_188,
                   &PTR___NSConcreteGlobalBlock_0257a4f8);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_148,0x10
                );
      local_2c8 = (undefined *)0x0;
    } while (local_2c0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar5 = _dispatch_time(0,2000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar3 = puVar2;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar5,puVar3,&PTR___NSConcreteGlobalBlock_0257a518);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  dVar5 = _dispatch_time(0,8000000000);
  _objc_retainAutoreleaseReturnValue(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar5,puVar2,&PTR___NSConcreteGlobalBlock_0257a538);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_1a0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_autoreleasePoolPop(param_1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

