// setLiveCaptureArmed: @ 00fdda70

/* Function Stack Size: 0x14 bytes */

void WCRefineIconNameCaptureSupport::setLiveCaptureArmed_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined1 local_28;
  
  DAT_028e3068 = 1;
  DAT_028e3069 = (byte)param_3 & 1;
  local_28 = 0;
  if ((param_3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEffectivelyEnabled_026ad3a8);
    local_28 = (byte)param_1;
  }
  DAT_028e3050 = local_28 & 1;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

