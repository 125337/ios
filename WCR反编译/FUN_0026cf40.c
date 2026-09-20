// FUN_0026cf40 @ 0026cf40

void FUN_0026cf40(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_28;
  uint local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR___dispatch_main_q_02578680;
  bVar1 = local_18 != 0;
  local_1c = param_2;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_0026d054;
    local_38 = &DAT_0257b108;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    local_28 = local_1c;
    _dispatch_async(puVar3,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_30,0);
  }
  local_20 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

