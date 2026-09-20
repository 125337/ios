// FUN_0075d230 @ 0075d230

void FUN_0075d230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  long local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  DAT_028cc878 = DAT_028cc878 + 1;
  local_c0 = DAT_028cc878;
  local_b8 = param_2;
  if (DAT_028cc858 != (code *)0x0) {
    (*DAT_028cc858)(local_b0,param_2);
  }
  uVar2 = local_b0;
  if (((DAT_028cc880 & 1) == 0) && (local_c0 == 1)) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      DAT_028cc880 = 1;
      _memset(auStack_108,0,0x40);
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_140 != 0) {
        lVar4 = *local_f8;
        local_148 = 0;
        do {
          do {
            if (*local_f8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_100 + local_148 * 8);
            puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
            local_c8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((uVar5 & 1) != 0) && (uVar5 = local_c8, FUN_00760f58(), (uVar5 & 1) != 0)) {
              FUN_0075f4f8(local_c8);
            }
            uVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if ((uVar3 & 1) != 0) {
              FUN_00765798(local_c8);
            }
            local_148 = local_148 + 1;
          } while (local_148 < local_140);
          local_140 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_148 = 0;
        } while (local_140 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      DAT_028cc880 = 0;
    }
  }
  DAT_028cc878 = DAT_028cc878 + -1;
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

