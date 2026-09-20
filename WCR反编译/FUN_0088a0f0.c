// FUN_0088a0f0 @ 0088a0f0

void FUN_0088a0f0(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined1 local_51;
  long local_50;
  byte local_41;
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_41 = 0;
  local_51 = 0;
  bVar2 = true;
  uVar1 = lVar3 != 0;
  local_28 = lVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_51 = uVar1;
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    local_58 = 1;
  }
  else {
    if ((DAT_028cd866 & 1) != 0) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0087e290();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      dVar4 = _dispatch_time(0,250000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_0088a3f0;
      local_68 = &DAT_02578da0;
      _objc_copyWeak(auStack_60,param_1 + 0x20);
      _dispatch_after(dVar4,puVar5,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_destroyWeak(auStack_60);
    }
    FUN_0088a61c(local_28,&cf_viewDidAppear_delay);
    local_58 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

