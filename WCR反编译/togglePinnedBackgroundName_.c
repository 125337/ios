// togglePinnedBackgroundName: @ 01f60ea0

/* Function Stack Size: 0x18 bytes */

void WCRVoiceBackgroundListViewController::togglePinnedBackgroundName_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pinnedNames_026c9588);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_28);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_insertObject_atIndex__0269eac0,local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,local_28);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_savePinnedNames__026c95d8,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

