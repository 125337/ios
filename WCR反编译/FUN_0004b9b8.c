// FUN_0004b9b8 @ 0004b9b8

void FUN_0004b9b8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c7b98)(param_1,param_2,param_3 & 1);
  dVar1 = _dispatch_time(0,200000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_000572d4;
  local_38 = &DAT_025797b0;
  local_30 = local_18;
  _dispatch_after(dVar1,puVar2,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

