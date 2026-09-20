// FUN_01b92aa4 @ 01b92aa4

void FUN_01b92aa4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_30;
    FUN_01b92980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

