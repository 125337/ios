// documentPickerWasCancelled: @ 01efca54

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::documentPickerWasCancelled_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingWebFileCallbackId_026c73f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingWebFileCallbackId_026c73f0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingWebFileCallbackId__026c73e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_completeWebCallback_ok_payload__026c73d0,local_38,0,&::cf___);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(IVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

