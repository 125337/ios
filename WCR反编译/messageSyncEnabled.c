// messageSyncEnabled @ 01fe8a88

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::messageSyncEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  int local_44;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_01fd9510(param_1,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_44 = 0;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
    local_44 = (int)IVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (uint)(local_44 != 0);
}

