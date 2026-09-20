// WCR_shouldWatermarkAlbumEnhancementDeferToFrameAlbumPipeline @ 00710344

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameProcessor::WCR_shouldWatermarkAlbumEnhancementDeferToFrameAlbumPipeline
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_50;
  ID local_48;
  undefined4 local_40;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((((ulong)puVar1 & 1) == 0) &&
      (puVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_screenshotFrameAlbumEnhancementE_026a75c8), ((ulong)puVar1 & 1) != 0
      )) && (puVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameEnabled_026a1ef0),
            ((ulong)puVar1 & 1) != 0)) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sharedProcessor_026a6d98);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isDoubleModeTemplate_026a7658);
    if ((IVar2 & 1) == 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
      local_11 = IVar2 != 0;
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_11 = 0;
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

