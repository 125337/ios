// FUN_0014d3b0 @ 0014d3b0

void FUN_0014d3b0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
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
    _objc_initWeak(auStack_28,local_18);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_0014d4a8;
    local_38 = &DAT_02578da0;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_async(puVar2,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

