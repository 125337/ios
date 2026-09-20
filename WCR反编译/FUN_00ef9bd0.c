// FUN_00ef9bd0 @ 00ef9bd0

byte FUN_00ef9bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_318;
  undefined *local_310;
  ulong local_2d8;
  ulong local_2d0;
  ulong local_250;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined **local_160;
  undefined *local_158;
  int local_14c;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  uVar5 = local_138;
  FUN_00effae8(local_138,local_140);
  _objc_retainAutoreleasedReturnValue();
  local_250 = uVar5;
  if (uVar5 == 0) {
    local_250 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_250;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if (local_148 == 0) {
    local_129 = 0;
    local_14c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &local_188;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_00effc54;
    local_170 = &DAT_02582158;
    local_158 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar1;
    _objc_retainBlock();
    local_160 = ppuVar2;
    (*(code *)ppuVar2[2])(ppuVar2,local_148);
    (*(code *)local_160[2])(local_160,local_140);
    ppuVar2 = local_160;
    uVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    ppuVar2 = local_160;
    uVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _memset(auStack_1d0,0,0x40);
    uVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 != 0) {
      lVar4 = *local_1c0;
      local_2d8 = 0;
      do {
        do {
          if (*local_1c0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar4,uVar5);
          }
          local_190 = *(undefined8 *)(local_1c8 + local_2d8 * 8);
          (*(code *)local_160[2])(local_160,local_190);
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_1d8 = PTR_s_onOpenNavLeftMiniTask_026ab9b8;
    local_1e0 = PTR_s_openMiniTaskViewController__026ab9c0;
    _memset(auStack_228,0,0x40);
    puVar1 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_310 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10);
    if (local_310 != (undefined *)0x0) {
      lVar4 = *local_218;
      local_318 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar4 != 0) {
            _objc_enumerationMutation(*local_218 - lVar4,puVar1);
          }
          uVar5 = *(ulong *)(local_220 + (long)local_318 * 8);
          local_1e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_respondsToSelector__026ca818,local_1d8);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,local_1d8);
            local_129 = 1;
            local_14c = 1;
            goto LAB_00efa188;
          }
          uVar5 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_respondsToSelector__026ca818,local_1e0);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,local_1e0,1);
            local_129 = 1;
            local_14c = 1;
            goto LAB_00efa188;
          }
          local_318 = local_318 + 1;
        } while (local_318 < local_310);
        local_310 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                   0x10);
        local_318 = (undefined *)0x0;
      } while (local_310 != (undefined *)0x0);
    }
    local_14c = 0;
LAB_00efa188:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_14c == 0) {
      uVar5 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      local_230 = uVar5;
      while (local_230 != 0) {
        uVar5 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,PTR_s_respondsToSelector__026ca818,local_1d8);
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_230,local_1d8);
          local_129 = 1;
          goto LAB_00efa2d8;
        }
        uVar5 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,PTR_s_respondsToSelector__026ca818,local_1e0);
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_230,local_1e0,1);
          local_129 = 1;
          goto LAB_00efa2d8;
        }
        uVar3 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_230;
        local_230 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      local_129 = 0;
LAB_00efa2d8:
      local_14c = 1;
      _objc_storeStrong(&local_230,0);
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

