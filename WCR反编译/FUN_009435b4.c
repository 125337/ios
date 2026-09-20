// FUN_009435b4 @ 009435b4

void FUN_009435b4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    local_18 = &DAT_028e2790;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02581288);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = DAT_028e2788;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2788,PTR_s_addObject__0269d180,local_28);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    dVar3 = _dispatch_time(0,3000000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00943800;
    local_50 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = lVar2;
    _dispatch_after(dVar3,puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

