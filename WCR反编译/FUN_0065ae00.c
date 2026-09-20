// FUN_0065ae00 @ 0065ae00

void FUN_0065ae00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_160;
  ulong local_158;
  long local_130;
  undefined4 local_124;
  long local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = param_1;
  _memset(auStack_108,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar4 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar1);
        }
        lVar5 = *(long *)(local_100 + local_160 * 8);
        local_c8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_key)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_120[0] = lVar5;
        if (lVar5 == 0) {
LAB_0065afb0:
          local_124 = 3;
        }
        else {
          uVar2 = *(ulong *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,lVar5);
          if ((uVar2 & 1) != 0) goto LAB_0065afb0;
          uVar2 = *(ulong *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_120[0]);
          if ((uVar2 & 1) != 0) goto LAB_0065afb0;
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          lVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_addObject__0269d180,lVar5);
          (*(code *)PTR__objc_release_02578630)(lVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_120[0]);
          lVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = *(long *)(param_1 + 0x38);
          local_130 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          if ((lVar3 != 0) && (local_130 != 0)) {
            FUN_00651de8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),local_130);
          }
          _objc_storeStrong(&local_130,0);
          local_124 = 0;
        }
        _objc_storeStrong(local_120,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

