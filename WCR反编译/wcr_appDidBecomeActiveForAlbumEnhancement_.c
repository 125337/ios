// wcr_appDidBecomeActiveForAlbumEnhancement: @ 0072664c

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotWatermarkProcessor::wcr_appDidBecomeActiveForAlbumEnhancement_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
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
  if ((((((ulong)puVar1 & 1) == 0) &&
       (puVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotWatermarkEnabled_026a1ee0),
       ((ulong)puVar1 & 1) != 0)) &&
      (puVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8), ((ulong)puVar1 & 1) != 0
      )) && ((IVar2 = local_18,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_18,PTR_s_wcr_hasAnyScreenshotWatermarkLay_026a79e0), (IVar2 & 1) != 0
             && (IVar2 = local_18,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_18,PTR_s_wcr_shouldDeferWatermarkAlbumSca_026a79e8),
                (IVar2 & 1) == 0)))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_processWatermarkAlbumEnhancement_026a79f0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

