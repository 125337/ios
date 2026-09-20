// FUN_00677f24 @ 00677f24

void FUN_00677f24(undefined8 param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  FUN_00677084();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  DAT_028cbcd8 = 0;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

