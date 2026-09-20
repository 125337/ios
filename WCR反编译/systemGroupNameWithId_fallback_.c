// systemGroupNameWithId:fallback: @ 01ab5428

/* Function Stack Size: 0x20 bytes */

ID WCRGroupListViewController::systemGroupNameWithId_fallback_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_68;
  ID local_48;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_systemGroupWithId__026bde20,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    local_68 = local_38;
  }
  else {
    local_68 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

