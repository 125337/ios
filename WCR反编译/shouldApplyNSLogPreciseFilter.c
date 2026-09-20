// shouldApplyNSLogPreciseFilter @ 009064e4

/* Function Stack Size: 0x10 bytes */

bool LogFloatingBall::shouldApplyNSLogPreciseFilter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 local_38;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_activeLogType_026aa060);
  local_38 = 0;
  if (param_1 == 3) {
    local_30 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)puVar1;
  }
  if (param_1 == 3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return (uint)(local_38 & 1);
}

