// FUN_0170b184 @ 0170b184

void FUN_0170b184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined *local_188;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [11];
  byte local_13d;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_c1;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = 0;
  bVar1 = true;
  local_b8 = param_6;
  local_b0 = param_5;
  if (param_5 != 0) {
    puVar2 = PTR__OBJC_CLASS___UISwitch_026cea90;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = true;
    if ((param_5 & 1) != 0) {
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_st_switchThemes_026a80b0);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      bVar1 = uVar3 != 0;
      local_c0 = uVar3;
    }
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if (!bVar1) {
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_e8 = param_1;
    local_e0 = param_2;
    local_d8 = param_3;
    local_d0 = param_4;
    _CGRectIsEmpty();
    if ((uVar3 & 1) == 0) {
      FUN_0170b0f0();
      local_f8 = (undefined *)0x0;
      local_f0 = uVar3;
      if (uVar3 == 1) {
        puVar4 = PTR_SwitchThemesDayNight_026cef18;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
        local_118 = param_1;
        local_110 = param_2;
        local_108 = param_3;
        local_100 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,puVar4,PTR_s_initWithFrame__026ca6e8);
        puVar2 = local_f8;
        local_f8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        puVar4 = PTR_SwitchThemes_026cef20;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
        local_138 = param_1;
        local_130 = param_2;
        local_128 = param_3;
        local_120 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,puVar4,PTR_s_initWithFrame__026ca6e8);
        puVar2 = local_f8;
        local_f8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if (local_f8 == (undefined *)0x0) {
        local_13c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAutoresizingMask__026ca878,0x12);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isOn_0269d560);
        local_13d = (byte)uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_blockChangeActionAnimated__026a80c8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setOn__0269dc80,local_13d & 1);
        _objc_initWeak(auStack_148,local_b0);
        local_170 = PTR___NSConcreteStackBlock_02578660;
        local_168 = 0xc2000000;
        local_164 = 0;
        local_160 = FUN_0170b798;
        local_158 = &DAT_02588550;
        _objc_copyWeak(auStack_150,auStack_148);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setChangeAction__026b3888,&local_170);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSt_switchThemes__026b3890,local_f8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_f8);
        _memset(auStack_1c8,0,0x40);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_228 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_228 != 0) {
          lVar5 = *local_1b8;
          local_230 = 0;
          do {
            do {
              if (*local_1b8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1b8 - lVar5,uVar3);
              }
              local_188 = *(undefined **)(local_1c0 + local_230 * 8);
              if (local_188 != local_f8) {
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setHidden__026ca970,1);
              }
              local_230 = local_230 + 1;
            } while (local_230 < local_228);
            local_228 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                       0x10);
            local_230 = 0;
          } while (local_228 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_unblockChangeAction_026a80d0);
        _objc_destroyWeak(auStack_150);
        _objc_destroyWeak(auStack_148);
        local_13c = 0;
      }
      _objc_storeStrong(&local_f8,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

