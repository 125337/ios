// applyFrameToImageConsideringDoubleModeCache: @ 00716788

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineScreenshotFrameProcessor::applyFrameToImageConsideringDoubleModeCache_
          (WCRefineScreenshotFrameProcessor *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  undefined *local_98;
  undefined *local_90;
  ID local_88;
  ID local_80 [2];
  byte local_69;
  ID local_68;
  undefined *local_50;
  undefined4 local_44;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_28 = 0;
    local_44 = 1;
    goto LAB_00716d5c;
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  IVar3 = local_30;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cachedFirstScreenshot_026a7660);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar3 != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cachedFirstScreenshotTime_026a7668);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    bVar1 = IVar4 != 0;
    local_68 = IVar4;
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_50;
  if (bVar1) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cachedFirstScreenshotTime_026a7668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_timeIntervalSinceDate__0269cb78);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (30.0 < in_d0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clearDoubleModeCache_026a7678);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameShowToast_026a1ed0);
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showFrameToast__026a7620,&::cf___);
      }
      _objc_storeStrong(&local_90,0);
      goto LAB_00716bfc;
    }
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cachedFirstScreenshot_026a7660);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_30;
    local_80[0] = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_applyFrameToImage_secondImage__026a7670,IVar3,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clearDoubleModeCache_026a7678);
    local_28 = local_40;
    IVar3 = local_88;
    if ((local_88 == 0) || (local_88 == local_80[0])) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar3;
    }
    local_44 = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(local_80,0);
  }
  else {
LAB_00716bfc:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setCachedFirstScreenshot__026a7698,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCachedFirstScreenshotAsset__026a76a0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setCachedFirstScreenshotLocalIde_026a76a8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setCachedFirstScreenshotTime__026a76b0,local_50);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameShowToast_026a1ed0);
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showFrameToast__026a7620,&cf__OX___);
    }
    local_28 = 0;
    local_44 = 1;
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_00716d5c:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

