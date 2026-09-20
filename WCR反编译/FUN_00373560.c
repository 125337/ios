// FUN_00373560 @ 00373560

void FUN_00373560(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_003c26ac();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeAllObjects_0269d508);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_18,0);
  return;
}

