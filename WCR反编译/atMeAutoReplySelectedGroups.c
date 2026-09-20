// atMeAutoReplySelectedGroups @ 01ff1900

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::atMeAutoReplySelectedGroups(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_01fd9510(param_1,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    IVar2 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
  }
  else {
    IVar2 = local_38;
    FUN_01fee22c();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

