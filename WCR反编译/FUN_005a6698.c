// FUN_005a6698 @ 005a6698

void FUN_005a6698(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_005c78e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

