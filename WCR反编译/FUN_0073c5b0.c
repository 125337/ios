// FUN_0073c5b0 @ 0073c5b0

void FUN_0073c5b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *local_1b0;
  void *local_1a8;
  ulong local_150;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  int local_d8;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_150 = 0;
  }
  else {
    local_150 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  if ((local_150 == 0) ||
     (uVar2 = local_b0,
     (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_canSetSessionPreset__026a7bb8,local_c8),
     (uVar2 & 1) == 0)) {
    pvVar3 = _memset(auStack_128,0,0x40);
    FUN_0073cc20();
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = pvVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != (void *)0x0) {
      lVar4 = *local_118;
      local_1b0 = (void *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,pvVar3);
          }
          local_e8 = *(ulong *)(local_120 + (long)local_1b0 * 8);
          uVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
          if (((uVar2 == 0) ||
              (uVar2 = local_e8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_isEqualToString__0269ccc8,local_c8), (uVar2 & 1) == 0)) &&
             (uVar2 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_canSetSessionPreset__026a7bb8,local_e8), (uVar2 & 1) != 0)) {
            (*DAT_028cc598)(local_b0,local_b8,local_e8);
            local_d8 = 1;
            goto LAB_0073cb70;
          }
          local_1b0 = (void *)((long)local_1b0 + 1);
        } while (local_1b0 < local_1a8);
        local_1a8 = pvVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1b0 = (void *)0x0;
      } while (local_1a8 != (void *)0x0);
    }
    local_d8 = 0;
LAB_0073cb70:
    (*(code *)PTR__objc_release_02578630)(pvVar3);
    if (local_d8 == 0) {
      local_d8 = 0;
    }
  }
  else {
    (*DAT_028cc598)(local_b0,local_b8,local_c0);
    local_d8 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

