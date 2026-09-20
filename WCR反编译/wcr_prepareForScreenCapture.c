// wcr_prepareForScreenCapture @ 015e59a8

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_prepareForScreenCapture(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_beginScreenshotPassThrough_026b11e0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_captureHidden_026b1278);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCaptureHidden__026b1280,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_cancelCaptureVisualRestore_026b1288);
    _objc_initWeak(auStack_28,local_18);
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_015e5c10;
    local_40 = &DAT_0257be28;
    _objc_copyWeak(auStack_38,auStack_28);
    uVar2 = 0;
    _dispatch_block_create(0,&local_58);
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setCaptureVisualRestoreBlock__026b1230,uVar2);
    dVar3 = _dispatch_time(0,2000000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar3,puVar4,local_30);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_30,0);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

