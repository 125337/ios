// isInScheduleWindow @ 00f216d0

/* Function Stack Size: 0x10 bytes */

bool WCRefineDoNotDisturbSupport::isInScheduleWindow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doNotDisturbScheduleEnabled_026abdb8);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    FUN_00f218b4();
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbScheduleStartMinutes_026abdc0);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doNotDisturbScheduleEndMinutes_026abdc8);
    FUN_00f217c8(puVar1,puVar2,puVar3);
    local_11 = (byte)puVar1 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

