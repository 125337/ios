// FUN_0009f3b8 @ 0009f3b8

void FUN_0009f3b8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_280;
  ulong local_278;
  ulong local_210;
  ulong local_208;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  uint local_13c;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  if (local_138 == 0) {
    local_130 = 0;
    local_13c = 1;
  }
  else {
    _memset(auStack_188,0,0x40);
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_208 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_208 != 0) {
      lVar3 = *local_178;
      local_210 = 0;
      do {
        do {
          if (*local_178 - lVar3 != 0) {
            _objc_enumerationMutation(*local_178 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_180 + local_210 * 8);
          local_148 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tag_026cab98);
          uVar5 = local_148;
          if (uVar4 != 0x24f6e4) {
            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar4 = local_148;
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar4;
              local_13c = 1;
              goto LAB_0009f648;
            }
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10
                  );
        local_210 = 0;
      } while (local_208 != 0);
    }
    local_13c = 0;
LAB_0009f648:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_13c == 0) {
      _memset(auStack_1e0,0,0x40);
      uVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_278 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_278 != 0) {
        lVar3 = *local_1d0;
        local_280 = 0;
        do {
          do {
            if (*local_1d0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1d0 - lVar3,uVar1);
            }
            uVar5 = *(ulong *)(local_1d8 + local_280 * 8);
            local_1a0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tag_026cab98);
            if (uVar5 - 0x24f6e4 != 0) {
              uVar4 = local_1a0;
              _WCRAvatarFindFirstImageViewInViewTree(uVar5 - 0x24f6e4,local_1a0,2);
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = uVar4;
              }
              local_13c = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_1e8,0);
              if (local_13c != 0) goto LAB_0009f890;
            }
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                     0x10);
          local_280 = 0;
        } while (local_278 != 0);
      }
      local_13c = 0;
LAB_0009f890:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_13c == 0) {
        local_130 = 0;
        local_13c = 1;
      }
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

