// openGroupListWithScope: @ 01acac78

/* Function Stack Size: 0x18 bytes */

void WCRefineGroupManagementViewController::openGroupListWithScope_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRGroupListViewController_026cf330;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_PushViewController_animated_;
  local_38 = IVar2;
  _NSSelectorFromString();
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_pushViewController_animated__0269d590,local_30,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_30,1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

