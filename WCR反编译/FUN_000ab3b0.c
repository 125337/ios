// FUN_000ab3b0 @ 000ab3b0

void FUN_000ab3b0(undefined8 param_1,undefined8 param_2)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8090)(param_1,param_2);
  dVar1 = _dispatch_time(0,300000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_000b423c;
  local_30 = &DAT_025797b0;
  local_28 = local_18;
  _dispatch_after(dVar1,puVar2,&local_48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

