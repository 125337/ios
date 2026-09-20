// FUN_00782a34 @ 00782a34

void FUN_00782a34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_007908cc(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_swipeGesture_026a7fb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_00790994();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_swipeGesture_026a7fb8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

