// FUN_006b2c54 @ 006b2c54

void FUN_006b2c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf__rankInfoArray);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  FUN_006a5acc(local_20);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

