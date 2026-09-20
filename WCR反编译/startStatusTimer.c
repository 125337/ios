// startStatusTimer @ 0195509c

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::startStatusTimer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_statusTimer) == 0) {
    local_20 = param_2;
    local_18 = param_1;
    _objc_initWeak(auStack_28,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01955278;
    local_38 = &DAT_025833c8;
    _objc_copyWeak(auStack_30,auStack_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,puVar1,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,&local_50
              );
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(local_18 + (long)_statusTimer);
    *(undefined8 *)(local_18 + (long)_statusTimer) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

