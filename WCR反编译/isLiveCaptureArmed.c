// isLiveCaptureArmed @ 00fdd948

/* Function Stack Size: 0x10 bytes */

bool WCRefineIconNameCaptureSupport::isLiveCaptureArmed(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_21 = false;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEffectivelyEnabled_026ad3a8);
  if ((param_1 & 1) != 0) {
    bVar1 = (DAT_028e3068 & 1) == 0;
    if (bVar1) {
      local_30 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = (uint)puVar2;
    }
    else {
      local_38 = DAT_028e3069 & 1;
    }
    local_21 = local_38 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
  }
  DAT_028e3050 = local_21;
  return (uint)local_21;
}

