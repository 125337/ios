// FUN_00020d74 @ 00020d74

void FUN_00020d74(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_38;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0001a198(local_18,PTR_s_GetContact_0269d2c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar1;
  if (lVar1 == 0) {
    local_38 = local_18;
    FUN_0001a4fc(local_18,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_20;
  FUN_0001a4fc(local_20,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

