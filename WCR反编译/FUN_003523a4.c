// FUN_003523a4 @ 003523a4

void FUN_003523a4(undefined8 param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  DAT_028ca010 = DAT_028ca010 + 1;
  local_28 = DAT_028ca010;
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,100000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_00352468;
  local_38 = &DAT_02578c00;
  local_30 = local_28;
  _dispatch_after(dVar1,puVar2,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

