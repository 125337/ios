// doNotDisturbScheduleEndMinutes @ 01ff3538

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::doNotDisturbScheduleEndMinutes(ID param_1,SEL param_2)

{
  dword *pdVar1;
  undefined *puVar2;
  dword *pdVar3;
  dword *local_38;
  dword *local_30;
  dword *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (dword *)param_1;
  FUN_01fd9510(param_1,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = (dword *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((param_1 & 1) == 0) {
    pdVar3 = (dword *)PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1e0);
    _objc_retainAutoreleasedReturnValue();
    pdVar1 = local_30;
    local_30 = pdVar3;
    (*(code *)PTR__objc_release_02578630)(pdVar1);
    FUN_01fd95c0(local_28,local_20,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if (((long)local_38 < 0) || (0x59f < (long)local_38)) {
    local_38 = &section_000001a8.reloff;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

