// attachSwipeDelegate @ 01c53668

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateSpecialUsersViewController::attachSwipeDelegate(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 != local_18) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setForwardingDelegate__026c1cf8,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

