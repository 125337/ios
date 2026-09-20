// FUN_0089f704 @ 0089f704

void FUN_0089f704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar4 = PTR___dispatch_main_q_02578680;
  DAT_028cdd50 = DAT_028cdd50 + 1;
  local_18 = DAT_028cdd50;
  _objc_retainAutoreleaseReturnValue();
  puVar2 = puVar4;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_40 = PTR___NSConcreteStackBlock_02578660;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_008a06e8;
  local_28 = &DAT_02578c00;
  local_20 = local_18;
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  dVar3 = _dispatch_time(0,3000000000);
  _objc_retainAutoreleaseReturnValue(puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  local_60 = 0xc0000000;
  local_5c = 0;
  local_58 = FUN_008a0748;
  local_50 = &DAT_02578c00;
  local_48 = local_18;
  _dispatch_after(dVar3,puVar4,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return;
}

