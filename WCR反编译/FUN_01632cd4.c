// FUN_01632cd4 @ 01632cd4

void FUN_01632cd4(undefined8 param_1,long param_2)

{
  long local_60;
  long local_58;
  long local_38;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
  }
  if (local_58 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_20;
    _object_getIvar(local_20,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_60;
  if (local_58 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

