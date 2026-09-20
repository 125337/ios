// FUN_0075e37c @ 0075e37c

void FUN_0075e37c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  FUN_00767584();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return;
}

