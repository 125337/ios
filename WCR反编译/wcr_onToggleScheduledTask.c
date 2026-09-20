// wcr_onToggleScheduledTask @ 01bf6930

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_onToggleScheduledTask(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_60 = &::cf___;
  }
  else {
    local_30 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionTask_026a53f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _WCRMomentsScheduledToggleTask(local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_reloadList_026c0a98);
  _objc_storeStrong(&local_28,0);
  return;
}

