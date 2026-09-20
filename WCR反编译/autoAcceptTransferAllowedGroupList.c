// autoAcceptTransferAllowedGroupList @ 01fd6730

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::autoAcceptTransferAllowedGroupList(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_68;
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
  SVar2 = local_28;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar3;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = (IVar3 & 1) == 0;
  if (bVar1) {
    local_68 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_68 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

