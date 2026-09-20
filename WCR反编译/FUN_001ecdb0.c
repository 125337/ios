// FUN_001ecdb0 @ 001ecdb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001ecdb0(undefined8 param_1)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  uint local_3ec;
  ulong local_3d0;
  ulong local_3c8;
  ulong local_2e0;
  ulong local_290;
  ulong local_288;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  byte local_1d9;
  ulong local_1d8;
  byte local_1c9;
  ulong local_1c8;
  byte local_1ba;
  byte local_1b9;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  double local_158;
  double local_150;
  undefined1 local_135;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar2 = DAT_02323cd0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  dVar10 = DAT_02323cd0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
    goto LAB_001edba0;
  }
  uVar3 = (uint)local_130;
  FUN_001eddc8();
  local_135 = (undefined1)uVar3;
  if ((uVar3 & 1) == 0) {
    FUN_001edf0c(local_130,0);
    local_134 = 1;
    goto LAB_001edba0;
  }
  uVar4 = local_130;
  FUN_001ee184();
  if ((uVar4 & 1) != 0) {
    FUN_001edf0c(local_130,0);
    local_134 = 1;
    goto LAB_001edba0;
  }
  FUN_001ee88c();
  local_150 = dVar10;
  FUN_001ee984();
  local_158 = dVar10;
  FUN_001eea64();
  _objc_retainAutoreleasedReturnValue();
  local_168 = 0;
  local_160 = uVar4;
  _memset(auStack_1b0,0,0x40);
  uVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_288 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_288 != 0) {
    lVar8 = *local_1a0;
    local_290 = 0;
    do {
      do {
        if (*local_1a0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1a0 - lVar8,uVar4);
        }
        uVar9 = *(ulong *)(local_1a8 + local_290 * 8);
        puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        local_170 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar9 & 1) != 0) {
          _objc_storeStrong(&local_168,local_170);
          local_134 = 2;
          goto LAB_001ed128;
        }
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
      local_290 = 0;
    } while (local_288 != 0);
  }
  local_134 = 0;
LAB_001ed128:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (local_168 == 0) {
LAB_001ed1a4:
    local_2e0 = local_168;
    if (local_168 == 0) {
      local_2e0 = local_130;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = local_2e0;
    FUN_001ee184();
    if ((local_2e0 & 1) == 0) {
      FUN_001d5a74(local_1b8);
      dVar10 = local_150;
      FUN_001eeedc(local_150,local_158,local_1b8,local_160);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_1b9 = (byte)puVar6;
      local_1ba = local_1b9 & 1;
      if (local_1b8 != local_130) {
        FUN_001ef4e0(local_130);
        local_1c9 = 0;
        local_1d9 = 0;
        bVar1 = false;
        if ((local_1ba & 1) == 0) {
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_1c9 = 1;
          local_1c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = true;
          if (dVar10 <= dVar2) {
            uVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            local_1d9 = 1;
            local_1d8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar10 = ABS(dVar10 - local_150);
            bVar1 = 0.5 < dVar10;
          }
        }
        if ((local_1d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1d8);
        }
        if ((local_1c9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c8);
        }
        if (bVar1) {
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          dVar10 = local_150;
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
      }
      _memset(auStack_228,0,0x40);
      uVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_3c8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3c8 != 0) {
        lVar8 = *local_218;
        local_3d0 = 0;
        do {
          do {
            if (*local_218 - lVar8 != 0) {
              _objc_enumerationMutation(*local_218 - lVar8,uVar4);
            }
            local_1e8 = *(ulong *)(local_220 + local_3d0 * 8);
            if (local_1e8 - local_1b8 != 0) {
              FUN_001ef4e0(local_1e8 - local_1b8,local_1e8);
            }
            local_3ec = 0;
            if ((local_1ba & 1) == 0) {
              uVar9 = local_1e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_3ec = (uint)uVar7;
              (*(code *)PTR__objc_release_02578630)(uVar9);
            }
            if (((local_3ec & 1) != 0) &&
               ((uVar9 = local_1e8,
                (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_isHidden_026ca768),
                (uVar9 & 1) == 0 ||
                ((*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_alpha_026ca4d8),
                dVar2 < dVar10)))) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setHidden__026ca970,1);
              dVar10 = 0.0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setAlpha__026ca860);
            }
            local_3d0 = local_3d0 + 1;
          } while (local_3d0 < local_3c8);
          local_3c8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                     0x10);
          local_3d0 = 0;
        } while (local_3c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_134 = 0;
    }
    else {
      FUN_001edf0c(local_130,0);
      local_134 = 1;
    }
    _objc_storeStrong(&local_1b8,0);
  }
  else {
    uVar3 = (uint)local_168;
    FUN_001ee184();
    if ((uVar3 & 1) == 0) goto LAB_001ed1a4;
    FUN_001edf0c(local_130,0);
    local_134 = 1;
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
LAB_001edba0:
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

