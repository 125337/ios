// FUN_008e575c @ 008e575c

void FUN_008e575c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

