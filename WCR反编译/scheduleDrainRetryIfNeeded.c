// scheduleDrainRetryIfNeeded @ 00ff4740

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertDanmakuPresenter::scheduleDrainRetryIfNeeded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  code *local_40;
  ID local_38;
  undefined1 local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRecords_026ad698);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_29 = 0;
  bVar2 = true;
  uVar1 = IVar3 != 0;
  if ((bool)uVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drainRetryTimer_026ad708);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 != 0;
    local_29 = uVar1;
    local_28 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = local_18;
  if (!bVar2) {
    local_60 = 0;
    local_50 = 0x32000000;
    local_4c = 0x30;
    local_48 = FUN_00ff2768;
    local_40 = FUN_00ff27bc;
    local_58 = &local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00ff4994;
    local_70 = &DAT_02583f30;
    puVar4 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_68 = &local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323ec8,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_scheduledTimerWithTimeInterval_r_026ca840,0,&local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDrainRetryTimer__026ad710);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    __Block_object_dispose(&local_60,8);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

