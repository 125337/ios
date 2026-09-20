// FUN_0068bb64 @ 0068bb64

void FUN_0068bb64(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_50;
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringByAddingPercentEncodingWit_0269d900,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  if (lVar2 == 0) {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_50);
  return;
}

