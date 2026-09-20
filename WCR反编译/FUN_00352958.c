// FUN_00352958 @ 00352958

void FUN_00352958(ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_300;
  ulong local_2f8;
  undefined *local_258;
  undefined *local_228;
  undefined *local_220;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  ulong local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  long local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  long local_148;
  char *local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_0034e734();
  _objc_retainAutoreleasedReturnValue();
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allObjects_0269d228);
  _objc_retainAutoreleasedReturnValue();
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    pcVar2 = "NewMainFrameViewController";
    _objc_getClass();
    local_140 = pcVar2;
    _memset(auStack_188,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_220 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
    if (local_220 != (undefined *)0x0) {
      lVar7 = *local_178;
      local_228 = (undefined *)0x0;
      do {
        do {
          if (*local_178 - lVar7 != 0) {
            _objc_enumerationMutation(*local_178 - lVar7,puVar4);
          }
          lVar8 = *(long *)(local_180 + (long)local_228 * 8);
          local_148 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_190 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar3;
          if (local_190 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,local_190);
          }
          while (puVar3 = local_198,
                (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_count_0269cfe0),
                puVar3 != (undefined *)0x0) {
            puVar3 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_removeLastObject_0269e830);
            if ((local_140 != (char *)0x0) &&
               (puVar3 = local_1a0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1a0,PTR_s_isKindOfClass__0269cd68,local_140),
               ((ulong)puVar3 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_1a0);
            }
            puVar3 = local_198;
            puVar5 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_childViewControllers_0269d618);
            _objc_retainAutoreleasedReturnValue();
            local_258 = puVar5;
            if (puVar5 == (undefined *)0x0) {
              local_258 = *(undefined **)PTR____NSArray0___02578280;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_addObjectsFromArray__0269d540,local_258);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar5 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            puVar3 = local_198;
            if (puVar5 != (undefined *)0x0) {
              puVar5 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_presentedViewController_0269d448);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            puVar3 = local_1a0;
            puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            puVar5 = local_1a0;
            if (((ulong)puVar3 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1a8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_viewControllers_0269e348);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              puVar3 = local_198;
              if (puVar6 != (undefined *)0x0) {
                puVar5 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_viewControllers_0269e348);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              _objc_storeStrong(&local_1a8,0);
            }
            puVar3 = local_1a0;
            puVar5 = PTR__OBJC_CLASS___UITabBarController_026ce108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            puVar5 = local_1a0;
            if (((ulong)puVar3 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_viewControllers_0269e348);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              puVar3 = local_198;
              if (puVar6 != (undefined *)0x0) {
                puVar5 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_viewControllers_0269e348);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              _objc_storeStrong(&local_1b0,0);
            }
            _objc_storeStrong(&local_1a0,0);
          }
          _objc_storeStrong(&local_198);
          _objc_storeStrong(&local_190,0);
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                   0x10);
        local_228 = (undefined *)0x0;
      } while (local_220 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar9 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_138;
    local_138 = uVar9;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _memset(auStack_1f8,0,0x40);
  uVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_2f8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10);
  if (local_2f8 != 0) {
    lVar7 = *local_1e8;
    local_300 = 0;
    do {
      do {
        if (*local_1e8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_1e8 - lVar7,uVar1);
        }
        uVar9 = *(ulong *)(local_1f0 + local_300 * 8);
        local_1b8 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_respondsToSelector__026ca818,PTR_s_wcrHomeAvatarStrip_reload_026a23b0
                  );
        if ((uVar9 & 1) != 0) {
          _objc_setAssociatedObject(local_1b8,&DAT_028ca002,0,3);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_wcrHomeAvatarStrip_reload_026a23b0);
        }
        local_300 = local_300 + 1;
      } while (local_300 < local_2f8);
      local_2f8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      local_300 = 0;
    } while (local_2f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

