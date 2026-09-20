// FUN_005d1830 @ 005d1830

void FUN_005d1830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *local_20;
  undefined8 local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_005a906c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8,local_18);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_18);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

