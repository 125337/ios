// FUN_0157c5ec @ 0157c5ec

void FUN_0157c5ec(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = param_1;
  if (param_1 < 1) {
    FUN_0157b6ec(param_1,&cf__,5);
  }
  else {
    dVar1 = _dispatch_time(0,80000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR___NSConcreteStackBlock_02578660;
    local_38 = 0xc0000000;
    local_34 = 0;
    local_30 = FUN_0157c6bc;
    local_28 = &DAT_02578c00;
    local_20 = local_18;
    _dispatch_after(dVar1,puVar2,&local_40);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

