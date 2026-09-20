// FUN_004057b0 @ 004057b0

void FUN_004057b0(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  dispatch_time_t dVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  double local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_00407cdc();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    FUN_004085a0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_38 = 1;
    }
    else {
      uVar1 = local_28;
      FUN_00408db0();
      if ((uVar1 & 1) == 0) {
        local_38 = 1;
      }
      else {
        uVar1 = local_28;
        FUN_004055cc(local_28,&cf_sessionUserName);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_48 = uVar1;
        FUN_004094b8();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_WCRefineConfig_026cdf58;
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar1 = local_28;
        local_58 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
        uVar2 = local_40;
        ppuVar4 = &local_a8;
        local_a8 = PTR___NSConcreteStackBlock_02578660;
        local_a0 = 0xc2000000;
        local_9c = 0;
        local_98 = FUN_004096ec;
        local_90 = &DAT_0257b6a8;
        local_60 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_48;
        local_88 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_50;
        local_80 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_60;
        local_78 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = uVar1;
        _objc_retainBlock();
        puVar3 = PTR___dispatch_main_q_02578680;
        local_68 = ppuVar4;
        if (0.0 < local_58) {
          dVar5 = _dispatch_time(0,(long)(local_58 * 1000000000.0));
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar5,puVar3,local_68);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_async();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
        local_38 = 0;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

