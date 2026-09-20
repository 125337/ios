// FUN_002627b0 @ 002627b0

byte FUN_002627b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  uint local_230;
  uint local_1b8;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if ((param_2 < 0) || (local_30 == 0)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    local_48 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleAtIndex__026a1248);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_buttonTitleAtIndex__026a1248,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_30;
    FUN_002620fc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_60[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_mRh_N_);
    if (((uVar3 & 1) == 0) ||
       (puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0),
       ((ulong)puVar4 & 1) == 0)) {
      local_99 = 0;
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_mR0Rh_);
      local_1b8 = 0;
      if ((uVar2 & 1) != 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1b8 = (uint)puVar4;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_1b8 & 1) == 0) {
        local_d9 = 0;
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf__O_Nh_S);
        local_230 = 0;
        if ((uVar2 & 1) != 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_230 = (uint)puVar4;
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if ((local_230 & 1) == 0) {
          local_21 = 0;
          local_3c = 1;
        }
        else {
          uVar3 = local_60[0];
          _objc_getAssociatedObject(local_60[0],DAT_026dfbe0);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
          uVar2 = local_60[0];
          uVar1 = DAT_026dfbe0;
          if ((uVar3 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            FUN_00263ae8(local_60[0]);
            dVar5 = _dispatch_time(0,2000000000);
            puVar4 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_60[0];
            local_110 = PTR___NSConcreteStackBlock_02578660;
            local_108 = 0xc2000000;
            local_104 = 0;
            local_100 = FUN_00263f74;
            local_f8 = &DAT_02578c20;
            (*(code *)PTR__objc_retain_02578638)();
            local_f0 = uVar2;
            _dispatch_after(dVar5,puVar4,&local_110);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_storeStrong(&local_f0,0);
          }
          local_21 = 1;
          local_3c = 1;
          _objc_storeStrong(&local_e8,0);
        }
      }
      else {
        uVar3 = local_60[0];
        _objc_getAssociatedObject(local_60[0],DAT_026dfbd8);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
        uVar2 = local_60[0];
        uVar1 = DAT_026dfbd8;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          FUN_00263640(local_60[0]);
          dVar5 = _dispatch_time(0,2000000000);
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_60[0];
          local_d0 = PTR___NSConcreteStackBlock_02578660;
          local_c8 = 0xc2000000;
          local_c4 = 0;
          local_c0 = FUN_00263aa8;
          local_b8 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar2;
          _dispatch_after(dVar5,puVar4,&local_d0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_b0,0);
        }
        local_21 = 1;
        local_3c = 1;
        _objc_storeStrong(&local_a8,0);
      }
    }
    else {
      uVar3 = local_60[0];
      _objc_getAssociatedObject(local_60[0],DAT_026dfbd0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
      uVar2 = local_60[0];
      uVar1 = DAT_026dfbd0;
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_0026322c(local_60[0]);
        dVar5 = _dispatch_time(0,2000000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60[0];
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_00263600;
        local_78 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = uVar2;
        _dispatch_after(dVar5,puVar4,&local_90);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_70,0);
      }
      local_21 = 1;
      local_3c = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

