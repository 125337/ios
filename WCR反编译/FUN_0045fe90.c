// FUN_0045fe90 @ 0045fe90

void FUN_0045fe90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40 [4];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_model);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_40[0] = 0;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_emoticonWrap);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40[0];
  local_40[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

