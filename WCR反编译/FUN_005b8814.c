// FUN_005b8814 @ 005b8814

void FUN_005b8814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  int local_c4;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_c0;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,&cf_Rd);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,&cf_Rddky),
         (uVar2 & 1) == 0)) {
        local_c4 = 0;
      }
      else {
        uVar2 = local_e0[0];
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_023241f8,DAT_023241f0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTitleColor_forState__026caac0,puVar1,0)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_c4 = 1;
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(local_e0,0);
      if (local_c4 != 0) goto LAB_005b8d34;
    }
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_subviews_026cab40);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_performSelector__026ca7b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar2;
      _memset(auStack_138,0,0x40);
      uVar2 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_1c8 != 0) {
        lVar4 = *local_128;
        local_1d0 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar2);
            }
            local_f8 = *(undefined8 *)(local_130 + local_1d0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_WCRefine_traverseViewsAndSetDele_026a58a0,local_f8);
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d0 = 0;
        } while (local_1c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_f0,0);
    }
    local_c4 = 0;
  }
LAB_005b8d34:
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

