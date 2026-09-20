// handleScreenshotNotification: @ 0070a968

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineScreenshotFrameProcessor::handleScreenshotNotification_
          (WCRefineScreenshotFrameProcessor *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  double in_d0;
  uint local_e4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  double local_a0;
  double local_90;
  undefined1 local_81;
  undefined *local_80;
  byte local_72;
  byte local_71;
  byte local_61;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((ulong)puVar2 & 1) != 0) {
    local_50 = 1;
    goto LAB_0070b028;
  }
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_e4 = 0;
  local_58 = lVar3;
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefineGestureScreenshot);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = (uint)lVar3;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_e4 & 1) == 0) {
    if (DAT_028cc328 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((0.0 <= in_d0) && (in_d0 < 1.0)) {
        local_50 = 1;
        goto LAB_0070b018;
      }
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotFrameEnabled_026a1ef0);
    local_71 = (byte)puVar2;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    local_72 = (byte)puVar2;
    puVar2 = PTR_WCRefineScreenshotFrameProcessor_026ce8e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScreenshotFrameProcessor_026ce8e0,PTR_s_sharedProcessor_026a6d98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_81 = false;
    if (((local_71 & 1) != 0) && (local_81 = false, local_80 != (undefined *)0x0)) {
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_81 = puVar2 != (undefined *)0x0;
    }
    if (((bool)local_81 == false) && ((local_72 & 1) == 0)) {
      local_50 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = DAT_028cc328;
      DAT_028cc328 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_captureMediaDarkModeSnapshot_026a1f00);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotFrameDelay_026a1f18);
      local_90 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotWatermarkDelay_026a1f10);
      local_a0 = local_90;
      if (((local_72 & 1) != 0) && (local_90 < in_d0)) {
        local_a0 = in_d0;
      }
      if (local_a0 < 1.5) {
        local_a0 = 1.5;
      }
      if (10.0 < local_a0) {
        local_a0 = 10.0;
      }
      dVar5 = _dispatch_time(0,(long)(local_a0 * 1000000000.0));
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_0070b08c;
      local_b0 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = IVar1;
      _dispatch_after(dVar5,puVar2,&local_c8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_a8,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_50 = 1;
  }
LAB_0070b018:
  _objc_storeStrong(&local_58,0);
LAB_0070b028:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

