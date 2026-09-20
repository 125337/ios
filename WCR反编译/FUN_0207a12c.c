// FUN_0207a12c @ 0207a12c

void FUN_0207a12c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  FUN_0207896c();
  local_18 = local_20;
  if (param_2 == 1) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingString__0269d398,&cf_BelowMessage);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else if (param_2 == 2) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingString__0269d398,&cf_BelowAvatar);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

