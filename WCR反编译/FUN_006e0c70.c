// FUN_006e0c70 @ 006e0c70

long FUN_006e0c70(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_006e0f30();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  FUN_006e0d6c();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_20 == 0) {
    local_20 = local_18;
    FUN_006e1080(local_18,0);
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

