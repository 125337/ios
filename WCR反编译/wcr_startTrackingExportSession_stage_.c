// wcr_startTrackingExportSession:stage: @ 006fe498

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_startTrackingExportSession_stage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  uint local_60;
  undefined1 local_59;
  ID local_58;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_59 = 0;
  bVar3 = true;
  uVar1 = local_38 != 0;
  if ((bool)uVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar4 == 0;
    local_59 = uVar1;
    local_58 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_59;
  }
  local_59 = uVar1;
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_stopTrackingExportProgress_026a7170);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_resetExportDebugCountersForS_026a72e0,local_40);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323e38);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_initWeak(auStack_68,local_28);
    _objc_initWeak(auStack_70,local_38);
    puVar5 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_006fea68;
    local_90 = &DAT_0257f1d8;
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_copyWeak(auStack_78,auStack_70);
    uVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,puVar5,PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setExportProgressTimer__026a7328);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_exportProgressTimer_026a7330);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_addTimer_forMode__026ca4d0,IVar4,
               *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  local_60 = (uint)bVar3;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

