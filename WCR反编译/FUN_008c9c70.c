// FUN_008c9c70 @ 008c9c70

void FUN_008c9c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_008c9608();
  _objc_initWeak(auStack_20,local_18);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_008c9dbc;
  local_38 = &DAT_02578da0;
  _objc_copyWeak(auStack_30,auStack_20);
  uVar2 = 0;
  _dispatch_block_create(0,&local_50);
  local_28 = uVar2;
  _objc_retainBlock();
  uVar1 = DAT_028ce040;
  DAT_028ce040 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  dVar3 = _dispatch_time(0,300000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar4,local_28);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_28,0);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_20);
  _objc_storeStrong(&local_18,0);
  return;
}

