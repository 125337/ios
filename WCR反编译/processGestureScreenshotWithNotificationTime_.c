// processGestureScreenshotWithNotificationTime: @ 00712518

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameProcessor::processGestureScreenshotWithNotificationTime_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  double dVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  ID local_70;
  double local_68;
  undefined *local_60;
  undefined1 local_56;
  byte local_55;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  dVar1 = DAT_02323da8;
  local_38 = 0;
  dVar6 = DAT_02323da8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_screenshotFrameEnabled_026a1ef0);
    local_55 = (byte)puVar3;
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotFrameGestureEnabled_026a1ef8);
    local_56 = SUB81(puVar3,0);
    if (((local_55 & 1) == 0) || (((ulong)puVar3 & 1) == 0)) {
      local_3c = 1;
    }
    else {
      puVar3 = PTR_WCRefineScreenshotFrameProcessor_026ce8e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScreenshotFrameProcessor_026ce8e0,PTR_s_sharedProcessor_026a6d98);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_60 == (undefined *)0x0) ||
         (puVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         puVar3 == (undefined *)0x0)) {
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotFrameDelay_026a1f18);
        local_68 = dVar6;
        if (dVar6 < dVar1) {
          local_68 = dVar1;
        }
        if (10.0 < local_68) {
          local_68 = 10.0;
        }
        dVar5 = _dispatch_time(0,(long)(local_68 * 1000000000.0));
        puVar3 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_38;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_007128d0;
        local_80 = &DAT_025791c0;
        local_70 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = lVar2;
        _dispatch_after(dVar5,puVar3,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_78,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

