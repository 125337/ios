// FUN_004e67b4 @ 004e67b4

byte FUN_004e67b4(undefined8 param_1,ulong param_2,ulong *param_3,ulong *param_4,undefined1 *param_5
                 )

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  int local_e8;
  undefined1 *local_d8;
  ulong *local_d0;
  ulong *local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_d8 = param_5;
  local_d0 = param_4;
  local_c8 = param_3;
  local_c0 = param_2;
  if (((local_b8 == 0) || (param_2 == 0)) ||
     (uVar1 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_operationMenuItems_026a1618),
     (uVar1 & 1) == 0)) {
    local_a9 = 0;
    local_e8 = 1;
  }
  else {
    uVar5 = local_b8;
    FUN_004e3288(local_b8,PTR_s_operationMenuItems_026a1618);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f0 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_f0;
    if ((uVar5 & 1) == 0) {
      local_a9 = 0;
      local_e8 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = uVar1;
      if (local_d8 != (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
        *local_d8 = uVar1 != 0;
      }
      _memset(auStack_140,0,0x40);
      uVar1 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_1d0 != 0) {
        lVar4 = *local_130;
        local_1d8 = 0;
        do {
          do {
            if (*local_130 - lVar4 != 0) {
              _objc_enumerationMutation(*local_130 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_138 + local_1d8 * 8);
            local_148 = 0;
            local_100 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_action_026a4358);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_action_026a4358);
              local_148 = uVar5;
            }
            if (local_148 == local_c0) {
              local_150 = 0;
              uVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_target_026a0dc8);
              if ((uVar5 & 1) != 0) {
                uVar3 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_target_026a0dc8);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_150;
                local_150 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              if (local_150 == 0) {
                _objc_storeStrong(&local_150,local_b8);
              }
              uVar3 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_respondsToSelector__026ca818,local_c0);
              uVar5 = local_150;
              if ((uVar3 & 1) == 0) {
                local_e8 = 3;
              }
              else {
                if (local_c8 != (ulong *)0x0) {
                  _objc_retainAutorelease();
                  *local_c8 = uVar5;
                }
                uVar5 = local_100;
                if (local_d0 != (ulong *)0x0) {
                  _objc_retainAutorelease();
                  *local_d0 = uVar5;
                }
                local_a9 = 1;
                local_e8 = 1;
              }
              _objc_storeStrong(&local_150,0);
              if (local_e8 != 3) goto LAB_004e6d38;
            }
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1d8 = 0;
        } while (local_1d0 != 0);
      }
      local_e8 = 0;
LAB_004e6d38:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_e8 == 0) {
        local_a9 = 0;
        local_e8 = 1;
      }
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

