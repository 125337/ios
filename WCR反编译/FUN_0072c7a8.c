// FUN_0072c7a8 @ 0072c7a8

void FUN_0072c7a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      FUN_0072b104(lVar1,0,&cf_4lpS_eQ1Y_);
    }
    else {
      FUN_0072b104(lVar1,0,&cf_4lpS__eQ);
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

