// FUN_001586e0 @ 001586e0

void FUN_001586e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong local_1b0;
  ulong local_180;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
  ulong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ulong local_100;
  undefined1 auStack_f8 [8];
  ulong local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [14];
  byte local_92;
  byte local_91;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015ab30();
  uVar3 = local_28;
  if ((uVar1 & 1) == 0) {
    (*DAT_028c8810)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar3;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    uVar4 = local_38;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_userData_0269f6e8);
    if ((uVar4 & 1) == 0) {
      local_180 = 0;
    }
    else {
      local_180 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userData_0269f6e8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_180;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_180;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    uVar3 = local_60;
    FUN_0015ecd4();
    uVar4 = local_58;
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((uVar4 == 0) || (local_78 == 0)) {
      (*DAT_028c8810)(local_28,local_30,local_38);
      local_48 = 1;
    }
    else {
      uVar3 = local_58;
      FUN_001631c8(local_58,local_78);
      local_79 = (byte)uVar3;
      local_91 = 0;
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupContact_0269f648);
      if ((uVar3 & 1) == 0) {
        local_1b0 = 0;
      }
      else {
        local_1b0 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getGroupContact_0269f648);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_1b0;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      uVar3 = local_88;
      FUN_00160d4c();
      local_92 = (byte)uVar3;
      _objc_initWeak(auStack_a0,local_28);
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      local_b0 = local_78;
      local_a8 = uVar3;
      if ((local_79 & 1) == 0) {
        if ((local_92 & 1) == 0) {
          local_120 = PTR___NSConcreteStackBlock_02578660;
          local_118 = 0xc2000000;
          local_114 = 0;
          local_110 = FUN_00164ffc;
          local_108 = &DAT_0257a6e0;
          _objc_copyWeak(auStack_f8,auStack_a0);
          uVar3 = local_a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_100 = uVar3;
          local_f0 = local_b0;
          FUN_001640e4(&cf_Smn_v,&cf_nxSmagmo_vn_v,&cf_nxSm,&local_120);
          local_48 = 1;
          _objc_storeStrong(&local_100,0);
          _objc_destroyWeak(auStack_f8);
        }
        else {
          local_150 = PTR___NSConcreteStackBlock_02578660;
          local_148 = 0xc2000000;
          local_144 = 0;
          local_140 = FUN_00165158;
          local_138 = &DAT_02579bb0;
          _objc_copyWeak(auStack_130,auStack_a0);
          local_128 = local_b0;
          FUN_001640e4(&cf_Smn_v,&cf_nxSmhQXTn_v,&cf_nxSm,&local_150);
          _objc_destroyWeak(auStack_130);
          local_48 = 0;
        }
      }
      else {
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_00164ea0;
        local_d0 = &DAT_0257a6e0;
        _objc_copyWeak(auStack_c0,auStack_a0);
        uVar3 = local_a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar3;
        local_b8 = local_b0;
        FUN_001640e4(&cf_Smn_v,&cf_nxSmag_g_gn_v,&cf_nxSm,&local_e8);
        local_48 = 1;
        _objc_storeStrong(&local_c8,0);
        _objc_destroyWeak(auStack_c0);
      }
      _objc_storeStrong(&local_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

