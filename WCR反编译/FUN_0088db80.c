// FUN_0088db80 @ 0088db80

byte FUN_0088db80(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1d8;
  ulong local_1d0;
  uint local_164;
  ulong local_150 [2];
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  uint local_bc;
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
    goto LAB_0088e2d8;
  }
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  while( true ) {
    uVar2 = local_c8;
    local_164 = 0;
    if (local_c8 != 0) {
      puVar3 = PTR__OBJC_CLASS___UITabBar_026ce260;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_164 = (uint)uVar2 ^ 1;
    }
    uVar2 = local_c8;
    if ((local_164 & 1) == 0) break;
    uVar6 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c8;
    local_c8 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_c8 == 0) {
LAB_0088e044:
    local_bc = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UITabBar_026ce260;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar6 = local_c8;
    if ((uVar2 & 1) == 0) goto LAB_0088e044;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0[0] = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = -1;
    local_f8 = 0;
    local_e8 = uVar6;
    _memset(auStack_140,0,0x40);
    uVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1d0 != 0) {
      lVar5 = *local_130;
      local_1d8 = 0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_138 + local_1d8 * 8);
          pcVar4 = "MMTabBarItemView";
          local_100 = uVar6;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar4);
          if ((uVar6 & 1) != 0) {
            if (local_100 == local_b8) {
              local_f0 = local_f8;
              local_bc = 5;
              goto LAB_0088dfb4;
            }
            local_f8 = local_f8 + 1;
          }
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1d8 = 0;
      } while (local_1d0 != 0);
    }
    local_bc = 0;
LAB_0088dfb4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    lVar5 = local_f0 + -2;
    bVar1 = lVar5 == 0;
    if (bVar1) {
      lVar5 = 1;
      local_a9 = 1;
    }
    local_bc = (uint)bVar1;
    _objc_storeStrong(lVar5,&local_e8);
    _objc_storeStrong(local_e0,0);
    if (local_bc == 0) goto LAB_0088e044;
  }
  _objc_storeStrong(&local_c8,0);
  if (local_bc == 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_item_026a1890);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_item_026a1890);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_150[0] = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_150[0] == 0) ||
         ((uVar2 = local_150[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_isEqualToString__0269ccc8,&cf_Ss)
          , (uVar2 & 1) == 0 &&
          (uVar2 = local_150[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150[0],PTR_s_isEqualToString__0269ccc8,&cf_Discover), (uVar2 & 1) == 0)))
         ) {
        local_bc = 0;
      }
      else {
        local_a9 = 1;
        local_bc = 1;
      }
      _objc_storeStrong(local_150,0);
      if (local_bc != 0) goto LAB_0088e2d8;
    }
    local_a9 = 0;
    local_bc = 1;
  }
LAB_0088e2d8:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

