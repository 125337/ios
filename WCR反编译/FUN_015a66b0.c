// FUN_015a66b0 @ 015a66b0

void FUN_015a66b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_taskId)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_015a4bf8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_30 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_task_id);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_30;
    FUN_015a4bf8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_58;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

