// FUN_01566548 @ 01566548

void FUN_01566548(undefined8 param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_1;
  dVar1 = _dispatch_time(0,1000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_40 = PTR___NSConcreteStackBlock_02578660;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_01566abc;
  local_28 = &DAT_02578c00;
  local_20 = local_18;
  _dispatch_after(dVar1,puVar2,&local_40);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

