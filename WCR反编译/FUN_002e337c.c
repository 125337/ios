// FUN_002e337c @ 002e337c

void FUN_002e337c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  FUN_002ec20c(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_002e71b4(local_18,0);
  uVar2 = local_18;
  (*DAT_028c9920)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  FUN_002e71b4(local_18,1);
  uVar2 = local_40[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

