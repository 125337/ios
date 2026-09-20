// FUN_0154716c @ 0154716c

void FUN_0154716c(byte param_1)

{
  bool bVar1;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3a70;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025869d0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  bVar1 = (param_1 & 1) == 0;
  if (bVar1) {
    local_58 = DAT_028e3a60;
    FUN_0157fb3c(DAT_028e3a60,&cf__A16BFF);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_58;
  }
  else {
    local_58 = DAT_028e3a68;
    FUN_0157fb3c(DAT_028e3a68,&cf__45D08A);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue(local_58);
  return;
}

