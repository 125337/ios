// FUN_015c26b8 @ 015c26b8

void FUN_015c26b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_20;
  local_20 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_20 == 0) {
    lVar2 = local_18;
    FUN_015c25f4(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

