// FUN_007af768 @ 007af768

void FUN_007af768(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  size_t sVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_time_t dVar8;
  long lVar9;
  double dVar10;
  undefined *local_770;
  undefined *local_768;
  undefined *local_6d0;
  undefined *local_6c8;
  undefined1 auStack_628 [8];
  long local_620;
  long *local_618;
  undefined8 local_5e8;
  undefined1 auStack_5e0 [8];
  long local_5d8;
  long *local_5d0;
  undefined8 local_5a0;
  char *local_598;
  char *local_590;
  uint local_584;
  char *local_580;
  char *local_578;
  undefined8 local_560;
  undefined8 local_558;
  undefined4 local_54c;
  undefined *local_548;
  undefined *local_540;
  undefined1 auStack_538 [128];
  undefined8 local_4b8;
  cfstringStruct *local_4b0;
  undefined1 auStack_4a8 [128];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_560 = param_3;
  local_558 = param_2;
  local_54c = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    _WCRefineTelegramGroupingReloadGateCache();
    FUN_007b0308();
    pcVar4 = "MainSessionMgr";
    _objc_getClass();
    local_578 = pcVar4;
    _MSHookMessageEx(pcVar4,PTR_s_setNormalSessions__026a2f60,FUN_007b047c,&DAT_028ccc00);
    _MSHookMessageEx(local_578,PTR_s_setTotalTopSessionCount__026a81e0,FUN_007b0960,&DAT_028ccc08);
    _MSHookMessageEx(local_578,PTR_s_forwardableSessionEnumerator_026a81e8,FUN_007b0d1c,
                     &DAT_028ccc10);
    pcVar4 = "NewMainFrameViewController";
    _objc_getClass();
    local_580 = pcVar4;
    _MSHookMessageEx(pcVar4,PTR_s_initHeaderLogicAndHeaderView_026a81f0,FUN_007b1138,&DAT_028ccc18);
    _MSHookMessageEx(local_580,PTR_s_viewDidLoad_0269cee8,FUN_007b1248,&DAT_028ccc20);
    _MSHookMessageEx(local_580,PTR_s_viewDidAppear__0269cd50,FUN_007b12bc,&DAT_028ccc28);
    _MSHookMessageEx(local_580,PTR_s_viewDidDisappear__0269de98,FUN_007b1350,&DAT_028ccc30);
    _MSHookMessageEx(local_580,PTR_s_viewDidLayoutSubviews_0269de90,FUN_007b13a8,&DAT_028ccc38);
    _MSHookMessageEx(local_580,PTR_s_updateUnReadCount_026a6770,FUN_007b1b6c,&DAT_028ccc40);
    _MSHookMessageEx(local_580,PTR_s_reloadSessions_026a81f8,FUN_007b1d30,&DAT_028ccc48);
    _MSHookMessageEx(local_580,PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,FUN_007b1dc8,
                     &DAT_028ccc50);
    auStack_428[0] = 0x76;
    auStack_428[1] = 0x40;
    auStack_428[2] = 0x3a;
    local_584 = 3;
    sVar5 = _strlen("@");
    _memcpy(auStack_428 + 3,"@",sVar5);
    sVar5 = _strlen("@");
    local_584 = local_584 + (int)sVar5;
    auStack_428[local_584] = 0;
    _class_addMethod(local_580,PTR_s_wcr_tgHandleSwipeSwitch__026a8200,FUN_007b20d8);
    pcVar4 = "MMTableView";
    _objc_getClass();
    local_590 = pcVar4;
    _MSHookMessageEx(pcVar4,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_007b3828,&DAT_028ccc58)
    ;
    pcVar4 = "MMBaseMultiMenuTableViewCell";
    _objc_getClass();
    local_598 = pcVar4;
    _MSHookMessageEx(pcVar4,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_007b3908,&DAT_028ccc60)
    ;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = _WCRefineTelegramGroupingDidChangeNotification;
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar1,0,puVar3,
               &PTR___NSConcreteGlobalBlock_0257fe50);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = _WCRefineHomeGroupsDidChangeNotification;
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,uVar1,0,puVar3,
               &PTR___NSConcreteGlobalBlock_0257fe70);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_5e0,0,0x40);
    local_4b8 = _WCRefineGroupAuthorizationDidResolveNotification;
    local_4b0 = &cf_WCRefineRemoteUpdateInfoDidChange;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_4b8,
               2);
    _objc_retainAutoreleasedReturnValue();
    local_6c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_6c8 != (undefined *)0x0) {
      lVar9 = *local_5d0;
      local_6d0 = (undefined *)0x0;
      do {
        do {
          if (*local_5d0 - lVar9 != 0) {
            _objc_enumerationMutation(*local_5d0 - lVar9,puVar2);
          }
          local_5a0 = *(undefined8 *)(local_5d8 + (long)local_6d0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_5a0;
          puVar6 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_addObserverForName_object_queue__026ca4b0,uVar1,0,puVar6,
                     &PTR___NSConcreteGlobalBlock_0257fe90);
          _objc_unsafeClaimAutoreleasedReturnValue(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_6d0 = local_6d0 + 1;
        } while (local_6d0 < local_6c8);
        local_6c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_5e0,auStack_4a8,
                   0x10);
        local_6d0 = (undefined *)0x0;
      } while (local_6c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_628,0,0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4000000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 8.0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_548 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_540 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_548,
               2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_768 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_628,auStack_538,0x10);
    if (local_768 != (undefined *)0x0) {
      lVar9 = *local_618;
      local_770 = (undefined *)0x0;
      do {
        do {
          if (*local_618 - lVar9 != 0) {
            _objc_enumerationMutation(*local_618 - lVar9,puVar6);
          }
          local_5e8 = *(undefined8 *)(local_620 + (long)local_770 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_5e8,PTR_s_doubleValue_026ca608);
          dVar10 = dVar10 * 1000000000.0;
          dVar8 = _dispatch_time(0,(long)dVar10);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar8,puVar2,&PTR___NSConcreteGlobalBlock_0257feb0);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_770 = local_770 + 1;
        } while (local_770 < local_768);
        local_768 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_628,auStack_538,
                   0x10);
        local_770 = (undefined *)0x0;
      } while (local_768 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

