// FUN_008c02b4 @ 008c02b4

void FUN_008c02b4(void)

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
  
  FUN_008c08b4();
  DAT_028ce01a = 1;
  DAT_028ce020 = DAT_028ce020 + 1;
  local_18 = DAT_028ce020;
  dVar1 = _dispatch_time(0,120000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_40 = PTR___NSConcreteStackBlock_02578660;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_008c08e4;
  local_28 = &DAT_02578c00;
  local_20 = local_18;
  _dispatch_after(dVar1,puVar2,&local_40);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

