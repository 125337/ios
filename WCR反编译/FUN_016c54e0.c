// FUN_016c54e0 @ 016c54e0

void FUN_016c54e0(undefined8 param_1)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 != 0) {
    local_18 = &DAT_028e3f08;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025881b0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    FUN_016c56e0(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

