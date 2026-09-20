// FUN_001ea078 @ 001ea078

void FUN_001ea078(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d8;
  ulong *local_c8;
  ulong *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(puVar1,param_1);
  local_c0 = param_2;
  FUN_001eafac();
  local_c8 = puVar1;
  if ((local_b8 == 0) || (puVar1 == (ulong *)0x0)) {
    local_b0 = 0;
    local_d8 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar4 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_118 + local_170 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_c8);
          uVar3 = local_e0;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_128 = uVar3;
            if (local_c0 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_c0 = uVar3;
            }
            uVar3 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_arrangedSubviews_026a0268);
            _objc_retainAutoreleasedReturnValue();
            local_130 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
            if (uVar3 == 0) {
              uVar3 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if (uVar5 == 0) {
                local_b0 = 0;
              }
              else {
                uVar3 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_b0 = uVar5;
                (*(code *)PTR__objc_release_02578630)(uVar3);
              }
            }
            else {
              uVar3 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = uVar3;
            }
            local_d8 = 1;
            _objc_storeStrong(&local_130);
            _objc_storeStrong(&local_128,0);
            goto LAB_001ea518;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_d8 = 0;
LAB_001ea518:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d8 == 0) {
      local_b0 = 0;
      local_d8 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

