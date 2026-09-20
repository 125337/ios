// FUN_00506d74 @ 00506d74

void FUN_00506d74(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  uint local_108;
  byte local_101;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_c8;
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0[0] = uVar4;
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_101 = 0;
    uVar4 = local_e0[0];
    local_e8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_tag_026cab98);
    bVar1 = true;
    if (uVar4 != 0x68) {
      uVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsString__0269d0b0,&cf_MMUILabel);
      bVar1 = false;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_e0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        bVar1 = false;
        local_f0 = uVar3;
        if (uVar3 != 0) {
          uVar3 = local_e0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          local_101 = 1;
          local_100 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar3 != 0;
        }
      }
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    uVar3 = local_e0[0];
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
    }
    local_108 = (uint)bVar1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(local_e0,0);
    if (local_108 != 0) goto LAB_0050735c;
  }
  _memset(auStack_150,0,0x40);
  uVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1f0 != 0) {
    lVar5 = *local_140;
    local_1f8 = 0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,uVar3);
        }
        local_110 = *(undefined8 *)(local_148 + local_1f8 * 8);
        uVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_wcrefine_findTitleLabelInView__026a4608,local_110);
        _objc_retainAutoreleasedReturnValue();
        local_158 = uVar4;
        if (uVar4 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar4;
        }
        local_108 = (uint)(uVar4 != 0);
        _objc_storeStrong(&local_158,0);
        if (local_108 != 0) goto LAB_0050732c;
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  local_108 = 0;
LAB_0050732c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_108 == 0) {
    local_b0 = 0;
    local_108 = 1;
  }
LAB_0050735c:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

