// FUN_00059540 @ 00059540

byte FUN_00059540(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  uint local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 1;
    local_30 = 1;
  }
  else {
    FUN_00059be4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_20);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_20);
    }
    else {
      local_11 = 0;
    }
    local_30 = (uint)!bVar1;
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_30 == 0) {
      dVar4 = _dispatch_time(0,120000000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00059c58;
      local_48 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      _dispatch_after(dVar4,puVar5,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_11 = 1;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

