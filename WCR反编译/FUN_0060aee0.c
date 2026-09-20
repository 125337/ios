// FUN_0060aee0 @ 0060aee0

void FUN_0060aee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_328;
  ulong local_320;
  ulong local_268;
  ulong local_260;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  ulong local_1d0;
  undefined1 local_1c1;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  ulong local_160 [3];
  undefined4 local_144;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  if (local_140 == 0) {
    local_144 = 1;
  }
  else {
    uVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar4 != 0) {
      uVar4 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_160[0] = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_160[0] != 0) {
        _memset(auStack_1a8,0,0x40);
        uVar4 = local_160[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_260 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        if (local_260 != 0) {
          lVar7 = *local_198;
          local_268 = 0;
          do {
            do {
              if (*local_198 - lVar7 != 0) {
                _objc_enumerationMutation(*local_198 - lVar7,uVar4);
              }
              lVar8 = *(long *)(local_1a0 + local_268 * 8);
              local_168 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_customView_0269ea28);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (lVar8 != 0) {
                lVar8 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_customView_0269ea28);
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = lVar6;
                (*(code *)PTR__objc_release_02578630)(lVar8);
                if (local_1b0 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setHidden__026ca970,1);
                  FUN_0060cb94(local_1b0);
                }
                _objc_storeStrong(&local_1b0,0);
              }
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            local_268 = 0;
          } while (local_260 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_1c1 = 0;
      bVar3 = false;
      uVar1 = local_1b8 != 0;
      if ((bool)uVar1) {
        uVar4 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_customView_0269ea28);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = uVar4 != 0;
        local_1c1 = uVar1;
        local_1c0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar1 = local_1c1;
      }
      local_1c1 = uVar1;
      if (bVar3) {
        uVar4 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_customView_0269ea28);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (local_1d0 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setHidden__026ca970,1);
          FUN_0060cb94(local_1d0);
        }
        _objc_storeStrong(&local_1d0,0);
      }
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(local_160,0);
    }
    _memset(auStack_218,0,0x40);
    uVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_320 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_320 != 0) {
      lVar7 = *local_208;
      local_328 = 0;
      do {
        do {
          if (*local_208 - lVar7 != 0) {
            _objc_enumerationMutation(*local_208 - lVar7,uVar4);
          }
          local_1d8 = *(undefined8 *)(local_210 + local_328 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_hideAvatarInBarButtons__026a5e80,local_1d8);
          local_328 = local_328 + 1;
        } while (local_328 < local_320);
        local_320 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                   0x10);
        local_328 = 0;
      } while (local_320 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_130;
    if (uVar4 != 0) {
      uVar4 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hideAvatarInBarButtons__026a5e80);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_144 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

