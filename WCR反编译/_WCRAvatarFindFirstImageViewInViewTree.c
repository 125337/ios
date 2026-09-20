// _WCRAvatarFindFirstImageViewInViewTree @ 00938c00

void _WCRAvatarFindFirstImageViewInViewTree(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  local_c0 = param_2;
  if ((local_b8 == 0) || (param_2 < 0)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = local_b8;
    if ((uVar2 & 1) == 0) {
      if (local_c0 == 0) {
        local_b0 = 0;
        local_c4 = 1;
      }
      else {
        _memset(auStack_110,0,0x40);
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_158 != 0) {
          lVar3 = *local_100;
          local_160 = 0;
          do {
            do {
              if (*local_100 - lVar3 != 0) {
                _objc_enumerationMutation(*local_100 - lVar3,uVar2);
              }
              uVar4 = *(ulong *)(local_108 + local_160 * 8);
              local_d0 = uVar4;
              _WCRAvatarFindFirstImageViewInViewTree(uVar4,local_c0 + -1);
              _objc_retainAutoreleasedReturnValue();
              local_118 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar4;
              }
              local_c4 = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_118,0);
              if (local_c4 != 0) goto LAB_00938e98;
              local_160 = local_160 + 1;
            } while (local_160 < local_158);
            local_158 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                       0x10);
            local_160 = 0;
          } while (local_158 != 0);
        }
        local_c4 = 0;
LAB_00938e98:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_c4 == 0) {
          local_b0 = 0;
          local_c4 = 1;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar4;
      local_c4 = 1;
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

