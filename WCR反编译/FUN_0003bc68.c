// FUN_0003bc68 @ 0003bc68

void FUN_0003bc68(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_oWCPayInfoItem_0269d6f0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

