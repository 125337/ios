// FUN_004e890c @ 004e890c

void FUN_004e890c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_004e3288(local_18,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_004e8770();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_004e8770();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

