// FUN_005d2da8 @ 005d2da8

void FUN_005d2da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  long lVar2;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_18;
  local_31 = param_5;
  _objc_getAssociatedObject(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if ((local_31 & 1) == 0) {
    FUN_005d2520(local_18,local_20);
  }
  else if (local_28 != 0) {
    if (lVar1 == 0) {
      _objc_storeStrong(&local_40,local_30);
      _objc_setAssociatedObject(local_18,local_20,local_40,1);
    }
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (lVar2 != lVar1) {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEnabled__026ca938,1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

