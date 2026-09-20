// FUN_0053c368 @ 0053c368

byte FUN_0053c368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  ulong uVar9;
  cfstringStruct *local_248;
  ulong local_1f0;
  ulong local_1e8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  byte local_199;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  ulong local_178;
  undefined1 auStack_170 [8];
  undefined **local_168;
  undefined1 auStack_160 [15];
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_ed;
  ulong local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  if (local_c8 == 0) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    uVar1 = local_c8;
    FUN_00541030();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_c8;
    local_e0 = uVar1;
    FUN_00541844();
    local_ed = (byte)uVar9;
    if ((uVar9 & 1) == 0) {
      _memset(auStack_138,0,0x40);
      uVar1 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_1e8 != 0) {
        lVar8 = *local_128;
        local_1f0 = 0;
        do {
          do {
            if (*local_128 - lVar8 != 0) {
              _objc_enumerationMutation(*local_128 - lVar8,uVar1);
            }
            uVar9 = *(ulong *)(local_130 + local_1f0 * 8);
            local_f8 = uVar9;
            FUN_00541958();
            if ((uVar9 & 1) != 0) {
              local_ed = 1;
              local_d4 = 2;
              goto LAB_0053c5d4;
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1f0 = 0;
        } while (local_1e8 != 0);
      }
      local_d4 = 0;
LAB_0053c5d4:
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_ed & 1) == 0) {
      local_a9 = 0;
      local_d4 = 1;
    }
    else {
      uVar1 = local_e0;
      FUN_00541d00();
      if ((uVar1 & 1) == 0) {
        puVar2 = PTR_WCRefineMomentsDraftManager_026ce740;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_151 = false;
        local_140 = puVar3;
        if ((long)puVar3 < 1) {
          local_248 = &cf_I_z_;
        }
        else {
          local_248 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_I_z_);
          _objc_retainAutoreleasedReturnValue();
          local_150 = local_248;
        }
        local_151 = (long)puVar3 >= 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = local_248;
        if ((local_151 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_150);
        }
        _objc_initWeak(auStack_160,local_b8);
        ppuVar4 = &local_198;
        local_198 = PTR___NSConcreteStackBlock_02578660;
        local_190 = 0xc2000000;
        local_18c = 0;
        local_188 = FUN_00541f78;
        local_180 = &DAT_025797f0;
        _objc_copyWeak(auStack_170,auStack_160);
        uVar1 = local_c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = uVar1;
        _objc_retainBlock();
        local_199 = 0;
        uVar1 = local_c8;
        local_168 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addButtonWithItem_atIndex__026a2168);
        if ((uVar1 & 1) != 0) {
          pcVar5 = &cf_WCActionSheetItem;
          _NSClassFromString();
          local_1a8 = pcVar5;
          if (pcVar5 != (cfstringStruct *)0x0) {
            local_1b0 = (cfstringStruct *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_instancesRespondToSelector__0269da90,
                       PTR_s_initWithTitle__0269d2f8);
            if (((ulong)pcVar5 & 1) == 0) {
              pcVar7 = local_1a8;
              _objc_alloc_init();
              pcVar5 = local_1b0;
              local_1b0 = pcVar7;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
              if (((ulong)pcVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setTitle__0269cef0,local_148);
              }
            }
            else {
              pcVar7 = local_1a8;
              _objc_alloc();
              pcVar6 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_initWithTitle__0269d2f8,local_148);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = local_1b0;
              local_1b0 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar7);
            }
            if ((local_1b0 != (cfstringStruct *)0x0) &&
               (pcVar7 = local_1b0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1b0,PTR_s_respondsToSelector__026ca818,
                          PTR_s_setEventAction__026a0d80), pcVar5 = local_1b0,
               puVar2 = PTR_s_setEventAction__026a0d80, ((ulong)pcVar7 & 1) != 0)) {
              ppuVar4 = local_168;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar2);
              (*(code *)PTR__objc_release_02578630)(ppuVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_addButtonWithItem_atIndex__026a2168,local_1b0,0);
              local_199 = 1;
            }
            _objc_storeStrong(&local_1b0,0);
          }
        }
        if (((local_199 & 1) == 0) &&
           (uVar9 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,
                      PTR_s_addButtonWithTitle_eventAction__026a0f60), uVar1 = local_c8,
           pcVar5 = local_148, puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60,
           (uVar9 & 1) != 0)) {
          ppuVar4 = local_168;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,puVar2,pcVar5);
          (*(code *)PTR__objc_release_02578630)(ppuVar4);
          local_199 = 1;
        }
        local_a9 = local_199 & 1;
        local_d4 = 1;
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_178,0);
        _objc_destroyWeak(auStack_170);
        _objc_destroyWeak(auStack_160);
        _objc_storeStrong(&local_148,0);
      }
      else {
        local_a9 = 0;
        local_d4 = 1;
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

