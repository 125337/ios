// startIfNeeded @ 00eb79f8

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::startIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  if ((param_1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundEnteredAt_026ab340);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundEnteredAt__026ab318);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bgTaskIdentifier_026ab348);
    if (IVar1 == *(ID *)PTR__UIBackgroundTaskInvalid_02578100) {
      _objc_initWeak(0,auStack_28,local_18);
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00eb7f14;
      local_48 = &DAT_0257be28;
      _objc_copyWeak(auStack_40,auStack_28);
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_beginBackgroundTaskWithExpiratio_026ab358,&local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBgTaskIdentifier__026ab360,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_28);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancelGracePulse_026ab368);
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff8000000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_scheduledTimerWithTimeInterval_t_026a4968,local_18,PTR_s_onGracePulse_026ab370,
               0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setGracePulseTimer__026ab378);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_gracePulseTimer_026ab380);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTimer_forMode__026ca4d0,IVar1,
               *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bgTimer_026ab388);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bgTimer_026ab388);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBgTimer__026ab390,0);
    }
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_timerInterval_026ab398);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_scheduledTimerWithTimeInterval_t_026a4968,local_18,
               PTR_s_onTimer_026ab3a0,0,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBgTimer__026ab390);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bgTimer_026ab388);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTimer_forMode__026ca4d0,IVar1,
               *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

