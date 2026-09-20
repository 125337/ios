// FUN_008ac90c @ 008ac90c

void FUN_008ac90c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_80;
  long local_48;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  _class_getInstanceVariable(lVar1,param_2);
  if (lVar1 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = local_20;
    _object_getIvar(local_20,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

