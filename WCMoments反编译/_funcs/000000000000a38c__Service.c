// _Service @0xa38c

void _Service(undefined8 param_1)

{
  long lVar1;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = _NSClassFromString(local_30);
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    _Context();
    local_40 = _objc_retainAutoreleasedReturnValue();
    local_20 = lVar1;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_88,&local_20,1);
    local_50 = _objc_retainAutoreleasedReturnValue();
    _Call(local_40,&cf_getService_);
    local_70 = _objc_retainAutoreleasedReturnValue();
    local_60 = local_70;
  }
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_70);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_60);
    (*(code *)PTR__objc_release_00110458)(local_50);
    (*(code *)PTR__objc_release_00110458)(local_40);
  }
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_00110518 == local_18) {
    _objc_autoreleaseReturnValue(0,local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

