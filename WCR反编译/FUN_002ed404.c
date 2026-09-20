// FUN_002ed404 @ 002ed404

byte FUN_002ed404(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_d8 [3];
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028c99b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 == 0) {
      local_d8[0] = 0;
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_buttonArray_026a1e48);
      if ((uVar1 & 1) != 0) {
        uVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_buttonArray_026a1e48);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_d8[0];
        local_d8[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_d8[0];
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_a9 = 0;
        local_bc = 1;
      }
      else {
        _memset(auStack_128,0,0x40);
        uVar1 = local_d8[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        if (local_1a0 != 0) {
          lVar3 = *local_118;
          local_1a8 = 0;
          do {
            do {
              if (*local_118 - lVar3 != 0) {
                _objc_enumerationMutation(*local_118 - lVar3,uVar1);
              }
              uVar4 = *(ulong *)(local_120 + local_1a8 * 8);
              puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
              local_e8 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar4 & 1) != 0) {
                uVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_accessibilityLabel_0269e1c8);
                _objc_retainAutoreleasedReturnValue();
                local_130 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_isEqualToString__0269ccc8,&cf_lSR_);
                if (((uVar4 & 1) == 0) &&
                   (uVar4 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_130,PTR_s_isEqualToString__0269ccc8,&cf_lS0RR_),
                   (uVar4 & 1) == 0)) {
                  local_bc = 0;
                }
                else {
                  local_a9 = 1;
                  local_bc = 1;
                }
                _objc_storeStrong(&local_130,0);
                if (local_bc != 0) goto LAB_002ed8d4;
              }
              local_1a8 = local_1a8 + 1;
            } while (local_1a8 < local_1a0);
            local_1a0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                       0x10);
            local_1a8 = 0;
          } while (local_1a0 != 0);
        }
        local_bc = 0;
LAB_002ed8d4:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_bc == 0) {
          local_a9 = 0;
          local_bc = 1;
        }
      }
      _objc_storeStrong(local_d8,0);
    }
    else {
      local_a9 = 1;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

