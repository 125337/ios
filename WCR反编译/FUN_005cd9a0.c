// FUN_005cd9a0 @ 005cd9a0

/* WARNING: Type propagation algorithm not settling */

void FUN_005cd9a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  uint local_24;
  long local_20 [2];
  
  local_20[1] = 0;
  _objc_storeStrong(local_20 + 1,param_1);
  lVar1 = DAT_028cb648;
  (*(code *)PTR__objc_retain_02578638)();
  local_20[0] = lVar1;
  if (lVar1 != 0) {
    _objc_storeStrong(&DAT_028cb648);
    _objc_storeStrong(&DAT_028cb640,0);
    DAT_028cb730 = 0;
    dVar3 = _dispatch_time(0,3000000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20[0];
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_005cdb0c;
    local_38 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    _dispatch_after(dVar3,puVar4,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)(lVar1 == 0);
  _objc_storeStrong(local_20);
  _objc_storeStrong(local_20 + 1,0);
  return;
}

