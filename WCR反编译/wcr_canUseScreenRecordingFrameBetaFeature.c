// wcr_canUseScreenRecordingFrameBetaFeature @ 006e8f34

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_canUseScreenRecordingFrameBetaFeature
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hasThemeBoxAutoRedeemPermission_026a6e40);
  return (bool)puVar1;
}

