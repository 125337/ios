// setCenterText: @ 01d8f774

/* Function Stack Size: 0x18 bytes */

void WCRSSDonutView::setCenterText_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  uVar2 = *(undefined8 *)(local_18 + (long)_centerText);
  *(undefined8 *)(local_18 + (long)_centerText) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_centerLabel_026c4dc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

