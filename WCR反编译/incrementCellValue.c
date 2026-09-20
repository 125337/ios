// incrementCellValue @ 01ded9d0

/* Function Stack Size: 0x10 bytes */

ID WCRefineStepCountSettingsViewController::incrementCellValue(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined *local_58;
  undefined *local_48;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stepCountIncrementMin_026a7ee8);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountIncrementMax_026a7ef0);
  local_68 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar1 != puVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (puVar1 != puVar2) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

