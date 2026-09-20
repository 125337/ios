// FUN_00039984 @ 00039984

/* WARNING: Type propagation algorithm not settling */

void FUN_00039984(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  uint local_38;
  long local_28 [3];
  
  local_28[2] = 0;
  _objc_storeStrong(local_28 + 2,param_1);
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_2);
  lVar2 = local_28[2];
  FUN_0003c5e4();
  _objc_retainAutoreleasedReturnValue();
  local_28[0] = lVar2;
  if (lVar2 != 0) {
    dVar3 = _dispatch_time(0,500000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28[0];
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0003c7d4;
    local_48 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    _dispatch_after(dVar3,puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)(lVar2 == 0);
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  _objc_storeStrong(local_28 + 2,0);
  return;
}

