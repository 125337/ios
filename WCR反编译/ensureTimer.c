// ensureTimer @ 00f5ee08

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineFakeLocationEngine::ensureTimer(WCRefineFakeLocationEngine *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  double in_d0;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [15];
  byte local_41;
  ID local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shouldKeepTimer_026ac778);
  if ((param_1 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimer__026a4970,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentTickInterval_026ac780);
    IVar2 = local_28;
    local_38 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 0;
    bVar1 = false;
    if (IVar2 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = ABS(in_d0 - local_38) < DAT_02323c88;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (!bVar1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLastTickTime__026ac790);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_initWeak(auStack_50,local_28);
      puVar4 = PTR__OBJC_CLASS___NSTimer_026ce210;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_00f5f28c;
      local_60 = &DAT_025833c8;
      _objc_copyWeak(auStack_58,auStack_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,puVar4,PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,&local_78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimer__026a4970);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timer_026a4950);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_addTimer_forMode__026ca4d0,IVar2,
                 *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_50);
    }
  }
  return;
}

