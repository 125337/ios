// FUN_0082b2a4 @ 0082b2a4

void FUN_0082b2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  uint local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  byte local_59;
  ulong local_58;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_59 = 0;
  local_dc = 1;
  local_40 = param_5;
  if (local_30 != 0) {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028cd1d7);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_dc = (uint)uVar2 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_dc & 1) == 0) {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028cd1d6);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isReadyForDisplay_026a8c70);
    if ((uVar2 & 1) == 0) {
      if (local_40 == 0) {
        FUN_0082af08(local_30);
        _objc_setAssociatedObject(local_30,&DAT_028cd1d7,0,1);
        uVar1 = local_28;
        uVar4 = local_38;
        _CFAbsoluteTimeGetCurrent();
        FUN_0081501c(param_1,uVar1,&cf_video_timeout,&cf___,&cf___,&cf___,&cf___,uVar4);
        local_60 = 1;
      }
      else {
        _objc_initWeak(auStack_90,local_28);
        _objc_initWeak(auStack_98,local_30);
        dVar5 = _dispatch_time(0,100000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_008377b4;
        local_c0 = &DAT_025807b0;
        _objc_copyWeak(auStack_b0,auStack_90);
        _objc_copyWeak(auStack_a8,auStack_98);
        uVar4 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = uVar4;
        local_a0 = local_40;
        _dispatch_after(dVar5,puVar6,&local_d8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_b8,0);
        _objc_destroyWeak(auStack_a8);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_90);
        local_60 = 0;
      }
    }
    else {
      uVar2 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028cd1d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_70 = uVar2;
      _objc_getAssociatedObject(local_30,&DAT_028cd1d9);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_78 = uVar3;
      _objc_getAssociatedObject(local_30,&DAT_028cd1da);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_80 = uVar2;
      _objc_getAssociatedObject(local_30,&DAT_028cd1db);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      FUN_0082e1c0(local_30);
      _objc_setAssociatedObject(local_30,&DAT_028cd1df,local_70,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1e0,local_78,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1e1,local_80,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1e2,local_88,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1d5,local_68,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1d8,0,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1d9,0,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1da,0,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1db,0,1);
      _objc_setAssociatedObject(local_30,&DAT_028cd1d6,0,1);
      (*(code *)PTR__objc_msgSend_02578628)(0x3f800000,local_68,PTR_s_setOpacity__026ca9f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setImage__026ca978,0);
      _objc_setAssociatedObject(local_30,&DAT_028cd0e1,local_38,3);
      _objc_setAssociatedObject(local_30,&DAT_028cd1d7,0,1);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_60 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    local_60 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

