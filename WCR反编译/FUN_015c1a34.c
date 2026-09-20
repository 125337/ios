// FUN_015c1a34 @ 015c1a34

void FUN_015c1a34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_015c26b8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  FUN_015c25f4(lVar1,PTR_s_messageWrap_0269d070);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_18;
    FUN_015c25f4(local_18,PTR_s_getMediaWrap_026a4328);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

