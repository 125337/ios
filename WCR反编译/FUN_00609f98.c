// FUN_00609f98 @ 00609f98

void FUN_00609f98(undefined *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_294;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  char *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_174;
  undefined1 local_161;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  byte local_141;
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  undefined *local_78;
  undefined *local_70;
  char *local_68;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  byte local_31;
  undefined8 local_30;
  undefined *local_28;
  
  local_31 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028cb938)(param_1,param_2,param_3 & 1);
  puVar1 = &DAT_028cb8b8;
  _objc_loadWeakRetained();
  puVar3 = local_28;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == puVar3) {
    _objc_storeWeak(0,&DAT_028cb8b8,0);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    _objc_getAssociatedObject(puVar1,&DAT_02324208);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_invalidate_026ca758);
      _objc_setAssociatedObject(local_40,&DAT_02324208,0,1);
      _objc_setAssociatedObject(local_40,&DAT_02324209,0,1);
      _objc_setAssociatedObject(local_40,&DAT_0232420a,0,1);
      _objc_setAssociatedObject(local_40,&DAT_0232420b,0,1);
    }
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleView_0269ea50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      if (DAT_028cb940 == (char *)0x0) {
        pcVar2 = "MMTitleView";
        _objc_getClass();
        DAT_028cb940 = pcVar2;
      }
      pcVar2 = DAT_028cb940;
      _objc_retainAutoreleaseReturnValue();
      local_68 = pcVar2;
      if ((pcVar2 != (char *)0x0) &&
         (puVar1 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isKindOfClass__0269cd68,pcVar2),
         ((ulong)puVar1 & 1) != 0)) {
        puVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewWithTag__026cabe0,0x3e4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_60;
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewWithTag__026cabe0,0x3e3);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar3;
        if ((local_70 != (undefined *)0x0) &&
           (puVar1 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isHidden_026ca768),
           ((ulong)puVar1 & 1) == 0)) {
          _memcpy(auStack_a8,PTR__CGAffineTransformIdentity_025782d8,0x30);
          puVar1 = local_70;
          _memcpy(auStack_d8,auStack_a8,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_d8);
        }
        if ((local_78 != (undefined *)0x0) &&
           (puVar1 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isHidden_026ca768),
           ((ulong)puVar1 & 1) == 0)) {
          _memcpy(auStack_108,PTR__CGAffineTransformIdentity_025782d8,0x30);
          puVar1 = local_78;
          _memcpy(auStack_138,auStack_108,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_138);
        }
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isMovingFromParentViewController_0269f458);
  local_151 = 0;
  local_294 = 1;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isBeingDismissed_0269f460);
    local_294 = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 1;
      local_150 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_294 = (uint)puVar1;
    }
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  local_141 = (byte)local_294 & 1;
  if ((local_294 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 0;
    local_160 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationShowAvatar_026a0ac0);
    local_161 = SUB81(puVar1,0);
    if (((ulong)puVar1 & 1) == 0) {
      local_174 = 1;
    }
    else {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      local_180 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_174 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_titleView_0269ea50);
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          local_174 = 1;
        }
        else {
          if (DAT_028cb940 == (char *)0x0) {
            pcVar2 = "MMTitleView";
            _objc_getClass();
            DAT_028cb940 = pcVar2;
          }
          pcVar2 = DAT_028cb940;
          _objc_retainAutoreleaseReturnValue();
          local_190 = pcVar2;
          if ((pcVar2 == (char *)0x0) ||
             (puVar1 = local_188,
             (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isKindOfClass__0269cd68,pcVar2),
             ((ulong)puVar1 & 1) == 0)) {
            local_174 = 1;
          }
          else {
            puVar1 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,999);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_188;
            local_198 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e6);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_188;
            local_1a0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e5);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_188;
            local_1a8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_188;
            local_1b0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e3);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_188;
            local_1b8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e2);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_188;
            local_1c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_viewWithTag__026cabe0,0x3e1);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = puVar1;
            if (local_198 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setHidden__026ca970,1);
              FUN_0060cb94(local_198);
            }
            if (local_1a0 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setHidden__026ca970,1);
              FUN_0060cb94(local_1a0);
            }
            if (local_1a8 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setHidden__026ca970,1);
            }
            if (local_1b0 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setHidden__026ca970,1);
            }
            if (local_1b8 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setHidden__026ca970,1);
            }
            if (local_1c0 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setHidden__026ca970,1);
            }
            if (local_1c8 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setHidden__026ca970,1);
            }
            puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            if (local_1d0 != (undefined *)0x0) {
              puVar1 = local_1d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_rootViewController_026ca820);
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = puVar1;
              if (puVar1 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_hideAvatarInBarButtons__026a5e80,puVar1);
              }
              _objc_storeStrong(&local_1d8,0);
            }
            _objc_storeStrong(&local_1d0);
            _objc_storeStrong(&local_1c8,0);
            _objc_storeStrong(&local_1c0,0);
            _objc_storeStrong(&local_1b8,0);
            _objc_storeStrong(&local_1b0,0);
            _objc_storeStrong(&local_1a8,0);
            _objc_storeStrong(&local_1a0,0);
            _objc_storeStrong(&local_198,0);
            local_174 = 0;
          }
        }
        _objc_storeStrong(&local_188,0);
      }
      _objc_storeStrong(&local_180,0);
    }
    _objc_storeStrong(&local_160,0);
  }
  return;
}

