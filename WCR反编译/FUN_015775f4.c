// FUN_015775f4 @ 015775f4

void FUN_015775f4(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_015776e4(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  FUN_0155c7d4(local_28,(uint)lVar1 & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__RdaggSW);
  _objc_storeStrong(&local_28,0);
  return;
}

