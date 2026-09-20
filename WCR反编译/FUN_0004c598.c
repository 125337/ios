// FUN_0004c598 @ 0004c598

void FUN_0004c598(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_0004d7e4();
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

