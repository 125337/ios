// targetCellValue @ 01ded864

/* Function Stack Size: 0x10 bytes */

ID WCRefineStepCountSettingsViewController::targetCellValue(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stepCountRandomEnabled_026a7f20);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTarget_026a7f38);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMin_026a7f28);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMax_026a7f30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

