// isEffectivelyActive @ 00f21ae8

/* Function Stack Size: 0x10 bytes */

bool WCRefineDoNotDisturbSupport::isEffectivelyActive(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doNotDisturbFeatureEnabled_026a3fc0);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbActive_026abdd8);
    if (((ulong)puVar1 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isInScheduleWindow_026abde0);
      if ((IVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSchedulePaused_026abde8);
        local_11 = ((byte)IVar2 ^ 1) & 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

