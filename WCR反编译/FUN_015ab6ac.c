// FUN_015ab6ac @ 015ab6ac

void FUN_015ab6ac(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  uint local_1ec;
  uint local_1e4;
  undefined *local_1c8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined **local_90;
  uint local_88;
  undefined4 local_84;
  long local_80;
  uint local_78;
  uint local_74;
  double local_70;
  double local_68;
  bool local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  long local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_31 = SUB81(puVar3,0);
  local_49 = 0;
  local_59 = false;
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_1c8 = (undefined *)0x0;
  }
  else {
    local_1c8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_1c8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_1c8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_cachedDurationSecondsForAudioAtP_026b0bc8,
             *(undefined8 *)(param_2 + 0x20));
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_durationSecondsForAudioAtPath__026b0bd0,
             *(undefined8 *)(param_2 + 0x20));
  if (param_1 < 0.5) {
    local_1e4 = 0;
  }
  else {
    local_1e4 = (uint)(long)(param_1 * 1000.0);
  }
  local_74 = local_1e4;
  local_78 = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  local_70 = param_1;
  _WCRefineVoiceDataFromMediaPath(lVar4,&local_78);
  _objc_retainAutoreleasedReturnValue();
  local_80 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  lVar9 = local_80;
  puVar2 = PTR___NSConcreteStackBlock_02578660;
  if (lVar4 == 0) {
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0,&cf_lx1Y_);
    local_84 = 1;
  }
  else {
    if (local_74 == 0) {
      local_1ec = local_78;
    }
    else {
      local_1ec = local_74;
    }
    local_88 = local_1ec;
    ppuVar7 = &local_d8;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_015abe40;
    local_c0 = &DAT_02586ef8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = lVar9;
    local_98 = local_88;
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    local_b0 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    local_a8 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar5;
    _objc_retainBlock();
    ppuVar8 = &local_118;
    local_118 = puVar2;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_015ac0a0;
    local_100 = &DAT_02586f28;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    local_90 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    local_f8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = uVar6;
    _objc_retainBlock();
    lVar9 = *(long *)(param_2 + 0x38);
    local_e0 = ppuVar8;
    (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
    ppuVar7 = local_90;
    ppuVar8 = local_e0;
    if (lVar9 == 0) {
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_015ac2d0;
      local_128 = &DAT_0257ca98;
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = uVar5;
      (*(code *)ppuVar7[2])(ppuVar7,&local_140);
      local_84 = 1;
      _objc_storeStrong(&local_120,0);
    }
    else {
      if (*(long *)(param_2 + 0x50) == 1) {
        local_170 = PTR___NSConcreteStackBlock_02578660;
        local_168 = 0xc2000000;
        local_164 = 0;
        local_160 = FUN_015ac32c;
        local_158 = &DAT_02586f88;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = ppuVar7;
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar5;
        (*(code *)ppuVar8[2])(ppuVar8,&local_170);
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_150,0);
      }
      else {
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0xc2000000;
        local_194 = 0;
        local_190 = FUN_015ac5bc;
        local_188 = &DAT_02586f88;
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar8 = local_e0;
        local_180 = uVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = ppuVar8;
        (*(code *)ppuVar7[2])(ppuVar7,&local_1a0);
        _objc_storeStrong(&local_178);
        _objc_storeStrong(&local_180,0);
      }
      local_84 = 0;
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_40,0);
  return;
}

