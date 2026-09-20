// FUN_016b7284 @ 016b7284

void FUN_016b7284(undefined8 param_1)

{
  long lVar1;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028e3ed0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 != 0) {
      _objc_setAssociatedObject(local_20,&DAT_028e3ed0,lVar1,1);
    }
    lVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

