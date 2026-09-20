// wcr_installScreenshotObserversIfNeeded @ 015e4858

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_installScreenshotObserversIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [15];
  undefined1 local_a1;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [11];
  undefined1 local_75;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_screenshotObsInstalled_026b11d0);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setScreenshotObsInstalled__026b11d8,1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    _objc_initWeak(auStack_40,local_28);
    puVar1 = local_38;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_015e4cc8;
    local_50 = &DAT_025858d0;
    _objc_copyWeak(auStack_48,auStack_40);
    local_75 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_will_take_screenshot,0,0,&local_68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWillShotObserver__026b11f0);
    local_75 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_015e4ed0;
    local_88 = &DAT_025858d0;
    _objc_copyWeak(auStack_80,auStack_40);
    local_a1 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_did_take_screenshot,0,0,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDidShotObserver__026b11f8);
    local_a1 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    uVar2 = *(undefined8 *)PTR__UIApplicationUserDidTakeScreenshotNotification_025780e0;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_015e5084;
    local_b8 = &DAT_025858d0;
    _objc_copyWeak(auStack_b0,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar2,0,0,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSystemShotObserver__026b1208);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

