// FUN_004c5174 @ 004c5174

void FUN_004c5174(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    FUN_004c54d0(local_18);
    _objc_initWeak(auStack_28,local_18);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    puVar3 = puVar5;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_004c5998;
    local_38 = &DAT_0257be28;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_async(puVar3,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar4 = _dispatch_time(0,350000000);
    _objc_retainAutoreleaseReturnValue(puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_004c59d8;
    local_60 = &DAT_0257be28;
    _objc_copyWeak(auStack_58,auStack_28);
    _dispatch_after(dVar4,puVar5,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

