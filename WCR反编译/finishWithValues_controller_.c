// finishWithValues:controller: @ 01a9ceb8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRGroupSessionPickerBridge::finishWithValues_controller_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID local_38 [3];
  SEL local_20;
  ID local_18;
  
  local_38[2] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_usernamesFromValues__026bda98,local_38[2]);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  bVar1 = false;
  if (IVar2 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar2 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

