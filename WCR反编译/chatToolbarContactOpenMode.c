// chatToolbarContactOpenMode @ 02110a54

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatToolbarContactOpenMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar1 & 1) == 0) {
    local_88 = 0;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    if ((long)local_78 < 1) {
      local_78 = 0;
    }
    if ((long)local_78 < 2) {
      local_80 = local_78;
    }
    else {
      local_80 = 1;
    }
    local_88 = local_80;
  }
  _objc_storeStrong(&local_28,0);
  return local_88;
}

