// FUN_0032d2b4 @ 0032d2b4

void FUN_0032d2b4(long param_1)

{
  undefined **ppuVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined **local_28;
  long local_20;
  long local_18;
  
  ppuVar1 = &local_50;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0032d430;
  local_38 = &DAT_02578da0;
  local_20 = param_1;
  local_18 = param_1;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  _objc_retainBlock();
  local_28 = ppuVar1;
  (*(code *)ppuVar1[2])();
  dVar2 = _dispatch_time(0,80000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  puVar3 = puVar4;
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar3,local_28);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  dVar2 = _dispatch_time(0,240000000);
  _objc_retainAutoreleaseReturnValue(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar4,local_28);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_28,0);
  _objc_destroyWeak(auStack_30);
  return;
}

