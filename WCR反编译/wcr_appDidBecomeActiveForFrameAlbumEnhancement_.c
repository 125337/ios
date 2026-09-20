// wcr_appDidBecomeActiveForFrameAlbumEnhancement: @ 007105a8

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameProcessor::wcr_appDidBecomeActiveForFrameAlbumEnhancement_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((((ulong)puVar1 & 1) == 0) &&
      (puVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameEnabled_026a1ef0),
      ((ulong)puVar1 & 1) != 0)) &&
     (puVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameAlbumEnhancementE_026a75c8)
     , ((ulong)puVar1 & 1) != 0)) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      local_40 = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDoubleModeTemplate_026a7658);
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_processAlbumEnhancementScanFromL_026a76e0);
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

