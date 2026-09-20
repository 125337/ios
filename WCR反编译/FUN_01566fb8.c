// FUN_01566fb8 @ 01566fb8

void FUN_01566fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = param_4;
  local_28 = param_3;
  if ((local_18 == 0) || (local_20 == 0)) {
    FUN_01566b24(param_3);
    local_34 = 1;
  }
  else {
    dVar3 = _dispatch_time(0,40000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_015678ac;
    local_60 = &DAT_02582b88;
    local_48 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_20;
    local_58 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    local_40 = local_30;
    _dispatch_after(dVar3,puVar4,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

