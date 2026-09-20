// FUN_007996bc @ 007996bc

byte FUN_007996bc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_3f0;
  ulong local_3e8;
  ulong local_398;
  ulong local_390;
  ulong local_350;
  ulong local_348;
  uint local_2f4;
  ulong local_2f0;
  byte local_2e1;
  ulong local_2e0;
  byte local_2d1;
  ulong local_2d0;
  byte local_2c1;
  ulong local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  ulong local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  cfstringStruct *local_1e0;
  int local_1d8;
  byte local_1d1;
  ulong local_1d0;
  ulong local_1b8;
  byte local_1a9;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  local_1d1 = 0;
  local_2f4 = 1;
  if (local_1b8 != 0) {
    uVar7 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_1d1 = 1;
    local_1d0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_2f4 = (uint)uVar7 ^ 1;
  }
  if ((local_1d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1d0);
  }
  if ((local_2f4 & 1) != 0) {
    local_1a9 = 0;
    local_1d8 = 1;
    goto LAB_0079a21c;
  }
  pcVar2 = &cf_MFBannerBtn;
  _NSClassFromString();
  local_1e0 = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    _memset(auStack_228,0,0x40);
    uVar7 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar7);
    local_348 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_348 != 0) {
      lVar6 = *local_218;
      local_350 = 0;
      do {
        do {
          if (*local_218 - lVar6 != 0) {
            _objc_enumerationMutation(*local_218 - lVar6,uVar3);
          }
          uVar7 = *(ulong *)(local_220 + local_350 * 8);
          local_1e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_1e0);
          if ((uVar7 & 1) != 0) {
            local_1a9 = 1;
            local_1d8 = 1;
            goto LAB_00799c3c;
          }
          _memset(auStack_270,0,0x40);
          uVar7 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_390 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_390 != 0) {
            lVar8 = *local_260;
            local_398 = 0;
            do {
              do {
                if (*local_260 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_260 - lVar8,uVar7);
                }
                uVar9 = *(ulong *)(local_268 + local_398 * 8);
                local_230 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,local_1e0)
                ;
                if ((uVar9 & 1) != 0) {
                  local_1a9 = 1;
                  local_1d8 = 1;
                  goto LAB_00799ba8;
                }
                local_398 = local_398 + 1;
              } while (local_398 < local_390);
              local_390 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                         auStack_128,0x10);
              local_398 = 0;
            } while (local_390 != 0);
          }
          local_1d8 = 0;
LAB_00799ba8:
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if (local_1d8 != 0) goto LAB_00799c3c;
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10
                  );
        local_350 = 0;
      } while (local_348 != 0);
    }
    local_1d8 = 0;
LAB_00799c3c:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_1d8 != 0) goto LAB_0079a21c;
  }
  _memset(auStack_2b8,0,0x40);
  uVar7 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_3e8 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_3e8 != 0) {
    lVar6 = *local_2a8;
    local_3f0 = 0;
    do {
      do {
        if (*local_2a8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2a8 - lVar6,uVar7);
        }
        uVar10 = *(ulong *)(local_2b0 + local_3f0 * 8);
        local_2c1 = 0;
        local_2d1 = 0;
        local_2e1 = 0;
        uVar9 = local_1b8;
        local_278 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_278;
        bVar1 = true;
        if (uVar10 != uVar9) {
          uVar4 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_selectedBackgroundView_0269e620);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = local_278;
          local_2c1 = 1;
          bVar1 = true;
          local_2c0 = uVar4;
          if (uVar3 != uVar4) {
            uVar4 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_backgroundView_026a0320);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_278;
            local_2d1 = 1;
            bVar1 = true;
            local_2d0 = uVar4;
            if (uVar10 != uVar4) {
              uVar10 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_multipleSelectionBackgroundView_026a2010);
              _objc_retainAutoreleasedReturnValue();
              local_2e1 = 1;
              bVar1 = uVar3 == uVar10;
              local_2e0 = uVar10;
            }
          }
        }
        if ((local_2e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2e0);
        }
        if ((local_2d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2d0);
        }
        if ((local_2c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_2c0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar9);
        uVar3 = local_278;
        if (!bVar1) {
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isMemberOfClass__026a2030,puVar5);
          if ((uVar3 & 1) != 0) {
            local_1a9 = 1;
            local_1d8 = 1;
            goto LAB_0079a0f0;
          }
        }
        local_3f0 = local_3f0 + 1;
      } while (local_3f0 < local_3e8);
      local_3e8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10)
      ;
      local_3f0 = 0;
    } while (local_3e8 != 0);
  }
  local_1d8 = 0;
LAB_0079a0f0:
  (*(code *)PTR__objc_release_02578630)(uVar7);
  if (local_1d8 != 0) goto LAB_0079a21c;
  uVar7 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  local_2f0 = uVar7;
  if (uVar7 == 0) {
LAB_0079a1f0:
    local_1a9 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isMemberOfClass__026a2030,puVar5);
    if ((uVar7 & 1) == 0) goto LAB_0079a1f0;
    local_1a9 = 1;
  }
  local_1d8 = 1;
  _objc_storeStrong(&local_2f0,0);
LAB_0079a21c:
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

