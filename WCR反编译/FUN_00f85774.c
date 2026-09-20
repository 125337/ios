// FUN_00f85774 @ 00f85774

/* WARNING: Removing unreachable block (ram,0x00f85960) */

void FUN_00f85774(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1c0;
  ulong local_1b8;
  double local_180;
  double local_178;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined4 local_bc;
  double local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = param_1;
  if (local_b0 == 0) {
    local_bc = 1;
  }
  else {
    local_d0 = 0x4059000000000000;
    local_e0 = 0;
    local_178 = param_1;
    if (param_1 <= 0.0) {
      local_178 = 0.0;
    }
    local_f0 = local_178;
    local_d8 = local_178;
    if (local_178 <= 100.0) {
      local_180 = local_178;
    }
    else {
      local_180 = 100.0;
    }
    local_f8 = local_180;
    local_c8 = (local_180 / 100.0) * 56.0;
    local_e8 = param_1;
    if (DAT_02323d38 < param_1) {
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_effect_026a1fb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,0xb);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setEffect__026ca930);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutIfNeeded_026ca790);
      FUN_00f85d44(local_b0);
      local_100 = 0;
      _memset(auStack_148,0,0x40);
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != 0) {
        lVar3 = *local_138;
        local_1c0 = 0;
        do {
          do {
            if (*local_138 - lVar3 != 0) {
              _objc_enumerationMutation(*local_138 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_140 + local_1c0 * 8);
            local_108 = uVar4;
            FUN_00f89e08(uVar4,&cf_Backdrop);
            if ((uVar4 & 1) != 0) {
              _objc_storeStrong(&local_100,local_108);
              local_bc = 2;
              goto LAB_00f85b44;
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1c0 = 0;
        } while (local_1b8 != 0);
      }
      local_bc = 0;
LAB_00f85b44:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_100 == 0) {
        local_bc = 1;
      }
      else {
        uVar1 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        FUN_00f89f40(local_c8);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar4 & 1) == 0) {
          uVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_valueForKey__0269d128,&cf_backdropLayer);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___CALayer_026ce240;
          local_150 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CALayer_026ce240,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar1 & 1) != 0) {
            FUN_00f89f40(local_c8,local_150);
          }
          _objc_storeStrong(&local_150,0);
          local_bc = 0;
        }
        else {
          local_bc = 1;
        }
      }
      _objc_storeStrong(&local_100,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setEffect__026ca930,0);
      FUN_00f85d44(local_b0);
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

