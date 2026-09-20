// FUN_0075ede8 @ 0075ede8

void FUN_0075ede8(undefined8 param_1)

{
  long lVar1;
  long local_28;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = DAT_028cc870;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028cc870,PTR_s_objectForKeyedSubscript__0269d098,local_18);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_28 = *(long *)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

