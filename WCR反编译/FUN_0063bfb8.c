// FUN_0063bfb8 @ 0063bfb8

long FUN_0063bfb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_78;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = -1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_78 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_78 == 0x7fffffffffffffff) {
      local_78 = -1;
    }
    local_18 = local_78;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

