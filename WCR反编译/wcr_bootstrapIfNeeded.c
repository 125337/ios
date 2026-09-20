// wcr_bootstrapIfNeeded @ 00722f90

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotWatermarkProcessor::wcr_bootstrapIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_hasEnabledWatermarkAlbumEnha_026a7870);
  if ((param_1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sharedProcessor_026a6d98);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_updateObservationForCurrentC_026a6da0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

