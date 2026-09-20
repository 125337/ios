// FUN_0073cee4 @ 0073cee4

void FUN_0073cee4(ulong param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 local_20;
  long *local_18;
  
  FUN_0073cfe4();
  if ((param_1 & 1) == 0) {
    if (DAT_028cc5b8 < 0xc) {
      DAT_028cc5b8 = DAT_028cc5b8 + 1;
      dVar1 = _dispatch_time(0,500000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar1,puVar2,&PTR___NSConcreteGlobalBlock_0257f628);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    local_18 = &DAT_028cc5b0;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257f648);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
  }
  return;
}

