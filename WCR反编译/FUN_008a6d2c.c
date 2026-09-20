// FUN_008a6d2c @ 008a6d2c

void FUN_008a6d2c(double param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  uint local_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined1 auStack_f8 [8];
  ulong local_f0;
  double local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [8];
  ulong local_b0;
  double local_a8;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  ulong local_70;
  double local_68;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  double local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_51 = 0;
  local_11c = 1;
  local_38 = param_1;
  local_30 = param_3;
  if (local_28 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11c = (uint)puVar1 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_11c & 1) == 0) {
    uVar2 = local_28;
    FUN_008a6b70();
    if (uVar2 == local_30) {
      uVar2 = local_28;
      _objc_getAssociatedObject(0,local_28,&DAT_028cddd9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) == 0) {
        _CFAbsoluteTimeGetCurrent();
        if (param_1 - local_38 <= 5.0) {
          uVar2 = local_28;
          FUN_008a47c0(local_28,PTR_s_isViewApprear_026a98b0,0);
          if ((uVar2 & 1) == 0) {
            _objc_initWeak(auStack_60,local_28);
            dVar4 = _dispatch_time(0,60000000);
            puVar1 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_98 = PTR___NSConcreteStackBlock_02578660;
            local_90 = 0xc2000000;
            local_8c = 0;
            local_88 = FUN_008a7314;
            local_80 = &DAT_02580ca0;
            _objc_copyWeak(auStack_78,auStack_60);
            local_70 = local_30;
            local_68 = local_38;
            _dispatch_after(dVar4,puVar1,&local_98);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_58 = 1;
            _objc_destroyWeak(auStack_78);
            _objc_destroyWeak(auStack_60);
          }
          else {
            uVar3 = local_28;
            FUN_008a739c();
            uVar2 = local_28;
            if ((uVar3 & 1) == 0) {
              _objc_initWeak(auStack_e0,local_28);
              dVar4 = _dispatch_time(0,60000000);
              puVar1 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_118 = PTR___NSConcreteStackBlock_02578660;
              local_110 = 0xc2000000;
              local_10c = 0;
              local_108 = FUN_008a7724;
              local_100 = &DAT_02580ca0;
              _objc_copyWeak(auStack_f8,auStack_e0);
              local_f0 = local_30;
              local_e8 = local_38;
              _dispatch_after(dVar4,puVar1,&local_118);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              _objc_destroyWeak(auStack_f8);
              _objc_destroyWeak(auStack_e0);
              local_58 = 0;
            }
            else {
              puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar2,&DAT_028cddd9,puVar1,1);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              _objc_initWeak(auStack_a0,local_28);
              dVar4 = _dispatch_time(0,50000000);
              puVar1 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_d8 = PTR___NSConcreteStackBlock_02578660;
              local_d0 = 0xc2000000;
              local_cc = 0;
              local_c8 = FUN_008a7590;
              local_c0 = &DAT_02580ca0;
              _objc_copyWeak(auStack_b8,auStack_a0);
              local_b0 = local_30;
              local_a8 = local_38;
              _dispatch_after(dVar4,puVar1,&local_d8);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              local_58 = 1;
              _objc_destroyWeak(auStack_b8);
              _objc_destroyWeak(auStack_a0);
            }
          }
        }
        else {
          local_58 = 1;
        }
      }
      else {
        local_58 = 1;
      }
    }
    else {
      local_58 = 1;
    }
  }
  else {
    local_58 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

