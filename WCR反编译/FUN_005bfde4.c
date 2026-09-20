// FUN_005bfde4 @ 005bfde4

void FUN_005bfde4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long *local_48;
  long local_40 [3];
  long *local_28;
  uint local_1c;
  long local_18;
  
  plVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar3,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    FUN_005c0504();
    _objc_retainAutoreleasedReturnValue();
    local_28 = plVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(plVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_18);
    _objc_sync_exit(plVar3);
    (*(code *)PTR__objc_release_02578630)(plVar3);
    dVar4 = _dispatch_time(0,90000000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_005c0578;
    local_50 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_18;
    local_48 = plVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = lVar2;
    _dispatch_after(dVar4,puVar5,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

