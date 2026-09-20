// FUN_005d2520 @ 005d2520

void FUN_005d2520(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_setAssociatedObject(local_18,local_20,0,1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

