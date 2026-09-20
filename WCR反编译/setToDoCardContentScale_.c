// setToDoCardContentScale: @ 0217c72c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setToDoCardContentScale_(ID param_1,SEL param_2,double param_3)

{
  double dVar1;
  undefined *puVar2;
  SEL SVar3;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323c68;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (local_28 < dVar1) {
    local_28 = dVar1;
  }
  if (3.0 < local_28) {
    local_28 = 3.0;
  }
  local_30 = param_1;
  FUN_020b3fdc(local_28);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_20;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObject_forKey__026ca9e8,puVar2);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

