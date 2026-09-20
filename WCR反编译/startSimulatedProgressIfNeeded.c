// startSimulatedProgressIfNeeded @ 01126c24

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineProgressToast::startSimulatedProgressIfNeeded
          (WCRefineProgressToast *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  double local_a8;
  uint local_9c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  double local_58;
  double local_50;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_totalCount_026a3130);
  local_39 = 0;
  local_9c = 1;
  if (param_1 == 1) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_simulatedProgressTimer_026af1a0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_9c = 1;
    local_38 = IVar1;
    if (IVar1 == 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_invalidated_026a6d50);
      local_9c = (uint)IVar1;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_9c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayedProgress_026af1b0);
    local_50 = DAT_02323f00;
    local_a8 = in_d0;
    if (in_d0 < DAT_02323f00) {
      local_a8 = DAT_02323f00;
    }
    local_58 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_28,PTR_s_setDisplayedProgress__026af170);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayedProgress_026af1b0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_applyProgress_failedCount_animat_026af1b8,0,1)
    ;
    _objc_initWeak(auStack_60,local_28);
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01126ff8;
    local_70 = &DAT_025833c8;
    _objc_copyWeak(auStack_68,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,puVar2,PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,&local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSimulatedProgressTimer__026af1a8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_simulatedProgressTimer_026af1a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTimer_forMode__026ca4d0,IVar1,
               *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  return;
}

