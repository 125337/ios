// FUN_000b5524 @ 000b5524

void FUN_000b5524(undefined8 param_1,byte param_2,undefined8 param_3)

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
  undefined4 local_2c;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (((local_19 & 1) == 0) || (local_18 == 0)) {
    local_2c = 1;
  }
  else {
    dVar2 = _dispatch_time(0,350000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_000b61a4;
    local_40 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    _dispatch_after(dVar2,puVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

