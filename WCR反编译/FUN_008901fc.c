// FUN_008901fc @ 008901fc

void FUN_008901fc(undefined8 param_1)

{
  dispatch_queue_t pdVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  FUN_008900e0();
  pdVar1 = _dispatch_get_global_queue(-2,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

