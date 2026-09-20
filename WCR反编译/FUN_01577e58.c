// FUN_01577e58 @ 01577e58

void FUN_01577e58(undefined8 param_1,long param_2)

{
  long lVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if ((local_18 == 0) || (param_2 == 0)) {
    local_24 = 1;
  }
  else {
    dVar2 = _dispatch_time(0,200000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01577f90;
    local_40 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    local_30 = local_20;
    _dispatch_after(dVar2,puVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

