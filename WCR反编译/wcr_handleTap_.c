// wcr_handleTap: @ 01698e68

/* Function Stack Size: 0x18 bytes */

void WCRWordSegPickerController::wcr_handleTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  uVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chipHost_026b29e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,IVar3,PTR_s_wcr_chipIndexAtPoint__026b2a40);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_toggleIndex__026b2a48,IVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

