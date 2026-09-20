// FUN_014ae19c @ 014ae19c

void FUN_014ae19c(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,350000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc0000000;
  local_3c = 0;
  local_38 = FUN_014ae254;
  local_30 = &DAT_02578c00;
  local_28 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_after(dVar1,puVar2,&local_48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

