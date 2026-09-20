// FUN_0003b818 @ 0003b818

byte FUN_0003b818(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  long local_58;
  uint local_50;
  double local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar3 = local_38;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  uVar2 = local_30;
  if (lVar3 == 0) {
    local_21 = 1;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_38);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_38);
    }
    else {
      local_21 = 0;
    }
    local_50 = (uint)!bVar1;
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_50 == 0) {
      if (0.0 < local_40) {
        dVar5 = _dispatch_time(0,(long)(local_40 * 1000000000.0));
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_80 = PTR___NSConcreteStackBlock_02578660;
        local_78 = 0xc2000000;
        local_74 = 0;
        local_70 = FUN_00045bc4;
        local_68 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_38;
        local_60 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = lVar3;
        _dispatch_after(dVar5,puVar6,&local_80);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_60,0);
      }
      local_21 = 1;
      local_50 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

