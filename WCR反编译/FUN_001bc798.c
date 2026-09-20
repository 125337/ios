// FUN_001bc798 @ 001bc798

void FUN_001bc798(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_148;
  ulong local_140;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_3;
  local_b0 = param_2;
  (*DAT_028c8b70)(param_2,param_3);
  FUN_001ebe84();
  if ((param_2 & 1) != 0) {
    _memset(auStack_100,0,0x40);
    uVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar4 = *local_f0;
      local_148 = 0;
      do {
        do {
          if (*local_f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_f8 + local_148 * 8);
          local_c0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_118[0] = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_isEqualToString__0269ccc8,&cf_MMMsgContentNavBar);
          if (((uVar5 & 1) != 0) ||
             (uVar5 = local_118[0],
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_118[0],PTR_s_isEqualToString__0269ccc8,&cf_MMNewMsgContentNavBar),
             (uVar5 & 1) != 0)) {
            uVar1 = local_c0;
            FUN_001ec32c();
            uVar6 = param_1;
            FUN_001ec428();
            uVar3 = uVar5;
            FUN_001ec4c4();
            FUN_001ec5a4();
            _objc_retainAutoreleasedReturnValue();
            FUN_001ebf20(param_1,uVar6,uVar1,uVar5 & 0xffffffff,0);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          _objc_storeStrong(local_118,0);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

