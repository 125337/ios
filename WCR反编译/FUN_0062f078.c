// FUN_0062f078 @ 0062f078

void FUN_0062f078(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  ulong local_3f8;
  ulong local_3f0;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168 [3];
  uint local_14c;
  ulong local_148;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar3 = local_148;
  if (local_148 == 0) {
    local_130 = 0;
    local_14c = 1;
    goto LAB_0062fc74;
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_148;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_148;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar3 = local_138;
      if (uVar4 != 0) {
        uVar4 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_findMsgViewControllerFromViewCon_026a5dc0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar3 = local_1e0;
        bVar1 = local_1e0 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = uVar3;
        }
        local_14c = (uint)bVar1;
        _objc_storeStrong(&local_1e0,0);
        if (local_14c != 0) goto LAB_0062fc74;
      }
      uVar3 = local_148;
      if (DAT_028cba30 == (char *)0x0) {
        pcVar5 = "BaseMsgContentViewController";
        _objc_getClass();
        DAT_028cba30 = pcVar5;
      }
      pcVar5 = DAT_028cba30;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar5);
      uVar4 = local_148;
      if ((uVar3 & 1) == 0) {
        _memset(auStack_228,0,0x40);
        uVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_childViewControllers_0269d618);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_3f0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                   0x10);
        if (local_3f0 != 0) {
          lVar6 = *local_218;
          local_3f8 = 0;
          do {
            do {
              if (*local_218 - lVar6 != 0) {
                _objc_enumerationMutation(*local_218 - lVar6,uVar4);
              }
              local_1e8 = *(undefined8 *)(local_220 + local_3f8 * 8);
              uVar3 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_findMsgViewControllerFromViewCon_026a5dc0,local_1e8);
              _objc_retainAutoreleasedReturnValue();
              local_230 = uVar3;
              if (uVar3 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = uVar3;
              }
              local_14c = (uint)(uVar3 != 0);
              _objc_storeStrong(&local_230,0);
              if (local_14c != 0) goto LAB_0062fc44;
              local_3f8 = local_3f8 + 1;
            } while (local_3f8 < local_3f0);
            local_3f0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128
                       ,0x10);
            local_3f8 = 0;
          } while (local_3f0 != 0);
        }
        local_14c = 0;
LAB_0062fc44:
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (local_14c == 0) {
          local_130 = 0;
          local_14c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = uVar4;
        local_14c = 1;
      }
      goto LAB_0062fc74;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar4 = local_138;
    if (uVar3 == 0) {
LAB_0062f724:
      uVar3 = local_138;
      uVar4 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_findMsgViewControllerFromViewCon_026a5dc0);
      _objc_retainAutoreleasedReturnValue();
      local_130 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_14c = 1;
    }
    else {
      uVar3 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_findMsgViewControllerFromViewCon_026a5dc0);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_1d8;
      bVar1 = local_1d8 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = uVar3;
      }
      local_14c = (uint)bVar1;
      _objc_storeStrong(&local_1d8,0);
      if (local_14c == 0) goto LAB_0062f724;
    }
    _objc_storeStrong(&local_1d0,0);
    goto LAB_0062fc74;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar3 = local_138;
  if (uVar4 == 0) {
LAB_0062f2ac:
    uVar3 = local_168[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar3;
    _memset(auStack_1c0,0,0x40);
    uVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_reverseObjectEnumerator_0269d220);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b0 != 0) {
      lVar6 = *local_1b0;
      local_2b8 = 0;
      do {
        do {
          if (*local_1b0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar6,uVar3);
          }
          local_180 = *(undefined8 *)(local_1b8 + local_2b8 * 8);
          uVar4 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_findMsgViewControllerFromViewCon_026a5dc0,local_180);
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = uVar4;
          if (uVar4 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar4;
          }
          local_14c = (uint)(uVar4 != 0);
          _objc_storeStrong(&local_1c8,0);
          if (local_14c != 0) goto LAB_0062f4e8;
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    local_14c = 0;
LAB_0062f4e8:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_14c == 0) {
      local_130 = 0;
      local_14c = 1;
    }
    _objc_storeStrong(&local_178,0);
  }
  else {
    uVar4 = local_168[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_findMsgViewControllerFromViewCon_026a5dc0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_170;
    bVar1 = local_170 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = uVar3;
    }
    local_14c = (uint)bVar1;
    _objc_storeStrong(&local_170,0);
    if (local_14c == 0) goto LAB_0062f2ac;
  }
  _objc_storeStrong(local_168,0);
LAB_0062fc74:
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

