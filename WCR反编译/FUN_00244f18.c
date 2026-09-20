// FUN_00244f18 @ 00244f18

void FUN_00244f18(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long local_60;
  ulong local_50;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (((local_30 == 0) || (param_2 == 0)) ||
     (uVar3 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar3 & 1) == 0)) {
    bVar1 = local_30 != 0;
    if (bVar1) {
      local_50 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    bVar2 = param_2 != 0;
    if (bVar2) {
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      local_60 = param_2;
    }
    _NSLog(&cf__wcr__edit_image_send_no_argunavailabletarget___selector___);
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_28 = 0;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar3;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

