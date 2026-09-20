// FUN_00056658 @ 00056658

void FUN_00056658(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70 [2];
  long *local_60;
  long *local_48;
  undefined4 local_3c;
  long local_38;
  long *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  plVar3 = &local_38;
  local_38 = 0;
  _objc_storeStrong(plVar3,param_1);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    FUN_000568fc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = plVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(plVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_38);
    plVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    plVar1 = local_48;
    if (&segment_command_00000020.vmsize < plVar4) {
      plVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      local_60 = plVar4 + -4;
      local_28 = 0;
      local_20 = 0;
      local_70[1] = 0;
      local_30 = local_60;
      local_18 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_removeObjectsInRange__0269dad0,0,local_60);
    }
    _objc_sync_exit(plVar3);
    (*(code *)PTR__objc_release_02578630)(plVar3);
    dVar5 = _dispatch_time(0,180000000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_00056970;
    local_78 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_70[0] = lVar2;
    _dispatch_after(dVar5,puVar6,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(local_70);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

