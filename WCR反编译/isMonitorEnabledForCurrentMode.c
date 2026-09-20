// isMonitorEnabledForCurrentMode @ 00906398

/* Function Stack Size: 0x10 bytes */

bool LogFloatingBall::isMonitorEnabledForCurrentMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_monitorMode_026a9f18);
  if (param_1 == 1) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_11 = local_11 & 1;
  return (uint)local_11;
}

