// FUN_002bf5c8 @ 002bf5c8

void FUN_002bf5c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    _objc_getAssociatedObject(local_18,&DAT_028c9806);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    _objc_setAssociatedObject(local_18,&DAT_028c9806,0,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

