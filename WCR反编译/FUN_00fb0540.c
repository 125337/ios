// FUN_00fb0540 @ 00fb0540

void FUN_00fb0540(double param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long *local_50;
  long local_48 [3];
  long *local_30;
  uint local_24;
  double local_20;
  long local_18;
  
  plVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar3,param_2);
  bVar1 = local_18 != 0;
  local_20 = param_1;
  if (bVar1) {
    FUN_00fc8848();
    _objc_retainAutoreleasedReturnValue();
    local_30 = plVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(plVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_18);
    _objc_sync_exit(plVar3);
    (*(code *)PTR__objc_release_02578630)(plVar3);
    dVar4 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = local_30;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00fc88bc;
    local_58 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_18;
    local_50 = plVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = lVar2;
    _dispatch_after(dVar4,puVar5,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_30,0);
  }
  local_24 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

