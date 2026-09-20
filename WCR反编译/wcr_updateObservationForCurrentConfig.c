// wcr_updateObservationForCurrentConfig @ 007235f4

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotWatermarkProcessor::wcr_updateObservationForCurrentConfig
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_50;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  local_50 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    local_50 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8);
      local_50 = (uint)puVar1;
    }
  }
  if (((local_50 & 1) == 0) ||
     (IVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_observingWatermarkAlbumEnhan_026a7878)
     , (IVar2 & 1) != 0)) {
    if (((local_50 & 1) == 0) &&
       (IVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_wcr_observingWatermarkAlbumEnhan_026a7878), (IVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setWcr_observingWatermarkAlbumEn_026a7880,0);
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_resetWatermarkAlbumEnhanceme_026a7890);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setWcr_watermarkAlbumEnhancement_026a7898,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setWcr_observingWatermarkAlbumEn_026a7880,1);
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

