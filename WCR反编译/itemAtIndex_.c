// itemAtIndex: @ 01f8c6dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackPickerViewController::itemAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_18;
  
  bVar1 = true;
  if (-1 < (long)param_3) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)IVar3 <= (long)param_3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

