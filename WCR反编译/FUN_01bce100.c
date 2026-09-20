// FUN_01bce100 @ 01bce100

void FUN_01bce100(undefined8 param_1)

{
  long lVar1;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01be3c24(local_20,&cf_sight,PTR_s_pathForSightData_026a4a28);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = local_20;
    FUN_01be3c24(local_20,&cf_data,PTR_s_pathForData_026a4a20);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_40;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

