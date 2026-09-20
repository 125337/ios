// FUN_00220b04 @ 00220b04

byte FUN_00220b04(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar5 = local_b8;
  local_c0 = param_2;
  FUN_002208f8();
  uVar3 = local_b8;
  if ((uVar5 & 1) == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_00221028();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_b8;
      if ((uVar5 & 1) == 0) {
        local_d9 = 0;
        puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = false;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          bVar1 = uVar3 != 0;
          local_d8 = uVar3;
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if (bVar1) {
          local_a9 = 1;
          local_d0 = 1;
        }
        else if (local_c0 < 1) {
          local_a9 = 0;
          local_d0 = 1;
        }
        else {
          _memset(auStack_128,0,0x40);
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1b8 != 0) {
            lVar4 = *local_118;
            local_1c0 = 0;
            do {
              do {
                if (*local_118 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_118 - lVar4,uVar3);
                }
                uVar5 = *(ulong *)(local_120 + local_1c0 * 8);
                local_e8 = uVar5;
                FUN_00220b04(uVar5,local_c0 + -1);
                if ((uVar5 & 1) != 0) {
                  local_a9 = 1;
                  local_d0 = 1;
                  goto LAB_00220f88;
                }
                local_1c0 = local_1c0 + 1;
              } while (local_1c0 < local_1b8);
              local_1b8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                         auStack_a8,0x10);
              local_1c0 = 0;
            } while (local_1b8 != 0);
          }
          local_d0 = 0;
LAB_00220f88:
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if (local_d0 == 0) {
            local_a9 = 0;
            local_d0 = 1;
          }
        }
      }
      else {
        local_a9 = 1;
        local_d0 = 1;
      }
    }
    else {
      local_a9 = 1;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

