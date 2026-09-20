// FUN_0158ae74 @ 0158ae74

void FUN_0158ae74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *local_190;
  ulong local_168;
  ulong local_160;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  int local_c4;
  cfstringStruct *local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_3);
  if ((local_b0 == 0) ||
     (lVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_c4 = 1;
  }
  else {
    uVar1 = local_b0;
    _objc_getAssociatedObject(local_b0,DAT_028c5e80);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar1;
    if (uVar1 == 0) {
      local_c4 = 1;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_160 != 0) {
        lVar2 = *local_108;
        local_168 = 0;
        do {
          do {
            if (*local_108 - lVar2 != 0) {
              _objc_enumerationMutation(*local_108 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_110 + local_168 * 8);
            local_d8 = uVar3;
            _objc_getAssociatedObject(uVar3,DAT_028c5fe0);
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_b8);
            if ((uVar3 & 1) == 0) {
              local_c4 = 3;
            }
            else {
              uVar3 = local_d8;
              _objc_getAssociatedObject(local_d8,DAT_028c5fe8);
              _objc_retainAutoreleasedReturnValue();
              local_128 = uVar3;
              if (uVar3 != 0) {
                if (local_c0 == (cfstringStruct *)0x0) {
                  local_190 = &cf___;
                }
                else {
                  local_190 = local_c0;
                }
                (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setText__026caa88,local_190);
              }
              local_c4 = 1;
              _objc_storeStrong(&local_128,0);
            }
            _objc_storeStrong(&local_120,0);
            if (local_c4 != 3) goto LAB_0158b160;
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_168 = 0;
        } while (local_160 != 0);
      }
      local_c4 = 0;
LAB_0158b160:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) {
        local_c4 = 0;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

