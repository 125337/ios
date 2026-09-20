// FUN_008288fc @ 008288fc

void FUN_008288fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_310;
  ulong local_308;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined1 local_d9;
  ulong local_d8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_7);
  local_d9 = 0;
  bVar2 = true;
  uVar1 = local_b0 != 0;
  if ((bool)uVar1) {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 != local_b0;
    local_d9 = uVar1;
    local_d8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_d9;
  }
  local_d9 = uVar1;
  if (bVar2) {
    local_e0 = 1;
  }
  else {
    FUN_00830e60(local_b0);
    uVar4 = local_b8;
    local_100 = param_1;
    uStack_f8 = param_2;
    local_f0 = param_3;
    uStack_e8 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_frame_026ca640);
    uVar3 = (uint)uVar4;
    uStack_138 = uStack_f8;
    local_140 = local_100;
    uStack_128 = uStack_e8;
    local_130 = local_f0;
    local_120 = param_4;
    local_118 = param_3;
    local_110 = param_2;
    local_108 = param_1;
    _CGRectEqualToRect();
    if ((uVar3 & 1) == 0) {
      uStack_158 = uStack_f8;
      local_160 = local_100;
      uStack_148 = uStack_e8;
      local_150 = local_f0;
      uStack_178 = uStack_f8;
      local_180 = local_100;
      uStack_168 = uStack_e8;
      local_170 = local_f0;
      param_4 = local_100;
      param_3 = uStack_f8;
      param_2 = local_f0;
      param_1 = uStack_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setFrame__026ca960);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setUserInteractionEnabled__026caad8,0);
    local_188 = 0;
    local_190 = 0;
    _memset(auStack_1d8,0,0x40);
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_308 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_308 != 0) {
      lVar6 = *local_1c8;
      local_310 = 0;
      do {
        do {
          if (*local_1c8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar6,uVar4);
          }
          uVar7 = *(ulong *)(local_1d0 + local_310 * 8);
          local_198 = uVar7;
          if ((uVar7 != local_b8) && (uVar7 != local_c0)) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_tag_026cab98);
            if (uVar7 - 0x271a == 0) {
              _objc_storeStrong(&local_188,local_198);
              local_e0 = 2;
              goto LAB_00828d9c;
            }
            uVar5 = local_198;
            FUN_0082e90c(uVar7 - 0x271a,local_198,local_b8);
            if ((uVar5 & 1) != 0) {
              _objc_storeStrong(&local_190,local_198);
            }
          }
          local_310 = local_310 + 1;
        } while (local_310 < local_308);
        local_308 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10
                  );
        local_310 = 0;
      } while (local_308 != 0);
    }
    local_e0 = 0;
LAB_00828d9c:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_188 == 0) {
      _objc_storeStrong(&local_188,local_190);
    }
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_188 == 0) {
      if (uVar7 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sendSubviewToBack__0269f5c0,local_b8);
      }
    }
    else {
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (uVar7 != uVar5 + 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_insertSubview_aboveSubview__026ca740,local_b8,local_188);
      }
      uVar4 = local_b8;
      FUN_00814d40();
      if ((uVar4 & 1) != 0) {
        FUN_00830f74(local_188,local_b8);
      }
    }
    if ((local_c0 == 0) ||
       (uVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isHidden_026ca768),
       (uVar4 & 1) != 0)) {
      local_e0 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setUserInteractionEnabled__026caad8,0);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar4 != local_b0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (bVar2 || uVar5 != uVar7 + 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_insertSubview_aboveSubview__026ca740,local_c0,local_b8);
      }
      uVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_frame_026ca640);
      uVar3 = (uint)uVar4;
      _CGRectEqualToRect(param_4,param_3,param_2,param_1,local_100,uStack_f8,local_f0,uStack_e8);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,uStack_f8,local_f0,uStack_e8,local_c0,PTR_s_setFrame__026ca960);
      }
      local_e0 = 0;
    }
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_188,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

